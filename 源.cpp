#include<iostream>
#include<ctime>
using namespace std;

namespace Feeling_memory {		//感觉记忆
	class Driving_situation_CT_chart {		//通过得到每个传感器（雷达、相机、GPS）的数据，并进行处理，得到驾驶时的实时动态
	private:
		radar laser_radar_8_line;
		radar laser_radar_4_line;
		radar SICK_laser_radar1;
		radar SICK_laser_radar2;
		camera camera1;
		camera camera2;
		camera camera3;
		GPS gps;
		MMW_radar MMW;
	public:
		void get_drving_situation() {

		}

	};


	class radar {	//雷达类
	public:
		void getdata() {

		}
	};

	class camera {		//相机类
	public:
		void getimage() {

		}

	};

	class GPS {		//GPS类
	public:
		void getdata() {

		}
	};

	class MMW_radar {	//毫米波雷达
		void getdata() {

		}
	};
}

namespace Driving_Brain {	//驾驶脑
	class autodrive {	//驾驶脑综合，通过综合长期记忆、工作记忆以及设定的目标进行自主决策，并进行实时控制
	private:
		working_memory working_memory;
		Long_term_memory Long_term_memory;
		making_decision making_decision;
		control control;
	public:
		void autocontrol();
	};

	class working_memory {	//工作记忆，通过感觉记忆得到
	private:
		Feeling_memory::Driving_situation_CT_chart driving_situation;
	public:
		void get_working_memory() {

		}
	};

	class Long_term_memory {	//长期记忆
	private:
		void prior_knowledge();
	public:
		Feeling_memory::Driving_situation_CT_chart driving_situation;
		void get_long_term_memory();

	};

	class motivation {	//目标
	private:
		Long_term_memory long_term_memory1;
	public:
		void get_motivation();
	};

	class making_decision {  //决策
	public:
		motivation motivation;

		void decision_making();

	};

	class control {		//控制
		making_decision m;
		void get_manual_intervention();
		void make_control();
	};


}

int main()
{
	Driving_Brain::autodrive autodriving;
	int flag;
	while (flag) {
		autodriving.autocontrol();
	}

	system("pause");

	return 0;
}