#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<unistd.h>
#include<fstream>
using namespace std;
int TF=0;
int choice;
string app;
void jiedong()//解除所有应用禁用 
{
    FILE *ABC = popen("adb shell pm list packages -d","r");
    char BACK[1024];
    vector<string> appInfo;
    while(fgets(BACK, sizeof(BACK), ABC)!=NULL)
    {
        appInfo.push_back(BACK);
    }
    for(auto i=appInfo.begin();i!=appInfo.end();++i)
    {
        i->erase(0,8);
        *i="adb shell pm enable "+(*i);
    }
    for(auto i=appInfo.begin();i!=appInfo.end();++i)
    {
       system(i->c_str());
    }
    pclose(ABC);
}
void youhua()//优化 
{
	system("adb shell pm enable com.huawei.search");//智慧搜索 
	system("adb shell pm enable com.huawei.intelligent");//智慧助手 
	system("adb shell pm enable com.huawei.fastapp");//快应用
	system("adb shell pm enable com.huawei.bd");//用户反馈
	system("adb shell pm enable com.huawei.android.karaoke") ;//K歌特效 
	 
}
void ZT()//检查手机状态 
{
	  FILE *ABC = popen("adb get-state","r");
      char BACK[1024];
      char* result;
	  result = fgets(BACK, sizeof(BACK), ABC);
	  pclose(ABC);
	  if((strstr(result,"device")!=NULL))
	  {
	  	TF=1;
	  }
}
int main()
{
		start:
		cout<<"****************************************************************"<<endl<<endl<<"作者酷安:WF_Belief B站:墨尘之一"<<endl<<"1.本程序完全免费 如您是购买所得 请立即退款"<<endl<<"2.使用前，请备份好数据，以防出现问题"<<endl<<"3.使用本程序则代表您同意接受可能带来的风险,如:数据丢失、无法开机等"<<endl<<endl<<"****************************************************************"<<endl<<endl<<"本程序发布前已经过测试，但不保证您使用过程中不会出现意外情况，如有BUG或意见，欢迎私信作者反馈"<<endl;
		cout<<"按下回车键进入程序"<<endl;
		getchar();
		system("cls");
		cout<<"正在检查手机连接状态..."<<endl<<"如程序闪退 即为连接手机失败 请检查手机是否开启USB调试并给予电脑USB调试权限"<<endl;
		ZT();
		TF = 1;
		if(TF==1){
			zcd:
			system("cls");
			cout<<"请选择你要使用的功能"<<endl;
			cout<<"【1】一键优化"<<endl<<"【2】自定义优化"<<endl<<"【3】一键恢复所有优化操作"<<endl<<"【4】开启性能模式"<<endl<<"【5】关闭性能模式"<<endl<<"【6】保留数据卸载应用";
			cin>>choice;
			switch(choice)
			{
				case 1:
					cout<<"优化内容:禁用负一屏 智能搜索 快应用 用户反馈 K歌特效"<<endl;
					youhua();
					system("cls");
					cout<<"执行完成 即将回到上一级"<<endl;
					sleep(3);
					system("cls");
					goto zcd;
				case 2:
					{
					system("cls");
					string DL="禁用"; 
					string GX="禁用";
					string ZN="禁用";
					string FK="禁用";
					string GG="禁用";
					string KYY="禁用";
					string YP="禁用";
					string HY="禁用";
					string DL1="cls"; 
					string ZN1="cls";
					string FK1="cls";
					string KYY1="cls";
					string YP1="cls";
					string HY1="cls";
					string GG1="cls";
					string GX1="cls";
					ABC:
					cout<<"请输入你要进行的操作"<<endl<<"如:输入1即为将禁用系统毒瘤的状态由禁用改为启用或相反"<<endl;
					cout<<"【1】禁用智能搜索 "+DL<<endl;
					cout<<"【2】防止系统更新 "+GX<<endl;
					cout<<"【3】禁用智能语音(语音助手) "+ZN<<endl;
					cout<<"【4】禁用用户反馈 "+FK<<endl;
					cout<<"【5】禁用K歌特效 "+GG<<endl;
					cout<<"【6】禁用快应用 "+KYY<<endl;
					cout<<"【7】禁用系统浏览器 "+YP<<endl;
					cout<<"【8】禁用华为音乐 "+HY<<endl;
					cout<<"【9】返回上一级"<<endl;
					cout<<"【0】开始优化"<<endl;
					cin>>choice;
					switch (choice) {
						case 1:
							if(DL == "禁用")
							{
								DL = "启用";
								DL1 = "adb shell pm enable com.huawei.search";
								system("cls");
								goto ABC;
							}
							else
							{
								DL = "禁用";
								DL1 = "cls";
								system("cls");
								goto ABC;
							}
						case 2:
							if(GX == "禁用")
							{
								GX = "启用";
								GX1="adb shell pm enable com.huawei.android.hwouc";
								system("cls");
								goto ABC;
							}
							else
							{
								GX = "禁用";
								system("cls");
								goto ABC;
							}
						case 3:
							if(ZN == "禁用")
							{
								ZN = "启用";
								ZN1 = "adb shell pm enable com.huawei.vassistant";
								system("cls");
								goto ABC;
							}
							else
							{
								ZN = "禁用";
								ZN1 = "cls";
								system("cls");
								goto ABC;
							}
						case 4:
							if(FK == "禁用")
							{
								FK = "启用";
								FK1 = "adb shell pm enable com.huawei.bd";
								system("cls");
								goto ABC;
							}
							else
							{
								FK = "禁用";
								FK1 = "cls";
								system("cls");
								goto ABC;
							}
						case 5:
							if(GG == "禁用")
							{
								GG = "启用";
								GG1 = "adb shell pm enable com.huawei.android.karaoke";
								system("cls");
								goto ABC;
							}
							else
							{
								GG = "禁用";
								system("cls");
								goto ABC;
							}
						case 6:
							if(KYY == "禁用")
							{
								KYY = "启用";
								KYY1 = "adb shell pm enable com.huawei.fastapp" ;
								system("cls");
								goto ABC;
							}
							else
							{
								KYY = "禁用";
								KYY1 = "cls";
								system("cls");
								goto ABC;
							}
						case 7:
							if(YP == "禁用")
							{
								YP = "启用";
								YP1 = "adb shell pm com.huawei.browser";
								system("cls");
								goto ABC;
							}
							else
							{
								YP = "禁用";
								YP1 = "cls";
								system("cls");
								goto ABC;
							}
						case 8:
							if(HY == "禁用")
							{
								HY = "启用";
								HY1 = "adb shell pm com.huawei.music";
								system("cls");
								goto ABC;
							}
							else
							{
								HY = "禁用";
								HY1 = "cls";
								system("cls");
								goto ABC;
							}
						case 9:
							goto zcd;
						case 0:
							cout<<"开始执行"<<endl;
							system(DL1.c_str());
							system(GX1.c_str());
							system(ZN1.c_str());
							system(GG1.c_str());
							system(KYY1.c_str());
							system(YP1.c_str());
							system(HY1.c_str());
							system("cls");
							cout<<"执行完毕 即将返回上一级"<<endl;
							sleep(3);
							goto zcd;
						default:
							cout<<"输入错误"<<endl;
							goto ABC;
							break;
					}
					}
				case 3:
					jiedong();
					system("adb shell pm install-existing --user 0 com.huawei.powergenie") ;
					system("adb shell pm install-existing --user 0 com.huawei.iaware");
					system("cls");
					cout<<"执行完成 即将返回上一级"<<endl;
					sleep(3);
					system("cls");
					goto zcd;
				case 4:
					cout<<"请注意 开启该模式会使系统耗电增加，手机发热严重 建议仅在游戏时使用"<<endl;
					system("adb shell pm uninstall --user 0 com.huawei.powergenie");
					system("adb shell pm uninstall --user 0 com.huawei.iaware");
					system("cls");
					cout<<"开启成功 即将返回上一级"<<endl;
					sleep(3);
					goto zcd;
				case 5:
					system("adb shell pm install-existing --user 0 com.huawei.powergenie") ;
					system("adb shell pm install-existing --user 0 com.huawei.iaware");
					cout<<"关闭成功 即将返回上一级"<<endl;
					sleep(3);
					goto zcd; 
				case 6:
					cout<<"请输入你要卸载的应用包名:"<<endl; 
					cin>>app;
					app = "adb uninstall -k"+app;
					system(app.c_str());
					system("cls");
					cout<<"卸载完成 即将返回上一级"<<endl;
					sleep(3);
					goto zcd; 
					
			}
		}

		
}
