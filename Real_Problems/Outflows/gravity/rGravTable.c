#include "pluto.h"
#include "pluto_usr.h"
#include "rGravTable.h"

#ifdef GRAV_TABLE

double *gr_rad, *gr_phi, *gr_vec;
double *gr_phiderv;
int gr_ndata;

int rGravData(){
  /*
   * This routine reads the data from a gravity file. The data should be a
   * two-column file in code units. Columns are radius and potential and dphi/dr
   * or gravitational acceleration, depending on whether GRAV_USE_POTENTIAL is 
   * YES or NO.
   *
   * The values of these are filled into the global arrays gr_rad, gr_phi and gr_vec, which
   * are used throughout the code.
   * 
   * Returns 0
   *
   * */

  FILE * f;

  double buf;
  int i;

  /* Open file */
  if ((f = fopen(GRAVFNAME, "r")) == NULL){
    print1("Error: rGravData: Unable to open file");
    exit(1);
  }

  /* Scan file first to get number of lines*/
  gr_ndata = 0;
  while (fscanf(f, "%le %le", &buf, &buf) != EOF){
    gr_ndata++;
  }

  /* Allocate memory for potential profile arrays */
  gr_rad = ARRAY_1D(gr_ndata, double);
#if BODY_FORCE == POTENTIAL
  gr_phi = ARRAY_1D(gr_ndata, double);
  gr_phiderv = ARRAY_1D(gr_ndata, double);
#else
  gr_vec = ARRAY_1D(gr_ndata, double);
#endif

  /* Read data */
  fseek(f, 0, SEEK_SET);
  for (i=0; i<gr_ndata; ++i){
    fscanf(f, "%le ", &gr_rad[i]);
#if BODY_FORCE == POTENTIAL
    fscanf(f, "%le ", &gr_phi[i]);
    fscanf(f, "%le ", &gr_phiderv[i]);
#else
    fscanf(f, "%le ", &gr_vec[i]);
#endif
  }

  /* Clean up */
  fclose(f);

  return 0;

}


void readGravTable(){
  /* This routine first reads the header of a file, then the data. 
   * */

  /* Read gravity header */
  // TODO: Reimplement
  //rGravHeader();

  /* Read gravity table */
  if (rGravData() != 0){
    print1("Error: in rGravTable.c: Table read unsuccessful.");
    QUIT_PLUTO(1);
  }

}

#endif
