/**********************************************************************
--- Qt Architect generated file ---
File: SimulatorCountsData.h
Last generated: Thu Jan 4 16:19:37 2001
DO NOT EDIT!!!  This file will be automatically
regenerated by qtarch.  All changes will be lost.
*********************************************************************/
#ifndef SimulatorCountsData_included
#define SimulatorCountsData_included
#include <qt.h>
#include "valedit.h"
class SimulatorCountsData : public QWidget
{
	Q_OBJECT
	public:
	SimulatorCountsData(QWidget *parent = NULL, const char *name = NULL);
	virtual ~SimulatorCountsData();
	protected:
	TIMEEDIT *Time;
	INTEDIT *Mean;
	INTEDIT *Variation;
};
#endif // SimulatorCountsData_included
