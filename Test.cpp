using namespace std;
void Bill(float x, int y){
    if(y == 1){
        if(x<0){
            cout << "Input không hợp lệ.";
        }else{
            if(x<3.0){
                cout << x* 30000;
            }else{
                cout << x*27000;
            }
        }
    }else if(y == 0){
        if(x<0){
            cout << "Input không hợp lệ.";}
            else{
            if(x<3.0){
                cout << x* 40000;
            }else{
                cout << x*36000;
            }
        }
    }}

int main()
{
    float soGioChoi;
    int isStudent;
    // isStudent là 1 thì đối tượng là hssv còn là 0 thì là đối tượng khác.
    cin >> soGioChoi >> isStudent;
    Bill (soGioChoi,isStudent);

    return 0;
}
