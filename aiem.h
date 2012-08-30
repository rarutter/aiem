#ifndef AIEM_H
#define AIEM_H

class AIEM {
	public:
		/* Initialization, maintenance functions */
		AIEM();
		void initialize();
		void clearCells();

		/* Data fetch methods */
		int getFireSeverity(int x, int y);
		int getVegetationType(int x, int y);
		int getTimeSinceLastFire(int x, int y);


		/* Internal variables, data structures, etc. */	
		int domainWidth;
		int domainHeight;

		/* ALFRESCO set variables */
		int** fireSeverity;
		int** vegetationType;
		int** timeSinceLastFire;

		int setFireSeverity(int x, int y, int v);
		int setVegetationType(int x, int y, int v);
		int setTimeSinceLastFire(int x, int y, int v);

		/* GIPL set variables */

		/* TEM set variables */
		float** soilTemperature;
		float** soilBiomass;
};

#endif
