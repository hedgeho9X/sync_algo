 #include <iostream>
using namespace std;
struct Point
{
    int x,y;
}; 
/***********加法: pointAdd */
Point pointAdd(Point p1,Point p2){
point m;
m.x = p1.x + p2.x ;
m.y = p1.y + p2.y ;
return m;

}
/*************乘法: pointMult */
int pointMult(Point p1, Point p2){

return p1.x * p2.x + p1.y * p2.y;

}
     
int main()
{
    int n;
    Point p1,p2,p3;
    scanf("%d",&n);
    while(n--){
        /********输入点信息 */
        scanf("%d%d",&p1.x,&p1.y);
        scanf("%d%d",&p2.x,&p2.y);
        /****** */
        p3=pointAdd(p1,p2);
        int res=pointMult(p1,p2);
        printf("%d %d %d\n",p3.x,p3.y,res);
    }
    return 0;
}