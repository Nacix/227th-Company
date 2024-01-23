/*
 * Author: Anorexican
 *
 * Contains macro definitions that can be used to quickly set armor values for a given class.
 * Each region of the body has a different modifier that will be applied to the base armor/passthrough values.
 * DEF_ARMOR is the highest-level of these macros, and can be used to quickly define all armor properties for each hitpoint.
 *
*/

// ############################################################ Helmets & Vests (CfgWeapons) ############################################################

// Sets armor value for a HitPoint
#define SET_ARMOR_VALS(baseArmor,pass,mult) \
    armor = QUOTE(baseArmor*mult); \
    passThrough = QUOTE(pass);

// Calls armor value setter for each region of the head with given multiplier
#define SET_ARMOR_HEAD(baseArmor,pass,headMult) \
    class Head \
    { \
        hitpointName = "HitHead"; \
        SET_ARMOR_VALS(baseArmor,0.5,headMult) \
    }; \
    class Face \
    { \
        hitpointName = "HitFace"; \
        SET_ARMOR_VALS(baseArmor,0.5,headMult) \
    }; \
    class Neck \
    { \
        hitpointName = "HitNeck"; \
        SET_ARMOR_VALS(baseArmor,0.5,headMult) \
    };

// Calls armor value setter for each region of the torso with given multiplier
#define SET_ARMOR_TORSO(baseArmor,pass,torsoMult) \
    class Body \
    { \
        hitpointName = "HitBody"; \
        SET_ARMOR_VALS(baseArmor,pass*torsoMult,torsoMult) \
    }; \
    class Chest \
    { \
        hitpointName = "HitChest"; \
        SET_ARMOR_VALS(baseArmor,pass*torsoMult,torsoMult) \
    }; \
    class Diaphragm \
    { \
        hitpointName = "HitDiaphragm"; \
        SET_ARMOR_VALS(baseArmor,pass*torsoMult,torsoMult) \
    }; \
    class Abdomen \
    { \
        hitpointName = "HitAbdomen"; \
        SET_ARMOR_VALS(baseArmor,pass*torsoMult,torsoMult) \
    }; \
    class Pelvis \
    { \
        hitpointName = "HitPelvis"; \
        SET_ARMOR_VALS(baseArmor,pass*torsoMult,torsoMult) \
    };

// Calls armor value setter for each region of the arms with given multiplier
#define SET_ARMOR_ARMS(baseArmor,pass,armsMult) \
    class Arms \
    { \
        hitpointName = "HitArms"; \
        SET_ARMOR_VALS(baseArmor,0.9,armsMult) \
    }; \
    class Hands \
    { \
        hitpointName = "HitHands"; \
        SET_ARMOR_VALS(baseArmor,0.9,armsMult) \
    }; \
    class LeftArm \
    { \
        hitpointName = "HitLeftArm"; \
        SET_ARMOR_VALS(baseArmor,0.9,armsMult) \
    }; \
    class RightArm \
    { \
        hitpointName = "HitRightArm"; \
        SET_ARMOR_VALS(baseArmor,0.9,armsMult) \
    };

// Calls armor value setter for each region of the legs with given multiplier
#define SET_ARMOR_LEGS(baseArmor,pass,legsMult) \
    class Legs \
    { \
        hitpointName = "HitLegs"; \
        SET_ARMOR_VALS(baseArmor,0.9,legsMult) \
    }; \
    class LeftLeg \
    { \
        hitpointName = "HitLeftLeg"; \
        SET_ARMOR_VALS(baseArmor,0.9,legsMult) \
    }; \
    class RightLeg \
    { \
        hitpointName = "HitRightLeg"; \
        SET_ARMOR_VALS(baseArmor,0.9,legsMult) \
    };

// Calls setters for each part of the body
#define SET_ARMOR(baseArmor,pass,headMult,torsoMult,armsMult,legsMult) \
    class HitpointsProtectionInfo \
    { \
        SET_ARMOR_HEAD(baseArmor,pass,headMult) \
        SET_ARMOR_TORSO(baseArmor,pass,torsoMult) \
        SET_ARMOR_ARMS(baseArmor,pass,armsMult) \
        SET_ARMOR_LEGS(baseArmor,pass,legsMult) \
    };

// Inherits ItemInfo from parent class and calls main setter for HitPoint armor
#define DEF_ARMOR(baseArmor,pass,headMult,torsoMult,armsMult,legsMult) \
    class ItemInfo: ItemInfo \
    { \
        SET_ARMOR(baseArmor,pass,headMult,torsoMult,armsMult,legsMult) \
    }

// ############################################################ Uniforms (CfgVehicles) ############################################################

#define SET_ARMOR_VALS_UNIFORM(baseArmor,pass,blastProc,minHit,mult) \
    armor = QUOTE(baseArmor*mult); \
    passThrough = QUOTE(pass); \
    explosionShielding = QUOTE(blastProc*mult); \
    minimalHit = QUOTE(minHit); \
    material = -1;
#define SET_ARMOR_HEAD_UNIFORM(baseArmor,pass,blastProc,minHit,headMult) \
    class HitFace \
    { \
        SET_ARMOR_VALS_UNIFORM(baseArmor,pass,blastProc,minHit,headMult) \
        name = "face_hub"; \
        radius = 0.08; \
    }; \
    class HitNeck: HitFace \
    { \
        SET_ARMOR_VALS_UNIFORM(baseArmor,pass,blastProc,minHit,headMult) \
        name = "neck"; \
        radius = 0.1; \
    }; \
    class HitHead: HitNeck \
    { \
        SET_ARMOR_VALS_UNIFORM(baseArmor,pass,blastProc,minHit,headMult) \
        name = "head"; \
        radius = 0.2; \
        depends = "HitFace max HitNeck"; \
    };
#define SET_ARMOR_TORSO_UNIFORM(baseArmor,pass,blastProc,minHit) \
    class HitPelvis \
    { \
        SET_ARMOR_VALS_UNIFORM(baseArmor,pass,blastProc,minHit,1) \
        name = "pelvis"; \
        radius = 0.24; \
        visual = "injury_body"; \
    }; \
    class HitAbdomen: HitPelvis \
    { \
        SET_ARMOR_VALS_UNIFORM(baseArmor,pass,blastProc,minHit,1) \
        name = "spine1"; \
        radius = 0.16; \
    }; \
    class HitDiaphragm: HitAbdomen \
    { \
        SET_ARMOR_VALS_UNIFORM(baseArmor,pass,blastProc,minHit,1) \
        name = "spine2"; \
        radius = 0.18; \
    }; \
    class HitChest: HitDiaphragm \
    { \
        SET_ARMOR_VALS_UNIFORM(baseArmor,pass,blastProc,minHit,1) \
        name = "spine3"; \
        radius = 0.18; \
    }; \
    class HitBody: HitChest \
    { \
        armor = 1000; \
        material = -1; \
        name = "body"; \
        passThrough = 1; \
        radius = 0; \
        explosionShielding = 6; \
        minimalHit = 0.01; \
        depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest"; \
    };
#define SET_ARMOR_LIMBS_UNIFORM(baseArmor,pass,blastProc,minHit,limbMult) \
    class HitArms \
    { \
        SET_ARMOR_VALS_UNIFORM(baseArmor,pass,blastProc,minHit,limbMult) \
        name = "arms"; \
        radius = 0.1; \
        visual = "injury_hands"; \
    }; \
    class HitHands: HitArms \
    { \
        SET_ARMOR_VALS_UNIFORM(baseArmor,pass,blastProc,minHit,limbMult) \
        name = "hands"; \
        radius = 0.1; \
        visual = "injury_hands"; \
        depends = "HitArms"; \
    }; \
    class HitLegs \
    { \
        SET_ARMOR_VALS_UNIFORM(baseArmor,pass,blastProc,minHit,limbMult) \
        name = "legs"; \
        radius = 0.14; \
        visual = "injury_legs"; \
    }; \
    class Incapacitated: HitLegs \
    { \
        armor = 1000; \
        material = -1; \
        name = "body"; \
        passThrough = 1; \
        radius = 0; \
        explosionShielding = 3; \
        visual = ""; \
        minimalHit = 0; \
        depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2"; \
    }; \
    class HitLeftArm \
    { \
        SET_ARMOR_VALS_UNIFORM(baseArmor,pass,blastProc,minHit,limbMult) \
        name = "hand_l"; \
        radius = 0.08; \
        visual = "injury_hands"; \
    }; \
    class HitRightArm: HitLeftArm \
    { \
        name = "hand_r"; \
    }; \
    class HitLeftLeg \
    { \
        SET_ARMOR_VALS_UNIFORM(baseArmor,pass,blastProc,minHit,limbMult) \
        name = "leg_l"; \
        radius = 0.1; \
        visual = "injury_legs"; \
    }; \
    class HitRightLeg: HitLeftLeg \
    { \
        name = "leg_r"; \
    };
#define SET_ARMOR_UNIFORM(baseArmor,pass,blastProc,minHit,headMult,limbMult) \
    class HitPoints: HitPoints \
    { \
        SET_ARMOR_HEAD_UNIFORM(baseArmor,1,blastProc,minHit,headMult) \
        SET_ARMOR_TORSO_UNIFORM(baseArmor,pass,blastProc,minHit) \
        SET_ARMOR_LIMBS_UNIFORM(baseArmor,1,blastProc,minHit,limbMult) \
    };