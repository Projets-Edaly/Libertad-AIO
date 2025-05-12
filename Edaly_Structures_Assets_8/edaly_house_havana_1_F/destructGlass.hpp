#define GLASS_HITPOINT(glassID) \
            class Glass_##glassID##_hitpoint \
            { \
                armor = 0.0005; \
                material = -1; \
                name = Glass_##glassID##_hitpoint; \
                visual = Glass_##glassID##_hide; \
                passThrough = 0; \
                radius = 0.25; \
                convexComponent = Glass_##glassID##_hide; \
                class DestructionEffects \
                { \
                    class BrokenGlass1 \
                    { \
                        simulation = "particles"; \
                        type = "BrokenGlass1ND"; \
                        position = Glass_##glassID##_effects; \
                        intensity = 0.15000001; \
                        interval = 1; \
                        lifeTime = 0.05; \
                    }; \
                    class BrokenGlass2: BrokenGlass1 \
                    { \
                        type = "BrokenGlass2ND"; \
                    }; \
                    class BrokenGlass3: BrokenGlass1 \
                    { \
                        type = "BrokenGlass3ND"; \
                    }; \
                    class BrokenGlass4: BrokenGlass1 \
                    { \
                        type = "BrokenGlass4ND"; \
                    }; \
                    class BrokenGlass5: BrokenGlass1 \
                    { \
                        type = "BrokenGlass5ND"; \
                    }; \
                    class BrokenGlass6: BrokenGlass1 \
                    { \
                        type = "BrokenGlass6ND"; \
                    }; \
                    class BrokenGlass7: BrokenGlass1 \
                    { \
                        type = "BrokenGlass7ND"; \
                    }; \
                    class BrokenGlass1S: BrokenGlass1 \
                    { \
                        type = "BrokenGlass1SD"; \
                    }; \
                    class BrokenGlass2S: BrokenGlass1 \
                    { \
                        type = "BrokenGlass2SD"; \
                    }; \
                    class BrokenGlass3S: BrokenGlass1 \
                    { \
                        type = "BrokenGlass3SD"; \
                    }; \
                    class BrokenGlass4S: BrokenGlass1 \
                    { \
                        type = "BrokenGlass4SD"; \
                    }; \
                    class BrokenGlass5S: BrokenGlass1 \
                    { \
                        type = "BrokenGlass5SD"; \
                    }; \
                    class BrokenGlass6S: BrokenGlass1 \
                    { \
                        type = "BrokenGlass6SD"; \
                    }; \
                    class BrokenGlass7S: BrokenGlass1 \
                    { \
                        type = "BrokenGlass7SD"; \
                    }; \
                }; \
            };