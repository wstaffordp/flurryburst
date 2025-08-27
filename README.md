#### FlurryBurst64Low32

FlurryBurst64Low32 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to RXS M, XSH RR, XSH RS and XSL RR variants of PCG32.

It has a period of at least 2⁶⁴.

Seeding `a` with non-overlapping integers, seeding `b` with `0` and seeding `c` with `a + 1` behaves as a jump function with up to 2⁶⁴ parallel instances that each have a non-overlapping period of at least 2⁶⁴. The first several results from each parallel instance should be skipped.

In non-parallel instances, `a` must be assigned a seed and the remaining state must be seeded with `0`.

##### C

`flurryBurst64Low32` generates and returns a pseudorandom `uint32_t` integer, provided the implementation supports a 32-bit, unsigned integral type for `uint32_t` and a 64-bit, unsigned integral type for `uint64_t`.

##### C#

`Next` from `FlurryBurst64Low32` generates and returns a pseudorandom `uint` integer.

---

#### FlurryBurst32

FlurryBurst32 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to RXS M XS variants of PCG32 and Xorshift32.

It has a period of at least 2³⁶.

Seeding `a` with non-overlapping integers, seeding `b` with `0` and seeding `c` with `a + 1` behaves as a jump function with up to 2³² parallel instances that each have a non-overlapping period of at least 2³². The first several results from each parallel instance should be skipped.

In non-parallel instances, `a` must be assigned a seed and the remaining state must be seeded with `0`.

##### C

`flurryBurst32` generates and returns a pseudorandom `uint32_t` integer, provided the implementation supports a 32-bit, unsigned integral type for `uint32_t`.

##### C#

`Next` from `FlurryBurst32` generates and returns a pseudorandom `uint` integer.

---

#### FlurryBurst32Low16

FlurryBurst32Low16 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to RXS M, XSH RR and XSH RS variants of PCG16.

It has a period of at least 2³².

Seeding `a` with non-overlapping integers, seeding `b` with `0` and seeding `c` with `a + 1` behaves as a jump function with up to 2³² parallel instances that each have a non-overlapping period of at least 2³². The first several results from each parallel instance should be skipped.

In non-parallel instances, `a` must be assigned a seed and the remaining state must be seeded with `0`.

##### C

`flurryBurst32Low16` generates and returns a pseudorandom `uint16_t` integer, provided the implementation supports a 16-bit, unsigned integral type for `uint16_t` and a 32-bit, unsigned integral type for `uint32_t`.

##### C#

`Next` from `FlurryBurst32Low16` generates and returns a pseudorandom `ushort` integer.

---

#### FlurryBurst16

FlurryBurst16 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to RXS M XS variants of PCG16 and Xorshift16 "798".

It has a period of at least 2²⁰.

Seeding `a` with non-overlapping integers, seeding `b` with `0` and seeding `c` with `a + 1` behaves as a jump function with up to 2¹⁶ parallel instances that each have a non-overlapping period of at least 2¹⁶. The first several results from each parallel instance should be skipped.

In non-parallel instances, `a` must be assigned a seed and the remaining state must be seeded with `0`.

##### C

`flurryBurst16` generates and returns a pseudorandom `uint16_t` integer, provided the implementation supports a 16-bit, unsigned integral type for `uint16_t`.

##### C#

`Next` from `FlurryBurst16` generates and returns a pseudorandom `ushort` integer.

---

#### FlurryBurst16Low8

FlurryBurst16Low8 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to RXS M, XSH RR and XSH RS variants of PCG8 and Xorshift16 truncated to 8 low bits.

It has a period of at least 2¹⁶.

Seeding `a` with non-overlapping integers, seeding `b` with `0` and seeding `c` with `a + 1` behaves as a jump function with up to 2¹⁶ parallel instances that each have a non-overlapping period of at least 2¹⁶. The first several results from each parallel instance should be skipped.

In non-parallel instances, `a` must be assigned a seed and the remaining state must be seeded with `0`.

##### C

`flurryBurst16Low8` generates and returns a pseudorandom `uint8_t` integer, provided the implementation supports an 8-bit, unsigned integral type for `uint8_t` and a 16-bit, unsigned integral type for `uint16_t`.

##### C#

`Next` from `FlurryBurst16Low8` generates and returns a pseudorandom `byte` integer.

---

#### FlurryBurst8

FlurryBurst8 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to RXS M XS variants of PCG8 and Xorshift8.

It has a period of between 2¹⁴ and 2¹⁵, precisely 18688.

`a` must be seeded with `0` and `b` must be assigned a seed. Incrementing `b` by `2` whenever `a` is `0` behaves as a jump function. Generating 73 subsequent integers after either jumping or seeding the state resets `a` to `0`. 256 repetitions of both generating 73 subsequent integers and jumping generates the same frequency of integers as a full cycle that generates 18688 integers without jumping.

##### C

`flurryBurst8` generates and returns a pseudorandom `uint8_t` integer, provided the implementation supports an 8-bit, unsigned integral type for `uint8_t`.

##### C#

`Next` from `FlurryBurst8` generates and returns a pseudorandom `byte` integer.
