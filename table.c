enum unicodes_names {
    MY_E_HAT,
    MY_A_HAT,
    MY_E_ACUTE,
    MY_E_GRAVE,
    MY_EURO,
    MY_PI,
    MY_A_GRAVE,
    MY_E_IN_A,
    MY_E_TREMA,
    MY_EPSILON,
    MY_ALPHA,
    MY_A_TREMA,
    MY_LAMBDA,
    MY_C_CEDILLA,
    MY_OMEGA,
    MY_BETA,
    MY_ESZETT,
    MY_Y_HAT,
    MY_U_HAT,
    MY_I_HAT,
    MY_O_HAT,
    MY_GAMMA,
    MY_U_GRAVE,
    MY_I_GRAVE,
    MY_O_GRAVE,
    MY_E_IN_O,
    MY_Y_TREMA,
    MY_U_TREMA,
    MY_I_TREMA,
    MY_O_TREMA,
    MY_PSI,
    MY_THETA,
    MY_MU,
    MY_DELTA,
    MY_SIGMA,
    MY_PHI,
    MY_LEFT_GUILLEMET,
    MY_RIGHT_GUILLEMET,
    MY_C_E_HAT,
    MY_C_A_HAT,
    MY_C_E_ACUTE,
    MY_C_E_GRAVE,
    MY_POUND,
    MY_C_PI,
    MY_C_A_GRAVE,
    MY_C_E_IN_A,
    MY_C_E_TREMA,
    MY_C_EPSILON,
    MY_C_ALPHA,
    MY_C_A_TREMA,
    MY_C_LAMBDA,
    MY_C_C_CEDILLA,
    MY_C_OMEGA,
    MY_C_BETA,
    MY_C_ESZETT,
    MY_C_Y_HAT,
    MY_C_U_HAT,
    MY_C_I_HAT,
    MY_C_O_HAT,
    MY_C_GAMMA,
    MY_C_U_GRAVE,
    MY_C_I_GRAVE,
    MY_C_O_GRAVE,
    MY_C_E_IN_O,
    MY_C_Y_TREMA,
    MY_C_U_TREMA,
    MY_C_I_TREMA,
    MY_C_O_TREMA,
    MY_C_PSI,
    MY_C_THETA,
    MY_C_MU,
    MY_C_DELTA,
    MY_C_SIGMA,
    MY_C_PHI
};

const uint32_t PROGMEM unicode_map[] = {
    [MY_E_HAT]           = 0xEA,   // ê
    [MY_A_HAT]           = 0xE2,   // â
    [MY_E_ACUTE]         = 0xE9,   // é
    [MY_E_GRAVE]         = 0xE8,   // è
    [MY_EURO]            = 0x20AC, // €
    [MY_PI]              = 0x3C0,  // π
    [MY_A_GRAVE]         = 0xE0,   // à
    [MY_E_IN_A]          = 0xE6,   // æ
    [MY_E_TREMA]         = 0xEB,   // ë
    [MY_EPSILON]         = 0x3B5,  // ε
    [MY_ALPHA]           = 0x3B1,  // α
    [MY_A_TREMA]         = 0xE4,   // ä
    [MY_LAMBDA]          = 0x3BB,  // λ
    [MY_C_CEDILLA]       = 0xE7,   // ç
    [MY_OMEGA]           = 0x3C9,  // ω
    [MY_BETA]            = 0x3B2,  // β
    [MY_ESZETT]          = 0xDF,   // ß
    [MY_Y_HAT]           = 0x177,  // ŷ
    [MY_U_HAT]           = 0xFB,   // û
    [MY_I_HAT]           = 0xEE,   // î
    [MY_O_HAT]           = 0xF4,   // ô
    [MY_GAMMA]           = 0x3B3,  // γ
    [MY_U_GRAVE]         = 0xF9,   // ù
    [MY_I_GRAVE]         = 0xEC,   // ì
    [MY_O_GRAVE]         = 0xF2,   // ò
    [MY_E_IN_O]          = 0x153,  // œ
    [MY_Y_TREMA]         = 0xFF,   // ÿ
    [MY_U_TREMA]         = 0xFC,   // ü
    [MY_I_TREMA]         = 0xEF,   // ï
    [MY_O_TREMA]         = 0xF6,   // ö
    [MY_PSI]             = 0x3C8,  // ψ
    [MY_THETA]           = 0x3B8,  // θ
    [MY_MU]              = 0xB5,   // µ
    [MY_DELTA]           = 0x3B4,  // δ
    [MY_SIGMA]           = 0x3C3,  // σ
    [MY_PHI]             = 0x3C6,  // φ
    [MY_LEFT_GUILLEMET]  = 0xAB,   // «
    [MY_RIGHT_GUILLEMET] = 0xBB,   // »
    [MY_C_E_HAT]         = 0xCA,   // Ê
    [MY_C_A_HAT]         = 0xC2,   // Â
    [MY_C_E_ACUTE]       = 0xC9,   // É
    [MY_C_E_GRAVE]       = 0xC8,   // È
    [MY_POUND]           = 0xA3,   // £
    [MY_C_PI]            = 0x3A0,  // Π
    [MY_C_A_GRAVE]       = 0xC0,   // À
    [MY_C_E_IN_A]        = 0xC6,   // Æ
    [MY_C_E_TREMA]       = 0xCB,   // Ë
    [MY_C_EPSILON]       = 0x45,   // E
    [MY_C_ALPHA]         = 0x41,   // A
    [MY_C_A_TREMA]       = 0xC4,   // Ä
    [MY_C_LAMBDA]        = 0x39B,  // Λ
    [MY_C_C_CEDILLA]     = 0xC7,   // Ç
    [MY_C_OMEGA]         = 0x3A9,  // Ω
    [MY_C_BETA]          = 0x42,   // B
    [MY_C_ESZETT]        = 0x1E9E, // ẞ
    [MY_C_Y_HAT]         = 0x176,  // Ŷ
    [MY_C_U_HAT]         = 0xDB,   // Û
    [MY_C_I_HAT]         = 0xCE,   // Î
    [MY_C_O_HAT]         = 0xD4,   // Ô
    [MY_C_GAMMA]         = 0x393,  // Γ
    [MY_C_U_GRAVE]       = 0xD9,   // Ù
    [MY_C_I_GRAVE]       = 0xCC,   // Ì
    [MY_C_O_GRAVE]       = 0xD2,   // Ò
    [MY_C_E_IN_O]        = 0x152,  // Œ
    [MY_C_Y_TREMA]       = 0x178,  // Ÿ
    [MY_C_U_TREMA]       = 0xDC,   // Ü
    [MY_C_I_TREMA]       = 0xCF,   // Ï
    [MY_C_O_TREMA]       = 0xD6,   // Ö
    [MY_C_PSI]           = 0x3A8,  // Ψ
    [MY_C_THETA]         = 0x398,  // Θ
    [MY_C_MU]            = 0x4D,   // M
    [MY_C_DELTA]         = 0x394,  // Δ
    [MY_C_SIGMA]         = 0x3A3,  // Σ
    [MY_C_PHI]           = 0x3A6,  // Φ
};
