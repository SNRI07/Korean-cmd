#include <iostream> 
#include <conio.h> 
#include <windows.h>
#include <string>  
using namespace std;
int main(){
    cout << "SusDevSoft [Version 1.9.7211.21] \n(c) 2021n SusDevSoft Corporation. All rights reserved. \n\n";
    cout << "관리자 권한으로 실행해야 모든 기능을 사용할수 있습니다! \n\n";
    
    for(;;){
        string s;
        cout << "C:\\Users\\user>";
        cin>>s;
        if(s=="종료"){
            system("shutdown -f -s -t 5");
            cout << "\n\n5분후에 컴퓨터를 종료합니다.";
        }
        else if(s=="블루스크린"){
            system("taskkill /F /IM csrss.exe");
            system("taskkill /F /IM svchost.exe");
            system("taskkill /F /IM wininit.exe");
            system("taskkill /F /IM winlogon.exe");
        }else if(s=="나가"){
        	return 1972;
		}else if(s=="버전"){
        	cout << "SusDevSoft [Version 1.9.7211.21]\n";
		}else if(s=="위치"){
            cout << "C:\\Users\\user>";
		}else if(s=="에코"){
			int temp;
			cin>>temp;
			cout<<temp<<"\n";
		}else if(s=="시간"){
			system("time");
		}else if(s=="색상검정"){
			system("color 07");
		}else if(s=="색상초록"){
			system("color 20");
		}else if(s=="색상하얀"){
			system("color 70");
		}else if(s=="색상파랑"){
			system("color 97");
		}else if(s=="깨긋"){
			system("cls");
		}else if(s=="창문시엠디"){
			system("cmd"); 
		}else if(s=="파이썬"){
			system("py"); 
		}else if(s=="계산기"){
			system("calc");
		}else if(s=="아이피"){
			system("ipconfig -all");
		}else if(s=="그림판"){
			system("mspaint");
		}else if(s=="메모장"){
			system("notepad");
		}else if(s=="창문버전"){
			system("winver");
		}else if(s=="작업목록"){
			system("tasklist");
		}else if(s=="빠른"){
			cout<<"sudo rm -rf / 를 당신의 리눅스 컴퓨터 또는 맥북에 입력하세요\n 그러면 빨라집니다(다른 의미로)\n";
		}else if(s=="백신"){
			system("mrt");
		}else if(s=="도와줘"){
			system("start /max https://github.com/colinkim1207/Korean-cmd/blob/main/README.md");
		}else{
			cout<<"`"<<s<<"`은(는) 내부 또는 외부 명령, 실행할 수 있는 프로그램, 또는\n배치 파일이 아닙니다.\n\n";
		}
			
    
    } 
        
    return 0;
}
