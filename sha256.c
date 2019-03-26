// Author: Keith Higgins, 2019
// Secure Hash algorithem, 256 bit version
// https://ws680.nist.gov/publication/get_pdf.cfm?pub_id=910977

// Input/output header
#include <stdio.h>
// for using fixed-bit length integer
#include <stdint.h>

void sha256();

int main(int argc, char *argv[]){



    return 0;
}

void sha256(){

    // Message schedule (Section 6.2)
    uint32_t w[64];
    // Working variables (Section 6.2)
    uint32_t a, b, c, d, e, f, g, h;
    // The Hash value.
    uint32_t H[8];
    // Two temporary variables (section 6.2)
    uint32_t T1, T2;

    // The Hash value (section 6.2)
    // The values come from Section 5.3.3
    uint32_t H[8] = {
        0x6a09e667
      , 0xbb67ae85
      , 0x3c6ef372
      , 0xa54ff53a
      , 0x510e527f
      , 0x9b05688c
      , 0x1f83d9ab
      , 0x5be0cd19
    };

    // The current message block.
    uint32_t M[16] = 
}