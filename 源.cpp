#include<iostream>
#include<ctime>
using namespace std;

namespace Feeling_memory {		//�о�����
	class Driving_situation_CT_chart {		//ͨ���õ�ÿ�����������״�����GPS�������ݣ������д����õ���ʻʱ��ʵʱ��̬
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


	class radar {	//�״���
	public:
		void getdata() {

		}
	};

	class camera {		//�����
	public:
		void getimage() {

		}

	};

	class GPS {		//GPS��
	public:
		void getdata() {

		}
	};

	class MMW_radar {	//���ײ��״�
		void getdata() {

		}
	};
}

namespace Driving_Brain {	//��ʻ��
	class autodrive {	//��ʻ���ۺϣ�ͨ���ۺϳ��ڼ��䡢���������Լ��趨��Ŀ������������ߣ�������ʵʱ����
	private:
		working_memory working_memory;
		Long_term_memory Long_term_memory;
		making_decision making_decision;
		control control;
	public:
		void autocontrol();
	};

	class working_memory {	//�������䣬ͨ���о�����õ�
	private:
		Feeling_memory::Driving_situation_CT_chart driving_situation;
	public:
		void get_working_memory() {

		}
	};

	class Long_term_memory {	//���ڼ���
	private:
		void prior_knowledge();
	public:
		Feeling_memory::Driving_situation_CT_chart driving_situation;
		void get_long_term_memory();

	};

	class motivation {	//Ŀ��
	private:
		Long_term_memory long_term_memory1;
	public:
		void get_motivation();
	};

	class making_decision {  //����
	public:
		motivation motivation;

		void decision_making();

	};

	class control {		//����
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