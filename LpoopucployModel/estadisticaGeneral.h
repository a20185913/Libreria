#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace LpoopucployModel {
	public ref class estadisticaGeneral {
	public:
		String^ MES;
		double gastosExtra;
	public:
		estadisticaGeneral();
		estadisticaGeneral(String^ MES,
		double gastosExtra);
	};
}
