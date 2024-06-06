#include<stdio.h>

#include<gsl/gsl_vector.h>
#include<gsl/gsl_rng.h>
#include<gsl/gsl_randist.h>

#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	// Allocate array for 100 random numbers
	int N = 100;
	double num;
	gsl_vector *vec_randNums = gsl_vector_alloc(N);
	
	/* Intialize the random number generator */
	const gsl_rng_type *T;
	gsl_rng *r;

	gsl_rng_env_setup();

	T = gsl_rng_default;
	r = gsl_rng_alloc(T);
	
	/* Create 100 random numbers sampled from 
	 * Gaussian or Normal distribution (mu=0, sigma=1)   */
	for(int i=0; i<N; i++){
		num = gsl_ran_gaussian(r,1);
		gsl_vector_set(vec_randNums, i, num); 
	}
	gsl_rng_free(r);

	gsl_vector_fprintf(stdout, vec_randNums,"%8.3le");
	
	gsl_vector_free(vec_randNums);
	return 0;
}

