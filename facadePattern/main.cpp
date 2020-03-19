#include "Facade.h"
#include "SubSystem01.h"
#include "SubSystem02.h"
#include "SubSystem03.h"

int main()
{
	SubSystem01* system01 = new SubSystem01();
	SubSystem02* system02 = new SubSystem02();
	SubSystem03* system03 = new SubSystem03();

	Facade* facade = new Facade(system01, system02, system03);
	facade->uniformInterface(); //调用 统一对外接口
	return 0;
}