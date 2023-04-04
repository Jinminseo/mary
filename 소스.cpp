#include <iostream>
using namespace std;

int main()
{
    int seat[10][6] = { 0 };
    int n, wid, len, wide, lent;
    while (1) {
        cout << endl << "** 비행기 좌석 예약 시스템 **" << endl;

        cout << "1. 신규 예약" << endl;
        cout << "2. 예약 변경" << endl;
        cout << "3. 프로그램 종료" << endl;
        cout << endl;
        cout << "번호를 입력하세요 : ";
        cin >> n;
        switch (n) {
        case 1: // 1을 누를 시 신규 예약 창으로 넘어가게 하기 위해 switch문 case 1을 사용함

            cout << "1 " << "2 " << "3 " << " " << "4 " << "5 " << "6" << endl;
            cout << "-------------" << endl;
            for (int i = 0; i < 9; i++) { //10번 반복하게해서 행을 10번 만듦.
                for (int j = 0; j < 6; j++) { //7열을 만들어주기 위해 7번 반복해줌
                    cout << seat[i][j] << " ";
                    if (j == 2) {
                        cout << " ";//중간에 통로를 만들어주기 위해서 " "를 이용해서 중간을 비워줌
                    }
                }
                cout << endl; //행을 만들어주기 위해 줄을 바꿔줌
            } // 좌석 전체를 확인시켜주기 위해 for문을 사용해서 배열을 만듦
            cout << "몇열, 몇번째 좌석을 예약하시겠습니까?";
            cin >> wid >> len; //입력받은 것은 차례로 행과 열에 넣어줌
            cout << "1 " << "2 " << "3 " << " " << "4 " << "5 " << "6" << endl;
            cout << "-------------" << endl;
            seat[wid - 1][len - 1] = 1;//입력받은 것을 좌석에 맞게 출력하려면 배열이 0부터 시작이기에 입력받은 것을 -1해줌.
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 6; j++) {
                    cout << seat[i][j] << " ";
                    if (j == 2) {
                        cout << " ";
                    }
                }
                cout << endl;
            }//좌석을 한번 더 출력해줌.
            break;

        case 2://2번을 누르면 아래의 출력문이 실행되도록 함
            cout << "1 " << "2 " << "3 " << " " << "4 " << "5 " << "6" << endl;
            cout << "-------------" << endl;
            cout << "현재 좌석 상태:" << endl;
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 6; j++) {
                    cout << seat[i][j] << " ";
                    if (j == 2) {
                        cout << " ";
                    }
                }
                cout << endl;
            }//현재 좌석의 상태를 보여주기 위해 저장된 좌석을 확인함

            cout << "변경할 좌석 정보(열, 번호 순서)를 입력해 주세요 : ";
            cin >> wid >> len >> wide >> lent;//현재좌석, 변경할 좌석을 차례로 입력 받음.

            if (seat[wid - 1][len - 1] != 1) {
                cout << "올바른 좌석을 입력해주세요" << endl;
            }//만약 기존 좌석이 아닌 좌석을 앞에서 선택했을 시에는 올바른 좌석을 입력하라고 말하도록 함.
            else if (seat[wide - 1][lent - 1] == 1) {
                cout << "이미 예약된 자리입니다." << endl;
            }//뒤에서 입력받을 때 이미 1인 좌석을 선택했다면 이미 예약된 자리라고 출력하도록 함.
            else {
                seat[wid - 1][len - 1] = 0;
                seat[wide - 1][lent - 1] = 1;
                cout << "좌석 변경이 완료되었습니다." << endl;
                cout << "좌석이 변경되었습니다." << endl;
                cout << "1 " << "2 " << "3 " << " " << "4 " << "5 " << "6" << endl;
                cout << "-------------" << endl;
                for (int i = 0; i < 9; i++) {
                    for (int j = 0; j < 6; j++) {
                        cout << seat[i][j] << " ";
                        if (j == 2) {
                            cout << " ";
                        }
                    }
                    cout << endl;
                }
            }//기존 좌석을 0으로 바꾸고 새로 입력받은 좌석을 1로 만든 후 다시 예약된 좌석을 전체로 띄워줌.
            break;
        default:
            cout << "올바른 숫자를 입력해 주세요." << endl;//1,2,3을 선택하지 않았다면 올바른 숫자를 입력하라고 출력함.
        }
        if (n == 3) {
            cout << "프로그램을 종료합니다." << endl;//3번을 누를 시 프로그램을 종료한다는 안내문과 함께 프로그램을 종료함.
            break;
        }

    }
}