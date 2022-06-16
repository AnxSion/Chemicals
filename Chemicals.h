#include <string>
using namespace std;

float upQuark[3]=   {2.3, 0.666666666, 0.5};
float downQuark[3]= {4.8, -0.333333333, 0.5};
float electronFermion[3]=  {0.511 , -1.0, 0.5};

string elementType[10]={
/* 0 */  "Unknown Properties",
/* 1 */  "Alkali Metals",
/* 2 */  "Alkali Earth Metals",
/* 3 */  "Transition Metals",
/* 4 */  "Post Transition Metals",
/* 5 */  "Metalloids",
/* 6 */  "Reactive nonmetals",
/* 7 */  "Nobel Gases",
/* 8 */  "Lanthanides",
/* 9 */  "Actinides",  
};

string elementName[119]{
  "invalid","Hydrogen","Helium","Lithium","Beryllium","Boron","Carbon","Nitrogen","Oxygen","Fluorine","Neon","Sodium","Magnesium","Aluminium","Silicon","Phosphorus","Sulfur","Chlorine","Argon","Potassium","Calcium","Scandium","Titanium","Vanadium","Chromium","Manganese","Iron","Cobalt","Nickel","Copper","Zinc","Gallium","Germanium","Arsenic","Selenium","Bromine","Krypton","Rubidium","Strontium","Yttrium","Zirconium","Niobium","Molybdenum","Technetium","Ruthenium","Rhodium","Palladium","Silver","Cadmium","Indium","Tin","Antimony","Tellurium","Iodine","Xenon","Caesium","Barium","Lanthanum","Cerium","Praseodymium","Neodymium","Promethium","Samarium","Europium","Gadolinium","Terbium","Dysprosium","Holmium","Erbium","Thulium","Ytterbium","Lutetium","Hafnium","Tantalum","Tungsten","Rhenium","Osmium","Iridium","Platinum","Gold","Mercury","Thallium","Lead","Bismuth","Polonium","Astatine","Radon","Francium","Radium","Actinium","Thorium","Protactinium","Uranium","Neptunium","Plutonium","Americium","Curium","Berkelium","Californium","Einsteinium","Fermium","Mendelevium","Nobelium","Lawrencium","Rutherfordium","Dubnium","Seaborgium","Bohrium","Hassium","Meitnerium","Darmstadtium","Roentgenium","Copernicium","Nihonium","Flerovium","Moscovium","Livermorium","Tennessine","Oganesson"
};

int element[119][5]={
  {0,0,0,0},
  {1,1,0,6},
  {2,2,2,7},
  {3,3,4,6},
  {4,4,5,6},
  {5,5,6,6},
  {6,6,6,6},
  {7,7,7,6},
  {8,8,8,6},
  {9,9,10,6},
  {10,10,10,6},
  {11,11,12,6},
  {12,12,12,0},
  {13,13,14,0},
  {14,14,14,0},
  {15,15,16,0},
  {16,16,16,0},
  {17,17,17,0},
  {18,18,22,0},
  {19,19,20,0},
  {20,20,20,0},
  {21,21,24,0},
  {22,22,26,0},
  {23,23,28,0},
  {24,24,28,0},
  {25,25,30,0},
  {26,26,30,0},
  {27,27,32,0},
  {28,28,31,0},
  {29,29,35,0},
  {30,30,35,0},
  {31,31,39,0},
  {32,32,41,0},
  {33,33,42,0},
  {34,34,45,0},
  {35,35,45,0},
  {36,36,48,0},
  {37,37,48,0},
  {38,38,50,0},
  {39,39,50,0},
};
