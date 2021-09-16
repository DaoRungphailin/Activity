#include<stdio.h>
#include<windows.h>
#define DO(x) Beep(200, x);
#define RE(x) Beep(250, x);
#define ME(x) Beep(300, x);
#define FA(x) Beep(350, x);
#define SO(x) Beep(400, x);
#define LA(x) Beep(450, x);
#define TE(x) Beep(500, x);
#define DDO(x) Beep(550, x);
void jingle_bell()
{
    ME(300) ME(300) ME(300) Sleep(300); ME(300) ME(300) ME(300) Sleep(300); ME(300) SO(300) DO(300) RE(300) ME(300)
    Sleep(300); FA(300) FA(300) FA(300) FA(300) Sleep(300); FA(300) ME(300) ME(300) ME(200) ME(200) Sleep(300);
    ME(300) RE(300) RE(300) ME(300) Sleep(300); RE(300) SO(300) Sleep(300); FA(300) FA(300) FA(300) FA(300)
    Sleep(300); FA(300) ME(300) ME(300) ME(200) ME(200) Sleep(300); SO(300) SO(300) FA(300) RE(300) DO(500)
}
int main()
{
    jingle_bell();
}