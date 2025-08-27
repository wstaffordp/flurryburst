#include <stdint.h>

struct flurryBurstState64 {
  uint64_t a;
  uint64_t b;
  uint64_t c;
};

struct flurryBurstState32 {
  uint32_t a;
  uint32_t b;
  uint32_t c;
};

struct flurryBurstState16 {
  uint16_t a;
  uint16_t b;
  uint16_t c;
};

struct flurryBurstState8 {
  uint8_t a;
  uint8_t b;
};

uint32_t flurryBurst64Low32(struct flurryBurstState64 *s) {
  uint64_t mix = s->a + s->c;

  s->a = ((s->a << 35) | (s->a >> 29)) ^ s->b;
  s->b += 111111111111111111;
  s->c = (mix << 23) | (mix >> 41);
  return mix;
}

uint32_t flurryBurst32(struct flurryBurstState32 *s) {
  uint32_t mix = s->a;

  s->a += ((s->a << 17) | (s->a >> 15)) ^ s->b;
  s->b += 111111111;
  s->c += (mix << 13) | (mix >> 19);
  return s->a ^ s->c;
}

uint16_t flurryBurst32Low16(struct flurryBurstState32 *s) {
  uint32_t mix = s->a + s->c;

  s->a = ((s->a << 17) | (s->a >> 15)) ^ s->b;
  s->b += 1111111111;
  s->c = (mix << 13) | (mix >> 19);
  return mix;
}

uint16_t flurryBurst16(struct flurryBurstState16 *s) {
  uint16_t mix = s->a;

  s->a += ((s->a << 9) | (s->a >> 7)) ^ s->b;
  s->b += 11111;
  s->c += (mix << 6) | (mix >> 10);
  return s->a ^ s->c;
}

uint8_t flurryBurst16Low8(struct flurryBurstState16 *s) {
  uint16_t mix = s->a + s->c;

  s->a = ((s->a << 9) | (s->a >> 7)) ^ s->b;
  s->b += 11111;
  s->c = (mix << 6) | (mix >> 10);
  return mix;
}

uint8_t flurryBurst8(struct flurryBurstState8 *s) {
  s->a = ((s->a << 5) | (s->a >> 3)) + 111;
  s->b += 11;
  return s->a ^ s->b;
}
