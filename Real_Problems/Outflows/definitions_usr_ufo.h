/* -- Own definitions choices -- */

#define NOZZLE               NOZZLE_UFO

#define HEMISPHERICAL_CAP    YES

#define CLOUDS               YES
#define CLOUD_VELOCITY       NO
#define CLOUD_TCRIT          3.0e4
#define CLOUD_EXTRACT        NONE
#define CLOUD_DISTR          TURB_KEPLERIAN_DISC
#define CLOUD_SCALE          CS_WRAD
#define CLOUD_VEL_DISTR      NONE

#define GRAV_POTENTIAL       HQNFW

#define HOT_DISTR            HOT_EXT_DATA

#define JD_MODE              JD_GRAD

#define MU_CALC              MU_CONST

#define CCL_OK               TRUE


#define CLOUD_X1MIN         -1.9
#define CLOUD_X1MAX          1.9
#define CLOUD_X2MIN         -1.9
#define CLOUD_X2MAX          1.9
#define CLOUD_X3MIN          0.015
#define CLOUD_X3MAX          3.9


/* -- user-defined symbolic constants -- */
/* These are just here as a backup. This #if should never evaluate to True. */
#if !(defined UNIT_DENSITY) || !(defined UNIT_DENSITY) || !(defined UNIT_DENSITY)
#define MU_NORM           0.6165
#define UNIT_DENSITY      (CONST_amu)*(MU_NORM)
#define UNIT_LENGTH       1.e3*(CONST_pc)
#define UNIT_VELOCITY     (UNIT_LENGTH)/(1.e3*(CONST_ly)/(CONST_c))
#endif
