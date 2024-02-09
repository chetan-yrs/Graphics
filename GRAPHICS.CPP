#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<dos.h>
#include<iostream.h>
#include<math.h>
void circles_full()
{
    int s,col,max,may,i,k;
    max=getmaxx();
    may=getmaxy();
    for(col=1;col<7;col++)
    {
	 k=0;
	 setcolor(col);
	 for(i=4;i<max/2;i+=2)
	 {
	      k+=2;
	      circle(max/2,may/2,k);
	      delay(2);
	 }
	 s=k;
	 setcolor(col+2);
	 for(i=4;i<max/2;i+=2)
	 {
	      s-=2;
	      circle(max/2,may/2,s);
	      delay(2);
	 }
    }
}
void corners()
{
   int maxx,maxy,i;
   maxx=getmaxx();
   maxy=getmaxy();
   for(i=0;i<6;i++)
   {
 setfillstyle(1,i+1);
 pieslice(1,maxy,15*i,15*(i+1),100);
 setcolor(8);
 delay(100);
   }

   for(i=0;i<6;i++)
   {
 setfillstyle(1,i+1);
 pieslice(1,1,15*(18+i),15*(i+19),100);
 setcolor(8);
 delay(100);
   }

   for(i=0;i<6;i++)
   {
 setfillstyle(1,i+1);
 pieslice(maxx,1,15*(12+i),15*(i+13),100);
 setcolor(8);
 delay(100);
   }

   for(i=0;i<6;i++)
   {
 setfillstyle(1,i+1);
 pieslice(maxx,maxy,15*(6+i),15*(i+7),100);
 setcolor(8);
 delay(100);
   }
}
void corners2()
{
   int maxx,maxy,i;
   maxx=getmaxx();
   maxy=getmaxy();
   for(i=0;i<6;i++)
   {
 setfillstyle(1,i+1);
 pieslice(1,maxy,15*i,15*(i+1),100);
 setcolor(8);
   }

   for(i=0;i<6;i++)
   {
 setfillstyle(1,i+1);
 pieslice(1,1,15*(18+i),15*(i+19),100);
 setcolor(8);
   }

   for(i=0;i<6;i++)
   {
 setfillstyle(1,i+1);
 pieslice(maxx,1,15*(12+i),15*(i+13),100);
 setcolor(8);
   }

   for(i=0;i<6;i++)
   {
 setfillstyle(1,i+1);
 pieslice(maxx,maxy,15*(6+i),15*(i+7),100);
 setcolor(8);
   }
}
void tf()
 {
    int maxx=getmaxx();
    int maxy=getmaxy();
    int i;
    for(i=0;i<maxy/3+30;i++)
    {
 settextstyle(7,0,7); /*font    direction    size*/
 setcolor(1);
 outtextxy(maxx/3,i,"Welcome");
 delay(10);
 setcolor(0);
 outtextxy(maxx/3,i,"Welcome");
    }
    setcolor(1);
    outtextxy(maxx/3,i,"Welcome");
}
void tf2()
 {
    int i,maxx,maxy;
    maxx=getmaxx();
    maxy=getmaxy();
    for(i=0;i<maxx/3-30;i++)
    {
 settextstyle(7,0,7); /*font    direction    size*/
 setcolor(1);
 outtextxy(i,maxx/3-50,"&");
 delay(10);
 setcolor(0);
 outtextxy(i,maxx/3-50,"&");
    }
    setcolor(1);
    outtextxy(i,maxx/3-50,"&");

    for(i=0;i<maxy/3-60;i++)
    {
 settextstyle(7,0,7); /*font    direction    size*/
 setcolor(1);
 outtextxy(maxx/3-100,i,"Fun");
 delay(10);
 setcolor(0);
 outtextxy(maxx/3-100,i,"Fun");
    }
    setcolor(1);
    outtextxy(maxx/3-100,i,"Fun");

    for(i=maxx;i>maxx/3+30;i--)
    {
 settextstyle(7,0,7); /*font    direction    size*/
 setcolor(1);
 outtextxy(i,maxx/3+20,"Learn");
 delay(10);
 setcolor(0);
 outtextxy(i,maxx/3+20,"Learn");
     }
     setcolor(1);
     outtextxy(i,maxx/3+20,"Learn");

 }
void tf3()
 {
    int i,maxx,maxy;
    maxx=getmaxx();
    maxy=getmaxy();
    for(i=0;i<maxx/3-30;i++)
    {
 settextstyle(7,0,6); /*font    direction    size*/
 setcolor(1);
 outtextxy(i,maxx/3-50,"Using This");
 delay(10);
 setcolor(0);
 outtextxy(i,maxx/3-50,"Using This");
    }
    setcolor(1);
    outtextxy(i,maxx/3-50,"Using This");

    for(i=0;i<maxy/3-60;i++)
    {
 settextstyle(7,0,6); /*font    direction    size*/
 setcolor(1);
 outtextxy(maxx/3-100,i,"Thanks For");
 delay(10);
 setcolor(0);
 outtextxy(maxx/3-100,i,"Thanks For");
    }
    setcolor(1);
    outtextxy(maxx/3-100,i,"Thanks For");

    for(i=maxx;i>maxx/3+30;i--)
    {
 settextstyle(7,0,6); /*font    direction    size*/
 setcolor(1);
 outtextxy(i,maxx/3+20,"Software");
 delay(10);
 setcolor(0);
 outtextxy(i,maxx/3+20,"Software");
     }
     setcolor(1);
     outtextxy(i,maxx/3+20,"Software");

}
void cs()
{
   int maxx=getmaxx();
   int maxy=getmaxy();
   setcolor(2);
   setfillstyle(SOLID_FILL,3);
   circle(maxx/2,maxy/2-200,30);
   floodfill(maxx/2,maxy/2-200,2);
   delay(100);

   setcolor(4);
   setfillstyle(SOLID_FILL,2);
   circle(maxx/2,maxy/2+200,30);
   floodfill(maxx/2,maxy/2+200,4);
   delay(100);

   setcolor(3);
   setfillstyle(SOLID_FILL,1);
   circle(maxx/2-200,maxy/2,30);
   floodfill(maxx/2-200,maxy/2,3);
   delay(100);

   setcolor(1);
   setfillstyle(SOLID_FILL,4);
   circle(maxx/2+200,maxy/2,30);
   floodfill(maxx/2+200,maxy/2,1);
   delay(100);
}
void er()
 {
 int j,i,maxx,maxy;
 maxx=getmaxx();
 maxy=getmaxy();
 for(i=0;i<10;i++)
 {
     if(i%2==0)
     {
  for(j=0;j<maxx-30;j+=5)
  {
      setfillstyle(1,5);
      bar(j,i*50,j+40,(i*50)+60);
      /*left  top  right  bottom*/
      delay(10);
      setfillstyle(1,0);
      bar(j,i*50,j+40,(i*50)+60);

  }
     }

     else
     {
  for(j=maxx;j>30;j-=5)
  {
      setfillstyle(1,5);
      bar(j,i*50,j-40,(i*50)+60);
      delay(10);
      setfillstyle(1,0);
      bar(j,i*50,j-40,(i*50)+60);
   }
     }
 }
 setfillstyle(1,5);
 bar(j,i*50,j+40,(i*50)+60);
}
void er2()
 {
 int j,i,maxx,maxy;
 maxx=getmaxx();
 maxy=getmaxy();
 for(i=0;i<10;i++)
 {
     if(i%2==0)
     {
  for(j=0;j<maxx-30;j+=5)
  {
      setfillstyle(1,5);
      bar(j,i*50,j+40,(i*50)+60);
      /*left  top  right  bottom*/
      delay(5);
      setfillstyle(1,0);
      bar(j,i*50,j+40,(i*50)+60);

  }
     }

     else
     {
  for(j=maxx;j>30;j-=5)
  {
      setfillstyle(1,5);
      bar(j,i*50,j-40,(i*50)+60);
      delay(5);
      setfillstyle(1,0);
      bar(j,i*50,j-40,(i*50)+60);
   }
     }
 }
 setfillstyle(1,5);
 bar(j,i*50,j+40,(i*50)+60);
}
void ch()
 {
   int k=0,col,s,i,maxx,maxy;
   maxx=getmaxx();
   maxy=getmaxy();
   for(col=1;col<8;col++)
   {
 setcolor(col);
 for(i=4;i<maxx/2-250;i+=2)
 {
     k+=2;
     circle(maxx/2,maxy/2,k);
     delay(5);
 }
 s=k;
 setcolor(col+2);
 for(i=4;i<maxx/2-250;i+=2)
 {
     s-=2;
     circle(maxx/2,maxy/2,s);
     delay(5);
 }
   }
}
void notowords()
{
    int n;
    corners();
    do
    {
    cleardevice();
    corners2();
    int m,r1,r2,r3,r4;
    setcolor(15);
    settextstyle(1,HORIZ_DIR,4);
    setcolor(14);
    outtextxy(25,100,"Enter a number(0 to Exit):-");
    gotoxy(65,8);
    cin>>n;
    if(n==0)
	 return;
    m=n;
    char ones[][10]={"One",
		     "Two",
		     "Three",
		     "Four",
		     "Five",
		     "Six",
		     "Seven",
		     "Eight",
		     "Nine",
		     "Ten"};

    char tens[][20]={"Eleven",
		     "Twelve",
		     "Thirteen",
		     "Fourteen",
		     "Fifteen",
		     "Sixteen",
		     "Seventeen",
		     "Eighteen",
		     "Ninteen",
		     " "};

    char muptens[][20]={"Twenty",
			"Thirty",
			"Fourty",
			"Fifty",
			"Sixty",
			"Seventy",
			"Eighty",
			"Ninty"};

    char h[][20]={" Hundred",
		  " Thousand"};
    r1=m%10;
    m=m/10;
    r2=m%10;
    m=m/10;
    r3=m%10;
    m=m/10;
    r4=m%10;
    gotoxy(20,12);

    if(n<=10)
    {
	 settextstyle(4,HORIZ_DIR,5);
	 setcolor(1);
	 outtextxy(250,200,ones[n-1]);
	 getch();
    }
    if(n>10 && n<20)
    {
	 settextstyle(4,HORIZ_DIR,5);
	 setcolor(1);
	 outtextxy(170,200,tens[n-11]);
	 getch();
    }
    if(n<=99)
    {
	 settextstyle(4,HORIZ_DIR,5);
	 setcolor(1);
	 outtextxy(100,200,muptens[r2-2]);
	 outtextxy(290,200,ones[r1-1]);
	 getch();
    }
    if(n>99 && n<=999)
    {
	 settextstyle(4,HORIZ_DIR,5);
	 setcolor(1);
	 outtextxy(70,200,ones[r3-1]);
	 outtextxy(190,200,h[0]);
	 if(r2==0)
	 {
	     outtextxy(400,200,ones[r1-1]);
	     getch();
	 }
	 if(r2==1)
	 {
	      if(r1==0)
	      {
		   outtextxy(400,200,ones[9]);
		   getch();
	      }
	      outtextxy(400,200,tens[r1-1]);
	      getch();
	 }
	 else
	 {
	      outtextxy(400,200,muptens[r2-2]);
	      outtextxy(280,250,ones[r1-1]);
	      getch();
	 }
    }
    if(n>999)
    {
	 settextstyle(4,HORIZ_DIR,5);
	 setcolor(1);
	 outtextxy(60,200,ones[r4-1]);
	 outtextxy(180,200,h[1]);
	 if(r3==0)
	 {
	      if(r2==0)
	      {
		   outtextxy(425,200,ones[r1-1]);
		   getch();
	      }
	      if(r2==1)
	      {
		   if(r1==0)
		   {
			outtextxy(425,200,ones[9]);
			getch();
		   }
		   outtextxy(415,200,tens[r1-1]);
		   getch();
	      }
	      else
	      {
		   outtextxy(415,200,muptens[r2-2]);
		   outtextxy(280,250,ones[r1-1]);
		   getch();
	      }
	 }
	 else
	 {
	      outtextxy(425,200,ones[r3-1]);
	      if(r2==0)
	      {    outtextxy(100,250,h[0]);
		   outtextxy(320,250,ones[r1-1]);
		   getch();
	      }
	      if(r2==1)
	      {
		   outtextxy(100,250,h[0]);
		   if(r1==0)
		   {
			outtextxy(320,250,ones[9]);
			getch();
		   }
		   outtextxy(320,250,tens[r1-1]);
		   getch();
	      }
	      else
	      {
		   outtextxy(40,250,h[0]);
		   outtextxy(260,250,muptens[r2-2]);
		   outtextxy(460,250,ones[r1-1]);
		   getch();
	      }
	 }
    }
    }while(n!=0);
}
void table()
{
    int n,i,j=90,flag=0;
    do
    {
	 cleardevice();
	 if(flag==0)
	 {
	      corners();
	 }
	 flag++;
	 corners2();
	 char c1[5],c2[5],c3[5];
	 settextstyle(1,HORIZ_DIR,2);
	 setcolor(14);
	 outtextxy(200,getmaxy()-60,"Enter a number (0 to EXIT ) :-");
	 gotoxy(60,24);
	 cin>>n;
	 if(n==0)
	      return;
	 sprintf(c1,"%d",n);
	 setcolor(15);
	 settextstyle(0,HORIZ_DIR,6);
	 setcolor(2);
	 outtextxy(220,20,"TABLE");
	 settextstyle(1,HORIZ_DIR,3);
	 setcolor(1);
	 for(i=1;i<=10;i++)
	 {
	      sprintf(c2,"%d",i);
	      sprintf(c3,"%d",n*i);
	      outtextxy(170,j,c1);
	      outtextxy(240,j,"X");
	      outtextxy(290,j,c2);
	      outtextxy(340,j,"=");
	      outtextxy(390,j,c3);
	      delay(200);
	      j=j+30;
	 }
	 getch();
	 j=90;
    }while(n!=0);
}
void l1(int x1,int x2)
{
    int x=350,i;
    setcolor(2);
    for(i=1;i<=x1;i++)
    {
	 outtextxy(x,180,"|");
	 x=x+10;
	 delay(350);
    }
    x=350;
    for(i=1;i<=x2;i++)
    {
	 outtextxy(x,225,"|");
	 x=x+10;
	 delay(350);
    }
    x=350;
    setcolor(12);
    for(i=1;i<=x1;i++)
    {
	 outtextxy(x,180,"|");
	 x=x+10;
	 delay(350);
    }
    x=350;
    for(i=1;i<=x2;i++)
    {
	 outtextxy(x,225,"|");
	 x=x+10;
	 delay(350);
    }
}
void l2()
{
    int x=350,i;
    setcolor(6);
    for(i=1;i<=10;i++)
    {
	 outtextxy(x,180,"|");
	 x=x+10;
    }
    x=350;
    for(i=1;i<=10;i++)
    {
	 outtextxy(x,225,"|");
	 x=x+10;
    }
}
void s(int n1,int n2)
{

    int x1,x2,x3,i,x4;
    char c1[5],c2[5],c3[5];
    setcolor(1);
    if((n1>99 && n2<10) || (n1<10 && n2>99))
    {
	 if(n1<n2)
	 {
	      x1=n1;
	      n1=n2;
	      n2=x1;
	 }
	 sprintf(c1,"%d",n1);
	 sprintf(c2,"%d",n2);
	 settextstyle(1,HORIZ_DIR,5);
	 setcolor(1);
	 outtextxy(240,180,c1);
	 delay(350);
	 outtextxy(300,225,c2);
	 delay(350);
	 outtextxy(210,225,"+");
	 delay(350);
	 line(230,280,350,280);
	 line(230,325,350,325);
	 x1=n1%10;
	 x2=n2%10;
	 l1(x1,x2);
	 if((x1+x2)>=10)
	 {
	      x3=(x1+x2)%10;
	      delay(350);
	      setcolor(1);
	      sprintf(c1,"%d",x3);
	      outtextxy(300,280,c1);
	      delay(350);
	      setcolor(2);
	      outtextxy(270,140,"1");
	      delay(350);
	      setcolor(12);
	      outtextxy(270,140,"1");
	      x1=n1/10;
	      x1=x1%10;
	      setcolor(1);
	      delay(350);
	      sprintf(c1,"%d",x1+1);
	      outtextxy(270,280,c1);
	      x1=n1/100;
	      delay(350);
	      sprintf(c1,"%d",x1);
	      outtextxy(240,280,c1);
	      l2();
	      return;
	 }
	 else
	 {
	      x1=n1%10;
	      x2=n2;
	      x3=x1+x2;
	      delay(350);
	      setcolor(1);
	      sprintf(c1,"%d",x3);
	      outtextxy(300,280,c1);
	      x1=n1/10;
	      sprintf(c1,"%d",x1);
	      delay(350);
	      outtextxy(240,280,c1);
	      l2();
	      return;
	 }
    }
    if(n1>99 && n2>99)
    {
	 sprintf(c1,"%d",n1);
	 sprintf(c2,"%d",n2);
	 settextstyle(1,HORIZ_DIR,5);
	 setcolor(1);
	 outtextxy(240,180,c1);
	 delay(350);
	 outtextxy(240,225,c2);
	 delay(350);
	 outtextxy(210,225,"+");
	 delay(350);
	 line(210,280,320,280);
	 line(210,325,320,325);
	 delay(350);
	 x1=n1%10;
	 x2=n2%10;
	 int x=350;
	 l1(x1,x2);
	 delay(350);
	 x3=(x1+x2)%10;
	 x4=x1+x2;
	 setcolor(1);
	 sprintf(c1,"%d",x3);
	 outtextxy(300,280,c1);
	 if(x4>=10)
	 {
	      setcolor(2);
	      delay(350);
	      outtextxy(270,140,"1");
	 }
	 setcolor(6);
	 x=350;
	 l2();
	 x1=n1/10;
	 x1=x1%10;
	 x2=n2/10;
	 x2=x2%10;
	 x=350;
	 l1(x1,x2);
	 if(x4>10)
	 {
	      setcolor(12);
	      delay(350);
	      outtextxy(270,140,"1");
	      x3=x1+x2;
	      x4=x3;
	      x3=x3%10;
	      setcolor(1);
	      sprintf(c1,"%d",x3+1);
	      outtextxy(270,280,c1);
	 }
	 else
	 {
	      setcolor(1);
	      delay(350);
	      x3=x1+x2;
	      x4=x3;
	      sprintf(c1,"%d",x3);
	      outtextxy(270,280,c1);
	 }
	 setcolor(6);
	 outtextxy(270,140,"1");
	 x=350;
	 l2();
	 x1=n1/100;
	 x2=n2/100;
	 if(x4>=10)
	 {
	      delay(350);
	      setcolor(2);
	      outtextxy(240,140,"1");
	 }
	 l1(x1,x2);
	 if(x4>=10)
	 {
	      delay(350);
	      setcolor(12);
	      outtextxy(240,140,"1");
	      setcolor(1);
	      if((x1+x2)+1 < 10)
	      {
		   x3=x1+x2+1;
		   sprintf(c1,"%d",x3);
		   delay(350);
		   outtextxy(240,280,c1);
		   return;
	      }
	      else
	      {
		   x3=x1+x2+1;
		   sprintf(c1,"%d",x3);
		   delay(350);
		   outtextxy(210,280,c1);
		   return;
	      }
	 }
	 else
	 {
	      if((x1+x2) < 10)
	      {
		   x3=x1+x2;
		   sprintf(c1,"%d",x3);
		   delay(350);
		   setcolor(1);
		   outtextxy(240,280,c1);
	      }
	      else
	      {
		   x3=x1+x2;
		   sprintf(c1,"%d",x3);
		   delay(350);
		   outtextxy(210,280,c1);
	      }
	 }
	 setcolor(6);
	 outtextxy(240,140,"1");
	 l2();
	 return;
    }
    if((n1>99 && n2<99) || (n1<99 && n2>99))
    {
	 if(n2>n1)
	 {
	      x1=n1;
	      n1=n2;
	      n2=x1;
	 }
	 sprintf(c1,"%d",n1);
	 sprintf(c2,"%d",n2);
	 settextstyle(1,HORIZ_DIR,5);
	 setcolor(1);
	 outtextxy(240,180,c1);
	 delay(350);
	 outtextxy(270,225,c2);
	 delay(350);
	 outtextxy(210,225,"+");
	 delay(350);
	 line(210,280,320,280);
	 line(210,325,320,325);
	 delay(350);
	 x1=n1%10;
	 x2=n2%10;
	 int x=350;
	 l1(x1,x2);
	 delay(350);
	 x3=(x1+x2)%10;
	 x4=x1+x2;
	 setcolor(1);
	 sprintf(c1,"%d",x3);
	 outtextxy(300,280,c1);
	 if(x4>=10)
	 {
	      setcolor(2);
	      delay(350);
	      outtextxy(270,140,"1");
	 }
	 l2();
	 x1=n1/10;
	 x1=x1%10;
	 x2=n2/10;
	 x2=x2%10;
	 x=350;
	 l1(x1,x2);
	 if(x4>10)
	 {
	      setcolor(12);
	      delay(350);
	      outtextxy(270,140,"1");
	      x3=x1+x2;
	      x4=x3;
	      x3=x3%10;
	      setcolor(1);
	      sprintf(c1,"%d",x3+1);
	      outtextxy(270,280,c1);
	 }
	 else
	 {
	      setcolor(1);
	      delay(350);
	      x3=x1+x2;
	      x4=x3;
	      sprintf(c1,"%d",x3);
	      outtextxy(270,280,c1);
	 }
	 setcolor(6);
	 outtextxy(270,140,"1");
	 x=350;
	 l2();
	 x1=n1/100;
	 if(x4>=10)
	 {
	      delay(350);
	      setcolor(2);
	      outtextxy(240,140,"1");
	 }
	 x=350;
	 for(i=1;i<=x1;i++)
	 {
	      setcolor(2);
	      outtextxy(x,180,"|");
	      x=x+10;
	      delay(350);
	 }
	 x=350;
	 for(i=1;i<=x1;i++)
	 {
	      setcolor(12);
	      outtextxy(x,180,"|");
	      x=x+10;
	      delay(350);
	 }
	 if(x4>=10)
	 {
	      delay(350);
	      setcolor(12);
	      outtextxy(240,140,"1");
	      setcolor(1);
	      if(x1+1 < 10)
	      {
		   x3=x1+1;
		   sprintf(c1,"%d",x3);
		   delay(350);
		   outtextxy(240,280,c1);
	      }
	      else
	      {
		   x3=x1+1;
		   sprintf(c1,"%d",x3);
		   delay(350);
		   outtextxy(210,280,c1);
	      }
	 }
	 else
	 {
	      if(x1 < 10)
	      {
		   x3=x1;
		   sprintf(c1,"%d",x3);
		   delay(350);
		   setcolor(1);
		   outtextxy(240,280,c1);
	      }
	      else
	      {
		   x3=x1;
		   sprintf(c1,"%d",x3);
		   delay(350);
		   outtextxy(210,280,c1);
	      }
	 }
	 setcolor(6);
	 outtextxy(240,140,"1");
	 l2();
	 return;
    }
    if(n1<10  && n2<10)
    {
	 sprintf(c1,"%d",n1);
	 sprintf(c2,"%d",n2);
	 settextstyle(1,HORIZ_DIR,5);
	 setcolor(1);
	 outtextxy(300,180,c1);
	 delay(350);
	 outtextxy(300,225,c2);
	 delay(350);
	 outtextxy(250,225,"+");
	 delay(350);
	 line(250,280,340,280);
	 line(250,325,340,325);
	 delay(350);
	 x1=n1%10;
	 x2=n2%10;
	 l1(x1,x2);
	 x3=(x1+x2)%10;
	 delay(350);
	 setcolor(1);
	 sprintf(c3,"%d",x3);
	 outtextxy(300,280,c3);
	 x3=(x1+x2)/10;
	 if(n1+n2>10)
	 {
	      x1=(n1+n2)/10;
	      delay(350);
	      setcolor(1);
	      sprintf(c3,"%d",x3);
	      outtextxy(270,280,c3);
	 }
	 l2();
	 return;
    }
    if(n1<10  || n2<10)
    {
	 if(n1<10)
	 {
	      x1=n1;
	      n1=n2;
	      n2=x1;
	 }
	 sprintf(c1,"%d",n1);
	 sprintf(c2,"%d",n2);
	 settextstyle(1,HORIZ_DIR,5);
	 setcolor(1);
	 outtextxy(270,180,c1);
	 delay(350);
	 outtextxy(300,225,c2);
	 delay(350);
	 outtextxy(240,225,"+");
	 delay(350);
	 line(230,280,350,280);
	 line(230,325,350,325);
	 delay(350);
	 x1=n1%10;
	 x2=n2%10;
	 l1(x1,x2);
	 x3=(x1+x2)%10;
	 delay(350);
	 setcolor(1);
	 sprintf(c3,"%d",x3);
	 outtextxy(300,280,c3);
	 l2();
	 x3=(x1+x2)/10;
	 int j;
	 j=n1/10;
	 delay(350);
	 if(x3==1)
	 {
	      setcolor(2);
	      outtextxy(270,140,"1");
	 }
	 delay(350);
	 int x=350;
	 for(i=1;i<=j;i++)
	 {
	      setcolor(2);
	      outtextxy(x,180,"|");
	      x=x+10;
	      delay(350);
	 }
	 delay(350);
	 setcolor(12);
	 outtextxy(270,140,"1");
	 delay(350);
	 x=350;
	 for(i=1;i<=j;i++)
	 {
	      setcolor(12);
	      outtextxy(x,180,"|");
	      x=x+10;
	      delay(350);
	 }
	 delay(350);
	 x1=n1/10;
	 x3=x1+x3;
	 delay(350);
	 setcolor(1);
	 sprintf(c3,"%d",x3);
	 outtextxy(270,280,c3);
	 l2();
	 return;
    }
    if(n1>=10 && n2>=10)
    {
	 sprintf(c1,"%d",n1);
	 sprintf(c2,"%d",n2);
	 settextstyle(1,HORIZ_DIR,5);
	 setcolor(1);
	 outtextxy(270,180,c1);
	 delay(350);
	 outtextxy(270,225,c2);
	 delay(350);
	 outtextxy(240,225,"+");
	 delay(350);
	 line(230,280,350,280);
	 line(230,325,350,325);
	 delay(350);
	 x1=n1%10;
	 x2=n2%10;
	 l1(x1,x2);
	 x3=(x1+x2)%10;
	 delay(350);
	 setcolor(1);
	 sprintf(c3,"%d",x3);
	 outtextxy(300,280,c3);
	 x3=(x1+x2)/10;
	 if(x3==1)
	 {
	      setcolor(2);
	      outtextxy(270,140,"1");
	 }
	 l2();
	 x1=n1/10;
	 x2=n2/10;
	 int x=350;
	 for(i=1;i<=x1;i++)
	 {
	      setcolor(2);
	      outtextxy(x,180,"|");
	      x=x+10;
	      delay(350);
	 }
	 x=350;
	 for(i=1;i<=x2;i++)
	 {
	      setcolor(2);
	      outtextxy(x,225,"|");
	      x=x+10;
	      delay(350);
	 }
	 setcolor(12);
	 outtextxy(270,140,"1");
	 delay(350);
	 x=350;
	 for(i=1;i<=x1;i++)
	 {
	      setcolor(12);
	      outtextxy(x,180,"|");
	      x=x+10;
	      delay(350);
	 }
	 x=350;
	 for(i=1;i<=x2;i++)
	 {
	      setcolor(12);
	      outtextxy(x,225,"|");
	      x=x+10;
	      delay(350);
	 }
	 x3=x1+x2+x3;
	 delay(350);
	 setcolor(1);
	 sprintf(c3,"%d",x3);
	 if(x3<10)
	      outtextxy(270,280,c3);
	 else
	      outtextxy(240,280,c3);
	 setcolor(6);
	 outtextxy(270,140,"1");
	 l2();
	 return;
    }

}
void sum()
{
    cleardevice();
    corners();
    int n1,n2;
    do
    {
    cleardevice();
    setcolor(15);
    corners2();
    settextstyle(1,HORIZ_DIR,4);
    setcolor(14);
    outtextxy(25,100,"Enter 1st Number :-");
    gotoxy(48,8);
    cin>>n1;
    if(n1==0)
    {
	 return;
    }
    outtextxy(25,160,"Enter 2nd Number :-");
    gotoxy(48,12);
    cin>>n2;
    cleardevice();
    setcolor(15);
    settextstyle(0,HORIZ_DIR,5);
    setcolor(2);
    outtextxy(70,20,"Sum of 2 No.s");
    s(n1,n2);
    getch();
    }while(n1!=0);
}
void sub(int n1,int n2)
{
    corners();
    int x1,x2,x3,i,x4;
    char c1[5],c2[5],c3[5];
    setcolor(1);
    if(n1==n2)
    {
	 if(n1>10)
	 {
	      sprintf(c1,"%d",n1);
	      sprintf(c2,"%d",n2);
	      settextstyle(1,HORIZ_DIR,5);
	      setcolor(1);
	      outtextxy(270,180,c1);
	      delay(350);
	      outtextxy(270,225,c2);
	      delay(350);
	      outtextxy(240,225,"-");
	      delay(350);
	      line(240,280,330,280);
	      line(240,325,330,325);
	      x1=n1%10;
	      x2=n2%10;
	      l1(x1,x2);
	      setcolor(1);
	      outtextxy(300,280,"0");
	      l2();
	      x1=n1/10;
	      x2=n2/10;
	      l1(x1,x2);
	      setcolor(1);
	      outtextxy(270,280,"0");
	      l2();
	 }
	 else
	 {
	      sprintf(c1,"%d",n1);
	      sprintf(c2,"%d",n2);
	      settextstyle(1,HORIZ_DIR,5);
	      setcolor(1);
	      outtextxy(300,180,c1);
	      delay(350);
	      outtextxy(300,225,c2);
	      delay(350);
	      outtextxy(270,225,"-");
	      delay(350);
	      line(270,280,330,280);
	      line(270,325,330,325);
	      x1=n1%10;
	      x2=n2%10;
	      l1(x1,x2);
	      setcolor(1);
	      outtextxy(300,280,"0");
	      l2();
	 }
	 return;
    }
    if(n1<10 && n2<10)
    {
	 x1=n1;
	 x2=n2;
	 sprintf(c1,"%d",n1);
	 sprintf(c2,"%d",n2);
	 settextstyle(1,HORIZ_DIR,5);
	 setcolor(1);
	 outtextxy(300,180,c1);
	 delay(350);
	 outtextxy(300,225,c2);
	 delay(350);
	 outtextxy(270,225,"-");
	 delay(350);
	 line(270,280,330,280);
	 line(270,325,330,325);
	 l1(x1,x2);
	 x3=x1-x2;
	 sprintf(c1,"%d",x3);
	 setcolor(1);
	 if(x2<0)
	 {
	      outtextxy(270,280,c1);
	 }
	 else
	 {
	      outtextxy(270,280,c1);
	 }
	 setcolor(3);
	 l2();
	 return;
    }
    if(n1>10 && n2>10)
    {
	 sprintf(c1,"%d",n1);
	 sprintf(c2,"%d",n2);
	 settextstyle(1,HORIZ_DIR,5);
	 setcolor(1);
	 outtextxy(270,180,c1);
	 delay(350);
	 outtextxy(270,225,c2);
	 delay(350);
	 outtextxy(240,225,"-");
	 delay(350);
	 line(240,280,330,280);
	 line(240,325,330,325);
	 if(n1>n2)
	 {
	      x1=n1%10;
	      x2=n2%10;
	      if(x2>x1)
	      {
		   x3=n1/10;
		   delay(350);
		   setcolor(12);
		   outtextxy(270,180,"/");
		   delay(350);
		   sprintf(c1,"%d",x3-1);
		   outtextxy(270,140,c1);
		   l1(x1,x2);
		   delay(350);
		   x3=(n1-n2)%10;
		   sprintf(c1,"%d",x3);
		   setcolor(1);
		   outtextxy(300,280,c1);
		   l2();
		   x1=(n1/10)-1;
		   x2=n2/10;
		   l1(x1,x2);
		   x3=(n1-n2)/10;
		   sprintf(c1,"%d",x3);
		   delay(350);
		   setcolor(1);
		   outtextxy(270,280,c1);
		   l2();
		   setcolor(3);
		   outtextxy(270,180,"/");
		   sprintf(c1,"%d",(n1/10)-1);
		   outtextxy(270,140,c1);
		   return;
	      }
	      else
	      {
		   x1=n1%10;
		   x2=n2%10;
		   l1(x1,x2);
		   x3=x1-x2;
		   setcolor(1);
		   delay(350);
		   sprintf(c1,"%d",x3);
		   outtextxy(300,280,c1);
		   l2();
		   x1=n1/10;
		   x2=n2/10;
		   l1(x1,x2);
		   x3=x1-x2;
		   setcolor(1);
		   delay(350);
		   sprintf(c1,"%d",x3);
		   outtextxy(270,280,c1);
		   l2();
		   return;
	      }
	 }
	 else
	 {
	      x1=n1%10;
	      x2=n2%10;
	      if(x2>x1)
	      {
		   x3=n1/10;
		   delay(350);
		   delay(350);
		   l1(x1,x2);
		   delay(350);
		   x3=-(n1-n2)%10;
		   sprintf(c1,"%d",x3);
		   setcolor(1);
		   outtextxy(300,280,c1);
		   l2();
		   x1=n1/10;
		   x2=n2/10;
		   if(x1==x2)
		   {
			l1(x1,x2);
			setcolor(1);
			delay(350);
			outtextxy(270,280,"-");
			l2();
			return;
		   }
		   l1(x1,x2);
		   x3=(n1-n2)/10;
		   sprintf(c1,"%d",x3);
		   delay(350);
		   setcolor(1);
		   outtextxy(240,280,c1);
		   l2();
		   setcolor(3);
		   outtextxy(270,180,"/");
		   sprintf(c1,"%d",(n1/10)-1);
		   outtextxy(270,140,c1);
		   return;
	      }
	      else
	      {
		   x1=n1%10;
		   x2=n2%10;
		   l1(x1,x2);
		   x3=x1-x2;
		   setcolor(1);
		   delay(350);
		   sprintf(c1,"%d",x3);
		   outtextxy(300,280,c1);
		   l2();
		   x1=n1/10;
		   x2=n2/10;
		   l1(x1,x2);
		   x3=x1-x2;
		   setcolor(1);
		   delay(350);
		   sprintf(c1,"%d",x3);
		   outtextxy(240,280,c1);
		   l2();
		   return;
	      }
	 }
    }
    if((n1>10 && n2<10) || (n2>10 && n1<10))
    {
	 if(n1<n2)
	 {
	      x1=n1;
	      x2=n2;
	      sprintf(c1,"%d",n1);
	      sprintf(c2,"%d",n2);
	      settextstyle(1,HORIZ_DIR,5);
	      setcolor(1);
	      outtextxy(300,180,c1);
	      delay(350);
	      outtextxy(270,225,c2);
	      delay(350);
	      outtextxy(240,225,"-");
	      delay(350);
	      line(240,280,330,280);
	      line(240,325,330,325);
	      x3=x1-x2;
	      x2=x2%10;
	      l1(x1,x2);
	      setcolor(1);
	      sprintf(c3,"%d",x3);
	      outtextxy(240,280,c3);
	      return;
	 }
	 else
	 {
	      x1=n1;
	      x2=n2;
	      sprintf(c1,"%d",n1);
	      sprintf(c2,"%d",n2);
	      settextstyle(1,HORIZ_DIR,5);
	      setcolor(1);
	      outtextxy(270,180,c1);
	      delay(350);
	      outtextxy(300,225,c2);
	      delay(350);
	      outtextxy(240,225,"-");
	      delay(350);
	      line(240,280,330,280);
	      line(240,325,330,325);
	      i=x1%10;
	      if(i<x2)
	      {
		   x4=x1/10;
		   setcolor(12);
		   delay(350);
		   sprintf(c1,"%d",x4-1);
		   outtextxy(270,180,"/");
		   outtextxy(270,140,c1);
		   x3=x1-x2;
		   x4=x3%10;
		   delay(350);
		   setcolor(1);
		   sprintf(c1,"%d",x4);
		   outtextxy(300,280,c1);
		   x4=x3/10;
		   delay(350);
		   sprintf(c1,"%d",(x1/10)-1);
		   setcolor(3);
		   outtextxy(270,140,c1);
		   outtextxy(270,180,"/");
		   setcolor(1);
		   sprintf(c1,"%d",x4);
		   outtextxy(270,280,c1);
		   return;
	      }
	      else
	      {
		   x1=n1%10;
		   x2=n2;
		   l1(x1,x2);
		   x3=x1-x2;
		   setcolor(1);
		   sprintf(c1,"%d",x3);
		   outtextxy(300,280,c1);
		   delay(350);
		   x1=n1/10;
		   sprintf(c1,"%d",x1);
		   outtextxy(270,280,c1);
		   l2();
		   return;
	      }
	 }
    }
}
void subtraction()
{
    cleardevice();
    corners();
    int n1,n2;
    do
    {
    cleardevice();
    corners2();
    settextstyle(1,HORIZ_DIR,4);
    setcolor(2);
    outtextxy(25,100,"Enter 1st Number :-");
    gotoxy(48,8);
    cin>>n1;
    if(n1==0)
    {
	 return;
    }
    outtextxy(25,160,"Enter 2nd Number :-");
    gotoxy(48,12);
    cin>>n2;
    cleardevice();
    setcolor(15);
    corners();
    settextstyle(0,HORIZ_DIR,5);
    setcolor(14);
    outtextxy(120,20,"Subtraction");
    sub(n1,n2);
    getch();
    }while(n1!=0);
}
void mup(int n1,int n2)
{
    int x1,x2,x3,i,x4,x5;
    char c1[5],c2[5],c3[5];
    setcolor(1);
    if(n1<10 && n2<10)
    {
	 x1=n1;
	 x2=n2;
	 sprintf(c1,"%d",n1);
	 sprintf(c2,"%d",n2);
	 settextstyle(1,HORIZ_DIR,5);
	 setcolor(1);
	 outtextxy(300,180,c1);
	 delay(350);
	 outtextxy(300,225,c2);
	 delay(350);
	 outtextxy(260,225,"X");
	 delay(350);
	 line(270,280,330,280);
	 line(270,325,330,325);
	 x3=n1*n2;
	 if(x3<10)
	 {
	      delay(350);
	      sprintf(c1,"%d",x3);
	      outtextxy(300,280,c1);
	 }
	 else
	 {
	      delay(350);
	      sprintf(c1,"%d",x3);
	      outtextxy(270,280,c1);
	 }
    }
    if((n1>10 && n2<10) || (n1<10 && n2>10))
    {
	 if(n2>n1)
	 {
	      x1=n1;
	      n1=n2;
	      n2=x1;
	 }
	 x1=n1;
	 x2=n2;
	 sprintf(c1,"%d",n1);
	 sprintf(c2,"%d",n2);
	 settextstyle(1,HORIZ_DIR,5);
	 setcolor(1);
	 outtextxy(270,180,c1);
	 delay(350);
	 outtextxy(300,225,c2);
	 delay(350);
	 outtextxy(260,225,"X");
	 delay(350);
	 line(240,280,330,280);
	 line(240,325,330,325);
	 x1=n1%10;
	 x3=x1*x2;
	 if(x3>=10)
	 {
	      x1=x3;
	      x3=x3%10;
	      x4=x1/10;
	      delay(350);
	      sprintf(c1,"%d",x3);
	      outtextxy(300,280,c1);
	      sprintf(c1,"%d",x4);
	      setcolor(2);
	      delay(350);
	      outtextxy(270,140,c1);
	      x1=n1/10;
	      x3=(x1*x2)+x4;
	      setcolor(12);
	      sprintf(c1,"%d",x4);
	      outtextxy(270,140,c1);
	      if(x3<10)
	      {
		   setcolor(1);
		   delay(350);
		   sprintf(c1,"%d",x3);
		   outtextxy(270,280,c1);
	      }
	      else
	      {
		   setcolor(1);
		   delay(350);
		   sprintf(c1,"%d",x3);
		   outtextxy(240,280,c1);
	      }
	      setcolor(6);
	      sprintf(c1,"%d",x4);
	      outtextxy(270,140,c1);
	 }
	 else
	 {
	      setcolor(1);
	      sprintf(c1,"%d",x3);
	      outtextxy(300,280,c1);
	      x1=n1/10;
	      x3=x1*x2;
	      if(x3<10)
	      {
		   sprintf(c1,"%d",x3);
		   outtextxy(270,280,c1);
	      }
	      else
	      {
		   sprintf(c1,"%d",x3);
		   outtextxy(240,280,c1);
	      }
	 }
    }
    if(n1>10 &&n2>10)
    {
	 x1=n1;
	 x2=n2;
	 sprintf(c1,"%d",n1);
	 sprintf(c2,"%d",n2);
	 settextstyle(1,HORIZ_DIR,5);
	 setcolor(1);
	 outtextxy(270,180,c1);
	 delay(350);
	 outtextxy(270,225,c2);
	 delay(350);
	 outtextxy(230,225,"X");
	 delay(350);
	 line(200,280,330,280);
	 x5=x2%10;
	 x1=n1%10;
	 x3=x1*x5;
	 if(x3>=10)
	 {
	      x1=x3;
	      x3=x3%10;
	      x4=x1/10;
	      delay(350);
	      sprintf(c1,"%d",x3);
	      outtextxy(300,280,c1);
	      sprintf(c1,"%d",x4);
	      setcolor(2);
	      delay(350);
	      outtextxy(270,140,c1);
	      x1=n1/10;
	      x3=(x1*x5)+x4;
	      setcolor(12);
	      sprintf(c1,"%d",x4);
	      outtextxy(270,140,c1);
	      if(x3<10)
	      {
		   setcolor(1);
		   delay(350);
		   sprintf(c1,"%d",x3);
		   outtextxy(270,280,c1);
	      }
	      else
	      {
		   setcolor(1);
		   delay(350);
		   sprintf(c1,"%d",x3);
		   outtextxy(240,280,c1);
	      }
	      delay(350);
	      setcolor(6);
	      sprintf(c1,"%d",x4);
	      outtextxy(270,140,c1);
	 }
	 else
	 {
	      setcolor(1);
	      sprintf(c1,"%d",x3);
	      outtextxy(300,280,c1);
	      x1=n1/10;
	      x3=x1*x5;
	      delay(350);
	      if(x3<10)
	      {
		   sprintf(c1,"%d",x3);
		   outtextxy(270,280,c1);
	      }
	      else
	      {
		   sprintf(c1,"%d",x3);
		   outtextxy(240,280,c1);
	      }
	 }
	 setcolor(1);
	 outtextxy(300,325,"X");
	 x5=x2/10;
	 x1=n1%10;
	 x3=x1*x5;
	 if(x3>=10)
	 {
	      x1=x3;
	      x3=x3%10;
	      x4=x1/10;
	      delay(350);
	      sprintf(c1,"%d",x3);
	      outtextxy(270,325,c1);
	      sprintf(c1,"%d",x4);
	      setcolor(2);
	      delay(350);
	      outtextxy(240,140,c1);
	      x1=n1/10;
	      x3=(x1*x5)+x4;
	      setcolor(12);
	      sprintf(c1,"%d",x4);
	      outtextxy(240,140,c1);
	      if(x3<10)
	      {
		   setcolor(1);
		   delay(350);
		   sprintf(c1,"%d",x3);
		   outtextxy(240,325,c1);
	      }
	      else
	      {
		   setcolor(1);
		   delay(350);
		   sprintf(c1,"%d",x3);
		   outtextxy(210,325,c1);
	      }
	      delay(350);
	      setcolor(6);
	      sprintf(c1,"%d",x4);
	      outtextxy(240,140,c1);
	 }
	 else
	 {
	      setcolor(1);
	      delay(350);
	      sprintf(c1,"%d",x3);
	      outtextxy(270,325,c1);
	      x1=n1/10;
	      x3=x1*x5;
	      if(x3<10)
	      {
		   delay(350);
		   sprintf(c1,"%d",x3);
		   outtextxy(240,325,c1);
	      }
	      else
	      {
		   delay(350);
		   sprintf(c1,"%d",x3);
		   outtextxy(210,325,c1);
	      }
	 }
	 setcolor(1);
	 line(200,375,330,375);
	 delay(350);
	 x3=n1*n2;
	 if(x3<1000)
	 {
	      sprintf(c1,"%d",x3);
	      outtextxy(240,380,c1);
	 }
	 else
	 {
	      sprintf(c1,"%d",x3);
	      outtextxy(210,380,c1);
	 }

    }
}
void multiplication()
{
    cleardevice();
    corners();
    int n1,n2;
    do
    {
    cleardevice();
    corners2();
    setcolor(15);
    settextstyle(1,HORIZ_DIR,4);
    setcolor(14);
    outtextxy(25,100,"Enter 1st Number :-");
    gotoxy(48,8);
    cin>>n1;
    if(n1==0)
    {
	 return;
    }
    outtextxy(25,160,"Enter 2nd Number :-");
    gotoxy(48,12);
    cin>>n2;
    cleardevice();
    settextstyle(0,HORIZ_DIR,5);
    setcolor(2);
    outtextxy(40,20,"Multiplication");
    mup(n1,n2);
    getch();
    }while(n1!=0);
}
void count(int n1)
{
    char c1[5];
    int i,j,k=1,l=1;
    int x=40,y=240;
    int flag=1;
    sprintf(c1,"%d",n1);
    setcolor(6);
    settextstyle(1,HORIZ_DIR,9);
    outtextxy(20,60,c1);
    char ones[][10]={"One",
		     "Two",
		     "Three",
		     "Four",
		     "Five",
		     "Six",
		     "Seven",
		     "Eight",
		     "Nine",
		     "Ten"};

    char tens[][20]={"Eleven",
		     "Twelve",
		     "Thirteen",
		     "Fourteen",
		     "Fifteen",
		     "Sixteen",
		     "Seventeen",
		     "Eighteen",
		     "Ninteen",
		     " "};

    char muptens[][20]={"Twenty",
			"Thirty",
			"Fourty",
			"Fifty",
			"Sixty",
			"Seventy",
			"Eighty",
			"Ninty"};
    if(n1<10)
    {
	 settextstyle(1,HORIZ_DIR,4);
	 setcolor(1);
	 outtextxy(100,120,ones[n1-1]);
    }
    if(n1==10)
    {
	 settextstyle(1,HORIZ_DIR,4);
	 setcolor(1);
	 outtextxy(150,120,"Ten");
    }
    if(n1>10 && n1<19)
    {
	 settextstyle(1,HORIZ_DIR,4);
	 setcolor(1);
	 outtextxy(150,120,tens[n1-11]);
    }
    int r1=n1%10;
    int r2=n1/10;
    if(n1>=20 && n1<=99)
    {
	 settextstyle(1,HORIZ_DIR,4);
	 setcolor(1);
	 outtextxy(150,120,muptens[r2-2]);
	 outtextxy(290,120,ones[r1-1]);
    }
    if(n1==100)
    {
	 settextstyle(1,HORIZ_DIR,4);
	 setcolor(1);
	 outtextxy(150,120,"Hundred ");
    }
    if(n1<=5)
    {
	 if(n1==1)
	 {
	      int x=300;
	      int y=300;
	      int z=40;
	      setcolor(12);
	      circle(x,y,100+z);
	      setcolor(5);
	      arc(x+100+z,y+100+z,90,180,100+z);
	      arc(x-100-z,y-100-z,270,360,100+z);
	 }
	 if(n1==2)
	 {
	      int x=200;
	      int y=300;
	      int z=-20;
	    for(i=1;i<=n1;i++)
	    {
	      setcolor(12);
	      circle(x,y,100+z);
	      setcolor(5);
	      arc(x+100+z,y+100+z,90,180,100+z);
	      arc(x-100-z,y-100-z,270,360,100+z);
	      x=x+200;
	    }
	  }
	  if(n1==3)
	  {
	    int x=100;
	    int y=300;
	    int z=-20;
	    for(i=1;i<=n1;i++)
	    {
	      setcolor(12);
	      circle(x,y,100+z);
	      setcolor(5);
	      arc(x+100+z,y+100+z,90,180,100+z);
	      arc(x-100-z,y-100-z,270,360,100+z);
	      x=x+200;
	    }
	  }
	  if(n1==4)
	  {
	    int x=100;
	    int y=300;
	    int z=-30;
	    for(i=1;i<=n1;i++)
	    {
	      setcolor(12);
	      circle(x,y,100+z);
	      setcolor(5);
	      arc(x+100+z,y+100+z,90,180,100+z);
	      arc(x-100-z,y-100-z,270,360,100+z);
	      x=x+150;
	    }
	  }
	  if(n1==5)
	  {
	    int x=70;
	    int y=300;
	    int z=-45;
	    for(i=1;i<=n1;i++)
	    {
	      setcolor(12);
	      circle(x,y,100+z);
	      setcolor(5);
	      arc(x+100+z,y+100+z,90,180,100+z);
	      arc(x-100-z,y-100-z,270,360,100+z);
	      x=x+120;
	    }
	  }

    }
    else
    {
    for(i=1;i<=n1;i++)
    {

	 if(n1>5 && n1<=21)
	 {
	    if(n1%2==0)
	    {
	      if(i==1)
		   x=60;
	      for(j=1;j<=40;)
	      {
		   circle(x,y,j);
		   j=j+1;
	      }
	      if(k==3)
		   ++k;
	      if(k==15)
		   k=1;
	      setcolor(k);
	      k++;
	      x=x+85;
	      if(x>=getmaxx()-30)
	      {
		   x=60;
		   y=y+90;
	      }
	    }
	    else
	    {
	      if(i==1)
		   x=70;
	      for(j=1;j<=40;)
	      {
		   rectangle(x-20-j,y-20-j,x+20-j,y+20-j);
		   j=j+1;
	      }
	      if(k==3)
		   ++k;
	      if(k==15)
		   k=1;
	      setcolor(k);
	      k++;
	      x=x+85;
	      if(x>=getmaxx()-30)
	      {
		   x=70;
		   y=y+90;
	      }
	    }
	 }
	 else if(n1>21 && n1<=40)
	 {
	    if(n1%2==0)
	    {
	      if(i==1)
		   x=40;
	      for(j=1;j<=40;)
	      {
		   setcolor(12);
		   arc(x,y,315,225,j/2);
		   setcolor(5);
		   arc(x,y,225,315,j);
		   j=j+1;
	      }
	      if(k==3)
		   ++k;
	      if(k==15)
		   k=1;
	      setcolor(k);
	      k++;
	      x=x+58;
	      if(x>=getmaxx()-50)
	      {
		   x=40;
		   y=y+62;
	      }
	    }
	    else
	    {
	      if(i==1)
		   x=40;
	      for(j=1;j<=40;)
	      {
		   rectangle(x-20+j,y-20+j,x+20-j,y+20-j);
		   j=j+2;
	      }
	      if(k==3)
		   ++k;
	      if(k==15)
		   k=1;
	      setcolor(k);
	      k++;
	      x=x+60;
	      if(x>=getmaxx()-30)
	      {
		   x=40;
		   y=y+60;
	      }
	    }
	 }
	 else if(n1>40 && n1<=60)
	 {
	   if(n1%2==0)
	   {
	      if(i==1)
	      {
		   x=35;
		   y=220;
	      }
	      for(j=1;j<=25;)
	      {

		   arc(x,y,315,225,j);
		   j=j+1;

	      }
	      if(k==3)
		   ++k;
	      if(k==15)
		   k=1;
	      setcolor(k);
	      k++;
	      x=x+52;
	      if(x>=getmaxx()-30)
	      {
		   x=35;
		   y=y+55;
	      }
	   }
	   else
	   {
	      if(i==1)
	      {
		   x=35;
		   y=220;
	      }
	      for(j=1;j<=25;)
	      {

		   arc(x,y,135,45,j);
		   j=j+1;

	      }
	      if(k==3)
		   ++k;
	      if(k==15)
		   k=1;
	      setcolor(k);
	      k++;
	      x=x+52;
	      if(x>=getmaxx()-30)
	      {
		   x=35;
		   y=y+55;
	      }
	   }
	 }
	 else if(n1>60 && n1<=100)
	 {
	   if(n1%2==0)
	   {
	      if(i==1)
	      {	   x=40;
		   y=220;
	      }
	      for(j=1;j<=21;)
	      {
		   arc(x,y,0,180,j);
		   j=j+1;
	      }
	      if(k==3)
		   ++k;
	      if(k==15)
		   k=1;
	      setcolor(k);
	      k++;
	      x=x+45;
	      if(x>=getmaxx()-30)
	      {
		   x=40;
		   y=y+35;
	      }
	   }
	   else
	   {
	      if(i==1)
	      {	   x=40;
		   y=220;
	      }
	      for(j=1;j<=21;)
	      {
		   arc(x,y-21,180,0,j);
		   j=j+1;
	      }
	      if(k==3)
		   ++k;
	      if(k==15)
		   k=1;
	      setcolor(k);
	      k++;
	      x=x+45;
	      if(x>=getmaxx()-30)
	      {
		   x=40;
		   y=y+35;
	      }
	   }
	 }
	 delay(100);
    }
    }
}
void counting()
{
    int n1;
    char c1[5];
    do
    {
    cleardevice();
    settextstyle(0,HORIZ_DIR,5);
    setcolor(2);
    outtextxy(140,20,"Counting");
    setcolor(15);
    settextstyle(1,HORIZ_DIR,1);
    setcolor(14);
    outtextxy(330,90,"Enter a Number(0 to EXIT) :-");
    gotoxy(78,7);
    cin>>n1;
    if(n1==0)
    {
	 return;
    }
    count(n1);
    getch();
    }while(n1!=0);
}
void a()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"A");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(110,110,"a");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,6);
    outtextxy(20,210,"Apple");
    int y=50;
    int x=80;
    setcolor(12);
    arc(250+x,250+y,105,239,50);
    arc(246+x,222+y,50,470,22);
    arc(281+x,220+y,30,490,20);
    arc(264+x,205+y,180,0,3);
    arc(235+x,277+y,220,330,20);
    arc(256+x,290+y,14,520,5);
    arc(272+x,160+y,255,6,23);
    arc(292+x,182+y,89,180,25);
    arc(304+x,235+y,105,265,25);
    arc(266+x,265+y,305,7,35);
    arc(275+x,282+y,200,321,16);
}
void b()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"B");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(110,110,"b");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,6);
    outtextxy(20,210,"Ball");
    int x=350;
    int y=300;
    int z=20;
    setcolor(12);
    circle(x,y,100+z);
    setcolor(5);
    arc(x+100+z,y+100+z,90,180,100+z);
    arc(x-100-z,y-100-z,270,360,100+z);
}

void d()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"D");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(110,110,"d");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,6);
    outtextxy(20,210,"Diamond");
    setcolor(6);
    int x=50;
    int y=50;
    line(280+y,150+x,370+y,150+x);
    line(250+y,180+x,400+y,180+x);
    line(280+y,150+x,250+y,180+x);
    line(370+y,150+x,400+y,180+x);
    line(325+y,150+x,360+y,180+x);
    line(325+y,150+x,290+y,180+x);
    line(325+y,270+x,290+y,180+x);
    line(325+y,270+x,360+y,180+x);
    line(325+y,270+x,250+y,180+x);
    line(325+y,270+x,400+y,180+x);
}
void f()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"F");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(110,110,"f");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,6);
    outtextxy(20,210,"Fan");
    int i;
while(kbhit()==0)
{
  for(i=80; i>=0;i-=20)
  {
     setcolor(8);
     circle(320,240,65);
     circle(320,240,67);
     setfillstyle(SOLID_FILL,13);
     bar(310,307,330,360);
     setfillstyle(SOLID_FILL,6);
     bar(290,360,350,375);
     setcolor(2);
     setfillstyle(SOLID_FILL,10);
     pieslice(320,240,i,i+40,60);
     pieslice(320,240,i+120,i+160,60);
     pieslice(320,240,i+240,i+280,60);
     setcolor(4);
     circle(320,240,10);
     setfillstyle(SOLID_FILL,12);
     floodfill(320,240,4);
     delay(100);
     setcolor(0);
     setfillstyle(SOLID_FILL,0);
     pieslice(320,240,i,i+40,60);
     pieslice(320,240,i+120,i+160,60);
     pieslice(320,240,i+240,i+280,60);
     setcolor(4);
     circle(320,240,10);
     setfillstyle(SOLID_FILL,12);
     floodfill(320,240,4);
   }
}
}
void r()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"R");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(120,110,"r");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,6);
    outtextxy(420,110,"Rainbow");
    int color[]={5,1,3,2,14,6,4};
    int x,y,i,j;
    x=getmaxx()/2;
    y=getmaxy()/2+100;
    for(i=80;i<150;i++)
    {
	 j=i/10-8;
	 setcolor(color[j]);
	 arc(x,y,0,180,i-10);
	 delay(50);
    }
}
void g()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"G");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(110,110,"g");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,6);
    outtextxy(20,210,"Gun");
    setcolor(6);
    int x=100;
arc(50+x,350,150,250,8);
line(47+x,358,100+x,358);
arc(100+x,350,250,10,8);
line(42+x,350,58+x,300);
delay(300);
arc(102+x,324,100,150,50);
line(90+x,275,125+x,275);
line(125+x,275,125+x,300);
arc(125+x,320,450,150,20);
ellipse(109+x,330,90,-90,3,20);
delay(500);
setcolor(8);
arc(130+x,275,100,180,15);
line(127+x,260,135+x,260);
arc(175+x,260,100,180,40);
line(169+x,220,237+x,220);
arc(240+x,230,0,100,10);
delay(300);
line(250+x,230,250+x,255);
arc(234+x,252,270,0,16);
line(125+x,300,135+x,297);
arc(144+x,297,100,180,8);
line(142+x,290,220+x,290);
arc(215+x,270,290,0,20);
delay(500);
arc(151+x,298,180,25,15);
arc(149+x,300,180,25,22);
ellipse(155+x,300,90,-90,5,8);
arc(155+x,299,130,-100,10);
delay(300);
arc(169+x,255,90,270,26);
line(169+x,229,215+x,229);
line(215+x,229,215+x,281);
line(215+x,281,167+x,281);
line(167+x,281,167+x,229);
line(169+x,281,167+x,229);
delay(500);
ellipse(195+x,234,90,-90,15,5);
line(195+x,239,215+x,239);
delay(300);
ellipse(192+x,254,90,-90,13,6);
line(194+x,248,214+x,248);
line(194+x,260,214+x,260);
line(194+x,271,214+x,271);
ellipse(195+x,276,90,-90,15,5);
delay(500);
arc(155+x,239,90,180,15);
arc(130+x,239,0,100,10);
arc(128+x,241,0,100,10);
delay(300);
setcolor(1);
line(250+x,242,350+x,242);
line(250+x,224,350+x,224);
line(250+x,247,345+x,247);
line(345+x,247,348+x,242);
delay(500);
ellipse(350+x,233,90,-90,1,8);
ellipse(350+x,233,-90,90,1,8);
line(340+x,223,350+x,220);
line(350+x,220,350+x,225);
delay(300);
}
void n()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(420,60,"N");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(530,110,"n");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,6);
    outtextxy(420,210,"Nobita");
    int i;
setcolor(15);
arc(120,220,55,120,100);
delay(100);
line(70,133,70,170);
line(173,135,170,170);
delay(150);
line(70,165,80,165);
arc(120,180,180,0,50);
delay(100);
line(160,170,170,168);
delay(100);
arc(95,155,60,160,20);
circle(100,165,20);
delay(100);
setfillstyle(1,0);
floodfill(100,165,15);
circle(106,165,9);
setfillstyle(1,15);
delay(100);
floodfill(106,165,15);
setcolor(BLACK);
circle(108,165,5);
setfillstyle(1,3);
floodfill(108,165,BLACK);
delay(150);
setcolor(15);
arc(145,150,-5,130,18);
delay(100);
circle(140,165,20);
circle(134,165,9);
delay(100);
setfillstyle(1,15);
floodfill(134,165,15);
setcolor(BLACK);
circle(133,165,5);
setfillstyle(1,3);
floodfill(133,165,BLACK);
delay(150);
setcolor(15);
arc(122,185,200,120,5);
delay(100);
arc(75,140,120,-130,22);
arc(118,150,10,152,60);
delay(100);
ellipse(120,202,180,0,15,20);
delay(100);
line(105,201,140,201);
arc(70,173,90,278,20);
arc(60,175,350,80,5);
delay(100);
arc(163,175,278,67,25);
arc(179,175,100,-120,5);
delay(150);
arc(120,220,190,-10,20);
delay(100);
arc(145,240,30,-260,15);
arc(100,240,90,150,15);
delay(100);
arc(120,260,10,75,20);
line(140,255,159,233);
delay(100);
arc(120,255,120,-180,20);
line(100,255,85,233);
delay(150);
setcolor(14);
arc(95,273,100,150,40);
delay(100);
arc(145,270,10,75,40);
line(60,253,40,320);
delay(100);
arc(60,300,350,20,100);
delay(100);
line(185,263,198,275);
line(195,277,220,265);
delay(100);
arc(189,285,190,-130,30);
arc(182,293,190,278,20);
delay(150);
line(185,313,232,285);
arc(150,299,150,198,70);
delay(100);
arc(240,265,160,-50,20);
delay(100);
setcolor(15);
ellipse(225,265,20,180,5,25);
delay(100);
line(229,255,255,245);
line(234,262,259,250);
delay(150);
arc(229,262,320,0,30);
line(240,272,260,260);
arc(229,250,300,0,30);
delay(150);
arc(245,245,300,0,10);
line(81,300,75,320);
line(10,320,200,318);
delay(100);
}
void p1()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"P");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(110,110,"p");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,6);
    outtextxy(20,210,"Phone");
    setcolor(8);
    int x=50;
    line(300-x,150,410-x,150);
    arc(300-x,160,80,170,10);
    arc(410-x,160,10,100,10);
    line(290-x,160,290-x,360);
    line(420-x,160,420-x,360);
    arc(300-x,360,190,280,10);
    arc(410-x,360,280,10,10);
    line(410-x,370,300-x,370);
    rectangle(250,170,360,240);
    settextstyle(2,HORIZ_DIR,4);
    outtextxy(290,155,"NOKIA");
    circle(305,260,15);
    rectangle(325,250,355,260);
    rectangle(325,260,355,270);
    rectangle(255,250,285,260);
    rectangle(255,260,285,270);
    rectangle(255,280,355,360);
    line(288,280,288,360);
    line(321,280,321,360);
    line(255,300,355,300);
    line(255,320,355,320);
    line(255,340,355,340);
    settextstyle(2,HORIZ_DIR,6);
    outtextxy(270,280,"1");
    outtextxy(270,300,"4");
    outtextxy(270,320,"7");
    outtextxy(270,340,"*");
    outtextxy(300,280,"2");
    outtextxy(300,300,"5");
    outtextxy(300,320,"8");
    outtextxy(300,340,"0");
    outtextxy(335,280,"3");
    outtextxy(335,300,"6");
    outtextxy(335,320,"9");
    outtextxy(335,340,"#");
}
void e()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"E");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(110,110,"e");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,6);
    outtextxy(20,210,"Egg");
    int midx, midy;
    int stangle = 0, endangle = 360;
    int xradius = 100, yradius = 50;

    midx = getmaxx() / 2;
    midy = getmaxy() / 2;
    setcolor(getmaxcolor());
    while(xradius>0 || yradius>0)
    {
	 ellipse(midx, midy, stangle, endangle,
	   yradius, xradius);
	 xradius--;
	 yradius--;
    }
}
void w()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"W");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(130,110,"w");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,5);
    outtextxy(400,95,"Wave");
    int i = 0, fq, amp;

    double x, y;

    x = 0.5;

    fq = 2;

    amp = 50;

    line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);

    while (!kbhit()) {

	 setcolor(i % 15 ? i % 15 : 1);



	 y = amp * cos((3.14 * fq * x)  / 180);

	 y = y + getmaxy() / 2;

	 putpixel(x, y, 15);

	 line(x, y, x, y - 12);

	 line(x, y, x, y + 12);


	 delay(100);


	 x = x + 5;

	 i++;

    }

}
void q()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"Q");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(110,110,"q");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,5);
    outtextxy(20,210,"Qutub Minar");
    setcolor(6);
    line(255,470,265,355);
    line(350,470,340,355);
    ellipse(303,387,180,360,50,15);
    ellipse(303,377,180,360,50,15);
    line(265,355,273,255);
    line(340,355,332,255);
    ellipse(303,287,180,360,40,15);
    ellipse(303,297,180,360,40,15);
    line(273,255,280,170);
    line(332,255,325,170);
    ellipse(303,210,180,360,30,13);
    ellipse(303,220,180,360,30,13);
    line(280,178,285,120);
    line(325,178,318,120);
    ellipse(302,155,180,360,23,10);
    ellipse(302,150,180,360,23,10);
    line(285,120,290,100);
    line(318,120,313,100);
    line(290,100,313,100);
    ellipse(302,115,180,360,17,5);
    ellipse(302,110,180,360,17,5);
}
void floodfill(int a, int b, int old, int fill)

{
int current;
current=getpixel(a,b);
if(current==old)
{
putpixel(a,b,fill);
delay(0);
floodfill(a+1,b,old,fill);
floodfill(a-1,b,old,fill);
floodfill(a,b+1,old,fill);
floodfill(a,b-1,old,fill);
}
}
void i()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"I");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(570,110,"i");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,8);
    outtextxy(220,310,"India");
    int r,i,a,b,x,y;
float PI=3.14;

setcolor (RED);
rectangle(100, 100, 450, 150);
setfillstyle (SOLID_FILL, RED);
floodfill(101, 101, RED);
setcolor (WHITE);
rectangle(100, 150, 450, 200);
setfillstyle (SOLID_FILL, WHITE);
floodfill(101,151,WHITE);
setcolor (GREEN);
rectangle (100, 200, 450,250);
setfillstyle (SOLID_FILL, GREEN);
floodfill (101,201, GREEN);

a=275;
b=175;
r=25;
setcolor (BLUE);
circle(a,b,r);

for(i=0;i<=360; i=i+15)
{
x=r*cos(i*PI/180);
y=r*sin(i*PI/180);
line(a,b,a+x, b-y);
}
}
void h()
{

    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"H");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(130,110,"h");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,6);
    outtextxy(420,110,"House");
    delay(2000);
    cleardevice();
    int i, j,m,s;
    line (100,1,500,1);
line(0, 100, 600, 100);
line (100,1,0,100);
line (500, 1,600, 100);
line (200,90,400,90);
line (200,90,210, 100);
line (400,90,390, 100);
line (210, 100,210,250);
line (390, 100,390,250);
line (210, 250, 390,250);
circle(300,60, 20);
floodfill(310,61,WHITE);
line (390, 185,210, 185);
m=0;
for(i=0; i<18; i++)
{
line (220+m, 185,220+m,250);
m=m+10;
}
line (270, 115,270,185);
delay(350);
line (330, 115,330, 185);
line (270,115,330, 115);
circle (320, 175,2);
line (200,90,300,1);
line (400,90,300,1);
line (30, 100,30,260);
line (30,260,570,260);
line (570, 100,570,260);
m=0;
for(i=0; i<2; i++)
{
rectangle (90+m, 140, 140+m, 210);
line (80+m, 135, 150+m, 135);
line (80+m, 135, 90+m, 140);
line (150+m, 135, 140+m, 140);
line (115+m, 140, 115+m, 210);
rectangle (80+m, 210, 150+m, 217);
m=m+350;
}
line (30,260,30,450);
line (570,260,570,430);
line (30,265,570,265);
line (30,280,570,280);
line (60, 280,60,450);
line (100, 430,570,430);
line (100, 280, 100, 430);
line (300, 280, 300, 430);
line (300, 380,570,380);
m=0;
for(i=0; i<8; i++)
{
line (320+m, 380, 320+m, 430);
line (330+m, 380, 330+m, 430);
s=0;
for(j=0; j<17; j++)
{
line (320+m, 380+s, 330+m, 380+s);
s=s+3;
}
s=0;
m=m+30;
}
line (480,300,480,380);
line (480,300,540,300);
line (540,300,540,380);
rectangle (170,310,220,360);
rectangle(30, 110,210,115);
rectangle (390, 110,570,115);
rectangle (290, 280, 300, 430);
rectangle (32,282,58,448);
}
void tree(float x,float y,float len,float a,float b)
{

	 if(len<20)

	{

		delay(10);

		setcolor(14);

		circle(x,y,5);

		setcolor(100);

		circle(x,y,6);

	   return;

	}

     float x1,y1;



     settextstyle(1,0,1);

     setcolor(14);
     setcolor(10);

     if(kbhit())
	 return;
     x1=x+len*cos(3.1428*a/180);

     y1=y-len*sin(3.1428*a/180);

     line(x,y,x1,y1);

     tree(x1,y1,len*0.75,a-b,b);

     tree(x1,y1,len*0.75,a-b,-b);

}
void t()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"T");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(130,110,"t");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,6);
    outtextxy(420,110,"Tree");
    delay(2000);
    cleardevice();
    int i,rd;

     float x=320,y=550,t=140;
     for(i=0;i<=3;i++)
     {
     tree(x+i,y,t,90,30);

     tree(x+i,y,t,90,-30);

     }
}
void s()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"S");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(110,110,"s");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,6);
    outtextxy(20,210,"Smily");
    setcolor(14);
    for(int i=0;i<=100;i++)
    {
	 circle(getmaxx()/2+50,getmaxy()/2+50,i);
    }
    setcolor(12);
    int j;
    for(j=0;j<=10;j++)
    {
    circle(getmaxx()/2+10,getmaxy()/2,j);
    circle(getmaxx()/2+90,getmaxy()/2,j);
    }
    for(j=100;j>90;j--)
    arc(getmaxx()/2+50,getmaxy()-235,245,295,j);
}
void o()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"O");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(110,110,"o");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,5);
    outtextxy(200,400,"Optical Illusion");
    float i=0.1;
    int j=0,x,y,i1=1;
    x=getmaxx()/2;
    y=getmaxy()/2;
    while(!kbhit())
    {
	 setcolor(i1);
	 i1++;
	 arc(x,y,1+j,2+j,i+=0.05);
	 delay(2);
	 if(i1==15)
	      i==1;
	 j++;
    }
}
void k()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"K");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(130,110,"k");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,6);
    outtextxy(20,210,"Kite");
    setcolor(6);
    line (200, 200, 300, 100);
    line (300, 100, 400,200);
    line (400, 200, 300, 300);
    line (300, 100, 300, 300);
    line(300, 300, 200, 200);
    setcolor(1);
    arc(300, 300, 45, 135,140);
    setcolor(4);
    line(300,300,250, 350);
    line(250, 350, 350, 350);
    line(300, 300, 350, 350);

}
void c1()
{
    int i;
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"C");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(110,110,"c");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,5);
    outtextxy(20,210,"Circles");
    for(i=0;i<=70; i+=5)
    {
	 setcolor(i);
	 circle(339,249-i,20+i);
	 circle(339,249-i,20+i);
	 circle(339,289+i,20+i);
	 circle(319-i,269,20+i);
	 circle(359+i,269,20+i);
	 delay(100);
    }
}
void j()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"J");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(110,110,"j");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,5);
    outtextxy(20,210,"Jupter");
    setcolor(7);
    circle(getmaxx()/2+50,getmaxy()/2,100);
    setfillstyle (SOLID_FILL, 7);
    floodfill(getmaxx()/2+50,getmaxy()/2,7);
}
void l()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"L");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(125,110,"l");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,5);
    outtextxy(20,210,"Leaf");
    setcolor(10);
    arc(getmaxx()/2+120,getmaxy()/2,149,211,140);
    arc(getmaxx()/2-120,getmaxy()/2,329,31,140);
    int j=0,i;
    for(i=140;i>=120;i--)
    {
	 arc(getmaxx()/2+120,getmaxy()/2,149+j,211-j,i);
	 j++;
    }
    j=0;
    for(i=140;i>=120;i--)
    {
	 arc(getmaxx()/2-120,getmaxy()/2,329+j,31-j,i);
	 j++;
    }
}
void z()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"Z");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(125,110,"z");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,5);
    outtextxy(20,210,"Zee Tv");
    setcolor(12);
    circle(getmaxx()/2,getmaxy()/2,60);
    setfillstyle (SOLID_FILL, 12);
    floodfill(getmaxx()/2,getmaxy()/2,12);
    settextstyle(1,HORIZ_DIR,5);
    setcolor(15);
    outtextxy(getmaxx()/2,getmaxy()/2-30,"Zee TV");
}
void m()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"M");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(125,110,"m");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,5);
    outtextxy(20,210,"Moving Car");
    delay(1000);
for (int i=0;i<500;i++)
{
if(kbhit())
    return;

line(50+i,370,90+i,370);
arc(110+i,370,0,180,20);
line(130+i,370,220+i,370);
arc(240+i,370,0,180,20);
line(260+i,370,300+i,370);
line(300+i,370,300+i,350);
line(300+i,350,240+i,330);
line(240+i,330,200+i,300);
line(200+i,300,110+i,300);
line(110+i,300,80+i,330);
line(80+i,330,50+i,340);
line(50+i,340,50+i,370);
line(165+i,305,165+i,330);
line(165+i,330,230+i,330);
line(230+i,330,195+i,305);
line(195+i,305,165+i,305);

line(160+i,305,160+i,330);
line(160+i,330,95+i,330);
line(95+i,330,120+i,305);
line(120+i,305,160+i,305);
circle(110+i,370,17);
circle(240+i,370,17);

delay(10);
cleardevice();

line(0,390,639,390);  //ROAD
}
}
void v()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"V");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(125,110,"v");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,5);
    outtextxy(20,210,"Valentine's Day");
setcolor(76);
ellipse(306,310,0,360,5,10);
ellipse(306,310,0,360,10,5);
circle(306,310,5);
circle(306,310,3);
line(306,355,306,315);
setcolor(WHITE);
circle(250,300,20);
rectangle(225,325,275,375);
line(243,320,243,325);
line(255,320,255,325);
line(275,375,300,375);
line(300,375,300,405);
line(250,390,285,390);
line(285,390,285,405);
rectangle(285,405,310,415);
line(235,375,235,400);
line(250,375,250,415);
line(210,400,235,400);
line(210,400,210,415);
line(275,335,300,335);
line(275,345,300,345);
line(275,355,300,355);
line(300,335,300,355);
line(300,335,305,335);
line(300,337,305,337);
line(300,339,305,339);
line(300,341,305,341);
line(300,343,305,343);
line(300,345,305,345);
line(300,347,305,347);
line(300,349,305,349);
line(300,351,305,351);
line(300,353,305,353);
line(300,355,305,355);
circle(390,285,20);
line(395,305,395,310);
line(385,305,385,310);
line(385,310,355,365);
line(395,310,425,365);
line(355,365,425,365);
line(370,365,370,405);
line(385,365,385,405);
line(390,365,390,405);
line(405,365,405,405);
rectangle(360,405,385,415);
rectangle(385,405,405,415);
line(345,325,375,325);
line(345,335,370,335);
line(345,345,364,345);
line(345,325,345,345);
line(340,325,345,325);
line(340,327,345,327);
line(340,329,345,329);
line(340,331,345,331);
line(340,333,345,333);
line(340,335,345,335);
line(340,337,345,337);
line(340,339,345,339);
line(340,341,345,341);
line(340,343,345,343);
line(340,345,345,345);
}
void u()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"U");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(110,110,"u");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,5);
    outtextxy(20,210,"Uranus");
    setcolor(15);
    for(int i=0;i<=100;i++)
	 circle(getmaxx()/2+50,getmaxy()/2,i);
}
void y()
{
    int x,y,i;
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"Y");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(110,110,"y");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,5);
    outtextxy(20,210,"Yoyo");
    for(i=0;i<=100;i++)
    {
	 cleardevice();
	 x=random(200)+200;
	 y=random(200)+200;
	 corners2();
	 setcolor(15);
	 line(getmaxx()/2,0,x,y);
	 for(int j=0;j<=20;j++)
	 {
	      setcolor(12);
	      circle(x,y,j);
	 }
	 if(kbhit())
	      return;
	 delay(200);
    }
}
void firstcrown()
{
int y=70;
setfillstyle(SOLID_FILL,GREEN);
line(300,40+y,200,100+y);
line(300,40+y,400,100+y);
ellipse(300,100+y,180,360,98,30);
floodfill(310,50+y,WHITE);
}
void secondcrown()
{
int y=70;
setfillstyle(SOLID_FILL,GREEN);
line(250,125+y,180,160+y);
line(350,125+y,420,160+y);
ellipse(300,160+y,180,360,120,30);
floodfill(260,130+y,WHITE);
}
void thirdcrown()
{
int y=70;
setfillstyle(SOLID_FILL,GREEN);
line(230,185+y,150,230+y);
line(360,185+y,440,230+y);
ellipse(295,230+y,180,360,145,30);
floodfill(250,190+y,WHITE);
}
void trunk()
{
int y=70;
setfillstyle(SOLID_FILL,BROWN);
line(280,260+y,280,350+y);
line(320,260+y,320,350+y);
line(280,350+y,320,350+y);
floodfill(285,340+y,WHITE);
}
void x()
{
    setcolor(6);
    settextstyle(1,HORIZ_DIR,15);
    outtextxy(20,60,"X");
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(110,110,"x");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,5);
    outtextxy(420,110,"Xmas Tree");
    firstcrown();
    secondcrown();
    thirdcrown();
    trunk();
}
void alpha(char c)
{
    if(c=='A' || c=='a')
    {
	 a();
	 return;
    }
    if(c=='B'|| c=='b')
    {
	 b();
	 return;
    }
    if(c=='C' || c=='c')
    {
	 c1();
	 return;
    }
    if(c=='d' || c=='D')
    {
	 d();
	 return;
    }
    if(c=='e' || c=='E')
    {
	 e();
	 return;
    }
    if(c=='F' || c=='f')
    {
	 f();
	 return;
    }
    if(c=='G' || c=='g')
    {
	 g();
	 return;
    }
    if(c=='h' || c=='H')
    {
	 h();
	 return;
    }
    if(c=='i' || c=='I')
    {
	 i();
	 return;
    }
    if(c=='j' || c=='J')
    {
	 j();
	 return;
    }
    if(c=='k' || c=='K')
    {
	 k();
	 return;
    }
    if(c=='l' || c=='L')
    {
	 l();
	 return;
    }
    if(c=='m' || c=='M')
    {
	 m();
	 return;
    }
    if(c=='n' || c=='N')
    {
	 n();
	 return;
    }
    if(c=='o' || c=='O')
    {
	 o();
	 return;
    }
    if(c=='p' || c=='P')
    {
	 p1();
	 return;
    }
    if(c=='q' || c=='Q')
    {
	 q();
	 return;
    }
    if(c=='r' || c=='R')
    {
	 r();
	 return;
    }
    if(c=='s' || c=='S')
    {
	 s();
	 return;
    }
    if(c=='t' || c=='T')
    {
	 t();
	 return;
    }
    if(c=='u' || c=='U')
    {
	 u();
	 return;
    }
    if(c=='v' || c=='V')
    {
	 v();
	 return;
    }
    if(c=='W' || c=='w')
    {
	 w();
	 return;
    }
    if(c=='x' || c=='X')
    {
	 x();
	 return;
    }
    if(c=='y' || c=='Y')
    {
	 y();
	 return;
    }
    if(c=='z' || c=='Z')
    {
	 z();
	 return;
    }
}
void alphabets()
{
    char c,flag=0;
    do
    {
    cleardevice();
    if(flag==0)
	 corners();
    corners2();
    flag++;
    settextstyle(0,HORIZ_DIR,5);
    setcolor(5);
    outtextxy(140,20,"Alphabets");
    setcolor(15);
    settextstyle(1,HORIZ_DIR,2);
    setcolor(6);
    outtextxy(200,getmaxy()-30,"Enter a Alphabet(0 to EXIT) :-");
    gotoxy(70,24);
    c=getche();
    if(c=='0')
    {
	 return;
    }

    alpha(c);
    getch();
    }while(c!='0');
}
void math()
{
    int ch2;
    do
    {
	 corners();
	 setbkcolor(6);
	 setcolor(15);
	 setcolor(2);
	 settextstyle(0,HORIZ_DIR,6);
	 outtextxy(220,20,"MENU");
	 setcolor(14);
	 settextstyle(1,HORIZ_DIR,4);
	 outtextxy(80,80," 1. No. in words ");
	 outtextxy(80,130," 2. Table ");
	 outtextxy(80,180," 3. Sum of 2 Numbers ");
	 outtextxy(80,230," 4. Subtraction 2 No.s ");
	 outtextxy(80,280," 5. Multiplication");
	 outtextxy(80,330," 6. Counting ");
	 outtextxy(80,380," 7. EXIT");
	 settextstyle(1,HORIZ_DIR,3);
	 setcolor(1);
	 outtextxy(300,440,"Enter your choice:-");
	 outtextxy(550,400,"");
	 ch2=getche();
	 switch(ch2)
	 {
	      case '1':
			er2();
			notowords();
			cleardevice();
			break;
	      case '2':
			er2();
			table();
			cleardevice();
			break;
	      case '3':
			er2();
			sum();
			cleardevice();
			break;
	      case '4':
			er2();
			subtraction();
			cleardevice();
			break;
	      case '5':
			er2();
			multiplication();
			cleardevice();
			break;
	      case '6':
			er2();
			counting();
			cleardevice();
			break;
	      case '7':
			er2();
			break;
	 }
    }while(ch2!='7');
}
void main()
{
    int gdriver = DETECT, gmode, errorcode;
    int ch1;
    initgraph(&gdriver, &gmode,"");
    setbkcolor(6);
    circles_full();
    cleardevice();
    corners();
    tf();
    cs();
    delay(1000);
    er();
    cleardevice();
    setbkcolor(0);
    ch();
    cleardevice();
    setbkcolor(6);
    tf2();
    corners();
    cs();
    delay(1000);
    er();
    do
    {
	 setbkcolor(6);
	 setcolor(15);
	 corners();
	 setcolor(2);
	 settextstyle(0,HORIZ_DIR,6);
	 outtextxy(220,20,"MENU");
	 setcolor(14);
	 settextstyle(1,HORIZ_DIR,8);
	 outtextxy(20,100," 1.Alphabets ");
	 outtextxy(20,200," 2.Maths ");
	 outtextxy(20,300," 3.EXIT ");
	 settextstyle(1,HORIZ_DIR,3);
	 setcolor(1);
	 outtextxy(300,440,"Enter your choice:-");
	 outtextxy(550,400,"");
	 ch1=getche();
	 switch(ch1)
	 {
	      case '1':
			er2();
			setbkcolor(3);
			alphabets();
			er2();
			cleardevice();
			break;
	      case '2':
			er2();
			cleardevice();
			math();
			cleardevice();
			break;
	      case '3':
			er();
			setbkcolor(0);
			cleardevice();
			ch();
			cleardevice();
			setbkcolor(6);
			tf3();
			corners();
			cs();
			delay(1000);
			er();
			break;
	 }
    }while(ch1!='3');
    closegraph();
}
