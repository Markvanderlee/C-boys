#define VGA_X 320
#define VGA_Y 240

#define VGA_ZWART 		 0
#define VGA_BLAUW 		 5
#define VGA_LICHTBLAUW	 10
#define VGA_GROEN		 40
#define VGA_LICHTGROEN 	 60
#define VGA_CYAAN 		 50
#define VGA_LICHTCYAAN 	 55
#define VGA_ROOD		 160
#define VGA_LICHTROOD 	 165
#define VGA_MAGENTA 	 230
#define VGA_LICHTMAGENTA 170
#define VGA_BRUIN		 100
#define VGA_GEEL		 180
#define VGA_GRIJS		 215
#define VGA_WIT			 255

#define BM_SMILEY		0
#define BM_BOOS			1
#define BM_PIJL_LINKS	2
#define BM_PIJL_HOOG	3
#define BM_PIJL_LAAG	4
#define BM_PIJL_RECHTS	5


extern void lijn_tonen(int x0, int y0, int x1, int y1, int dikte, int kleur);
extern void cirkel_tonen(int xStart, int yStart, int Straal, int kleur);
extern void driehoek_tonen(int x0, int y0, int x1, int y1, int x2, int y2, int kleur);
extern void rechthoek_tonen(int xStart, int yStart, int xEind, int yEind, int kleur);
void ellipse_tonen(int x, int y, int width, int height, int kleur);
void tekst_tonen_arial_normaal(int x_s, int y, int kleur, char* tekst, int lengte);
void tekst_tonen_arial_vet(int x_s, int y, int kleur, char* tekst, int lengte);
void tekst_tonen_arial_cursief(int x_s, int y, int kleur, char* tekst, int lengte);
extern void smiley_tonen(int x, int y);
extern void boos_tonen(int x, int y);
extern void pijl_rechts_tonen(int x, int y);
extern void pijl_omhoog_tonen(int x, int y);
extern void pijl_omlaag_tonen(int x, int y);
extern void pijl_links_tonen(int x, int y);
extern void VGA_init();
extern void clearscreen(int colour);
