#define DOOR_GLASS_HITPOINT(glassID,glassID_SUB) \
                    class BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        simulation = particles; \
                        type = BrokenGlass1ND; \
                        position = glass_##glassID##_##glassID_SUB##_effects; \
                        intensity = 0.15000001; \
                        interval = 1; \
                        lifeTime = 0.05; \
                    }; \
                    class BrokenGlass_2_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass2ND; \
                    }; \
                    class BrokenGlass_3_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass3ND; \
                    }; \
                    class BrokenGlass_4_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass4ND; \
                    }; \
                    class BrokenGlass_5_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass5ND; \
                    }; \
                    class BrokenGlass_6_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass6ND; \
                    }; \
                    class BrokenGlass_7_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass7ND; \
                    }; \
                    class BrokenGlass_1S_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass1SD; \
                    }; \
                    class BrokenGlass_2S_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass2SD; \
                    }; \
                    class BrokenGlass_3S_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass3SD; \
                    }; \
                    class BrokenGlass_4S_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass4SD; \
                    }; \
                    class BrokenGlass_5S_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass5SD; \
                    }; \
                    class BrokenGlass_6S_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass6SD; \
                    }; \
                    class BrokenGlass_7S_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass7SD; \
                    };

#define BIG_GLASS_HITPOINT(glassID, glassID_SUB) \
                    class BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        simulation = particles; \
                        type = BrokenGlass1NB; \
                        position = glass_##glassID##_##glassID_SUB##_effects; \
                        intensity = 0.15000001; \
                        interval = 1; \
                        lifeTime = 0.05; \
                    }; \
                    class BrokenGlass_2_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass2NB; \
                    }; \
                    class BrokenGlass_3_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass3NB; \
                    }; \
                    class BrokenGlass_4_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass4NB; \
                    }; \
                    class BrokenGlass_5_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass5NB; \
                    }; \
                    class BrokenGlass_6_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass6NB; \
                    }; \
                    class BrokenGlass_7_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass7NB; \
                    }; \
                    class BrokenGlass_1S_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass1SB; \
                    }; \
                    class BrokenGlass_2S_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass2SB; \
                    }; \
                    class BrokenGlass_3S_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass3SB; \
                    }; \
                    class BrokenGlass_4S_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass4SB; \
                    }; \
                    class BrokenGlass_5S_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass5SB; \
                    }; \
                    class BrokenGlass_6S_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass6SB; \
                    }; \
                    class BrokenGlass_7S_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass7SB; \
                    };

#define NORMAL_GLASS_HITPOINT(glassID,glassID_SUB) \
                    class BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        simulation = particles; \
                        type = BrokenGlass1NN; \
                        position = glass_##glassID##_##glassID_SUB##_effects; \
                        intensity = 0.15000001; \
                        interval = 1; \
                        lifeTime = 0.05; \
                    }; \
                    class BrokenGlass_2_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass2NN; \
                    }; \
                    class BrokenGlass_3_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass3NN; \
                    }; \
                    class BrokenGlass_4_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass4NN; \
                    }; \
                    class BrokenGlass_5_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass5NN; \
                    }; \
                    class BrokenGlass_6_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass6NN; \
                    }; \
                    class BrokenGlass_7_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass7NN; \
                    }; \
                    class BrokenGlass_1S_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass1SN; \
                    }; \
                    class BrokenGlass_2S_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass2SN; \
                    }; \
                    class BrokenGlass_3S_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass3SN; \
                    }; \
                    class BrokenGlass_4S_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass4SN; \
                    }; \
                    class BrokenGlass_5S_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass5SN; \
                    }; \
                    class BrokenGlass_6S_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass6SN; \
                    }; \
                    class BrokenGlass_7S_##glassID##_##glassID_SUB: BrokenGlass_1_##glassID##_##glassID_SUB \
                    { \
                        type = BrokenGlass7SN; \
                    };
