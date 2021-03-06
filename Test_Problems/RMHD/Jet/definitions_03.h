#define  PHYSICS                 RMHD
#define  DIMENSIONS              2
#define  COMPONENTS              3
#define  GEOMETRY                CYLINDRICAL
#define  BODY_FORCE              NO
#define  COOLING                 NO
#define  RECONSTRUCTION          LINEAR
#define  TIME_STEPPING           RK3
#define  DIMENSIONAL_SPLITTING   NO
#define  NTRACER                 1
#define  USER_DEF_PARAMETERS     6

/* -- physics dependent declarations -- */

#define  EOS                     TAUB
#define  ENTROPY_SWITCH          NO
#define  DIVB_CONTROL            CONSTRAINED_TRANSPORT

/* -- user-defined parameters (labels) -- */

#define  MACH                    0
#define  LORENTZ                 1
#define  RHOJ                    2
#define  RHOA                    3
#define  SIGMA_POL               4
#define  SIGMA_TOR               5

/* [Beg] user-defined constants (do not change this line) */


/* [End] user-defined constants (do not change this line) */

/* -- supplementary constants (user editable) -- */ 

#define  INITIAL_SMOOTHING         NO
#define  WARNING_MESSAGES          YES
#define  PRINT_TO_FILE             YES
#define  INTERNAL_BOUNDARY         NO
#define  SHOCK_FLATTENING          NO
#define  CHAR_LIMITING             NO
#define  LIMITER                   VANLEER_LIM
#define  CT_EMF_AVERAGE            UCT_CONTACT
#define  CT_EN_CORRECTION          NO
#define  ASSIGN_VECTOR_POTENTIAL   YES
#define  UPDATE_VECTOR_POTENTIAL   NO
