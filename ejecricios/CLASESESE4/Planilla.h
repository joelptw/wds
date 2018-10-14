/*
 * Planilla.h
 *
 *  Created on: 22 jun. 2017
 *      Author: christian
 */

#ifndef PLANILLA_H_
#define PLANILLA_H_
#include "Profesor.h"

class Planilla {
public:
	Planilla();
	~Planilla();
	void addProfesor(Profesor* _profesor);
	Profesor* getProfesorMaxSueldo();
	Profesor* getProfesorMinSueldo();
	float getMaxSueldo();
	float getMinSueldo();
	float getPromSueldo();
	Profesor* getProfesor(int index);
	void showProfesor(Profesor*);
	int getNumProfesores();
private:
	int numProfesores;
	Profesor** planilla;
};

#endif /* PLANILLA_H_ */
