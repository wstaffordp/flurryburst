using System;

public class FlurryBurst64Low32 {
  public ulong a;
  public ulong b;
  public ulong c;

  public uint Next() {
    ulong mix = a + c;

    a = ((a << 35) | (a >> 29)) ^ b;
    b += 111111111111111111;
    c = (mix << 23) | (mix >> 41);
    return (uint) mix;
  }
}

public class FlurryBurst32 {
  public uint a;
  public uint b;
  public uint c;

  public uint Next() {
    uint mix = a;

    a += ((a << 17) | (a >> 15)) ^ b;
    b += 111111111;
    c += (mix << 13) | (mix >> 19);
    return a ^ c;
  }
}

public class FlurryBurst32Low16 {
  public uint a;
  public uint b;
  public uint c;

  public ushort Next() {
    uint mix = a + c;

    a = ((a << 17) | (a >> 15)) ^ b;
    b += 1111111111;
    c = (mix << 13) | (mix >> 19);
    return (ushort) mix;
  }
}

public class FlurryBurst16 {
  public ushort a;
  public ushort b;
  public ushort c;

  public ushort Next() {
    ushort mix = a;

    a += (ushort) (((a << 9) | (a >> 7)) ^ b);
    b += 11111;
    c += (ushort) ((mix << 6) | (mix >> 10));
    return (ushort) (a ^ c);
  }
}

public class FlurryBurst16Low8 {
  public ushort a;
  public ushort b;
  public ushort c;

  public byte Next() {
    ushort mix = (ushort) (a + c);

    a = (ushort) (((a << 9) | (a >> 7)) ^ b);
    b += 11111;
    c = (ushort) ((mix << 6) | (mix >> 10));
    return (byte) mix;
  }
}

public class FlurryBurst8 {
  public byte a;
  public byte b;

  public byte Next() {
    a = (byte) (((a << 5) | (a >> 3)) + 111);
    b += 11;
    return (byte) (a ^ b);
  }
}
