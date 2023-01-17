#include "estadisticaGeneral.h"

using namespace LpoopucployModel;

estadisticaGeneral::estadisticaGeneral() {

}
estadisticaGeneral::estadisticaGeneral(String^ MES,
	double gastosExtra) {
	
	this->MES = MES;
	this->gastosExtra = gastosExtra;

}