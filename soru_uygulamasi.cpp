#include <stdio.h>
#include <math.h> 
#include <conio.h>
#include<windows.h>


void soru_8(){
	
	printf("**************************************************************************************************************************\n");
	printf("*                                                                                                                        *\n");
	printf("*                                                                                                                        *\n");
	printf("*                                                                                                                        *\n");
	printf("*                                                                                                                        *\n");
	printf("*                                   ................CIKIS YAPTINIZ.................................                      *\n");
	printf("*                                                                                                                        *\n");
	printf("*                                                                                                                        *\n");
	printf("*                                                                                                                        *\n");
	printf("*                                                                                                                        *\n");
	printf("*                          ................LUTFEN MENUYE DONMEK ICIN 9 TUSUNA BASINIZ'...............................    *\n");
	printf("*                                                                                                                        *\n");
	printf("*                                                                                                                        *\n");
	printf("*************************************************************************************************************************\n");
	
	
   	
	

  
}



void soru_1(){
	char s;
	printf(" 1) 0 dereceden 90 dereceye kadar acilarin onar artarak,sin,cos,cot ve tan degerlerini iceren bir matrisi olsuturan c programi\n\n");
	float derece, radian;  
    const float PI = 3.14159;  
  
   
	printf("dereceyi giriniz\n");
		   
    scanf("%f", &derece);
  
    radian = derece * (PI / 180.0);  

    printf("    ACI             SÝN           COS           TAN         COTAN\n");
    printf(" ..........      ..........    ..........    .........   ..........\n");
    printf("   %f =         %f\n", derece, sin(radian));  
    printf("   %f =                      %f\n", derece, cos(radian));  
    printf("   %f =                                    %f\n", derece, tan(radian));  
    printf("   %f =                                                   %f\n", derece, 1/tan(radian)); 
   printf("seciminiz >>>>>( 9=menu ");
   
   }
   
   

float f (float x)
{
	return pow(x,5)+2*pow(x,2)-pow(x,4)-pow(x,3)/pow(x,4)+pow(x,3)+2*x;
}
float df (float x){
	return ((5*pow(x,4)+4*x+4*pow(x,3)-3*pow(x,2))*(pow(x,4)+pow(x,3)+2*x+2)-(4*pow(x,3)+3*pow(x,2)+2)*(pow(x,5)+2*pow(x,2)-pow(x,4)-pow(x,3)))/(pow((pow(x,4)-pow(x,3)+2*x+2),2));
	}
void soru_2(){
	char a;
	float y;
	int x;
	int dizi[81];
	float y_kucuk=0;
	float y_buyuk=0;
	
printf("        problem 2\n");
printf("..............................\n");
printf("y=(x^5+4)/(x^3+2) fonksiyon degerlerini x=(-40,40) araligi icin birer artimla hesaplayan ve bu aralik icin fonksiyonun maksimum ve minimum degerlerini bulan c programi\n\n");
for( x=-40;x<40;x++){
	 dizi[81]=(x*5+4)/(x*3+2);
	 if(dizi[x]>y_buyuk){
	 	y_buyuk=dizi[x];
	 }
	 if(dizi[x]<y_kucuk){
	 	y_kucuk=dizi[x];
	 }
	 
	
	
}
printf("fonksiyon bu aralikta x=%d en buyuk degerini alir y=%f\n ",x,y_buyuk);
printf("fonksiyon bu aralikta x=%d en kucuk degerini alir y=%f\n ",x,y_kucuk);
printf("x=(-40,40) araligindaki y degerleri goruntulensin mi?(e/h)");
scanf("%s",&a);
if(a='e'){
	for( x=-40;x<41;x++){
		
		
		
	    dizi[x]=(x*5+4)/(x*3+2);
	 
	    printf("(x= %d  y= %f\n",x,dizi[x]);}
	

}
else{
	printf("lutfen baska býr soruya týklayýn");
}
	
	
}
int prim_hesapla(int s){
	float prim=s*1.5;
	return prim;
	printf("seciminiz >>>>>( 9=menu ");
}
void soru_3()
{
int n,i,j;
int toplam=1;
int toplam2=0;
printf("        problem 3\n");
printf("..............................\n");
printf("bir kare matrisin esas kosegeni uzerindeki elemanlarinin toplamini ve diger kosegen uzerindeki elemanlarin carpimini hesaplayan c programi\n");



int mat[n][n];

printf("Matrisin boyutunu giriniz : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
                 {
                 
                 printf("%d. satir ,%d.sutun elemani : ",i,j);
                 scanf("%d",&mat[i][j]);
                 }
for(i=0; i<n; i++){
	
    for(j=0; j<n; j++){
    	
        printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
for(i=1;i<=n;i++)


for(int i=0;i<n;i++)
{
	
	
    toplam2=toplam+mat[i][i];
  
	
}
for(int i=0;i<n;i++)
{
	
	toplam *= mat[i][--n];  }






printf("esas kosegen uzerindeki elemanlarin Toplami : %d\n",toplam2);
printf("Ters Kosegen carpimlari:%d\n",toplam);
  
  printf("seciminiz >>>>>( 9=menu ");
	
}

soru_4(){
	int itr,maxm_itr;
	float h,x0,x1,epsilon;
	printf("\n xo i giriniz,epsilonu giriniz,maksimum iterasyon sayisini giriniz:\n");
	scanf("%f%f%d ",&x0,&epsilon,&maxm_itr);
	for(itr=1;itr<=maxm_itr;itr++){
		h=f(x0)/df(x0);
		x1=x0-h;
		printf("iterasyon numarasý.%3d,x=%9.6f\n",itr,x1);
		if(fabs(h)<epsilon)
		{
			printf("sayimiz %3d iterations sayar ve sonucu =%8.6f'dir \n",itr,x1);
		}
		x0=x1;
	}
	printf("girdiðniz baslangic degeri newton-rapshon metodunu belirsizlige götürüyor.!lutfen yeni bir baslangic degeri saglayin");
	printf("seciminiz >>>>>( 9=menu ");
	
	
}
void soru_5(){
	
	
	int s;
	float prim;
	printf("        problem 5\n");
    printf("..............................\n");
	printf(" 5) Bir satis elemani asagidaki kurallara göre prim almaktadir: \n\n");
    printf("    Satis <=50 ise prim=satis*1.5$\n");
    printf("    Satis <=100 ise prim=satis*1.5$ +(satis-50)*2$ \n");
    printf("    Satis > 100 ise prim=satis*1.5$ + 50*2$ +(satis-100)*2.5$ \n");
    printf("    Bu kurallara gore bir satis elemamini  alacagi primi hesaplayan c programi \n\n");
    printf("satis miktarini giriniz.....");
    scanf("%s",&s);
    if(s<=50){
    	prim=prim_hesapla(s);
    	
    	printf("hesaplana prim=%f\n",prim);
    	printf("satis elemanini yaptigi satisin 50 parcalik kismi icin 1.5$,geri kalan %d parcalik kismi icin ise 2$ ");
	}
	else if(s<=100){
    	prim=prim_hesapla(s)+(s-50)*2;
    	int kalan=s-50;
    	printf("hesaplana prim=%f",prim);
    	printf("satis elemanini yaptigi satisin 100 parcalik kismi icin 1.5$,geri kalan %d parcalik kismi icin ise 2$ ",kalan);
	}
		else if(s>100){
    	prim=prim_hesapla(s)+(50)*2+(s-100)*2.5;
    	printf("hesaplana prim=%f",prim);
    	printf("satis elemanini yaptigi satisin 50 parcalik kismi icin 1.5$,geri kalan %d parcalik kismi icin ise 2$ ",s-50);
	}
	printf("satis elemanini yaptigi satisin 50 parcalik kismi icin 1.5$,geri kalan %d parcalik kismi icin ise 2$ ",s-50);
	printf("seciminiz >>>>>( 9=menu ");
	
    
	
	
}
void problem_1(){
	printf("problem 1 icin aciklamalar\n");
	printf("..............................\n");
	printf("aciklamlar:: Istenilen tabloyu olusturmak icin Double tanimli matris[10][5] iki boyutlu serisi kullanilmistir.\n Math.h baslik dosyasinda ta-nimli trigonometrik fonksiyonlar, aci degerlerini radyan cinsinden kullandiklari icin bu donusumu gerceklesitrmek amaciylaDouble degtorad(int) fonksiyonu gelistirilmistir. Bu donusum yapildiktan sonra radyan degeri radyan degiskenine atanmistir.Cevrim parametreleri olarak i ve j, menu girisleri icin ise chartanimli secim degiskeni kullanilmistir.\n ");
   printf(">>> Seciminiz (9=menu)...");
}
void problem_2(){
	printf("problem 2 icin aciklamalar\n");
	printf("..............................\n");
	printf("Degiskenler: Fonksiyonun degerlerini bulabilmek icin y fonksiyonu gelisti-rilmis, verilen aralikta fonksiyonun aldigi en kucuk ve en bu-yuk degerler ek ve eb degiskenlerine, bunlarin x degerleri iseebx ve eby degiskenlerine atanmistir. Cevrim parametresi olaraki degiskeni kullanilmistir. Menu secimleri icin char tipinde secim degiskeni tanimlanmistir. Bu araliktaki degerlerin ekran ciktilarinin saglamasi icin soru degiskeni gor kullanilmistir.\n");
	printf("Yontem: Istenilen aralikta x degerlerini dolasip y degerlerini bulan bir dongu olusturulmus ve bu dongu icinde en buyuk ve en kucugun bulunup ilgili degiskenlere atanmasi saglanmistir.\n");
	printf("Ekran Ciktisi: Kullaniciya opsiyonel olarak istenilen araliktaki degerlerin ana yazdirilmasi secenegi sunulmustur. Bunun disinda fonk-siyonun hangi degerlerde en kucuk ve en buyuk degerleri aldiklari ekrana yazdirilmistir.\n");
    printf(">>> Seciminiz (9=menu)...");
}
void problem_3(){
	printf("problem 3 icin aciklamalar\n");
	printf("..............................\n");
	printf("Degiskenler: 5x5 buyukugunde, rasgele secilmis sayilari iceren matris2 ikiboyutlu dizisi tanimlanmistir. Bu dizinin esas kosegeni uzerin-deki elemanlarin toplamini tutan toplam ve diger kosegen uzerindeki elemanlarin carpimini tutan carpim degiskenleri tanim-lanmistir. Cevrim parametreleri olarak i ve j degiskenleri kullanilmis, menu girdilerini almak icin ise char olarak secim de-giskeni tanimlanmistir. Ayrica ayrintili olarak Genel Aciklamalar bolumunde aciklanacak olan yazi efektleri fonksiyonu typeonbu problem icin de kullanilmistir.\n");
	printf("Yontem: Matrisin sadece esas kosegenini tarayan tek bir cevrim yaratil-mis ve matrisin kare olmasindan faydalanilarak cevrim paramet-resinin aldigi deger diger kosegene aktarilmistir. Bu tek cevrimkullanilarak toplam ve carpim bulunmustur..\n");
	printf("Ekran Ciktisi: Once hesaplama yapilirken baz alinacak matris ekrana yazdiril- mistir. Bunun ardindan hesaplanan carpim ve toplam degerininekran ciktisi saglanmistir..\n");
   printf(">>> Seciminiz (9=menu)...");
}
void problem_4(){
	printf("problem 4 icin aciklamalar\n");
	printf("..............................\n");
	printf("Degiskenler: Fonksiyonun koklerini bulmak icin NewtRaphFonk fonksiyonu ta-nimlanmistir. Menu ve program secimleri icin char olarak secimevhay ve onscr degiskenleri kullanilmistir. Algoritmanin calismasi icin ise epsilon,x0,x1 degiskenleri atanmis, algoritmanintakibi icin ise sayac ve defa degiskenleri tanimlanmistir.\n");
	printf("Yontem: Iki egrinin kesisim noktasini bulmak icin bu iki egrinin denk-i birbirine esitlenmis ve elde edilen denklem Newton-Raphson metodu ile cozulmustur.\n");
	printf("Ekran Ciktisi: Kullaniciya opsiyonel olarak Newton-Raphson metodunun tahminin ekrana yazdirilmasi secenegi sunulmustur. Program icibilgilendirmelerin yani sira sonucta fonksiyonun hangi noktaicin Epsilon araliginda cozum sundugu ekrana yazdirilmistir.\n");
   printf(">>> Seciminiz (9=menu)...");
}
void problem_5(){
	printf("problem 5 icin aciklamalar\n");
	printf("..............................\n");
	printf("Degiskenler: Kullanicidan alinan satis miktari satism degiskeninde depolan-Verilen kriterlere uygun prim miktarini hesaplayanDouble prim_hesapla(int) fonksiyonu yaratilmis menu secimlerini almak icin ise secim degiskeni kullanilmistir.\n");
	printf("Yontem: Verilen kriterlere gore prim miktarini hesaplayan prim_hesapla fonksiyonu yaratilmis ve kullanicidan alinan her satis miktariicin ana programdan cagirilarak kullanilmistir.\n");
	printf("Ekran Ciktisi: Ekrana, prim miktari hesaplanirken, hangi prim katsayilarininkullanildigi, her satis miktari icin dinamik olarak hesaplanarak yazdirilmistir. Ayrica prim_hesapla fonksiyonunun dondur-dugu prim miktari da ekranda gosterilmistir..\n");
    printf(">>> Seciminiz (9=menu)...");
}
void genel(){
	printf("genel aciklamalar\n");
	printf("..............................\n");
	printf(">>> Programin genelinde butun programlar ve aciklama ekranlari birer fonksi-yon olarak tanimlanmis ve ilgili ana programlardan cagirilmislardir.Bunun disinda programdan cikis icin, prim hesaplamak icin,Newton-Raphson metodunu kullanmak icin, bir fonksiyonun degerlerinibulmak icin de ayri ayri fonksiyonlar yaratilmistir. Newton-Raphsonmetodu icin gerekli olan fonksiyonun turevi de ayni fonksiyondan sag-lanmis, bu ayrimi yapmak icin de bu fonksiyona tip adi altinda ikincibir parametre eklenmistir.\n");
	printf("Programin isleyisi ile ilgili olan bu fonksiyonlar disinda, arabirimde kullanilmak uzere cesitli fonksiyonlar yaratilmistir. Bunlar appear,putwindow, sendtoxy, slidelr ve typeon fonksiyonlaridir. Butun bu fonk-siyonlar, ekranda yazilarin cesitli efektlerle belirmelerini, etrafla-rina cerceveler eklenmesini saglamak amaci ile Ali INAL tarafindan ge-listirilmistir. Ancak butun bu fonksiyonlarin ustune oturdugu temelfonksiyon olan ve cursorun ekranda belirli bir konuma tasinmasini sag-layan gotoxy fonksiyonu Microsoft C Compiler icinde tanimli olmadigiicin windows.h baslik dosyasinin komutlarini kullanarak bu fonksiyonu islevini yerine getiren parca http://spike.scu.edu.au/~jmaltby/c.html adresinden alinarak programa eklenmistir.\n");
	printf(">>> Seciminiz (9=menu)...");
}

void soru_6(){
	int a;
	int b;
	
	
	printf(".............            .................           ................\n");
	printf("| problem 1 |            |   problem 2   |           |  problem 3   |\n");
	printf(".............            .................           ................\n\n\n");

	printf(".............            .................           ................\n");
	printf("| problem 4 |            |   problem 5   |           |  problem 6    |\n");
	printf(".............            .................           ................\n\n\n");
	printf("         LUTFEN ACIKLAMSINI ISTEDIGINIZ BOLUMU SECINIZ \n");
	printf("                ANA MENU ICIN 9 TUSUNA BASINIZ \n");
	
	
	
	scanf("%d",&a);
	
	while(a!=9){
		
		if(a==1){
			while(b !=9){
			
			
			problem_1();
			scanf("%d",&b);
			}
		}
		else if(a==3){
			while(b !=9){
			
			problem_3();
			scanf("%d",&b);
			}
		}
		else if(a==4){
			while(b !=9){
			
			problem_4();
			scanf("%d",&b);
			}
		}
	else if(a==5){
			while(b !=9){
			
			problem_5();
			scanf("%d",&b);
			}
		}
		else if(a==6){
			while(b !=9){
			
			genel();
			scanf("%d",&b);
			}
		}
		scanf("%d",&a);
		
	}
	
	
	  
}

 
int main()
{
	system("color 5e");
	int m;
	int k;
	
	printf("\n\n\n");
	printf("                                       Gazi Universitesi\n\n");
	
	
    printf("                         ####################################################\n\n");
    printf("                           #             Bilgisayar Programlama           #\n");
    printf("                           #                  Vize Odevi                  #\n\n");
    printf("                         ####################################################\n\n\n\n\n");
    printf("                          -----------Prof.Dr.Ercan Nurcan Yilmaz---------\n\n");
    
    printf("                              **********************************\n");
    printf("                              *           Goktug Dolgun        *\n");
    printf("                              *            201802074           *\n");
    printf("                              **********************************\n\n");
    printf("             ......................Herhangi bir tusa basiniz.............\n\n\n\n\n");
    
    scanf("%s",&m);
     int s;
    printf("-----Proje Menusu-----\n\n");
    printf(" 1) 0 dereceden 90 dereceye kadar acilarin onar artarak,sin,cos,cot ve tan degerlerini iceren bir matrisi olsuturan c programi\n\n");
    printf(" 2) y=(x^5+4)/(x^3+2) fonksiyon degerlerini x=(-40,40) araligi icin birer artimla hesaplayan ve bu aralik icin fonksiyonun maksimum ve minimum degerlerini bulan c programi\n\n");
    printf(" 3) Bir kare matrisin esas kosegeni uzerindeki elemanlarinin toplamini ve diger kosegen uzerindeki elemanlarinin carpimini en az islem sayisi ve en az cevrimle hesaplayan  c programi\n\n");
    printf(" 4) y=(x^2)/(x+1) ve y=(x^3)/(x^3+2) fonksiyonlarinin varsa kesim noktalarini bulan  c programi\n\n");
    printf(" 5) Bir satis elemani asagidaki kurallara göre prim almaktadir: \n\n");
    printf("    Satis <=50 ise prim=satis*1.5$\n");
    printf("    Satis <=100 ise prim=satis*1.5$ +(satis-50)*2$ \n");
    printf("    Satis > 100 ise prim=satis*1.5$ + 50*2$ +(satis-100)*2.5$ \n");
    printf("    Bu kurallara göre bir satis elemamini  alacagý primi hesaplayan c programi \n\n");
    printf(" 6) Gelistirilen kod ile ilgili aciklamalar \n\n");
    printf(" 7) Kayitli dosyayi goruntule\n\n");
    printf(" 8) cikis.. \n\n\n");
    printf(">>>seciminiz......\n\n\n");
    printf("not>>>menuye dondukten sonra yeni bir soruya gitmek icin birden fazla kez basmanýz gerekebilir......");
    
    scanf("%d",&s);
    
    while(s!=10){
    	if(s==1){
    		while(k!=9){
			
    		soru_1();
			scanf("%d",&k);
			}
		}
		if(s==2){
    		while(k!=9){
			
    		soru_2();
			scanf("%d",&k);}
		}
	    if(s==3){
    		while(k!=9){
			
    		soru_3();
			scanf("%d",&k);}
		}
		if(s==4){
    		while(k!=9){
			
    		soru_4();
			scanf("%d",&k);}
		}
		if(s==5){
    		while(k!=9){
			
    		soru_5();
			scanf("%d",&k);}
		}
		if(s==6){
    		while(k!=9){
			
    		soru_6();
			scanf("%d",&k);}
		}
		if(s==8){
    		while(k!=9){
			
    		soru_8();
			scanf("%d",&k);}
		}
		else {
			while(k!=9){
			
			printf("yanlis tusa bastiniz.....");}
			scanf("%d",&k);
		}
    	
	    scanf("%d",&s);
	}
    
    
    
	return 0;
	}


     


