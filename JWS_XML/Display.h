//----------------------------
// SETUP DMD HJS589

#define DISPLAYS_WIDE 1 
#define DISPLAYS_HIGH 1
DMDESP Disp(DISPLAYS_WIDE, DISPLAYS_HIGH);  // Jumlah Panel P10 yang digunakan (KOLOM,BARIS)
//HJS589 Disp(DISPLAYS_WIDE, DISPLAYS_HIGH);  // Jumlah Panel P10 yang digunakan (KOLOM,BARIS)
//
//void ICACHE_RAM_ATTR refresh(){
//  Disp.refresh();
//  timer0_write(ESP.getCycleCount()+40000);
//}
//void Disp_init(){
//  Disp.start();
////  noInterrupts();
////  timer0_isr_init();
//  timer0_attachInterrupt(refresh);
//  timer0_write(ESP.getCycleCount()+40000);
//  Disp.clear();
//}
