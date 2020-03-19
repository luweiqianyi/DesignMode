#include "Facade.h"
#include "SubSystem01.h"
#include "SubSystem02.h"
#include "SubSystem03.h"

// 可以将Facade提升为Facade抽象类,同时提供多个子类继承它
// 实现不同的子类 以提供具有多态性的统一对外接口实现
int main()
{
	SubSystem01* system01 = new SubSystem01();
	SubSystem02* system02 = new SubSystem02();
	SubSystem03* system03 = new SubSystem03();

	Facade* facade = new Facade(system01, system02, system03);
	facade->uniformInterface(); //调用 统一对外接口
	return 0;
}