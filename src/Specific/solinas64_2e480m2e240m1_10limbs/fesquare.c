static void fesquare(uint64_t out[10], const uint64_t in1[10]) {
  { const uint64_t x17 = in1[9];
  { const uint64_t x18 = in1[8];
  { const uint64_t x16 = in1[7];
  { const uint64_t x14 = in1[6];
  { const uint64_t x12 = in1[5];
  { const uint64_t x10 = in1[4];
  { const uint64_t x8 = in1[3];
  { const uint64_t x6 = in1[2];
  { const uint64_t x4 = in1[1];
  { const uint64_t x2 = in1[0];
  { uint128_t x19 = (((uint128_t)(x10 + x17) * (x10 + x17)) - ((uint128_t)x10 * x10));
  { uint128_t x20 = ((((uint128_t)(x8 + x18) * (x10 + x17)) + ((uint128_t)(x10 + x17) * (x8 + x18))) - (((uint128_t)x8 * x10) + ((uint128_t)x10 * x8)));
  { uint128_t x21 = ((((uint128_t)(x6 + x16) * (x10 + x17)) + (((uint128_t)(x8 + x18) * (x8 + x18)) + ((uint128_t)(x10 + x17) * (x6 + x16)))) - (((uint128_t)x6 * x10) + (((uint128_t)x8 * x8) + ((uint128_t)x10 * x6))));
  { uint128_t x22 = ((((uint128_t)(x4 + x14) * (x10 + x17)) + (((uint128_t)(x6 + x16) * (x8 + x18)) + (((uint128_t)(x8 + x18) * (x6 + x16)) + ((uint128_t)(x10 + x17) * (x4 + x14))))) - (((uint128_t)x4 * x10) + (((uint128_t)x6 * x8) + (((uint128_t)x8 * x6) + ((uint128_t)x10 * x4)))));
  { uint128_t x23 = ((((uint128_t)(x2 + x12) * (x10 + x17)) + (((uint128_t)(x4 + x14) * (x8 + x18)) + (((uint128_t)(x6 + x16) * (x6 + x16)) + (((uint128_t)(x8 + x18) * (x4 + x14)) + ((uint128_t)(x10 + x17) * (x2 + x12)))))) - (((uint128_t)x2 * x10) + (((uint128_t)x4 * x8) + (((uint128_t)x6 * x6) + (((uint128_t)x8 * x4) + ((uint128_t)x10 * x2))))));
  { uint128_t x24 = ((((uint128_t)(x2 + x12) * (x8 + x18)) + (((uint128_t)(x4 + x14) * (x6 + x16)) + (((uint128_t)(x6 + x16) * (x4 + x14)) + ((uint128_t)(x8 + x18) * (x2 + x12))))) - (((uint128_t)x2 * x8) + (((uint128_t)x4 * x6) + (((uint128_t)x6 * x4) + ((uint128_t)x8 * x2)))));
  { uint128_t x25 = ((((uint128_t)(x2 + x12) * (x6 + x16)) + (((uint128_t)(x4 + x14) * (x4 + x14)) + ((uint128_t)(x6 + x16) * (x2 + x12)))) - (((uint128_t)x2 * x6) + (((uint128_t)x4 * x4) + ((uint128_t)x6 * x2))));
  { uint128_t x26 = ((((uint128_t)(x2 + x12) * (x4 + x14)) + ((uint128_t)(x4 + x14) * (x2 + x12))) - (((uint128_t)x2 * x4) + ((uint128_t)x4 * x2)));
  { uint128_t x27 = (((uint128_t)(x2 + x12) * (x2 + x12)) - ((uint128_t)x2 * x2));
  { uint128_t x28 = (((((uint128_t)x10 * x10) + ((uint128_t)x17 * x17)) + x24) + x19);
  { uint128_t x29 = ((((((uint128_t)x8 * x10) + ((uint128_t)x10 * x8)) + (((uint128_t)x18 * x17) + ((uint128_t)x17 * x18))) + x25) + x20);
  { uint128_t x30 = ((((((uint128_t)x6 * x10) + (((uint128_t)x8 * x8) + ((uint128_t)x10 * x6))) + (((uint128_t)x16 * x17) + (((uint128_t)x18 * x18) + ((uint128_t)x17 * x16)))) + x26) + x21);
  { uint128_t x31 = ((((((uint128_t)x4 * x10) + (((uint128_t)x6 * x8) + (((uint128_t)x8 * x6) + ((uint128_t)x10 * x4)))) + (((uint128_t)x14 * x17) + (((uint128_t)x16 * x18) + (((uint128_t)x18 * x16) + ((uint128_t)x17 * x14))))) + x27) + x22);
  { uint128_t x32 = ((((uint128_t)x2 * x10) + (((uint128_t)x4 * x8) + (((uint128_t)x6 * x6) + (((uint128_t)x8 * x4) + ((uint128_t)x10 * x2))))) + (((uint128_t)x12 * x17) + (((uint128_t)x14 * x18) + (((uint128_t)x16 * x16) + (((uint128_t)x18 * x14) + ((uint128_t)x17 * x12))))));
  { uint128_t x33 = (((((uint128_t)x2 * x8) + (((uint128_t)x4 * x6) + (((uint128_t)x6 * x4) + ((uint128_t)x8 * x2)))) + (((uint128_t)x12 * x18) + (((uint128_t)x14 * x16) + (((uint128_t)x16 * x14) + ((uint128_t)x18 * x12))))) + x19);
  { uint128_t x34 = (((((uint128_t)x2 * x6) + (((uint128_t)x4 * x4) + ((uint128_t)x6 * x2))) + (((uint128_t)x12 * x16) + (((uint128_t)x14 * x14) + ((uint128_t)x16 * x12)))) + x20);
  { uint128_t x35 = (((((uint128_t)x2 * x4) + ((uint128_t)x4 * x2)) + (((uint128_t)x12 * x14) + ((uint128_t)x14 * x12))) + x21);
  { uint128_t x36 = ((((uint128_t)x2 * x2) + ((uint128_t)x12 * x12)) + x22);
  { uint64_t x37 = (uint64_t) (x32 >> 0x30);
  { uint64_t x38 = ((uint64_t)x32 & 0xffffffffffff);
  { uint64_t x39 = (uint64_t) (x23 >> 0x30);
  { uint64_t x40 = ((uint64_t)x23 & 0xffffffffffff);
  { uint128_t x41 = (((uint128_t)0x1000000000000 * x39) + x40);
  { uint64_t x42 = (uint64_t) (x41 >> 0x30);
  { uint64_t x43 = ((uint64_t)x41 & 0xffffffffffff);
  { uint128_t x44 = ((x37 + x31) + x42);
  { uint64_t x45 = (uint64_t) (x44 >> 0x30);
  { uint64_t x46 = ((uint64_t)x44 & 0xffffffffffff);
  { uint128_t x47 = (x36 + x42);
  { uint64_t x48 = (uint64_t) (x47 >> 0x30);
  { uint64_t x49 = ((uint64_t)x47 & 0xffffffffffff);
  { uint128_t x50 = (x45 + x30);
  { uint64_t x51 = (uint64_t) (x50 >> 0x30);
  { uint64_t x52 = ((uint64_t)x50 & 0xffffffffffff);
  { uint128_t x53 = (x48 + x35);
  { uint64_t x54 = (uint64_t) (x53 >> 0x30);
  { uint64_t x55 = ((uint64_t)x53 & 0xffffffffffff);
  { uint128_t x56 = (x51 + x29);
  { uint64_t x57 = (uint64_t) (x56 >> 0x30);
  { uint64_t x58 = ((uint64_t)x56 & 0xffffffffffff);
  { uint128_t x59 = (x54 + x34);
  { uint64_t x60 = (uint64_t) (x59 >> 0x30);
  { uint64_t x61 = ((uint64_t)x59 & 0xffffffffffff);
  { uint128_t x62 = (x57 + x28);
  { uint64_t x63 = (uint64_t) (x62 >> 0x30);
  { uint64_t x64 = ((uint64_t)x62 & 0xffffffffffff);
  { uint128_t x65 = (x60 + x33);
  { uint64_t x66 = (uint64_t) (x65 >> 0x30);
  { uint64_t x67 = ((uint64_t)x65 & 0xffffffffffff);
  { uint64_t x68 = (x63 + x43);
  { uint64_t x69 = (x68 >> 0x30);
  { uint64_t x70 = (x68 & 0xffffffffffff);
  { uint64_t x71 = (x66 + x38);
  { uint64_t x72 = (x71 >> 0x30);
  { uint64_t x73 = (x71 & 0xffffffffffff);
  { uint64_t x74 = ((0x1000000000000 * x69) + x70);
  { uint64_t x75 = (x74 >> 0x30);
  { uint64_t x76 = (x74 & 0xffffffffffff);
  { uint64_t x77 = ((x72 + x46) + x75);
  { uint64_t x78 = (x77 >> 0x30);
  { uint64_t x79 = (x77 & 0xffffffffffff);
  { uint64_t x80 = (x49 + x75);
  { uint64_t x81 = (x80 >> 0x30);
  { uint64_t x82 = (x80 & 0xffffffffffff);
  out[0] = x82;
  out[1] = (x81 + x55);
  out[2] = x61;
  out[3] = x67;
  out[4] = x73;
  out[5] = x79;
  out[6] = (x78 + x52);
  out[7] = x58;
  out[8] = x64;
  out[9] = x76;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
