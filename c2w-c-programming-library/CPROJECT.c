#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>
#include <gtk/gtk.h>
#include <math.h>
#include <ctype.h>
#include <sys/mman.h>
#include "./HEADER_FILES/ARRAY_HEADER/array.h"
#include "./HEADER_FILES/NUMBER_HEADER/integerheader.h"
#include "./HEADER_FILES/STRING_HEADER/myString.h"
#include "./HEADER_FILES/PATTERN_HEADER/pattern.h"
#include "./HEADER_FILES/DS_HEADER/LinkedList.h"
#include "./HEADER_FILES/DS_HEADER/DoublyLinkedList.h"
#include "./HEADER_FILES/DS_HEADER/SinglyCircularLinkedList.h"
#include "./HEADER_FILES/DS_HEADER/DoublyCircularLinkedList.h"
GtkWidget *Main_window;
GtkWidget *Container;
GtkWidget *Heading;
GtkWidget *Stack;
GtkWidget *Code;
GtkWidget *File;
GtkWidget *Clear;
GtkWidget *Outputview;
GtkWidget *Noutview;
GtkWidget *Menuback;
GtkWidget *Download;
GtkWidget *Main_menu;
GtkWidget *Sourcecode;
GtkWidget *Stackswitch;
GtkWidget *Outputwindow;
GtkWidget *Mainimg;
GtkWidget *Thankimg;
GtkWidget *Teamlabel;
///==============  CONCEPT POINTERS ==============
GtkWidget *Cview;
GtkWidget *Cgrid;
GtkWidget *Cimg1;
GtkWidget *Cimg2;
GtkWidget *Cimg3;
GtkWidget *Cimg4;
GtkWidget *Cimg5;
GtkWidget *Cimg6;
GtkWidget *Cimg7;
GtkWidget *Cimg8;
GtkWidget *Cimg9;
GtkWidget *Cimg10;
GtkWidget *Cimg11;
GtkWidget *Cimg12;
GtkWidget *Cimg13;
///=====================================================
///==============  NUMBER STACK POINTERS ==============
GtkWidget *Nview;
GtkWidget *Ngrid;
GtkWidget *Sview;
GtkWidget *Sgrid;
GtkWidget *Numtoggel;
GtkWidget *Selectlabel1;
GtkWidget *Selectlabel2;
GtkWidget *Selectlabel3;
GtkWidget *Selectlabel4;
GtkWidget *Selectlabel5;
GtkWidget *Selectlabel6;
GtkWidget *Selectlabel7;
GtkWidget *Selectlabel8;
GtkWidget *Noutlabel;
GtkWidget *Numarg1;
GtkWidget *Numarg2;
GtkWidget *Numoutdisp;
GtkWidget *Noutlabel;
GtkWidget *Numberl1;
GtkWidget *Numberl2;
///=====================================================
///==============  PATTERN STACK POINTERS ==============
GtkWidget *Poutlabel;
GtkWidget *Patternopt;
GtkWidget *Patternrow;
GtkWidget *Patternoutput;
GtkWidget *Patternlink;
///====================================================
///==============  STRING STACK POINTERS ==============
GtkWidget *strentry1;
GtkWidget *strentry2;
GtkWidget *strspin1;
GtkWidget *strspin2;
GtkWidget *strexecute;
GtkWidget *strshowcode;
GtkWidget *strdownload;
GtkWidget *Soutputlabel;
GtkWidget *strlabel1;
GtkWidget *strlabel2;
GtkWidget *strlabel3;
GtkWidget *strlabel4;
///==============  ARRAY STACK POINTERS ==============

int ipcnt = 0;
int arrayLimit = 0;
int array[2147];

GtkWidget *strlabel5;
GtkWidget *strlabel6;
GtkWidget *strlabel7;
GtkWidget *strlabel8;
GtkWidget *SetArraySizeSpin;
GtkWidget *FillArrayElementSpin;
GtkWidget *ArrayTargetElementSpin;
GtkWidget *ArrayTargetPositionSpin;
GtkWidget *Set_Array_Size_Button;
GtkWidget *Fill_Array_Element_Button;
GtkWidget *Arrexecute;
GtkWidget *Arrshowcode;
GtkWidget *Arrdownload;
GtkWidget *Aoutlabel1;
GtkWidget *Aoutlabel2;
GtkWidget *Aview;
GtkWidget *Agrid;
//======================================================

///==============  DS STACK POINTERS ==============
GtkWidget *DSview;
GtkWidget *DSgrid;
GtkWidget *DSarg1;
GtkWidget *DSarg2;
GtkWidget *DSoutlabel;
GtkWidget *DSexecute;
//======================================================
// CCONCEPT-SCROLL
GtkWidget *CScroll[1000];
int CRow = 0;
char CScrollTemp[1000];
int copt = 0;
void on_CRow();

// NUMBER-SCROLL
GtkWidget *NumberScroll[1000];
int NumberRow = 0;
char NmberScrollTemp[1000];
int numopt = 0;
void on_NumberRow();

// ARRAY-SCROLL
GtkWidget *ArrayScroll[1000];
int ArrayRow = 0;
char ArrayScrollTemp[1000];
int arropt = 0;
void on_ArrayRow();

// STRING-SCROLL
GtkWidget *StringScroll[1000];
int StringRow = 0;
char StringScrollTemp[1000];
int stropt = 0;
void on_StringRow();

// DS-SCROLL
GtkWidget *DSScroll[1000];
int DSRow = 0;
char DSScrollTemp[1000];
int DSopt = 0;
void on_DSRow();

// STACK-SWITCHER VARIABLES
int HomeSatck;
int CCSatck;
int IntSatck;
int PatSatck;
int Arrck;
int StrSatck;
int DSSatck;
int TeamSatck;
GtkBuilder *Cproject;
GtkBuilder *Exit;

int main(int argc, char *argv[])
{
	gtk_init(&argc, &argv);
	Cproject = gtk_builder_new_from_file("Core2Web.glade");
	Main_window = GTK_WIDGET(gtk_builder_get_object(Cproject, "Main_window"));
	g_signal_connect(Main_window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
	gtk_builder_connect_signals(Cproject, NULL);
	Container = GTK_WIDGET(gtk_builder_get_object(Cproject, "Container"));
	Heading = GTK_WIDGET(gtk_builder_get_object(Cproject, "Heading"));
	Stack = GTK_WIDGET(gtk_builder_get_object(Cproject, "Stack"));
	Stackswitch = GTK_WIDGET(gtk_builder_get_object(Cproject, "Stackswitch"));
	Outputwindow = GTK_WIDGET(gtk_builder_get_object(Cproject, "Outputwindow"));
	Code = GTK_WIDGET(gtk_builder_get_object(Cproject, "Code"));
	Clear = GTK_WIDGET(gtk_builder_get_object(Cproject, "Clear"));
	File = GTK_WIDGET(gtk_builder_get_object(Cproject, "File"));
	Outputview = GTK_WIDGET(gtk_builder_get_object(Cproject, "Outputview"));
	Noutview = GTK_WIDGET(gtk_builder_get_object(Cproject, "Noutview"));
	Download = GTK_WIDGET(gtk_builder_get_object(Cproject, "Download"));
	Main_menu = GTK_WIDGET(gtk_builder_get_object(Cproject, "Main_menu"));
	Sourcecode = GTK_WIDGET(gtk_builder_get_object(Cproject, "Sourcecode"));
	Menuback = GTK_WIDGET(gtk_builder_get_object(Cproject, "Menuback"));
	Stackswitch = GTK_WIDGET(gtk_builder_get_object(Cproject, "Stackswitch"));
	Mainimg = GTK_WIDGET(gtk_builder_get_object(Cproject, "Mainimg"));
	Thankimg = GTK_WIDGET(gtk_builder_get_object(Cproject, "Thankimg"));
	Teamlabel = GTK_WIDGET(gtk_builder_get_object(Cproject, "Teamlabel"));
	//================================ NUMBER STACK POINTERS =====================================
	Nview = GTK_WIDGET(gtk_builder_get_object(Cproject, "Nview"));
	Ngrid = GTK_WIDGET(gtk_builder_get_object(Cproject, "Ngrid"));
	Selectlabel1 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Selectlabel1"));
	Selectlabel2 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Selectlabel2"));
	Selectlabel3 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Selectlabel3"));
	Selectlabel4 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Selectlabel4"));
	Selectlabel5 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Selectlabel5"));
	Noutlabel = GTK_WIDGET(gtk_builder_get_object(Cproject, "Noutlabel"));
	Numarg1 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Numarg1"));
	Numarg2 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Numarg2"));
	Numoutdisp = GTK_WIDGET(gtk_builder_get_object(Cproject, "Numoutdisp"));
	Numberl1 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Numberl1"));
	Numberl2 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Numberl2"));

	//===========================================================================================
	//================================ CONCEPT STACK POINTERS =====================================
	Cview = GTK_WIDGET(gtk_builder_get_object(Cproject, "Cview"));
	Cgrid = GTK_WIDGET(gtk_builder_get_object(Cproject, "Cgrid"));
	Cimg1 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Cimg1"));
	Cimg2 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Cimg2"));
	Cimg3 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Cimg3"));
	Cimg4 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Cimg4"));
	Cimg5 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Cimg5"));
	Cimg6 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Cimg6"));
	Cimg7 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Cimg7"));
	Cimg8 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Cimg8"));
	Cimg9 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Cimg9"));
	Cimg10 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Cimg10"));
	Cimg11 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Cimg11"));
	Cimg12 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Cimg12"));
	Cimg13 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Cimg13"));
	Selectlabel8 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Selectlabel8"));
	//===========================================================================================
	//================================ PATTERN STACK POINTERS =====================================
	Poutlabel = GTK_WIDGET(gtk_builder_get_object(Cproject, "Poutlabel"));
	Selectlabel6 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Selectlabel6"));
	Patternopt = GTK_WIDGET(gtk_builder_get_object(Cproject, "Patternopt"));
	Patternrow = GTK_WIDGET(gtk_builder_get_object(Cproject, "Patternrow"));
	Patternoutput = GTK_WIDGET(gtk_builder_get_object(Cproject, "Patternoutput"));
	Patternlink = GTK_WIDGET(gtk_builder_get_object(Cproject, "Patternlink"));
	//===========================================================================================

	//================================ ARRAY STACK POINTERS =====================================

	strlabel5 = GTK_WIDGET(gtk_builder_get_object(Cproject, "strlabel5"));
	strlabel6 = GTK_WIDGET(gtk_builder_get_object(Cproject, "strlabel6"));
	strlabel7 = GTK_WIDGET(gtk_builder_get_object(Cproject, "strlabel7"));
	strlabel8 = GTK_WIDGET(gtk_builder_get_object(Cproject, "strlabel8"));
	SetArraySizeSpin = GTK_WIDGET(gtk_builder_get_object(Cproject, "SetArraySizeSpin"));
	FillArrayElementSpin = GTK_WIDGET(gtk_builder_get_object(Cproject, "FillArrayElementSpin"));
	ArrayTargetElementSpin = GTK_WIDGET(gtk_builder_get_object(Cproject, "ArrayTargetElementSpin"));
	ArrayTargetPositionSpin = GTK_WIDGET(gtk_builder_get_object(Cproject, "ArrayTargetPositionSpin"));
	Set_Array_Size_Button = GTK_WIDGET(gtk_builder_get_object(Cproject, "Set_Array_Size_Button"));
	Fill_Array_Element_Button = GTK_WIDGET(gtk_builder_get_object(Cproject, "Fill_Array_Element_Button"));
	Arrexecute = GTK_WIDGET(gtk_builder_get_object(Cproject, "Arrexecute"));
	Arrshowcode = GTK_WIDGET(gtk_builder_get_object(Cproject, "Arrshowcode"));
	Arrdownload = GTK_WIDGET(gtk_builder_get_object(Cproject, "Arrdownload"));
	Aoutlabel1 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Aoutlabel1"));
	Aoutlabel2 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Aoutlabel2"));
	Aview = GTK_WIDGET(gtk_builder_get_object(Cproject, "Aview"));
	Agrid = GTK_WIDGET(gtk_builder_get_object(Cproject, "Agrid"));
	//===========================================================================================
	//================================ STRING STACK POINTERS ====================================
	Sview = GTK_WIDGET(gtk_builder_get_object(Cproject, "Sview"));
	Sgrid = GTK_WIDGET(gtk_builder_get_object(Cproject, "Sgrid"));
	strentry1 = GTK_WIDGET(gtk_builder_get_object(Cproject, "strentry1"));
	strentry2 = GTK_WIDGET(gtk_builder_get_object(Cproject, "strentry2"));
	strspin1 = GTK_WIDGET(gtk_builder_get_object(Cproject, "strspin1"));
	strspin2 = GTK_WIDGET(gtk_builder_get_object(Cproject, "strspin2"));
	Soutputlabel = GTK_WIDGET(gtk_builder_get_object(Cproject, "Soutputlabel"));
	strlabel1 = GTK_WIDGET(gtk_builder_get_object(Cproject, "strlabel1"));
	strlabel2 = GTK_WIDGET(gtk_builder_get_object(Cproject, "strlabel2"));
	strlabel3 = GTK_WIDGET(gtk_builder_get_object(Cproject, "strlabel3"));
	strlabel4 = GTK_WIDGET(gtk_builder_get_object(Cproject, "strlabel4"));
	//===========================================================================================
	//================================ DS STACK POINTERS ====================================
	Selectlabel7 = GTK_WIDGET(gtk_builder_get_object(Cproject, "Selectlabel7"));
	DSoutlabel = GTK_WIDGET(gtk_builder_get_object(Cproject, "DSoutlabel"));
	DSview = GTK_WIDGET(gtk_builder_get_object(Cproject, "DSview"));
	DSgrid = GTK_WIDGET(gtk_builder_get_object(Cproject, "DSgrid"));
	DSarg1 = GTK_WIDGET(gtk_builder_get_object(Cproject, "DSarg1"));
	DSarg2 = GTK_WIDGET(gtk_builder_get_object(Cproject, "DSarg2"));
	//===========================================================================================
	GdkColor color;
	color.red = 0xffff;
	color.green = 0xffff;
	color.blue = 0xffff;
	gtk_widget_modify_bg(GTK_WIDGET(Selectlabel1), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_bg(GTK_WIDGET(Selectlabel2), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_bg(GTK_WIDGET(Selectlabel3), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_bg(GTK_WIDGET(Selectlabel4), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_bg(GTK_WIDGET(Selectlabel5), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_bg(GTK_WIDGET(Selectlabel6), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_bg(GTK_WIDGET(Selectlabel7), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_bg(GTK_WIDGET(Selectlabel8), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_bg(GTK_WIDGET(Poutlabel), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_bg(GTK_WIDGET(Noutlabel), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_bg(GTK_WIDGET(Aoutlabel1), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_bg(GTK_WIDGET(Aoutlabel2), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_bg(GTK_WIDGET(Soutputlabel), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_bg(GTK_WIDGET(DSoutlabel), GTK_STATE_NORMAL, &color);
	color.red = 0x6400;
	color.green = 0xbb110;
	color.blue = 0xf270;
	gtk_widget_modify_bg(GTK_WIDGET(Outputview), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_bg(GTK_WIDGET(Stack), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_bg(GTK_WIDGET(Menuback), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_bg(GTK_WIDGET(Teamlabel), GTK_STATE_NORMAL, &color);
	color.red = 0x0000;
	color.green = 0x0000;
	color.blue = 0x6400;
	gtk_widget_modify_bg(GTK_WIDGET(Sourcecode), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_bg(GTK_WIDGET(Code), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_bg(GTK_WIDGET(Main_menu), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_bg(GTK_WIDGET(Heading), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_fg(GTK_WIDGET(Outputwindow), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_fg(GTK_WIDGET(Patternoutput), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_fg(GTK_WIDGET(Noutlabel), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_fg(GTK_WIDGET(Aoutlabel1), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_fg(GTK_WIDGET(Aoutlabel2), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_fg(GTK_WIDGET(Soutputlabel), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_fg(GTK_WIDGET(DSoutlabel), GTK_STATE_NORMAL, &color);
	gtk_widget_modify_fg(GTK_WIDGET(Patternlink), GTK_STATE_NORMAL, &color);
	gtk_label_set_text(GTK_LABEL(Sourcecode), (const gchar *)"ABOUT CCPL");
	gtk_widget_set_visible(Mainimg, FALSE);
	FILE *f1 = fopen("./FUNCTION_LIST/Number.txt", "r");
	if (f1 == NULL)
	{
		return EXIT_SUCCESS;
	}
	while (1)
	{
		if (fgets(NmberScrollTemp, 1000, f1) == NULL)
		{
			fclose(f1);
			break;
		}
		NmberScrollTemp[strlen(NmberScrollTemp) - 1] = 0;
		gtk_grid_insert_row(GTK_GRID(Ngrid), NumberRow);
		NumberScroll[NumberRow] = gtk_button_new_with_label(NmberScrollTemp);
		gtk_button_set_alignment(GTK_BUTTON(NumberScroll[NumberRow]), 0.0, 0.5);
		gtk_grid_attach(GTK_GRID(Ngrid), NumberScroll[NumberRow], 1, NumberRow, 1, 1);
		g_signal_connect(NumberScroll[NumberRow], "clicked", G_CALLBACK(on_NumberRow), NULL);
		NumberRow++;
	}

	FILE *f2 = fopen("./FUNCTION_LIST/Cconcept.txt", "r");
	if (f2 == NULL)
	{
		return EXIT_SUCCESS;
	}
	while (1)
	{
		if (fgets(CScrollTemp, 1000, f2) == NULL)
		{
			fclose(f2);
			break;
		}
		CScrollTemp[strlen(CScrollTemp) - 1] = 0;
		gtk_grid_insert_row(GTK_GRID(Cgrid), CRow);
		CScroll[CRow] = gtk_button_new_with_label(CScrollTemp);
		gtk_button_set_alignment(GTK_BUTTON(CScroll[CRow]), 0.0, 0.5);
		gtk_grid_attach(GTK_GRID(Cgrid), CScroll[CRow], 1, CRow, 1, 1);
		g_signal_connect(CScroll[CRow], "clicked", G_CALLBACK(on_CRow), NULL);
		CRow++;
	}

	FILE *f3 = fopen("./FUNCTION_LIST/Array.txt", "r");
	if (f3 == NULL)
	{
		return EXIT_SUCCESS;
	}
	while (1)
	{
		if (fgets(ArrayScrollTemp, 1000, f3) == NULL)
		{
			fclose(f3);
			break;
		}
		ArrayScrollTemp[strlen(ArrayScrollTemp) - 1] = 0;
		gtk_grid_insert_row(GTK_GRID(Agrid), ArrayRow);
		ArrayScroll[ArrayRow] = gtk_button_new_with_label(ArrayScrollTemp);
		gtk_button_set_alignment(GTK_BUTTON(ArrayScroll[ArrayRow]), 0.0, 0.5);
		gtk_grid_attach(GTK_GRID(Agrid), ArrayScroll[ArrayRow], 1, ArrayRow, 1, 1);
		g_signal_connect(ArrayScroll[ArrayRow], "clicked", G_CALLBACK(on_ArrayRow), NULL);
		ArrayRow++;
	}

	FILE *f4 = fopen("./FUNCTION_LIST/String.txt", "r");
	if (f4 == NULL)
	{
		return EXIT_SUCCESS;
	}
	while (1)
	{
		if (fgets(StringScrollTemp, 1000, f4) == NULL)
		{
			fclose(f4);
			break;
		}
		StringScrollTemp[strlen(StringScrollTemp) - 1] = 0;
		gtk_grid_insert_row(GTK_GRID(Sgrid), StringRow);
		StringScroll[StringRow] = gtk_button_new_with_label(StringScrollTemp);
		gtk_button_set_alignment(GTK_BUTTON(StringScroll[StringRow]), 0.0, 0.5);
		gtk_grid_attach(GTK_GRID(Sgrid), StringScroll[StringRow], 1, StringRow, 1, 1);
		g_signal_connect(StringScroll[StringRow], "clicked", G_CALLBACK(on_StringRow), NULL);
		StringRow++;
	}

	FILE *f5 = fopen("./FUNCTION_LIST/DS.txt", "r");
	if (f5 == NULL)
	{
		return EXIT_SUCCESS;
	}
	while (1)
	{
		if (fgets(DSScrollTemp, 1000, f5) == NULL)
		{
			fclose(f5);
			break;
		}
		DSScrollTemp[strlen(DSScrollTemp) - 1] = 0;
		gtk_grid_insert_row(GTK_GRID(DSgrid), DSRow);
		DSScroll[DSRow] = gtk_button_new_with_label(DSScrollTemp);
		gtk_button_set_alignment(GTK_BUTTON(DSScroll[DSRow]), 0.0, 0.5);
		gtk_grid_attach(GTK_GRID(DSgrid), DSScroll[DSRow], 1, DSRow, 1, 1);
		g_signal_connect(DSScroll[DSRow], "clicked", G_CALLBACK(on_DSRow), NULL);
		DSRow++;
	}
	gtk_widget_show_all(Main_window);
	gtk_main();
	return EXIT_SUCCESS;
}
void on_destroy()
{
	gtk_main_quit();
}
void FileReader(FILE *fp1)
{
	char tmp[100000];
	char x = '0';
	int i = 0;
	while ((x = getc(fp1)) != EOF)
	{
		tmp[i] = x;
		i++;
	}
	tmp[i] = '\0';
	gtk_label_set_text(GTK_LABEL(Outputwindow), tmp);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////CONCEPT/////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void on_CRow(GtkButton *b)
{
	char temp[100];
	char label[100];
	strcpy(temp, gtk_button_get_label(b));
	char *move = temp;
	copt = 0;
	while (*move != '.')
	{
		copt = (copt * 10) + (*move - 48);
		move++;
	}
	sprintf(label, "SELECTED : %d", copt);
	gtk_label_set_text(GTK_LABEL(Selectlabel8), (const gchar *)label);
	gtk_label_set_text(GTK_LABEL(Sourcecode), (const gchar *)"CONCEPTS");
	switch (copt)
	{
		FILE *fp;
	case 0:
	{
		gtk_widget_set_visible(Cimg1, TRUE);
		gtk_widget_set_visible(Cimg2, FALSE);
		gtk_widget_set_visible(Cimg3, FALSE);
		gtk_widget_set_visible(Cimg4, FALSE);
		gtk_widget_set_visible(Cimg5, FALSE);
		gtk_widget_set_visible(Cimg6, FALSE);
		gtk_widget_set_visible(Cimg7, FALSE);
		gtk_widget_set_visible(Cimg8, FALSE);
		gtk_widget_set_visible(Cimg9, FALSE);
		gtk_widget_set_visible(Cimg10, FALSE);
		gtk_widget_set_visible(Cimg11, FALSE);
		gtk_widget_set_visible(Cimg12, FALSE);
		gtk_widget_set_visible(Cimg13, FALSE);
	}
	break;
	case 1:
	{
		gtk_widget_set_visible(Cimg1, TRUE);
		gtk_widget_set_visible(Cimg2, FALSE);
		gtk_widget_set_visible(Cimg3, FALSE);
		gtk_widget_set_visible(Cimg4, FALSE);
		gtk_widget_set_visible(Cimg5, FALSE);
		gtk_widget_set_visible(Cimg6, FALSE);
		gtk_widget_set_visible(Cimg7, FALSE);
		gtk_widget_set_visible(Cimg8, FALSE);
		gtk_widget_set_visible(Cimg9, FALSE);
		gtk_widget_set_visible(Cimg10, FALSE);
		gtk_widget_set_visible(Cimg11, FALSE);
		gtk_widget_set_visible(Cimg12, FALSE);
		gtk_widget_set_visible(Cimg13, FALSE);
		fp = fopen("./DESCRIPTION/CCONCEPTS/1.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 2:
	{
		gtk_widget_set_visible(Cimg1, FALSE);
		gtk_widget_set_visible(Cimg2, TRUE);
		gtk_widget_set_visible(Cimg3, FALSE);
		gtk_widget_set_visible(Cimg4, FALSE);
		gtk_widget_set_visible(Cimg5, FALSE);
		gtk_widget_set_visible(Cimg6, FALSE);
		gtk_widget_set_visible(Cimg7, FALSE);
		gtk_widget_set_visible(Cimg8, FALSE);
		gtk_widget_set_visible(Cimg9, FALSE);
		gtk_widget_set_visible(Cimg10, FALSE);
		gtk_widget_set_visible(Cimg11, FALSE);
		gtk_widget_set_visible(Cimg12, FALSE);
		gtk_widget_set_visible(Cimg13, FALSE);
		fp = fopen("./DESCRIPTION/CCONCEPTS/2.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 3:
	{
		gtk_widget_set_visible(Cimg1, FALSE);
		gtk_widget_set_visible(Cimg2, FALSE);
		gtk_widget_set_visible(Cimg3, TRUE);
		gtk_widget_set_visible(Cimg4, FALSE);
		gtk_widget_set_visible(Cimg5, FALSE);
		gtk_widget_set_visible(Cimg6, FALSE);
		gtk_widget_set_visible(Cimg7, FALSE);
		gtk_widget_set_visible(Cimg8, FALSE);
		gtk_widget_set_visible(Cimg9, FALSE);
		gtk_widget_set_visible(Cimg10, FALSE);
		gtk_widget_set_visible(Cimg11, FALSE);
		gtk_widget_set_visible(Cimg12, FALSE);
		gtk_widget_set_visible(Cimg13, FALSE);
		fp = fopen("./DESCRIPTION/CCONCEPTS/3.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 4:
	{
		gtk_widget_set_visible(Cimg1, FALSE);
		gtk_widget_set_visible(Cimg2, FALSE);
		gtk_widget_set_visible(Cimg3, FALSE);
		gtk_widget_set_visible(Cimg4, TRUE);
		gtk_widget_set_visible(Cimg5, FALSE);
		gtk_widget_set_visible(Cimg6, FALSE);
		gtk_widget_set_visible(Cimg7, FALSE);
		gtk_widget_set_visible(Cimg8, FALSE);
		gtk_widget_set_visible(Cimg9, FALSE);
		gtk_widget_set_visible(Cimg10, FALSE);
		gtk_widget_set_visible(Cimg11, FALSE);
		gtk_widget_set_visible(Cimg12, FALSE);
		gtk_widget_set_visible(Cimg13, FALSE);
		fp = fopen("./DESCRIPTION/CCONCEPTS/4.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 5:
	{
		gtk_widget_set_visible(Cimg1, FALSE);
		gtk_widget_set_visible(Cimg2, FALSE);
		gtk_widget_set_visible(Cimg3, FALSE);
		gtk_widget_set_visible(Cimg4, FALSE);
		gtk_widget_set_visible(Cimg5, TRUE);
		gtk_widget_set_visible(Cimg6, FALSE);
		gtk_widget_set_visible(Cimg7, FALSE);
		gtk_widget_set_visible(Cimg8, FALSE);
		gtk_widget_set_visible(Cimg9, FALSE);
		gtk_widget_set_visible(Cimg10, FALSE);
		gtk_widget_set_visible(Cimg11, FALSE);
		gtk_widget_set_visible(Cimg12, FALSE);
		gtk_widget_set_visible(Cimg13, FALSE);
		fp = fopen("./DESCRIPTION/CCONCEPTS/5.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 6:
	{
		gtk_widget_set_visible(Cimg1, FALSE);
		gtk_widget_set_visible(Cimg2, FALSE);
		gtk_widget_set_visible(Cimg3, FALSE);
		gtk_widget_set_visible(Cimg4, FALSE);
		gtk_widget_set_visible(Cimg5, FALSE);
		gtk_widget_set_visible(Cimg6, TRUE);
		gtk_widget_set_visible(Cimg7, FALSE);
		gtk_widget_set_visible(Cimg8, FALSE);
		gtk_widget_set_visible(Cimg9, FALSE);
		gtk_widget_set_visible(Cimg10, FALSE);
		gtk_widget_set_visible(Cimg11, FALSE);
		gtk_widget_set_visible(Cimg12, FALSE);
		gtk_widget_set_visible(Cimg13, FALSE);
		fp = fopen("./DESCRIPTION/CCONCEPTS/6.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 7:
	{
		gtk_widget_set_visible(Cimg1, FALSE);
		gtk_widget_set_visible(Cimg2, FALSE);
		gtk_widget_set_visible(Cimg3, FALSE);
		gtk_widget_set_visible(Cimg4, FALSE);
		gtk_widget_set_visible(Cimg5, FALSE);
		gtk_widget_set_visible(Cimg6, FALSE);
		gtk_widget_set_visible(Cimg7, TRUE);
		gtk_widget_set_visible(Cimg8, FALSE);
		gtk_widget_set_visible(Cimg9, FALSE);
		gtk_widget_set_visible(Cimg10, FALSE);
		gtk_widget_set_visible(Cimg11, FALSE);
		gtk_widget_set_visible(Cimg12, FALSE);
		gtk_widget_set_visible(Cimg13, FALSE);
		fp = fopen("./DESCRIPTION/CCONCEPTS/7.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 8:
	{
		gtk_widget_set_visible(Cimg1, FALSE);
		gtk_widget_set_visible(Cimg2, FALSE);
		gtk_widget_set_visible(Cimg3, FALSE);
		gtk_widget_set_visible(Cimg4, FALSE);
		gtk_widget_set_visible(Cimg5, FALSE);
		gtk_widget_set_visible(Cimg6, FALSE);
		gtk_widget_set_visible(Cimg7, FALSE);
		gtk_widget_set_visible(Cimg8, TRUE);
		gtk_widget_set_visible(Cimg9, FALSE);
		gtk_widget_set_visible(Cimg10, FALSE);
		gtk_widget_set_visible(Cimg11, FALSE);
		gtk_widget_set_visible(Cimg12, FALSE);
		gtk_widget_set_visible(Cimg13, FALSE);
		fp = fopen("./DESCRIPTION/CCONCEPTS/8.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 9:
	{
		gtk_widget_set_visible(Cimg1, FALSE);
		gtk_widget_set_visible(Cimg2, FALSE);
		gtk_widget_set_visible(Cimg3, FALSE);
		gtk_widget_set_visible(Cimg4, FALSE);
		gtk_widget_set_visible(Cimg5, FALSE);
		gtk_widget_set_visible(Cimg6, FALSE);
		gtk_widget_set_visible(Cimg7, FALSE);
		gtk_widget_set_visible(Cimg8, FALSE);
		gtk_widget_set_visible(Cimg9, TRUE);
		gtk_widget_set_visible(Cimg10, FALSE);
		gtk_widget_set_visible(Cimg11, FALSE);
		gtk_widget_set_visible(Cimg12, FALSE);
		gtk_widget_set_visible(Cimg13, FALSE);
		fp = fopen("./DESCRIPTION/CCONCEPTS/9.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 10:
	{
		gtk_widget_set_visible(Cimg1, FALSE);
		gtk_widget_set_visible(Cimg2, FALSE);
		gtk_widget_set_visible(Cimg3, FALSE);
		gtk_widget_set_visible(Cimg4, FALSE);
		gtk_widget_set_visible(Cimg5, FALSE);
		gtk_widget_set_visible(Cimg6, FALSE);
		gtk_widget_set_visible(Cimg7, FALSE);
		gtk_widget_set_visible(Cimg8, FALSE);
		gtk_widget_set_visible(Cimg9, FALSE);
		gtk_widget_set_visible(Cimg10, TRUE);
		gtk_widget_set_visible(Cimg11, FALSE);
		gtk_widget_set_visible(Cimg12, FALSE);
		gtk_widget_set_visible(Cimg13, FALSE);
		fp = fopen("./DESCRIPTION/CCONCEPTS/10.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 11:
	{
		gtk_widget_set_visible(Cimg1, FALSE);
		gtk_widget_set_visible(Cimg2, FALSE);
		gtk_widget_set_visible(Cimg3, FALSE);
		gtk_widget_set_visible(Cimg4, FALSE);
		gtk_widget_set_visible(Cimg5, FALSE);
		gtk_widget_set_visible(Cimg6, FALSE);
		gtk_widget_set_visible(Cimg7, FALSE);
		gtk_widget_set_visible(Cimg8, FALSE);
		gtk_widget_set_visible(Cimg9, FALSE);
		gtk_widget_set_visible(Cimg10, FALSE);
		gtk_widget_set_visible(Cimg11, TRUE);
		gtk_widget_set_visible(Cimg12, FALSE);
		gtk_widget_set_visible(Cimg13, FALSE);
		fp = fopen("./DESCRIPTION/CCONCEPTS/11.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 12:
	{
		gtk_widget_set_visible(Cimg1, FALSE);
		gtk_widget_set_visible(Cimg2, FALSE);
		gtk_widget_set_visible(Cimg3, FALSE);
		gtk_widget_set_visible(Cimg4, FALSE);
		gtk_widget_set_visible(Cimg5, FALSE);
		gtk_widget_set_visible(Cimg6, FALSE);
		gtk_widget_set_visible(Cimg7, FALSE);
		gtk_widget_set_visible(Cimg8, FALSE);
		gtk_widget_set_visible(Cimg9, FALSE);
		gtk_widget_set_visible(Cimg10, FALSE);
		gtk_widget_set_visible(Cimg11, FALSE);
		gtk_widget_set_visible(Cimg12, TRUE);
		gtk_widget_set_visible(Cimg13, FALSE);
		fp = fopen("./DESCRIPTION/CCONCEPTS/12.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 13:
	{
		gtk_widget_set_visible(Cimg1, FALSE);
		gtk_widget_set_visible(Cimg2, FALSE);
		gtk_widget_set_visible(Cimg3, FALSE);
		gtk_widget_set_visible(Cimg4, FALSE);
		gtk_widget_set_visible(Cimg5, FALSE);
		gtk_widget_set_visible(Cimg6, FALSE);
		gtk_widget_set_visible(Cimg7, FALSE);
		gtk_widget_set_visible(Cimg8, FALSE);
		gtk_widget_set_visible(Cimg9, FALSE);
		gtk_widget_set_visible(Cimg10, FALSE);
		gtk_widget_set_visible(Cimg11, FALSE);
		gtk_widget_set_visible(Cimg12, FALSE);
		gtk_widget_set_visible(Cimg13, TRUE);
		fp = fopen("./DESCRIPTION/CCONCEPTS/13.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 14:
	{
		fp = fopen("./DESCRIPTION/CCONCEPTS/14.txt", "r");
		FileReader(fp);
		fclose(fp);
		gtk_widget_set_visible(Cimg13, FALSE);
	}
	break;
	case 15:
	{
		fp = fopen("./DESCRIPTION/CCONCEPTS/15.txt", "r");
		FileReader(fp);
		fclose(fp);
		gtk_widget_set_visible(Cimg13, FALSE);
	}
	break;
	case 16:
	{
		fp = fopen("./DESCRIPTION/CCONCEPTS/16.txt", "r");
		FileReader(fp);
		fclose(fp);
		gtk_widget_set_visible(Cimg13, FALSE);
	}
	break;
	case 17:
	{
		fp = fopen("./DESCRIPTION/CCONCEPTS/17.txt", "r");
		FileReader(fp);
		fclose(fp);
		gtk_widget_set_visible(Cimg13, FALSE);
	}
	break;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////NUMBERS/////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
gboolean T;
void on_Numtoggel_state_set(GtkSwitch *s)
{
	T = gtk_switch_get_active(s);
	gtk_label_set_text(GTK_LABEL(Numberl1), (const gchar *)"STARTING NUMBER :");
	gtk_label_set_text(GTK_LABEL(Numberl2), (const gchar *)"ENDING NUMBER    :");
	if (T)
	{
		gtk_spin_button_set_value(Numarg1, 0);
		gtk_spin_button_set_value(Numarg2, 0);
		gtk_label_set_text(GTK_LABEL(Noutlabel), NULL);
		// gtk_label_set_text(GTK_LABEL(Outputwindow), NULL);
		gtk_widget_set_visible(Numberl2, TRUE);
		gtk_widget_set_visible(Numarg2, TRUE);
		gtk_label_set_text(GTK_LABEL(Numberl1), (const gchar *)"STARTING NUMBER : ");
		gtk_label_set_text(GTK_LABEL(Numberl2), (const gchar *)"ENDING NUMBER : ");
	}
	else
	{
		gtk_spin_button_set_value(Numarg1, 0);
		gtk_spin_button_set_value(Numarg2, 0);
		gtk_label_set_text(GTK_LABEL(Noutlabel), NULL);
		// gtk_label_set_text(GTK_LABEL(Outputwindow), NULL);
		gtk_widget_set_visible(Numberl2, FALSE);
		gtk_widget_set_visible(Numarg2, FALSE);
		gtk_label_set_text(GTK_LABEL(Numberl1), (const gchar *)"ENTER NUMBER : ");
	}
}
void on_NumberRow(GtkButton *b)
{
	gtk_spin_button_set_value(Numarg1, 0);
	gtk_spin_button_set_value(Numarg2, 0);
	gtk_label_set_text(GTK_LABEL(Noutlabel), NULL);
	gtk_label_set_text(GTK_LABEL(Outputwindow), NULL);
	char temp[100];
	char output[100];
	strcpy(temp, gtk_button_get_label(b));
	char *move = temp;
	numopt = 0;
	while (*move != '.')
	{
		numopt = (numopt * 10) + (*move - 48);
		move++;
	}
	gtk_label_set_text(GTK_LABEL(Sourcecode), (const gchar *)"DESCRIPTION");
	sprintf(output, "SELECTED : %d", numopt);
	gtk_label_set_text(GTK_LABEL(Selectlabel1), (const gchar *)output);
	FILE *fp;
	switch (numopt)
	{
	case 0:
	{
		gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO INPUT");
	}
	break;
	case 1:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/AbundantNum.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;

	case 2:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/ArmstrongNum.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;

	case 3:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/Factorial.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;

	case 4:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/DeficientNum.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 5:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/IntPalindrome.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 6:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/PerfectNum.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 7:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/PrimeNum.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;

	case 8:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/ReverseNum.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;

	case 9:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/StrongNum.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 10:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/NivenNum.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;

	case 11:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/DuckNum.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;

	case 12:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/DisariumNum.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 13:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/AutomorphicNum.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 14:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/CompositeNum.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;

	case 15:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/SumOfFactors.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;

	case 16:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/SquareRoot.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 17:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/DigitCount.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 18:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/MaxDigit.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 19:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/MinDigit.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 20:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/GCD.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 21:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/LCM.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 22:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/HCF.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 23:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/SumOfDigits.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 24:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/Power.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 25:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/Leapyear.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;

	case 26:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/Table.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;

	case 27:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/EvenNum.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 28:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/OddNum.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 29:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/SpyNum.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;

	case 30:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/ProdOfDigits.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;

	case 31:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/FibonacciSeries.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 32:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/DigitSearch.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 33:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/BellNumber.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 34:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/AmicableNum.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 35:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/AnagramNum.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 36:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/EvenDigitSum.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;

	case 37:
	{
		fp = fopen("./DESCRIPTION/NUMBER/integerDescription/OddDigitSum.txt", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	}
}
void on_Numexecute_clicked(GtkButton *b)
{
	gdouble val1 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg1));
	int arg1 = (int)val1;
	gdouble val2;
	int arg2;
	char integerOutput[50000];
	int intOutput;
	long longOutput;
	float floatOutput;
	int tempSwitchArg;
	////////////////////////////////INTEGER SWITCH////////////////////////////////////////////

	if (T)
	{
		tempSwitchArg = 0;
		val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
		arg2 = (int)val2;
	}
	else
		tempSwitchArg = 1;

	switch (tempSwitchArg)
	{

	case 0:
	{
		switch (numopt)
		{

		case 0:
		{
			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO OPTION SELECTED");
		}
		break;
		case 1:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;
			sprintf(integerOutput, abundantRange(arg1, arg2));
			if (strcmp(integerOutput, "-1") == 0)
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO NUMBER FOUND");
			else
			{
				sprintf(integerOutput, abundantRange(arg1, arg2));
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
			}
		}
		break;
		case 2:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;
			sprintf(integerOutput, armstrongRange(arg1, arg2));
			if (strcmp(integerOutput, "-1") == 0)
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO NUMBER FOUND");
			else
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;

		case 4:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;
			sprintf(integerOutput, deficientRange(arg1, arg2));
			if (strcmp(integerOutput, "-1") == 0)
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO NUMBER FOUND");
			else
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;
		case 5:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;
			sprintf(integerOutput, palindromeRange(arg1, arg2));
			if (strcmp(integerOutput, "-1") == 0)
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO NUMBER FOUND");
			else
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;
		case 6:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;
			sprintf(integerOutput, perfectRange(arg1, arg2));
			if (strcmp(integerOutput, "-1") == 0)
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO NUMBER FOUND");
			else
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;
		case 7:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;
			sprintf(integerOutput, primeRange(arg1, arg2));
			if (strcmp(integerOutput, "-1") == 0)
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO NUMBER FOUND");
			else
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;

		case 9:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;
			sprintf(integerOutput, strongRange(arg1, arg2));
			if (strcmp(integerOutput, "-1") == 0)
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO NUMBER FOUND");
			else
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;

		case 10:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;
			sprintf(integerOutput, nivenRange(arg1, arg2));
			if (strcmp(integerOutput, "-1") == 0)
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO NUMBER FOUND");
			else
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;

		case 12:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;
			sprintf(integerOutput, disariumRange(arg1, arg2));
			if (strcmp(integerOutput, "-1") == 0)
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO NUMBER FOUND");
			else
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;

		case 13:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;
			sprintf(integerOutput, automorphicRange(arg1, arg2));
			if (strcmp(integerOutput, "-1") == 0)
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO NUMBER FOUND");
			else
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;
		case 14:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;
			sprintf(integerOutput, compositeRange(arg1, arg2));
			if (strcmp(integerOutput, "-1") == 0)
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO NUMBER FOUND");
			else
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;

		case 16:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;
			printf("%d\n", arg1);
			printf("%d\n", arg2);
			sprintf(integerOutput, squareRootRange(arg1, arg2));
			if (strcmp(integerOutput, "-1") == 0)
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO NUMBER FOUND");
			else
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;

		case 20:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;
			intOutput = GCD(arg1, arg2);
			sprintf(integerOutput, "%d", intOutput);
			if (strcmp(integerOutput, "-1") == 0)
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO NUMBER FOUND");
			else
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;

		case 21:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;
			intOutput = lcm(arg1, arg2);
			sprintf(integerOutput, "%d", intOutput);
			if (strcmp(integerOutput, "-1") == 0)
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO NUMBER FOUND");
			else
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;
		case 22:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;
			intOutput = hcf(arg1, arg2);
			sprintf(integerOutput, "%d", intOutput);
			if (strcmp(integerOutput, "-1") == 0)
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO NUMBER FOUND");
			else
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;

		case 24:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;
			intOutput = power(arg1, arg2);
			sprintf(integerOutput, "%d", intOutput);
			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;

		case 25:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;
			sprintf(integerOutput, LeapyearRange(arg1, arg2));
			if (strcmp(integerOutput, "-1") == 0)
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO NUMBER FOUND");
			else
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;

		case 27:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;
			sprintf(integerOutput, evenNumRange(arg1, arg2));
			if (strcmp(integerOutput, "-1") == 0)
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO NUMBER FOUND");
			else
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;

		case 28:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;
			sprintf(integerOutput, oddNumRange(arg1, arg2));
			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;

		case 29:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;
			sprintf(integerOutput, spyNumRange(arg1, arg2));
			if (strcmp(integerOutput, "-1") == 0)
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO NUMBER FOUND");
			else
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;
		case 32:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;

			intOutput = digitSearch(arg1, arg2);

			if (intOutput == 1)
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"DIGIT FOUND");
			}
			else
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"DIGIT NOT FOUND");
			}
		}
		break;
		case 34:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;

			intOutput = amicableNumber(arg1, arg2);

			if (intOutput == 1)
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"AMICABLE NUMBERS");
			}
			else
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NON AMICABLE NUMBERS");
			}
		}
		break;
		case 35:
		{
			val2 = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Numarg2));
			arg2 = val2;

			intOutput = Anagrams_Num(arg1, arg2);

			if (intOutput == 1)
			{

				//
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"ANAGRAM NUMBER");
			}
			else
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NOT AN ANAGRAM NUMBER");
			}
		}
		break;

		default:
		{
			//
			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"SWITCH TO SINGLE INPUT");
		}
		}
		break;
	}
	case 1:
	{
		switch (numopt)
		{

		case 0:
		{

			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO OPTION SELECTED");
			break;
		}
		case 1:
		{

			intOutput = abundant(arg1);

			if (intOutput == 1)
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"ABUNDANT NUMBER");
			}
			else
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NOT AN ABUNDANT NUMBER");
			}
		}
		break;
		case 2:
		{

			intOutput = isArmstrong(arg1);

			if (intOutput == 1)
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"ARMSTRONG NUMBER");
			}
			else
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NOT AN ARMSTRONG NUMBER");
			}
		}
		break;
		case 3:
		{
			longOutput = factorial(arg1);
			sprintf(integerOutput, "%ld", longOutput);

			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;
		case 4:
		{

			intOutput = deficient(arg1);

			if (intOutput == 1)
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"DEFICIENT NUMBER");
			}
			else
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NOT AN DEFICIENT NUMBER");
			}
		}
		break;
		case 5:
		{

			intOutput = palindrome(arg1);

			if (intOutput == 1)
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"PALINDROME NUMBER");
			}
			else
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NOT AN PALINDROME NUMBER");
			}
		}
		break;
		case 6:
		{

			intOutput = perfect(arg1);

			if (intOutput == 1)
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"PERFECT NUMBER");
			}
			else
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NOT AN PERFECT NUMBER");
			}
		}
		break;
		case 7:
		{

			intOutput = isPrime(arg1);

			if (intOutput == 1)
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"PRIME NUMBER");
			}
			else
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NOT AN PRIME NUMBER");
			}
		}
		break;
		case 8:
		{
			intOutput = intReverse(arg1);
			sprintf(integerOutput, "%d", intOutput);

			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;
		case 9:
		{

			intOutput = isStrong(arg1);

			if (intOutput == 1)
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"STRONG NUMBER");
			}
			else
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NOT A STRONG NUMBER");
			}
		}
		break;
		case 10:
		{

			intOutput = isNiven(arg1);

			if (intOutput == 1)
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NIVEN NUMBER");
			}
			else
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NOT AN NIVEN NUMBER");
			}
		}
		break;
		case 11:
		{

			intOutput = isDuck(arg1);

			if (intOutput == 1)
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"DUCK NUMBER");
			}
			else
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NOT A DUCK NUMBER");
			}
		}
		break;
		case 12:
		{

			intOutput = isDisarium(arg1);

			if (intOutput == 1)
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"DISARIUM NUMBER");
			}
			else
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NOT AN DISARIUM NUMBER");
			}
		}
		break;
		case 13:
		{

			intOutput = isAutomorphic(arg1);

			if (intOutput == 1)
			{
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"AUTOMORPHIC NUMBER");
			}
			else
			{
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NOT AN AUTOMORPHIC NUMBER");
			}
		}
		break;
		case 14:
		{

			intOutput = isComposite(arg1);

			if (intOutput == 1)
			{
				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"COMPOSITE NUMBER");
			}
			else
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NOT AN COMPOSITE NUMBER");
			}
		}
		break;

		case 15:
		{

			intOutput = sumOfFactors(arg1);
			sprintf(integerOutput, "%d", intOutput);

			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;

		case 16:
		{

			floatOutput = squareRoot(arg1);
			sprintf(integerOutput, "%.2f", floatOutput);

			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;
		case 17:
		{
			intOutput = digitCount(arg1);
			sprintf(integerOutput, "%d", intOutput);

			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;
		case 18:
		{
			intOutput = maxDigit(arg1);
			sprintf(integerOutput, "%d", intOutput);

			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;
		case 19:
		{
			intOutput = minDigit(arg1);
			sprintf(integerOutput, "%d", intOutput);

			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;

		case 23:
		{
			intOutput = sumOfDigits(arg1);
			sprintf(integerOutput, "%d", intOutput);

			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;

		case 25:
		{

			intOutput = leapyear(arg1);

			if (intOutput == 1)
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"LEAP YEAR");
			}
			else
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NOT A LEAP YEAR");
			}
		}
		break;
		case 26:
		{
			sprintf(integerOutput, Table(arg1));

			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;
		case 27:
		{

			intOutput = evenNum(arg1);

			if (intOutput == 1)
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"EVEN NUMBER");
			}
			else
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NOT AN EVEN NUMBER");
			}
		}
		break;
		case 28:
		{

			intOutput = oddNum(arg1);

			if (intOutput == 1)
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"ODD NUMBER");
			}
			else
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NOT AN ODD NUMBER");
			}
		}
		break;
		case 29:
		{

			intOutput = spyNum(arg1);

			if (intOutput == 1)
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"SPY NUMBER");
			}
			else
			{

				gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NOT A SPY NUMBER");
			}
		}
		break;
		case 30:
		{
			intOutput = prodOfDigits(arg1);
			sprintf(integerOutput, "%d", intOutput);

			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;
		case 31:
		{
			sprintf(integerOutput, fibonacciRange(arg1));

			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;

		case 33:
		{
			sprintf(integerOutput, bellNumber(arg1));

			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;
		case 36:
		{
			intOutput = evenDigitSum(arg1);
			sprintf(integerOutput, "%d", intOutput);

			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;
		case 37:
		{
			intOutput = oddDigitSum(arg1);
			sprintf(integerOutput, "%d", intOutput);

			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)integerOutput);
		}
		break;

		default:
		{

			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"SWITCH TO DUAL INPUT");
		}
		break;
		}
		break;
	}
	}
}

void on_Numshocode_clicked(GtkButton *b)
{
	gtk_label_set_text(GTK_LABEL(Sourcecode), (const gchar *)"SOURCE CODE");
	int tempSwitchArg;

	FILE *fp;

	if (T)
		tempSwitchArg = 0;
	else
		tempSwitchArg = 1;

	switch (tempSwitchArg)
	{

	case 0:
	{
		switch (numopt)
		{

		case 0:
		{
			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO OPTION SELECTED");
		}
		break;
		case 1:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/AbundantNumRange.c", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 2:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/ArmstrongNumRange.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 4:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/DeficientNumRange.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 5:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/IntPalindromeRange.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 6:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/PerfectNumRange.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 7:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/PrimeRange.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 9:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/StrongNumRange.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 10:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/NivenNumRange.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 12:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/DisariumNumRange.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 13:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/AutomorphicNumRange.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 14:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/CompositeNumRange.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 16:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/SquareRootRange.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 20:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/GCD.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 21:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/LCM.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 22:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/HCF.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 24:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/Power.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 25:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/LeapyearRange.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 27:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/EvenNumRange.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 28:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/OddNumRange.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 29:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/SpyNumRange.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 32:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/DigitSearch.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 35:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/AnagramNum.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		default:
		{
			gtk_label_set_text(GTK_LABEL(Outputwindow), (const gchar *)"Switch to Single Input");
		}
		}
		break;
	}
	case 1:
	{
		switch (numopt)
		{

		case 0:
		{
			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO OPTION SELECTED");
		}
		break;
		case 1:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/AbundantNum.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;

		case 2:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/ArmstrongNum.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;

		case 3:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/Factorial.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;

		case 4:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/DeficientNum.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 5:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/IntPalindrome.c", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 6:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/PerfectNum.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 7:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/PrimeNum.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;

		case 8:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/ReverseNum.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;

		case 9:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/StrongNum.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 10:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/NivenNum.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;

		case 11:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/DuckNum.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;

		case 12:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/DisariumNum.c", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 13:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/AutomorphicNum.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 14:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/CompositeNum.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;

		case 15:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/SumOfFactors.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;

		case 16:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/SquareRoot.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 17:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/DigitCount.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 18:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/MaxDigit.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 19:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/MinDigit.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
			////////////////////////////////INTEGER SWITCH DISPLAY SOURCE////////////////////////////////////////////
		case 23:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/SumOfDigits.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;

		case 25:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/Leapyear.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;

		case 26:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/Table.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;

		case 27:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/EvenNum.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 28:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/OddNum.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;
		case 29:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/SpyNum.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;

		case 30:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/ProdOfDigits.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;

		case 31:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/FibonacciSeries.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;

		case 33:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/BellNum.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;

		case 36:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/EvenDigitSum.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;

		case 37:
		{
			fp = fopen("./CODE_FILES/NUMBER_CODES/IntegerSourceCode/OddDigitSum.c", "r");

			FileReader(fp);
			fclose(fp);
		}
		break;

		default:
		{
			gtk_label_set_text(GTK_LABEL(Outputwindow), (const gchar *)"Switch to Single Input");
		}
		}
		break;
	}
	}
}

void on_Numdownload_clicked(GtkButton *b)
{

	gtk_label_set_text(GTK_LABEL(Sourcecode), (const gchar *)"SOURCE CODE");
	int tempSwitchArg;

	FILE *fp;

	if (T)
		tempSwitchArg = 0;
	else
		tempSwitchArg = 1;

	switch (tempSwitchArg)
	{
	case 0:
	{
		switch (numopt)
		{

		case 0:
		{
			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO OPTION SELECTED");
		}
		break;
		case 1:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/AbundantNumRange.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 2:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/ArmstrongNumRange.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 4:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/DeficientNumRange.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 5:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/IntPalindromeRange.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 6:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/PerfectNumRange.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 7:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/PrimeRange.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 9:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/StrongNumRange.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 10:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/NivenNumRange.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 12:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/DisariumNumRange.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 13:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/AutomorphicNumRange.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 14:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/CompositeNumRange.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 16:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/SquareRootRange.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;
		case 20:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/GCD.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;
		case 21:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/LCM.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 22:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/HCF.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 24:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/Power.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 25:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/LeapyearRange.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 27:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/EvenNumRange.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 28:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/OddNumRange.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 29:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/SpyNumRange.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 32:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/DigitSearch.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 35:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/AnagramNum.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		default:
		{
			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"Switch to Single Input");
		}
		}
		break;
	}
	case 1:
	{
		switch (numopt)
		{

		case 0:
		{
			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO OPTION SELECTED");
		}
		break;
		case 1:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/AbundantNum.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 2:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/ArmstrongNum.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 3:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/Factorial.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 4:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/DeficientNum.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 5:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/IntPalindrome.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 6:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/PerfectNum.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 7:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/PrimeNum.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 8:
		{

			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/ReverseNum.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 9:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/StrongNum.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 10:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/NivenNum.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 11:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/DuckNum.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 12:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/DisariumNum.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 13:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/AutomorphicNum.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 14:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/CompositeNum.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 15:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/SumOfFactors.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 16:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/SquareRoot.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 17:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/DigitCount.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 18:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/MaxDigit.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 19:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/MinDigit.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

			////////////////////////////////INTEGER SWITCH DISPLAY SOURCE////////////////////////////////////////////
		case 23:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/SumOfDigits.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 25:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/Leapyear.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 26:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/Table.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 27:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/EvenNum.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 28:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/OddNum.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;
		case 29:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/SpyNum.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 30:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/ProdOfDigits.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 31:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/FibonacciSeries.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 33:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/BellNum.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 36:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/EvenDigitSum.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		case 37:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/NUMBER_CODES/IntegerSourceCode/OddDigitSum.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(Noutlabel), text1);
		}
		break;

		default:
		{
			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"Switch to Double Input");
		}
		}
		break;
	}
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////PATTERN////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int patopt;
int row;
void on_Patternexecute_clicked(GtkButton *b)
{
	gtk_label_set_text(GTK_LABEL(Outputwindow), (const gchar *)"");
	gtk_label_set_text(GTK_LABEL(Patternlink), (const gchar *)"");
	patopt = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Patternopt));
	row = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Patternrow));
	char temp[5000];
	gtk_label_set_text(GTK_LABEL(Sourcecode), (const gchar *)"PATTERN OUTPUT");
	switch (patopt)
	{
	case 0:
	{
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)"NO OPTION SELECTED");
	}
	break;
	case 1:
	{
		Pattern1(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 2:
	{
		Pattern2(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 3:
	{
		Pattern3(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 4:
	{
		Pattern4(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 5:
	{
		Pattern5(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 6:
	{
		Pattern6(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 7:
	{
		Pattern7(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 8:
	{
		Pattern8(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 9:
	{
		Pattern9(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 10:
	{
		Pattern10(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 11:
	{
		Pattern11(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 12:
	{
		Pattern12(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 13:
	{
		Pattern13(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 14:
	{
		Pattern14(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 15:
	{
		Pattern15(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 16:
	{
		Pattern16(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 17:
	{
		Pattern17(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 18:
	{
		Pattern18(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 19:
	{
		Pattern19(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 20:
	{
		Pattern20(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 21:
	{
		Pattern21(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 22:
	{
		Pattern22(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 23:
	{
		Pattern23(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 24:
	{
		Pattern24(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 25:
	{
		Pattern25(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 26:
	{
		Pattern26(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 27:
	{
		Pattern27(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 28:
	{
		Pattern28(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 29:
	{
		Pattern29(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 30:
	{
		Pattern30(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 31:
	{
		Pattern31(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 32:
	{
		Pattern32(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 33:
	{
		Pattern33(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 34:
	{
		Pattern34(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 35:
	{
		Pattern35(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 36:
	{
		Pattern36(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 37:
	{
		Pattern37(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 38:
	{
		Pattern38(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 39:
	{
		Pattern39(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 40:
	{
		Pattern40(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 41:
	{
		Pattern41(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 42:
	{
		Pattern42(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 43:
	{
		Pattern43(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 44:
	{
		Pattern44(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 45:
	{
		Pattern45(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 46:
	{
		Pattern46(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 47:
	{
		Pattern47(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 48:
	{
		Pattern48(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 49:
	{
		Pattern49(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 50:
	{
		Pattern50(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 51:
	{
		Pattern51(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 52:
	{
		Pattern52(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 53:
	{
		Pattern53(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 54:
	{
		Pattern54(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 55:
	{
		Pattern55(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 56:
	{
		Pattern56(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 57:
	{
		Pattern57(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;

	case 58:
	{
		Pattern58(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 59:
	{
		Pattern59(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 60:
	{
		Pattern60(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 61:
	{
		Pattern61(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 62:
	{
		Pattern62(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 63:
	{
		Pattern63(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 64:
	{
		Pattern64(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 65:
	{
		Pattern65(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 66:
	{
		Pattern66(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 67:
	{
		Pattern67(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 68:
	{
		Pattern68(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 69:
	{
		Pattern69(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 70:
	{
		Pattern70(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 71:
	{
		Pattern71(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 72:
	{
		Pattern72(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 73:
	{
		Pattern73(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 74:
	{
		Pattern74(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 75:
	{
		Pattern75(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 76:
	{
		Pattern76(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 77:
	{
		Pattern77(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 78:
	{
		Pattern78(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 79:
	{
		Pattern79(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 80:
	{
		Pattern80(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 81:
	{
		Pattern81(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 82:
	{
		Pattern82(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 83:
	{
		Pattern83(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 84:
	{
		Pattern84(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 85:
	{
		Pattern85(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 86:
	{
		Pattern86(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 87:
	{
		Pattern87(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 88:
	{
		Pattern88(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 89:
	{
		Pattern89(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 90:
	{
		Pattern90(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 91:
	{
		Pattern91(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 92:
	{
		Pattern92(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 93:
	{
		Pattern93(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 94:
	{
		Pattern94(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 95:
	{
		Pattern95(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 96:
	{
		Pattern96(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 97:
	{
		Pattern97(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 98:
	{
		Pattern98(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 99:
	{
		Pattern99(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 100:
	{
		Pattern100(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 101:
	{
		Pattern101(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 102:
	{
		Pattern102(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 103:
	{
		Pattern103(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 104:
	{
		Pattern104(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 105:
	{
		Pattern105(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 106:
	{
		Pattern106(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 107:
	{
		Pattern107(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 108:
	{
		Pattern108(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 109:
	{
		Pattern109(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 110:
	{
		Pattern110(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 111:
	{
		Pattern111(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 112:
	{
		Pattern112(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 113:
	{
		Pattern113(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 114:
	{
		Pattern114(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 115:
	{
		Pattern115(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 116:
	{
		Pattern116(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 117:
	{
		Pattern117(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 118:
	{
		Pattern118(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 119:
	{
		Pattern119(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 120:
	{
		Pattern120(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	case 121:
	{
		Pattern121(temp, row);
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)temp);
	}
	break;
	}
}
void on_Patternopt_value_changed(GtkButton *b)
{
	patopt = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Patternopt));
	char label[100];
	sprintf(label, "SELECTED : %d", patopt);
	gtk_label_set_text(GTK_LABEL(Selectlabel6), (const gchar *)label);
	gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)"");
	gtk_label_set_text(GTK_LABEL(Outputwindow), (const gchar *)"");
}

void on_Patternshocode_clicked(GtkButton *b)
{
	gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)"");
	gtk_label_set_text(GTK_LABEL(Patternlink), (const gchar *)"");
	gtk_label_set_text(GTK_LABEL(Sourcecode), (const gchar *)"SOURCE CODE");
	FILE *fp;
	switch (patopt)
	{
	case 1:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern1.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 2:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern2.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 3:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern3.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 4:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern4.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 5:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern5.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 6:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern6.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 7:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern7.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 8:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern8.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 9:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern9.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 10:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern10.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 11:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern11.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 12:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern12.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 13:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern13.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 14:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern14.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 15:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern15.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 16:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern16.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 17:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern17.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 18:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern18.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 19:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern19.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 20:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern20.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 21:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern21.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 22:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern22.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 23:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern23.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 24:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern24.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 25:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern25.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 26:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern26.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 27:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern27.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 28:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern28.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 29:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern29.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 30:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern30.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 31:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern31.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 32:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern32.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 33:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern33.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 34:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern34.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 35:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern35.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 36:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern36.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 37:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern37.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 38:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern38.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 39:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern39.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 40:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern40.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 41:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern41.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 42:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern42.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 43:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern43.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 44:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern44.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 45:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern45.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 46:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern46.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 47:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern47.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 48:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern48.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 49:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern49.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 50:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern50.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 51:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern51.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 52:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern52.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 53:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern53.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 54:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern54.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 55:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern55.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 56:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern56.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 57:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern57.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 58:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern58.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 59:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern59.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 60:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern60.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 61:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern61.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 62:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern62.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 63:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern63.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 64:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern64.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 65:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern65.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 66:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern66.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 67:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern67.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 68:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern68.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 69:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern69.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 70:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern70.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 71:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern71.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 72:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern72.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 73:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern73.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 74:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern74.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 75:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern75.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 76:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern76.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 77:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern77.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 78:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern78.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 79:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern79.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 80:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern80.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 81:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern81.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 82:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern82.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 83:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern83.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 84:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern84.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 85:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern85.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 86:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern86.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 87:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern87.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 88:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern88.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 89:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern89.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 90:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern90.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 91:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern91.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 92:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern92.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 93:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern93.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 94:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern94.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 95:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern95.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 96:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern96.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 97:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern97.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 98:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern98.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 99:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern99.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 100:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern100.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 101:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern101.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 102:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern102.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 103:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern103.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 104:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern104.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 105:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern105.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 106:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern106.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 107:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern107.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 108:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern108.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 109:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern109.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 110:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern110.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 111:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern111.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 112:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern112.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 113:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern113.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 114:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern114.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 115:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern115.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 116:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern116.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 117:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern117.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 118:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern118.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 119:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern119.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 120:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern120.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	case 121:
	{
		fp = fopen("./CODE_FILES/PATTERN_CODES/Pattern121.c", "r");
		FileReader(fp);
		fclose(fp);
	}
	break;
	default:
	{
		gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)"NO OPTION SELECTED");
	}
	}
}

void on_Patterndownload_clicked(GtkButton *b)
{
	gtk_label_set_text(GTK_LABEL(Outputwindow), (const gchar *)"");
	gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)"");
	patopt = gtk_spin_button_get_value(GTK_SPIN_BUTTON(Patternopt));
	gtk_label_set_text(GTK_LABEL(Sourcecode), (const gchar *)"DOWNLOAD LINK");
	switch (patopt)
	{
	case 0:
	{
		gtk_label_set_text(GTK_LABEL(Patternlink), (const gchar *)"NO OPTION SELECTED");
	}
	break;
	case 1:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern1.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 2:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern2.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 3:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern3.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 4:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern4.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 5:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern5.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 6:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern6.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 7:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern7.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 8:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern8.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 9:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern9.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 10:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern10.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 11:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern11.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 12:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern12.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 13:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern13.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 14:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern14.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 15:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern15.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 16:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern16.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 17:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern17.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 18:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern18.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 19:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern19.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 20:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern20.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 21:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern21.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 22:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern22.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 23:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern23.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 24:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern24.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 25:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern25.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 26:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern26.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 27:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern27.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 28:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern28.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 29:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern29.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 30:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern30.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 31:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern31.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 32:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern32.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 33:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern33.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 34:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern34.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 35:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern35.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 36:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern36.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 37:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern37.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 38:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern38.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 39:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern39.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 40:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern40.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 41:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern41.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 42:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern42.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 43:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern43.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 44:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern44.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 45:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern45.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 46:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern46.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 47:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern47.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 48:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern48.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 49:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern49.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 50:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern50.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 51:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern51.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 52:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern52.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 53:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern53.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 54:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern54.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 55:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern55.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 56:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern56.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 57:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern57.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;

	case 58:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern58.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 59:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern59.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 60:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern60.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 61:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern61.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 62:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern62.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 63:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern63.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 64:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern64.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 65:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern65.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 66:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern66.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 67:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern67.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 68:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern68.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 69:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern69.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 70:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern70.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 71:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern71.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 72:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern72.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 73:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern73.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 74:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern74.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 75:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern75.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 76:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern76.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 77:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern77.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 78:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern78.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 79:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern79.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 80:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern80.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 81:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern81.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 82:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern82.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 83:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern83.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 84:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern84.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 85:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern85.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 86:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern86.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 87:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern87.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 88:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern88.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 89:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern89.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 90:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern90.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 91:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern91.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 92:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern92.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 93:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern93.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 94:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern94.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 95:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern95.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 96:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern96.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 97:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern97.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 98:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern98.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 99:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern99.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 100:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern100.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 101:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern101.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 102:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern102.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 103:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern103.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 104:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern104.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 105:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern105.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 106:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern106.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 107:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern107.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 108:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern108.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 109:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern109.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 110:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern110.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 111:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern111.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 112:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern112.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 113:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern113.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 114:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern114.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 115:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern115.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 116:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern116.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 117:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern117.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 118:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern118.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 119:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern119.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 120:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern120.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	case 121:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/PATTERN_CODES/Pattern121.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Patternlink), text1);
	}
	break;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////ARRAY//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void printArray(char ch, int ipcnt)
{

	char arrayPrinter[2000000] = "";
	int p = 0;
	char str1[15];
	str1[0] = '\0';

	for (int i = 0; i < ipcnt; i++)
	{

		if (i != ipcnt - 1)
		{

			sprintf(str1, " %d  ,", array[i]);
		}
		else
		{
			sprintf(str1, " %d ", array[i]);
		}
		strcat(arrayPrinter, str1);
	}

	if (ch == 'i')
	{

		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"INPUT ARRAY : ");
		gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)arrayPrinter);
		sprintf(arrayPrinter, "");
		sprintf(str1, "");
	}
	else
	{

		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"OUTPUT  ARRAY : ");
		gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)arrayPrinter);
		sprintf(arrayPrinter, "");
		sprintf(str1, "");

		// gtk_label_set_text(GTK_LABEL(label6),(const gchar*)"label6");
	}
}
void arrayHideSpinLabel(int s1, int s2, int l1, int l2)
{

	// Set Array Array Spin Buttons to Default Value

	gtk_spin_button_set_value(SetArraySizeSpin, 1);
	gtk_spin_button_set_value(FillArrayElementSpin, 0);
	gtk_spin_button_set_value(ArrayTargetElementSpin, 0);
	gtk_spin_button_set_value(ArrayTargetPositionSpin, 0);

	// Hide ArrayTargetElementSpin
	if (s1)
	{
		gtk_widget_set_visible(ArrayTargetElementSpin, FALSE);
	}
	else
	{
		gtk_widget_set_visible(ArrayTargetElementSpin, TRUE);
	}

	// Hide ArrayTargetPositionSpin
	if (s2)
	{
		gtk_widget_set_visible(ArrayTargetPositionSpin, FALSE);
	}
	else
	{
		gtk_widget_set_visible(ArrayTargetPositionSpin, TRUE);
	}

	// Hide strlabel7
	if (l1)
	{
		gtk_widget_set_visible(strlabel7, FALSE);
	}
	else
	{
		gtk_widget_set_visible(strlabel7, TRUE);
	}

	// Hide strlabel8
	if (l2)
	{
		gtk_widget_set_visible(strlabel8, FALSE);
	}
	else
	{
		gtk_widget_set_visible(strlabel8, TRUE);
	}

	// gtk_widget_set_visible(ArrayTargetElementSpin,FALSE);
	// gtk_widget_set_visible(ArrayTargetPositionSpin,FALSE);
	// gtk_widget_set_visible(strlabel7,FALSE);
	// gtk_widget_set_visible(strlabel8,FALSE);
}
void on_ArrayRow(GtkButton *b)
{
	char temp[100];
	strcpy(temp, gtk_button_get_label(b));
	char label[100];
	char *move = temp;
	arropt = 0;
	ipcnt = 0;
	while (*move != '.')
	{
		arropt = (arropt * 10) + (*move - 48);
		move++;
	}
	sprintf(label, "SELECTED : %d", arropt);
	gtk_label_set_text(GTK_LABEL(Selectlabel5), (const gchar *)label);
	gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"");
	gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)"");
	gtk_label_set_text(GTK_LABEL(strlabel6), (const gchar *)"ENTER DATA IN ARRAY :");
	gtk_label_set_text(GTK_LABEL(Sourcecode), (const gchar *)"DESCRIPTION");
	switch (arropt)
	{
	case 1:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr1.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 2:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr2.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 3:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr3.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 4:
	{
		arrayHideSpinLabel(0, 1, 0, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr4.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 5:
	{
		arrayHideSpinLabel(0, 1, 0, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr5.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 6:
	{
		arrayHideSpinLabel(1, 0, 1, 0);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr6.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 7:
	{
		arrayHideSpinLabel(1, 0, 1, 0);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr7.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 8:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr8.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 9:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr9.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 10:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr10.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 11:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr11.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 12:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr12.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 13:
	{
		arrayHideSpinLabel(0, 1, 0, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr13.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 14:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr14.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 15:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr15.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 16:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr16.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 17:
	{
		arrayHideSpinLabel(0, 1, 0, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr17.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 18:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr18.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 19:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr19.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 20:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr20.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 21:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr21.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 22:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr22.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 23:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr23.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 24:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr24.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 25:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr25.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;

	case 26:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr26.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 27:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr27.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 28:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr28.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 29:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr29.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 30:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr30.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 31:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr31.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 32:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr32.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 33:
	{
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr33.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 34:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr34.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 35:
	{
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr35.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 36:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr36.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 37:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr37.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 38:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr38.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 39:
	{
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr39.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 40:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr40.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 41:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr41.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 42:
	{
		arrayHideSpinLabel(1, 1, 1, 1);
		FILE *fp1 = fopen("./DESCRIPTION/ARRAY/ArrayDescription/arr42.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	}
}

void on_Set_Array_Size_Button_clicked(GtkButton *b)
{

	if (arropt > 0)
	{
		gdouble val = gtk_spin_button_get_value(GTK_SPIN_BUTTON(SetArraySizeSpin));
		arrayLimit = (int)val;
		gtk_label_set_text(GTK_LABEL(strlabel6), (const gchar *)"ENTER DATA AT INDEX 0 : ");
		ipcnt = 0;
	}
	else
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"NO OPTION SELECTED");
	}
}

void on_Fill_Array_Element_Button_clicked(GtkButton *b)
{
	if (arropt > 0)
	{
		char tmp[128];
		gdouble val = gtk_spin_button_get_value(GTK_SPIN_BUTTON(FillArrayElementSpin));
		if (ipcnt < arrayLimit)
		{
			*(array + ipcnt) = (int)val;
			ipcnt++;
			if (arrayLimit == ipcnt)
			{
				printArray('i', ipcnt);
				sprintf(tmp, "ARRAY IS FULL   :");
			}
			else
			{
				sprintf(tmp, " ENTER DATA AT INDEX %d : ", ipcnt);
				printArray('i', ipcnt);
			}
		}
		else
		{
			sprintf(tmp, "ARRAY IS FULL   :");
		}
		gtk_label_set_text(GTK_LABEL(strlabel6), (const gchar *)tmp);
	}
	else
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"NO OPTION SELECTED");
	}
	gtk_spin_button_set_value(FillArrayElementSpin, 0);
}

void on_Arrexecute_clicked(GtkButton *b)
{
	char tmp[500];
	// gtk_label_set_text(GTK_LABEL(Aoutlabel),(const gchar*) "IN Array");
	if (ipcnt < (int)gtk_spin_button_get_value(GTK_SPIN_BUTTON(SetArraySizeSpin)) && arropt != 0)
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"COMPLETE DATA INPUT PROCESS");
	}

	else
	{

		switch (arropt)
		{
		case 0:
			gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"NO OPTION SELECTED");
			break;
		case 1:
			reverseArray(array, arrayLimit);
			printArray('o', ipcnt);
			ipcnt = 0;
			break;

		case 2:
			sortAscending(array, arrayLimit);
			printArray('o', ipcnt);
			ipcnt = 0;
			break;

		case 3:
			sortDescending(array, arrayLimit);
			printArray('o', ipcnt);
			ipcnt = 0;
			break;

		case 4:
		{

			int data = (int)gtk_spin_button_get_value(GTK_SPIN_BUTTON(ArrayTargetElementSpin));
			int result = searchNumberInArray(array, arrayLimit, data);
			if (result == 1)
			{
				sprintf(tmp, "%d : PRESENT", data);
			}
			else
			{
				sprintf(tmp, "%d : NOT PRESENT", data);
			}
			gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)tmp);
			gtk_label_set_text(GTK_LABEL(Aoutlabel2), "");
			ipcnt = 0;
			break;
		}

		case 5:
		{

			int data = (int)gtk_spin_button_get_value(GTK_SPIN_BUTTON(ArrayTargetElementSpin));
			int result = deleteNumberFromArray(array, arrayLimit, data);
			printArray('o', result);
			ipcnt = 0;
			break;
		}

		case 6:
		{
			int pos = (int)gtk_spin_button_get_value(GTK_SPIN_BUTTON(ArrayTargetPositionSpin));
			int result = nthMinimumNumberInArray(array, arrayLimit, pos);

			if (result != -1)
			{
				sprintf(tmp, "%d MINIMUM NUMBER : %d", pos, array[result]);
			}
			else
			{
				sprintf(tmp, " NOT ENOUGH UNIQUE CHARACTER ");
			}
			gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)tmp);
			gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)"");
			ipcnt = 0;
			break;
		}

		case 7:
		{
			int pos = (int)gtk_spin_button_get_value(GTK_SPIN_BUTTON(ArrayTargetPositionSpin));
			int result = nthMaximumNumberInArray(array, arrayLimit, pos);

			if (result != -1)
			{
				sprintf(tmp, "%d MAXIMUM NUMBER : %d", pos, array[result]);
			}
			else
			{
				sprintf(tmp, " NOT ENOUGH UNIQUE CHARACTER ");
			}
			gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)tmp);
			gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)"");
			ipcnt = 0;
			break;
		}

		case 8:
		{

			int result = removeEvenForArray(array, arrayLimit);
			printArray('o', result);
			ipcnt = 0;
			break;
		}

		case 9:
		{
			int result = removeOddNumber(array, arrayLimit);
			printArray('o', result);
			ipcnt = 0;
			arropt = 0;
			gtk_label_set_text(GTK_LABEL(Selectlabel5), (const gchar *)"SELECT METHOD");
			break;
		}

		case 10:
		{

			int result = findPeak(array, arrayLimit);
			sprintf(tmp, "PEAK NUMBER : %d", array[result]);
			gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)"");
			gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)tmp);
			ipcnt = 0;
			break;
		}

		case 11:
		{

			int result = firstNonRepeating(array, arrayLimit);

			if (result > -1)
			{
				sprintf(tmp, "FIRST NON-REPEATING CHARACTER : %d", array[result]);
			}
			else
			{
				sprintf(tmp, "ARRAY HAVE ZERO UNIQUE NUMBERS");
			}
			gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)tmp);
			gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)"");
			ipcnt = 0;
			break;
		}

		case 12:
		{
			int result = findMin(array, arrayLimit);
			sprintf(tmp, "MINIMUM NUMBER : %d", result);
			gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)tmp);
			gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)"");
			ipcnt = 0;
			break;
		}

		case 13:
		{
			int target = (int)gtk_spin_button_get_value(GTK_SPIN_BUTTON(ArrayTargetElementSpin));
			int result = countOccurrences(array, arrayLimit, target);
			sprintf(tmp, "OCCURANCE OF  %d : %d TIMES", target, result);
			gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)tmp);
			gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)"");
			ipcnt = 0;
			break;
		}

		case 14:
		{
			int result = maxSubArray(array, arrayLimit);
			sprintf(tmp, "MAXIMUM SUB-ARRAY ADDITION : %d", result);
			gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)tmp);
			gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)"");
			ipcnt = 0;
			break;
		}

		case 15:
		{

			grpNegPosEle(array, arrayLimit);
			printArray('o', arrayLimit);
			ipcnt = 0;
			break;
		}

		case 16:
		{

			cyclicRotate(array, arrayLimit);
			printArray('o', arrayLimit);
			ipcnt = 0;
			break;
		}

		case 17:
		{

			int target = (int)gtk_spin_button_get_value(GTK_SPIN_BUTTON(ArrayTargetElementSpin));
			int result = getPairsCount(array, arrayLimit, target);
			sprintf(tmp, "PAIRS WITH SUM %d : %d", target, result);
			gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)tmp);
			gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)"");
			ipcnt = 0;
			break;
		}

		case 18:
		{

			int result = countOfDuplicate(array, arrayLimit);
			sprintf(tmp, "DUPLICATE NUMBERS : %d", result);

			gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)tmp);
			gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)"");
			ipcnt = 0;
			break;
		}

		case 19:
		{

			int result = sumOfEvenEle(array, arrayLimit);
			sprintf(tmp, "SUM OF EVEN ELEMENTS : %d", result);
			gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)tmp);
			gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)"");
			ipcnt = 0;
			break;
		}

		case 20:
		{

			int result = sumOfOddEle(array, arrayLimit);
			sprintf(tmp, "SUM OF ODD ELEMENTS : %d", result);
			gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)tmp);
			gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)"");
			ipcnt = 0;
			break;
		}

		case 21:
		{

			int result = avgOfEle(array, arrayLimit);
			sprintf(tmp, "AVERAGE OF ALL ELEMENTS : %d", result);
			gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)tmp);
			gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)"");
			ipcnt = 0;
			break;
		}

		case 22:
		{

			int result = arrayProduct(array, arrayLimit);
			sprintf(tmp, "PRODUCT OF ALL ELEMENTS : %d", result);
			gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)tmp);
			gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)"");
			ipcnt = 0;
			break;
		}

		case 23:
		{

			repEleWithSum(array, arrayLimit);
			printArray('o', arrayLimit);
			ipcnt = 0;
			break;
		}

		case 24:
		{

			repEleWithSq(array, arrayLimit);
			printArray('o', arrayLimit);
			ipcnt = 0;
			break;
		}

		case 25:
		{

			repEleWithCube(array, arrayLimit);
			printArray('o', arrayLimit);
			ipcnt = 0;
			break;
		}

		case 26:
		{

			int result = palindromic(array, arrayLimit);
			if (result)
			{
				gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"ARRAY IS PALINDROMIC");
			}
			else
			{
				gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"ARRAY IS NOT PALINDROMIC");
			}
			gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)"");
			ipcnt = 0;
			break;
		}

		case 27:
		{

			int result = sumOddIndex(array, arrayLimit);
			sprintf(tmp, "SUM OF ALL ODD INDEX ELEMENTS : %d", result);
			gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)tmp);
			gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)"");
			ipcnt = 0;
			break;
		}

		case 28:
		{
			int result = sumEvenIndex(array, arrayLimit);
			sprintf(tmp, "SUM OF ALL EVEN INDEX ELEMENTS : %d", result);
			gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)tmp);
			gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)"");
			ipcnt = 0;
			break;
		}

		case 29:
		{
			int result = primeArray(array, arrayLimit);
			printArray('o', result);
			ipcnt = 0;
			break;
		}

		case 30:
		{

			int result = compositeArray(array, arrayLimit);
			printArray('o', result);
			ipcnt = 0;
			break;
		}

		case 31:
		{
			int result = perfectArray(array, arrayLimit);
			printArray('o', result);
			ipcnt = 0;
			break;
		}

		case 32:
		{
			int result = palindromeArray(array, arrayLimit);
			printArray('o', result);
			ipcnt = 0;
			break;
		}

		case 33:
		{
			int result = revNumberArray(array, arrayLimit);
			printArray('o', result);
			ipcnt = 0;
			break;
		}

		case 34:
		{
			int result = duckArray(array, arrayLimit);
			printArray('o', result);
			ipcnt = 0;
			break;
		}

		case 35:
		{
			int result = automorphicArray(array, arrayLimit);
			printArray('o', result);
			ipcnt = 0;
			break;
		}

		case 36:
		{
			int result = harshadArray(array, arrayLimit);
			printArray('o', result);
			ipcnt = 0;
			break;
		}

		case 37:
		{
			int result = armstrongArray(array, arrayLimit);
			printArray('o', result);
			ipcnt = 0;
			break;
		}

		case 38:
		{
			int result = abundantArray(array, arrayLimit);
			printArray('o', result);
			ipcnt = 0;
			break;
		}

		case 39:
		{

			int result = spyArray(array, arrayLimit);
			printArray('o', result);
			ipcnt = 0;
			break;
		}

		case 40:
		{

			int result = strongArray(array, arrayLimit);
			printArray('o', result);
			ipcnt = 0;
			break;
		}

		case 41:
		{

			int result = disariumArray(array, arrayLimit);
			printArray('o', result);
			ipcnt = 0;
			break;
		}

		case 42:
		{

			int result = deficientArray(array, arrayLimit);
			printArray('o', result);
			ipcnt = 0;
			break;
		}

		default:
			gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"PLEASE SELECT METHOD ");
			gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)"");
			break;
		}
	}
}

void on_Arrshowcode_clicked(GtkButton *b)
{
	gtk_label_set_text(GTK_LABEL(Sourcecode), (const gchar *)"SOURCE CODE");
	switch (arropt)
	{
	case 0:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"NO OPTION SELECTED");
	}
	break;
	case 1:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/reverseArray.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;

	case 2:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/sortArrayAsc.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 3:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/sortArrayDsc.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 4:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/FindNumberInArray.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 5:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/DeleteNumberArray.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 6:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/nthMinimum.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 7:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/nthMaximum.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 8:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/oddArray.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 9:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/evenArray.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 10:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/findPeak.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 11:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/firstNonRepeatingElement.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 12:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/findMin.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 13:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/occurenceCount.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 14:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/maxSubarray.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 15:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/grpNegPosEle.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 16:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/cyclicRotate.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 17:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/getPairsCount.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 18:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/countOfDuplicate.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 19:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/sumofEvenEle.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 20:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/sumofOddEle.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 21:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/Averageofele.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 22:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/arrayProduct.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 23:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/repWithSum.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 24:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/repWithSq.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 25:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/repWithCube.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 26:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/palindromic.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 27:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/sumOddIndex.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 28:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/sumEvenIndex.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 29:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/primeArray.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 30:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/compositeArray.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 31:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/perfectArray.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 32:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/palindromeArray.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 33:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/revNumberArray.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;

	case 34:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/duckArray.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 35:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/automorphicArray.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 36:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/harshadArray.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 37:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/armstrongArray.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 38:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/abundantArray.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 39:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/spyArray.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 40:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/strongArray.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 41:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/disariumArray.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 42:
	{
		FILE *fp1 = fopen("./CODE_FILES/ARRAY_CODES/deficientArray.c", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;

	default:
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"PLEASE SELECT METHOD ");
		gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)"");
		break;
	}
}

void on_Arrdownload_clicked(GtkButton *b)
{

	switch (arropt)
	{
	case 0:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"NO OPTION SELECTED");
	}
	break;
	case 1:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/reverseArray.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), (const gchar *)text1);
	}
	break;
	case 2:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/sortArrayAsc.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 3:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/sortArrayDsc.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 4:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/FindNumberInArray.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 5:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/DeleteNumberArray.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 6:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/nthMinimum.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 7:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/nthMaximum.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 8:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/oddArray.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 9:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/evenArray.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	case 10:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/findPeak.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 11:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/firstNonRepeatingElement.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 12:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/findMin.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 13:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/occurenceCount.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 14:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/maxSubarray.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 15:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/grpNegPosEle.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 16:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/cyclicRotate.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 17:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/getPairsCount.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 18:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/countOfDuplicate.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 19:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/sumofEvenEle.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	case 20:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/sumofOddEle.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 21:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/Averageofele.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 22:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/arrayProduct.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 23:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/repWithSum.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 24:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/repWithSq.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 25:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/repWithCube.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 26:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/palindromic.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 27:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/sumOddIndex.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 28:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/sumEvenIndex.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	case 29:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/primeArray.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 30:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/compositeArray.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 31:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/perfectArray.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 32:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/palindromeArray.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 33:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/revNumberArray.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 34:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/duckArray.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 35:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/automorphicArray.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 36:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/harshadArray.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 37:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/armstrongArray.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	case 38:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/abundantArray.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 39:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/spyArray.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 40:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/strongArray.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 41:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/disariumArray.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	case 42:
	{
		gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"CHROME LINK : ");
		const gchar *text1 =
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/ARRAY_CODES/deficientArray.c\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Aoutlabel2), text1);
	}
	break;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////STRING//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void strhide()
{

	gtk_widget_set_visible(strlabel1, FALSE);
	gtk_widget_set_visible(strlabel2, FALSE);
	gtk_widget_set_visible(strlabel3, FALSE);
	gtk_widget_set_visible(strlabel4, FALSE);
	gtk_widget_set_visible(strentry1, FALSE);
	gtk_widget_set_visible(strentry2, FALSE);
	gtk_widget_set_visible(strspin1, FALSE);
	gtk_widget_set_visible(strspin2, FALSE);
}
void strunhide(int strh)
{
	char tmp1[20];
	char tmp2[20];
	char tmp3[20];
	if (strh >= 1 && strh <= 31)
	{
		gtk_widget_set_visible(strlabel1, TRUE);
		gtk_widget_set_visible(strentry1, TRUE);
	}
	else if (strh >= 32 && strh <= 34 || strh == 41)
	{
		sprintf(tmp1, "ENTER CHAR        :");
		gtk_label_set_text(GTK_LABEL(strlabel2), tmp1);
		gtk_widget_set_visible(strlabel1, TRUE);
		gtk_widget_set_visible(strentry1, TRUE);
		gtk_widget_set_visible(strlabel2, TRUE);
		gtk_widget_set_visible(strentry2, TRUE);
	}
	else if (strh >= 35 && strh <= 38)
	{
		sprintf(tmp1, "ENTER STRING 2   ");
		gtk_label_set_text(GTK_LABEL(strlabel2), tmp1);
		gtk_widget_set_visible(strlabel1, TRUE);
		gtk_widget_set_visible(strentry1, TRUE);
		gtk_widget_set_visible(strlabel2, TRUE);
		gtk_widget_set_visible(strentry2, TRUE);
	}
	else if (strh == 39 || strh == 45)
	{
		sprintf(tmp1, "ENTER RANGE      ");
		gtk_label_set_text(GTK_LABEL(strlabel3), tmp1);
		gtk_widget_set_visible(strlabel1, TRUE);
		gtk_widget_set_visible(strentry1, TRUE);
		gtk_widget_set_visible(strlabel3, TRUE);
		gtk_widget_set_visible(strspin1, TRUE);
	}
	else if (strh == 40 || strh == 43 || strh == 44)
	{
		if (strh == 44)
		{
			sprintf(tmp1, "ENTER CHAR  ");
			gtk_label_set_text(GTK_LABEL(strlabel2), tmp1);
		}
		else
		{
			sprintf(tmp1, "ENTER STRING 2   ");
			gtk_label_set_text(GTK_LABEL(strlabel2), tmp1);
		}
		sprintf(tmp2, "ENTER RANGE      ");
		gtk_label_set_text(GTK_LABEL(strlabel3), tmp2);
		gtk_widget_set_visible(strlabel1, TRUE);
		gtk_widget_set_visible(strentry1, TRUE);
		gtk_widget_set_visible(strlabel2, TRUE);
		gtk_widget_set_visible(strentry2, TRUE);
		gtk_widget_set_visible(strlabel3, TRUE);
		gtk_widget_set_visible(strspin1, TRUE);
	}
	else if (strh == 42)
	{
		sprintf(tmp2, "START           ");
		gtk_label_set_text(GTK_LABEL(strlabel3), tmp2);
		sprintf(tmp3, "END             ");
		gtk_label_set_text(GTK_LABEL(strlabel4), tmp3);
		gtk_widget_set_visible(strlabel1, TRUE);
		gtk_widget_set_visible(strentry1, TRUE);
		gtk_widget_set_visible(strlabel3, TRUE);
		gtk_widget_set_visible(strspin1, TRUE);
		gtk_widget_set_visible(strlabel4, TRUE);
		gtk_widget_set_visible(strspin2, TRUE);
	}
	else if (strh == 0)
	{
		char tmp[20];
		sprintf(tmp, "ENTER STRING 1   ");
		gtk_label_set_text(GTK_LABEL(strlabel1), tmp);
		sprintf(tmp1, "ENTER STRING 2   ");
		gtk_label_set_text(GTK_LABEL(strlabel2), tmp1);
		sprintf(tmp2, "ENTER INPUT 1     ");
		gtk_label_set_text(GTK_LABEL(strlabel3), tmp2);
		sprintf(tmp3, "ENTER INPUT 2     ");
		gtk_label_set_text(GTK_LABEL(strlabel4), tmp3);
		gtk_widget_set_visible(strlabel1, TRUE);
		gtk_widget_set_visible(strentry1, TRUE);
		gtk_widget_set_visible(strlabel2, TRUE);
		gtk_widget_set_visible(strentry2, TRUE);
		gtk_widget_set_visible(strlabel3, TRUE);
		gtk_widget_set_visible(strspin1, TRUE);
		gtk_widget_set_visible(strlabel4, TRUE);
		gtk_widget_set_visible(strspin2, TRUE);
	}
}
void on_StringRow(GtkButton *b)
{
	strhide();
	char temp[500];
	strcpy(temp, gtk_button_get_label(b));
	char *move = temp;
	stropt = 0;
	while (*move != '.')
	{
		stropt = (stropt * 10) + (*move - 48);
		move++;
	}
	char label[100];
	sprintf(label, "SELECTED : %d", stropt);
	gtk_label_set_text(GTK_LABEL(Selectlabel4), (const gchar *)label);
	gtk_label_set_text(GTK_LABEL(Sourcecode), (const gchar *)"DESCRIPTION");
	gtk_label_set_text(GTK_LABEL(Soutputlabel), (const gchar *)"");
	gtk_entry_set_text(strentry1, "");
	gtk_entry_set_text(strentry2, "");
	gtk_spin_button_set_value(strspin1, 0);
	gtk_spin_button_set_value(strspin2, 0);
	switch (stropt)
	{
	case 1:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str1.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 2:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str2.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 3:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str3.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 4:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str4.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 5:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str5.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 6:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str6.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 7:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str7.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 8:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str8.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 9:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str9.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 10:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str10.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 11:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str11.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 12:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str12.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 13:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str13.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 14:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str14.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 15:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str15.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 16:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str16.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 17:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str17.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 18:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str18.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 19:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str19.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 20:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str20.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 21:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str21.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 22:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str22.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 23:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str23.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 24:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str24.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 25:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str25.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;

	case 26:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str26.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 27:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str27.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 28:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str28.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 29:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str29.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 30:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str30.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 31:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str31.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 32:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str32.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 33:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str33.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 34:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str34.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 35:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str35.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 36:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str36.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 37:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str37.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 38:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str38.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 39:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str39.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 40:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str40.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 41:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str41.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 42:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str42.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 43:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str43.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 44:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str44.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 45:
	{
		strunhide(stropt);
		FILE *fp1 = fopen("./DESCRIPTION/STRING/stringDes/str45.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	}
}
void on_strexecute_clicked(GtkButton *b)
{
	char tmp[10000];
	char str1[10000];
	char str2[10000];
	sprintf(str1, "%s", gtk_entry_get_text(strentry1));
	sprintf(str2, "%s", gtk_entry_get_text(strentry2));
	switch (stropt)
	{
	case 1:
	{
		if (strlen(str1) != 0)
		{
			char ptr = firstRepChar(str1);
			if (firstRepChar(str1) >= 1 && firstRepChar(str1) <= 128)
			{
				sprintf(tmp, "FIRST REPEATED CHARACTER : %c", ptr);
				gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
			}
			else
			{
				sprintf(tmp, "NO REPEATED CHARACTER");
				gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
			}
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 2:
	{
		if (strlen(str1) != 0)
		{
			if (isAlpha(str1))
			{
				sprintf(tmp, "%s : ONLY ALPHABETS", str1);
				gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
			}
			else
			{
				sprintf(tmp, "%s : NON-ALPHABETIC CHARACTER PRESENT", str1);
				gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
			}
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 3:
	{
		if (strlen(str1) != 0)
		{
			if (isAlphaNum(str1))
			{
				sprintf(tmp, "%s : ALPHA NUMERIC", str1);
				gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
			}
			else
			{
				sprintf(tmp, "%s : ONLY ALPHABETS", str1);
				gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
			}
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 4:
	{
		if (strlen(str1) != 0)
		{
			if (isDigit(str1))
			{
				sprintf(tmp, "%s : ONLY INTEGER", str1);
				gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
			}
			else
			{
				sprintf(tmp, "%s : NON-INTEGER CHARACTERS PRESENT", str1);
				gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
			}
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 5:
	{
		if (strlen(str1) != 0)
		{
			if (isPalindrome(str1))
			{
				sprintf(tmp, "%s : PALINDROME STRING", str1);
				gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
			}
			else
			{
				sprintf(tmp, "%s : NON-PALINDROME STRING", str1);
				gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
			}
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 6:
	{
		char *ch = largestChar(str1);
		if (strlen(str1) != 0)
		{
			sprintf(tmp, "LARGEST ASCII VALUE CHARACTER : %s", ch);
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 7:
	{
		if (myStrLen(str1) != 0)
		{
			sprintf(tmp, "STRING LENGTH : %d", myStrLen(str1));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 8:
	{
		if (myStrLen(str1) != 0)
		{
			char temp[1000];
			strcpy(temp, str1);
			sprintf(tmp, "BEFORE : %s\n\nAFTER : %s", temp, myStrRev(str1));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 9:
	{
		if (myStrLen(str1) != 0)
		{
			sprintf(tmp, "NUMBER OF ALPHABETS : %d", strAlphaCount(str1));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 10:
	{
		if (myStrLen(str1) != 0)
		{
			sprintf(tmp, "NUMBER OF INTEGERS : %d", strDigitCount(str1));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;

	case 11:
	{
		if (strlen(str1) != 0)
		{
			char temp[1000];
			strcpy(temp, str1);
			char *ptr = toLowerCase(str1);
			sprintf(tmp, "BEFORE : %s\n\nAFTER : %s", temp, ptr);
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 12:
	{
		if (strlen(str1) != 0)
		{
			char temp[1000];
			strcpy(temp, str1);
			char *ptr = toUpperCase(str1);
			sprintf(tmp, "BEFORE : %s\n\nAFTER : %s", temp, ptr);
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 13:
	{
		char temp[1000];
		strcpy(temp, str1);
		char *ptr = toToggleCase(str1);
		if (strlen(str1) != 0)
		{
			sprintf(tmp, "BEFORE : %s\n\nAFTRE : %s", temp, ptr);
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 14:
	{
		char ptr[10000];
		myStrCpy(ptr, str1);
		if (strlen(str1) != 0)
		{
			sprintf(tmp, ptr);
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 15:
	{
		if (strlen(str1) != 0)
		{
			sprintf(tmp, "CONSONANT COUNT : %d", consonantCount(str1));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 16:
	{
		if (strlen(str1) != 0)
		{
			sprintf(tmp, "VOWEL COUNT : %d", vowelCount(str1));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 17:
	{
		if (strlen(str1) != 0)
		{
			sprintf(tmp, "LOWER CASE COUNT : %d", lowerCount(str1));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 18:
	{
		if (strlen(str1) != 0)
		{
			sprintf(tmp, "UPPER CASE COUNT : %d", upperCount(str1));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 19:
	{
		if (strlen(str1) != 0)
		{
			char temp[1000];
			strcpy(temp, str1);
			sprintf(tmp, "BEFORE : %s\n\nAFTER : %s", temp, delDuplicate(str1));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 20:
	{
		if (strlen(str1) != 0)
		{
			char temp[1000];
			strcpy(temp, str1);
			sprintf(tmp, "BEFORE : %s\n\nAFTER : %s", temp, charWordrev(str1));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 21:
	{
		if (strlen(str1) != 0)
		{
			char temp[1000];
			strcpy(temp, str1);
			sprintf(tmp, "BEFORE : %s\n\nAFTER : %s", temp, removeDuplicates(str1));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 22:
	{
		if (strlen(str1) != 0)
		{
			char temp[1000];
			strcpy(temp, str1);
			sprintf(tmp, "BEFORE : %s\n\nAFTER : %s", temp, remSpace(str1));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 23:
	{
		if (strlen(str1) != 0)
		{
			char temp[1000];
			strcpy(temp, str1);
			sprintf(tmp, "BEFORE : %s\n\nAFTER : %s", temp, strSortAcce(str1));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 24:
	{
		if (strlen(str1) != 0)
		{
			char temp[1000];
			strcpy(temp, str1);
			sprintf(tmp, "BEFORE : %s\n\nAFTER : %s", temp, strSortDesc(str1));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 25:
	{
		if (strlen(str1) != 0)
		{
			sprintf(tmp, "SPACE COUNT : %d ", spaceCount(str1));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 26:
	{
		if (strlen(str1) != 0)
		{
			sprintf(tmp, "SPECIAL CHARACTER COUNT : %d ", spcharCount(str1));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 27:
	{
		if (strlen(str1) != 0)
		{
			sprintf(tmp, "STRING TITLE : %s ", strTitle(str1));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 28:
	{
		char temp[1000];
		strcpy(temp, str1);
		char ptr[10000];
		strTrim(str1, ptr);
		if (strlen(str1) != 0)
		{
			sprintf(tmp, "BEFORE : %s\n\nAFTER : %s ", temp, ptr);
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 29:
	{
		if (strlen(str1) != 0)
		{
			char temp[1000];
			strcpy(temp, str1);
			sprintf(tmp, "BEFORE : %s\n\nAFTER : %s", temp, wordCapitlize(str1));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 30:
	{
		if (strlen(str1) != 0)
		{
			sprintf(tmp, "WORD COUNT : %d ", strWordCount(str1));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 31:
	{
		if (strlen(str1) != 0)
		{
			char temp[1000];
			strcpy(temp, str1);
			sprintf(tmp, "BEFORE  : %s\n\nAFTER : %s", temp, revWord(str1));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	/*******************************************************DOUBLE INPUT*************************************************************/
	case 32:
	{
		if (strlen(str1) != 0 && strlen(str2) == 1)
		{
			sprintf(tmp, "OCCCURANCE OF %s : %d", str2, countOcc(str1, str2[0]));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 33:
	{
		if (strlen(str1) != 0 && strlen(str2) == 1)
		{
			if (firstOccurance(str1, str2[0]) == -1)
			{
				sprintf(tmp, "%s NOT PRESENT", str2);
				gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
			}
			else
			{
				sprintf(tmp, "FIRST OCCCURANCE OF %s : %d INDEX", str2, firstOccurance(str1, str2[0]));
				gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
			}
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 34:
	{
		if (strlen(str1) != 0 && strlen(str2) == 1)
		{
			if (lastOccurance(str1, str2[0]) == -1)
			{
				sprintf(tmp, "%s NOT PRESENT", str2);
				gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
			}
			else
			{
				sprintf(tmp, "LAST OCCCURANCE OF %s : %d INDEX", str2, lastOccurance(str1, str2[0]));
				gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
			}
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 35:
	{
		if (strlen(str1) != 0 && strlen(str2) != 0)
		{
			myStrCat(str1, str2);
			sprintf(tmp, "%s", str1);
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 36:
	{
		if (strlen(str1) != 0 && strlen(str2) != 0)
		{
			if (myStrCmp(str1, str2))
			{
				sprintf(tmp, "SIMILAR STRINGS");
				gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
			}
			else
			{
				sprintf(tmp, "DIFFERENT STRINGS");
				gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
			}
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 37:
	{
		if (strlen(str1) != 0 && strlen(str2) != 0)
		{
			if (myStrCmpi(str1, str2))
			{
				sprintf(tmp, "SIMILAR STRINGS");
				gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
			}
			else
			{
				sprintf(tmp, "DIFFERENT STRINGS");
				gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
			}
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 38:
	{
		if (strlen(str1) != 0 && strlen(str2) != 0)
		{
			if (isAnagram(str1, str2))
			{
				sprintf(tmp, "ANAGRAM STRINGS");
				gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
			}
			else
			{
				sprintf(tmp, "NON-ANAGRAM STRINGS");
				gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
			}
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 39:
	{
		int strstart = gtk_spin_button_get_value(GTK_SPIN_BUTTON(strspin1));
		if (strlen(str1) != 0 && strstart >= 0)
		{
			char temp[1000];
			strcpy(temp, str1);
			strstart = gtk_spin_button_get_value(GTK_SPIN_BUTTON(strspin1));
			revUptoN(str1, strstart);
			sprintf(tmp, "BEFORE : %s\n\nAFTER : %s", temp, str1);
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else if (strlen(str1) != 0 && strstart >= strlen(str1))
		{
			sprintf(tmp, "INVALID RANGE");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else if (strlen(str1) == 0)
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 40:
	{
		if (strlen(str1) != 0 && strlen(str1) != 0)
		{
			char temp[1000];
			strcpy(temp, str1);
			catUptospace(str1, str2);
			sprintf(tmp, "BEFORE : %s\n\nAFTER : %s", temp, str1);
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 41:
	{
		if (strlen(str1) != 0 && strlen(str2) == 1 && rfind(str1, str2[0]))
		{
			sprintf(tmp, "DISTANCE OF %s FROM END : %d", str2, rfind(str1, str2[0]));
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else if (rfind(str1, str2[0]) == 0)
		{
			sprintf(tmp, "%s NOT PRESENT", str2);
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 42:
	{
		int strstart = gtk_spin_button_get_value(GTK_SPIN_BUTTON(strspin1));
		int strend = gtk_spin_button_get_value(GTK_SPIN_BUTTON(strspin2));
		if (strlen(str1) != 0 && strstart <= strend)
		{
			char temp[1000];
			strcpy(temp, str1);
			strRevRange(str1, strstart, strend);
			sprintf(tmp, "BEFORE : %s\n\nAFTER : %s", temp, str1);
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else if (strstart > strend && strlen(str1) != 0)
		{
			sprintf(tmp, "INVALID RANGE");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 43:
	{
		int range = gtk_spin_button_get_value(GTK_SPIN_BUTTON(strspin1));
		if (strlen(str1) != 0 && strlen(str2) != 0 && range <= strlen(str2))
		{
			char temp[1000];
			strcpy(temp, str1);
			catUpton(str1, str2, range);
			sprintf(tmp, "BEFORE : %s\n\nAFTER : %s", temp, str1);
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else if (range > strlen(str1))
		{
			sprintf(tmp, "INVALID RANGE");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 44:
	{
		int range = gtk_spin_button_get_value(GTK_SPIN_BUTTON(strspin1));
		if (strlen(str1) != 0 && strlen(str2) == 1 && range <= strlen(str1))
		{
			char temp[1000];
			strcpy(temp, str1);
			repCharPos(str1, str2[0], range);
			sprintf(tmp, "BEFORE : %s\n\nAFTER : %s", temp, str1);
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else if (range > strlen(str1))
		{
			sprintf(tmp, "INVALID RANGE");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;
	case 45:
	{
		int range = gtk_spin_button_get_value(GTK_SPIN_BUTTON(strspin1));
		if (strlen(str1) != 0 && range <= strlen(str1))
		{
			char *ptr = charAt(str1, range);
			sprintf(tmp, "POSITION OF %s : %d", ptr, range);
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else if (range > strlen(str1))
		{
			sprintf(tmp, "INVALID RANGE");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
		else
		{
			sprintf(tmp, "ENTER COMPLETE STRING");
			gtk_label_set_text(GTK_LABEL(Soutputlabel), tmp);
		}
	}
	break;

	default:
		gtk_label_set_text(GTK_LABEL(Soutputlabel), (const gchar *)"NO OPTION SELECTED");
		break;
	}
}
void on_strshowcode_clicked(GtkButton *b)
{
	gtk_label_set_text(GTK_LABEL(Sourcecode), (const gchar *)"SOURCE CODE");

	switch (stropt)
	{
	case 1:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/firstRepeated.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 2:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/isAlpha.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 3:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/isAlphaNum.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 4:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/isDigit.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 5:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/isPalindrome.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 6:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/largestAsciiChar.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 7:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/myStrLen.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 8:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/myStrRev.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 9:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/strCountAlpha.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 10:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/strCountDigit.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 11:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/toLowerCase.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 12:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/toUpperCase.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 13:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/toToggleCase.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 14:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/myStrCpy.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 15:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/consonantCount.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 16:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/vowelCount.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 17:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/lowerCount.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 18:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/upperCount.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 19:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/delDuplicate.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 20:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/revWord.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 21:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/removeDuplicates.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 22:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/remSpace.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 23:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/sortToAcce.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 24:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/sortToDecc.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 25:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/spaceCount.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;

	case 26:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/spcharCount.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 27:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/strTitle.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 28:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/strTrim.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 29:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/wordCapitlize.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 30:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/wordCount.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 31:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/revWord.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 32:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/countOcc.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 33:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/firstOcc.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 34:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/lastOcc.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 35:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/myStrCat.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 36:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/myStrCmp.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 37:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/myStrCmpi.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 38:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/isAnagram.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 39:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/strRevupton.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 40:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/catUptospace.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 41:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/rfind.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 42:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/strRevRange.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 43:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/catUpton.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 44:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/replCharPos.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	case 45:
	{
		FILE *fp1 = fopen("CODE_FILES/STRING_CODES/StringSourcecodetxt/charAt.txt", "r");
		FileReader(fp1);
		fclose(fp1);
	}
	break;
	default:
		gtk_label_set_text(GTK_LABEL(Soutputlabel), (const gchar *)"NO OPTION SELECTED");
		break;
	}
}

void on_strdownload_clicked(GtkButton *b)
{

	switch (stropt)
	{
	case 0:
	{
		gtk_label_set_text(GTK_LABEL(Soutputlabel), (const gchar *)"NO OPTION SELECTED");
	}
	break;
	case 1:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/firstRepeated.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 2:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/isAlpha.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 3:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/isAlphaNum.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 4:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/isDigit.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 5:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/isPalindrome.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 6:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/largestAsciiChar.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 7:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/myStrLen.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 8:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/myStrRev.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 9:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/strCountAlpha.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 10:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/strCountDigit.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 11:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/toLowerCase.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 12:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/toUpperCase.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 13:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/toToggleCase.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 14:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/myStrcpy.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 15:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/consonantCount.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 16:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/vowelCount.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 17:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/lowerCount.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 18:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/upperCount.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 19:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/delDuplicate.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	case 20:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/revWord.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 21:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/removeDuplicates.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 22:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/remSpace.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 23:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/sortToAcce.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 24:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/sortToDecc.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 25:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/spaceCount.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 26:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/spcharCount.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 27:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/strTitle.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 28:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/strTrim.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 29:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/wordCapitlize.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 30:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/wordCount.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 31:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/revWord.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 32:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/countOcc.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 33:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/firstOcc.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 34:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/lastOcc.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 35:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/myStrCat.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 36:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/myStrCmp.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 37:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/myStrCmpi.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 38:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/isAnagram.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 39:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/strRevupton.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 40:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/catUptospace.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 41:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/rfind.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 42:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/strRevRange.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 43:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/catUpton.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 44:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/replCharPos.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	case 45:
	{
		const gchar *text1 =
			"CHROME LINK : "
			"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/STRING_CODES/StringSourcecodetxt/charAt.txt\">"
			"COPY THIS LINK</a>";
		gtk_label_set_markup(GTK_LABEL(Soutputlabel), text1);
	}
	break;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////DS/////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int radioActive = -1;

//////////////////////////Radio Buttons///////////////////////////

void on_SinglyLL_toggled(GtkRadioButton *b)
{

	headLL = NULL;
	headSCLL = NULL;
	headDLL = NULL;
	headDCLL = NULL;
	DSopt = 0;
	gboolean T = gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(b));
	gtk_editable_delete_text(GTK_EDITABLE(DSarg1), 0, -1);
	gtk_editable_delete_text(GTK_EDITABLE(DSarg2), 0, -1);
	gtk_label_set_text(GTK_LABEL(DSoutlabel), NULL);
	gtk_label_set_text(GTK_LABEL(Outputwindow), NULL);

	// if (T)
	// 	printf("SLL is true\n");

	if (T)
	{
		radioActive = 0;
		// printf("%d\n", radioActive);
	}
}

void on_DoublyLL_toggled(GtkRadioButton *b)
{

	headLL = NULL;
	headSCLL = NULL;
	headDLL = NULL;
	headDCLL = NULL;
	DSopt = 0;

	gboolean T = gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(b));
	gtk_editable_delete_text(GTK_EDITABLE(DSarg1), 0, -1);
	gtk_editable_delete_text(GTK_EDITABLE(DSarg2), 0, -1);
	gtk_label_set_text(GTK_LABEL(DSoutlabel), NULL);
	gtk_label_set_text(GTK_LABEL(Outputwindow), NULL);
	if (T)
		radioActive = 1;
}

void on_SinglyCLL_toggled(GtkRadioButton *b)
{

	headLL = NULL;
	headSCLL = NULL;
	headDLL = NULL;
	headDCLL = NULL;
	DSopt = 0;

	gboolean T = gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(b));
	gtk_editable_delete_text(GTK_EDITABLE(DSarg1), 0, -1);
	gtk_editable_delete_text(GTK_EDITABLE(DSarg2), 0, -1);
	gtk_label_set_text(GTK_LABEL(DSoutlabel), NULL);
	gtk_label_set_text(GTK_LABEL(Outputwindow), NULL);

	if (T)
		radioActive = 2;
}

void on_DoublyCLL_toggled(GtkRadioButton *b)
{

	headLL = NULL;
	headSCLL = NULL;
	headDLL = NULL;
	headDCLL = NULL;
	DSopt = 0;

	gboolean T = gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(b));
	gtk_editable_delete_text(GTK_EDITABLE(DSarg1), 0, -1);
	gtk_editable_delete_text(GTK_EDITABLE(DSarg2), 0, -1);
	gtk_label_set_text(GTK_LABEL(DSoutlabel), NULL);
	gtk_label_set_text(GTK_LABEL(Outputwindow), NULL);

	if (T)
		radioActive = 3;
}

///////////////////////////////////////////////////////////////////

void on_DSRow(GtkButton *b)
{
	char temp[100];
	char output[100];
	gtk_spin_button_set_value(DSarg1, 0);
	gtk_spin_button_set_value(DSarg2, 0);
	strcpy(temp, gtk_button_get_label(b));
	char *move = temp;
	DSopt = 0;
	while (*move != '.')
	{
		DSopt = (DSopt * 10) + (*move - 48);
		move++;
	}
	// printf("%d\n", DSopt);
	gtk_label_set_text(GTK_LABEL(Sourcecode), (const gchar *)"DESCRIPTION");
	sprintf(output, "SELECTED : %d", DSopt);
	gtk_label_set_text(GTK_LABEL(Selectlabel7), (const gchar *)output);
	gtk_label_set_text(GTK_LABEL(DSoutlabel), NULL);
	gtk_label_set_text(GTK_LABEL(Outputwindow), NULL);
	FILE *fp;
	switch (radioActive)
	{
	case -1:
	{
		// gtk_widget_modify_bg(GTK_WIDGET(Noutlabel), GTK_STATE_NORMAL, &color2);
		gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"SELECT LINKEDLIST TYPE.");
	}
	break;
	case 0:
	{
		// Singly LinkedList

		switch (DSopt)
		{
		case 0:
		{
			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO INPUT");
		}
		break;
		case 1:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds1.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 2:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds2.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 3:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds3.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 4:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds4.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 5:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds5.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 6:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds6.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 7:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds7.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 8:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds8.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 9:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds9.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 10:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds10.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 11:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds11.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 12:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds12.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 13:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds13.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 14:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds14.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 15:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds15.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 16:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds16.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 17:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds17.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 18:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds18.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 19:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds19.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 20:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds20.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 21:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds21.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 22:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyLinkedListDescription/ds22.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		}
	}
	break;

	case 1:
	{
		// Doubly LinkedList

		switch (DSopt)
		{
		case 0:
		{
			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO INPUT");
		}
		break;
		case 1:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds1.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 2:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds2.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 3:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds3.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 4:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds4.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 5:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds5.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 6:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds6.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 7:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds7.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 8:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds8.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 9:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds9.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 10:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds10.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 11:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds11.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 12:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds12.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 13:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds13.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 14:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds14.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 15:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds15.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 16:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds16.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 17:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds17.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 18:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds18.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 19:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds19.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 20:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds20.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 21:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds21.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 22:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyLinkedListDescription/ds22.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		}
	}
	break;

	case 2:
	{
		// Singly Circular.

		switch (DSopt)
		{

		case 0:
		{
			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO INPUT");
		}
		break;
		case 1:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds1.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 2:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds2.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 3:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds3.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 4:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds4.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 5:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds5.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 6:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds6.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 7:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds7.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 8:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds8.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 9:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds9.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 10:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds10.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 11:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds11.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 12:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds12.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 13:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds13.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 14:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds14.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 15:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds15.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 16:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds16.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 17:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds17.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 18:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds18.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 19:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds19.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 20:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds20.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 21:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds21.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 22:
		{
			fp = fopen("./DESCRIPTION/DS/SinglyCircularLinkedListDescription/ds22.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		}
	}
	break;

	case 3:
	{
		// Doubly Circular
		switch (DSopt)
		{
		case 0:
		{
			gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"NO INPUT");
		}
		break;
		case 1:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds1.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 2:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds2.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 3:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds3.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 4:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds4.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 5:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds5.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 6:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds6.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 7:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds7.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 8:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds8.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 9:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds9.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 10:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds10.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 11:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds11.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 12:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds12.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 13:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds13.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 14:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds14.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 15:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds15.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;

		case 16:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds16.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 17:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds17.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 18:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds18.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 19:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds19.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 20:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds20.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 21:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds21.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		case 22:
		{
			fp = fopen("./DESCRIPTION/DS/DoublyCircularLinkedListDescription/ds22.txt", "r");
			FileReader(fp);
			fclose(fp);
		}
		break;
		}
	}
	break;
	}
}

//////////////////////////////////////////////// Switch case For DS //////////////////////////////

void on_DSexecute_clicked(GtkButton *b)
{

	// printf("%d in onclick\n", radioActive);
	GdkColor color1;
	color1.red = 0xffff;
	color1.green = 0xffff;
	color1.blue = 0xffff;
	GdkColor color2;
	color2.red = 0xffff;
	color2.green = 0x0;
	color2.blue = 0x0;
	GdkColor color3;
	color3.red = 0x0;
	color3.green = 0xffff;
	color3.blue = 0x0;

	// int dsValue;
	char *printStr;

	switch (radioActive)
	{

	case -1:
	{
		gtk_widget_modify_bg(GTK_WIDGET(Noutlabel), GTK_STATE_NORMAL, &color2);
		gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"SELECT LINKEDLIST TYPE.");
	}
	break;
	case 0:
	{
		// Singly LinkedList.
		switch (DSopt)
		{

		case 0:
		{
			gtk_widget_modify_bg(GTK_WIDGET(Noutlabel), GTK_STATE_NORMAL, &color2);
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"NO INPUT");
		}
		break;
		case 1:
		{
			singlyLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			addNodeLL();
			printStr = printLinkedListLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 2:
		{
			singlyLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			addFirstLL();
			printStr = printLinkedListLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 3:
		{
			singlyLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			addLastLL();
			printStr = printLinkedListLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 4:
		{
			printStr = printLinkedListLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 5:
		{
			int countLL = countNodeLL();
			sprintf(singlyLLStr2, "NODE COUNT IS %d.", countLL);
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyLLStr2);
		}
		break;

		case 6:
		{
			deleteFirstLL();
			printStr = printLinkedListLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 7:
		{
			deleteLastLL();
			printStr = printLinkedListLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 8:
		{
			deleteLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST DELETED");
		}
		break;

		case 9:
		{
			singlyLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			positionLL = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg2));

			if (addAtPositionLL(positionLL) == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"INVALID POSITION.");
			else
			{
				printStr = printLinkedListLL();
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
			}
		}
		break;

		case 10:
		{
			singlyLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			positionLL = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg2));

			if (updateNodeLL(positionLL) == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"INVALID POSITION.");
			else
			{
				printStr = printLinkedListLL();
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
			}
		}
		break;

		case 11:
		{
			positionLL = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg2));

			if (deleteAtPositionLL(positionLL) == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"INVALID POSITION.");
			else
			{
				printStr = printLinkedListLL();
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
			}
		}
		break;

		case 12:
		{
			printStr = printPalindromeLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 13:
		{
			if (sumOfDataDigitLL() == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else
			{
				printStr = printLinkedListLL();
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
			}
		}
		break;

		case 14:
		{
			printStr = sumOfDataLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 15:
		{
			printStr = maxLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 16:
		{
			printStr = minLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 17:
		{
			if (inplaceReverseLL() == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else
			{
				printStr = printLinkedListLL();
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
			}
		}
		break;
		case 18:
		{
			singlyLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));

			int check = firstOccurenceLL(singlyLLVal);

			if (check == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else if (check == 0)
			{
				sprintf(singlyLLStr2, "%d IS NOT PRESENT IN LINKEDLIST.", singlyLLVal);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyLLStr2);
			}
			else
			{
				sprintf(singlyLLStr2, "FIRST OCCURRENCE AT POSITION %d.", check);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyLLStr2);
			}
		}
		break;

		case 19:
		{
			singlyLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));

			int check = secondLastOccurenceLL(singlyLLVal);

			if (check == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else if (check == 0)
			{
				sprintf(singlyLLStr2, "%d IS NOT PRESENT IN LINKEDLIST.", singlyLLVal);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyLLStr2);
			}
			else if (check == -2)
			{
				sprintf(singlyLLStr2, "%d IS PRESENT ONLY ONCE IN THE LINKEDLIST.", singlyLLVal);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyLLStr2);
			}
			else
			{
				sprintf(singlyLLStr2, "SECOND OCCURRENCE AT POSITION %d.", check);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyLLStr2);
			}
		}
		break;

		case 20:
		{
			singlyLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));

			int check = occurenceCountLL(singlyLLVal);

			if (check == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else
			{
				sprintf(singlyLLStr2, "FREQUENCY OF %d IS %d.", singlyLLVal, check);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyLLStr2);
			}
		}
		break;

		case 21:
		{
			singlyLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			positionLL = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg2));

			int check = nthOccurrenceLL(singlyLLVal, positionLL);

			if (check == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else if (check == 0)
			{
				sprintf(singlyLLStr2, "%d IS NOT PRESENT IN LINKEDLIST.", singlyLLVal);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyLLStr2);
			}
			else if (check == -2)
			{
				sprintf(singlyLLStr2, "%d IS NOT PRESENT %d TIMES IN THE LINKEDLIST.", singlyLLVal, positionLL);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyLLStr2);
			}
			else
			{
				sprintf(singlyLLStr2, "PRESENT AT POSITION %d.", positionLL, check);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyLLStr2);
			}
		}
		break;
		case 22:
		{
			int check = isPalindromeLL();

			if (check == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else if (check == 0)
			{
				sprintf(singlyLLStr2, "NOT A PALINDROME LINKEDLIST.", singlyLLVal);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyLLStr2);
			}
			else
			{
				sprintf(singlyLLStr2, "PALINDROME LINKEDLIST.");
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyLLStr2);
			}
		}
		break;
		}
	}
	break;

	case 1:
	{
		// Doubly LinkedList.
		switch (DSopt)
		{

		case 0:
		{
			gtk_widget_modify_bg(GTK_WIDGET(Noutlabel), GTK_STATE_NORMAL, &color2);
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"NO INPUT");
		}
		break;

		case 1:
		{
			doublyLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			addNodeDLL();
			printStr = printLinkedListDLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 2:
		{
			doublyLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			addFirstDLL();
			printStr = printLinkedListDLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 3:
		{
			doublyLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			addLastDLL();
			printStr = printLinkedListDLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 4:
		{
			printStr = printLinkedListDLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 5:
		{
			int countDLL = countNodeDLL();
			sprintf(doublyLLStr2, "NODE COUNT IS %d.", countDLL);
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)doublyLLStr2);
		}
		break;

		case 6:
		{
			deleteFirstDLL();
			printStr = printLinkedListDLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 7:
		{
			deleteLastDLL();
			printStr = printLinkedListDLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 8:
		{
			deleteDLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST DELETED");
		}
		break;

		case 9:
		{
			doublyLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			positionDLL = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg2));

			if (addAtPositionDLL(positionDLL) == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"INVALID POSITION.");
			else
			{
				printStr = printLinkedListDLL();
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
			}
		}
		break;

		case 10:
		{
			doublyLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			positionDLL = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg2));

			if (updateNodeDLL(positionDLL) == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"INVALID POSITION.");
			else
			{
				printStr = printLinkedListDLL();
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
			}
		}
		break;

		case 11:
		{
			positionDLL = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg2));

			if (deleteAtPositionDLL(positionDLL) == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"INVALID POSITION.");
			else
			{
				printStr = printLinkedListDLL();
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
			}
		}
		break;

		case 12: // Changes in this code in all LL.
		{
			printStr = printPalindromeDLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 13:
		{
			if (sumOfDataDigitDLL() == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else
			{
				printStr = printLinkedListDLL();
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
			}
		}
		break;
		case 14:
		{
			printStr = sumOfDataDLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 15:
		{
			printStr = maxDLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;
		case 16:
		{
			printStr = minDLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 17:
		{
			if (inplaceReverseDLL() == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else
			{
				printStr = printLinkedListDLL();
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
			}
		}
		break;

		case 18:
		{
			doublyLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));

			int check = foccurDLL(doublyLLVal);

			printf("%d\n", check);
			if (check == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else if (check == 0)
			{
				sprintf(doublyLLStr2, "%d IS NOT PRESENT IN LINKEDLIST.", doublyLLVal);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)doublyLLStr2);
			}
			else
			{
				sprintf(doublyLLStr2, "FIRST OCCURRENCE AT POSITION %d.", check);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)doublyLLStr2);
			}
		}
		break;

		case 19:
		{
			doublyLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));

			int check = seclastDLL(doublyLLVal);

			if (check == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else if (check == 0)
			{
				sprintf(doublyLLStr2, "%d IS NOT PRESENT IN LINKEDLIST.", doublyLLVal);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)doublyLLStr2);
			}
			else if (check == -2)
			{
				sprintf(doublyLLStr2, "%d IS PRESENT ONLY ONCE IN THE LINKEDLIST.", doublyLLVal);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)doublyLLStr2);
			}
			else
			{
				sprintf(doublyLLStr2, "SECOND OCCURRENCE AT POSITION %d.", check);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)doublyLLStr2);
			}
		}
		break;

		case 20:
		{
			doublyLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));

			int check = occurenceCountDLL(doublyLLVal);

			if (check == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else
			{
				sprintf(doublyLLStr2, "FREQUENCY OF %d IS %d.", doublyLLVal, check);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)doublyLLStr2);
			}
		}
		break;

		case 21:
		{
			doublyLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			positionDLL = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg2));

			int check = nthOccurrenceDLL(doublyLLVal, positionDLL);

			if (check == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else if (check == 0)
			{
				sprintf(doublyLLStr2, "%d IS NOT PRESENT IN LINKEDLIST.", doublyLLVal);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)doublyLLStr2);
			}
			else if (check == -2)
			{
				sprintf(doublyLLStr2, "%d IS NOT PRESENT %d TIMES IN THE LINKEDLIST.", doublyLLVal, positionDLL);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)doublyLLStr2);
			}
			else
			{
				sprintf(doublyLLStr2, "PRESENT AT POSITION %d.", positionDLL, check);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)doublyLLStr2);
			}
		}
		break;

		case 22:
		{

			int check = isPalindromeDLL();

			if (check == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else if (check == 0)
			{
				sprintf(doublyLLStr2, "NOT A PALINDROME LINKEDLIST.", doublyLLVal);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)doublyLLStr2);
			}
			else
			{
				sprintf(doublyLLStr2, "PALINDROME LINKEDLIST.");
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)doublyLLStr2);
			}
		}
		break;
		}
	}

	break;

	case 2:
	{
		// Singly circlular LinkedList.
		switch (DSopt)
		{

		case 0:
		{
			gtk_widget_modify_bg(GTK_WIDGET(Noutlabel), GTK_STATE_NORMAL, &color2);
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"NO INPUT");
		}
		break;

		case 1:
		{
			singlyCLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			addNodeSCLL();
			printStr = printLinkedListSCLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 2:
		{
			singlyCLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			addFirstSCLL();
			printStr = printLinkedListSCLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 3:
		{
			singlyCLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			addLastSCLL();
			printStr = printLinkedListSCLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 4:
		{
			printStr = printLinkedListSCLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 5:
		{
			int countSCLL = countNodeSCLL();
			sprintf(singlyCLLStr2, "NODE COUNT IS %d.", countSCLL);
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
		}
		break;

		case 6:
		{
			deleteFirstSCLL();
			printStr = printLinkedListSCLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 7:
		{
			deleteLastSCLL();
			printStr = printLinkedListSCLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

			// problem
			//  case 8:
			//  {
			//  	deleteSCLL();
			//  	gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST DELETED");
			//  }
			//  break;

		case 9:
		{
			singlyCLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			positionSCLL = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg2));

			if (addAtPositionSCLL(positionSCLL) == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"INVALID POSITION.");
			else
			{
				printStr = printLinkedListSCLL();
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
			}
		}
		break;

		case 10:
		{
			singlyCLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			positionSCLL = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg2));

			if (updateNodeSCLL(positionSCLL) == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"INVALID POSITION.");
			else
			{
				printStr = printLinkedListSCLL();
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
			}
		}
		break;

		case 11:
		{
			positionSCLL = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg2));

			if (deleteAtPositionSCLL(positionSCLL) == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"INVALID POSITION.");
			else
			{
				printStr = printLinkedListSCLL();
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
			}
		}
		break;

		case 12: // Changes in this code in all LL.
		{
			printStr = printPalindromeSCLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 13:
		{

			if (sumOfDataDigitSCLL() == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else
			{
				printStr = printLinkedListSCLL();
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
			}
		}
		break;
		case 14:
		{
			printStr = sumOfDataSCLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 15:
		{

			printStr = maxSCLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;
		case 16:
		{
			printStr = minSCLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 17:
		{
			if (inplaceReverseSCLL() == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else
			{
				printStr = printLinkedListSCLL();
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
			}
		}
		break;

		case 18:
		{
			singlyCLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));

			int check = firstOccurenceSCLL(singlyCLLVal);

			printf("%d\n", check);
			if (check == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else if (check == 0)
			{
				sprintf(singlyCLLStr2, "%d IS NOT PRESENT IN LINKEDLIST.", singlyCLLVal);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			}
			else
			{
				sprintf(singlyCLLStr2, "FIRST OCCURRENCE AT POSITION %d.", check);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			}
		}
		break;

		case 19:
		{
			singlyCLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));

			int check = secondLastOccurenceSCLL(singlyCLLVal);

			if (check == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else if (check == 0)
			{
				sprintf(singlyCLLStr2, "%d IS NOT PRESENT IN LINKEDLIST.", singlyCLLVal);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			}
			else if (check == -2)
			{
				sprintf(singlyCLLStr2, "%d IS PRESENT ONLY ONCE IN THE LINKEDLIST.", singlyCLLVal);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			}
			else
			{
				sprintf(singlyCLLStr2, "SECOND OCCURRENCE AT POSITION %d.", check);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			}
		}
		break;

		case 20:
		{
			singlyCLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));

			int check = occurenceCountSCLL(singlyCLLVal);

			if (check == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else
			{
				sprintf(singlyCLLStr2, "FREQUENCY OF %d IS %d.", singlyCLLVal, check);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			}
		}
		break;

		case 21:
		{
			singlyCLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			positionSCLL = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg2));

			int check = nthOccurrenceSCLL(singlyCLLVal, positionSCLL);

			if (check == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else if (check == 0)
			{
				sprintf(singlyCLLStr2, "%d IS NOT PRESENT IN LINKEDLIST.", singlyCLLVal);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			}
			else if (check == -2)
			{
				sprintf(singlyCLLStr2, "%d IS NOT PRESENT %d TIMES IN THE LINKEDLIST.", singlyCLLVal, positionSCLL);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			}
			else
			{
				sprintf(singlyCLLStr2, "PRESENT AT POSITION %d.", positionSCLL, check);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			}
		}
		break;

		case 22:
		{

			int check = isPalindromeSCLL();

			if (check == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else if (check == 0)
			{
				sprintf(singlyCLLStr2, "NOT A PALINDROME LINKEDLIST.", singlyCLLVal);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			}
			else
			{
				sprintf(singlyCLLStr2, "PALINDROME LINKEDLIST.");
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			}
		}
		break;
		}
	}
	break;

	case 3:
	{
		// Doubly circlular LinkedList.
		switch (DSopt)
		{

		case 0:
		{
			gtk_widget_modify_bg(GTK_WIDGET(Noutlabel), GTK_STATE_NORMAL, &color2);
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"NO INPUT");
		}
		break;

		case 1:
		{
			doublyCLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			addNodeDCLL();
			printStr = printLinkedListDCLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 2:
		{
			doublyCLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			addFirstDCLL();
			printStr = printLinkedListDCLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 3:
		{
			doublyCLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			addLastDCLL();
			printStr = printLinkedListDCLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 4:
		{
			printStr = printLinkedListDCLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 5:
		{
			int countDCLL = CountNodeDCLL();
			sprintf(singlyCLLStr2, "NODE COUNT IS %d.", countDCLL);
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
		}
		break;

		case 6:
		{
			deleteFirstDCLL();
			printStr = printLinkedListDCLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 7:
		{
			deleteLastDCLL();
			printStr = printLinkedListDCLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

			// problem
			//  case 8:
			//  {
			//  	deleteDCLL();
			//  	gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST DELETED");
			//  }
			//  break;

		case 9:
		{
			doublyCLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			positionDCLL = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg2));

			if (addAtPositionDCLL(positionDCLL) == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"INVALID POSITION.");
			else
			{
				printStr = printLinkedListDCLL();
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
			}
		}
		break;

		case 10:
		{
			doublyCLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			positionDCLL = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg2));

			if (updateNodeDCLL(positionDCLL) == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"INVALID POSITION.");
			else
			{
				printStr = printLinkedListDCLL();
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
			}
		}
		break;

		case 11:
		{
			positionDCLL = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg2));

			if (deleteAtPositionDCLL(positionDCLL) == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"INVALID POSITION.");
			else
			{
				printStr = printLinkedListDCLL();
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
			}
		}
		break;

		case 12: // Changes in this code in all LL.
		{
			printStr = palindromeNumDCLL();

			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 13:
		{

			if (sumOfDataDigitDCLL() == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else
			{
				printStr = printLinkedListDCLL();
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
			}
		}
		break;
		case 14:
		{
			printStr = sumOfDataDCLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

		case 15:
		{

			printStr = maxDCLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;
		case 16:
		{
			printStr = minDCLL();
			gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
		}
		break;

			// case 17:
			// {
			// 	if (inplaceReverseDCLL() == -1)
			// 		gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			// 	else
			// 	{
			// 		printStr = printLinkedListDCLL();
			// 		gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)printStr);
			// 	}
			// }
			// break;

		case 18:
		{
			doublyCLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));

			int check = firstOccurenceDCLL(doublyCLLVal);

			printf("%d\n", check);
			if (check == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else if (check == 0)
			{
				sprintf(singlyCLLStr2, "%d IS NOT PRESENT IN LINKEDLIST.", doublyCLLVal);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			}
			else
			{
				sprintf(singlyCLLStr2, "FIRST OCCURRENCE AT POSITION %d.", check);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			}
		}
		break;

		case 19:
		{
			doublyCLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));

			int check = secondLastOccurenceDCLL(doublyCLLVal);

			if (check == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else if (check == 0)
			{
				sprintf(singlyCLLStr2, "%d IS NOT PRESENT IN LINKEDLIST.", doublyCLLVal);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			}
			else if (check == -2)
			{
				sprintf(singlyCLLStr2, "%d IS PRESENT ONLY ONCE IN THE LINKEDLIST.", doublyCLLVal);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			}
			else
			{
				sprintf(singlyCLLStr2, "SECOND OCCURRENCE AT POSITION %d.", check);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			}
		}
		break;

		case 20:
		{
			doublyCLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));

			int check = totalOccurenceDCLL(doublyCLLVal);

			if (check == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else
			{
				sprintf(singlyCLLStr2, "FREQUENCY OF %d IS %d.", doublyCLLVal, check);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			}
		}
		break;

		case 21:
		{
			doublyCLLVal = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg1));
			positionDCLL = gtk_spin_button_get_value(GTK_SPIN_BUTTON(DSarg2));

			int check = nthOccurrenceDCLL(doublyCLLVal, positionDCLL);

			if (check == -1)
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			else if (check == 0)
			{
				sprintf(singlyCLLStr2, "%d IS NOT PRESENT IN LINKEDLIST.", doublyCLLVal);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			}
			else if (check == -2)
			{
				sprintf(singlyCLLStr2, "%d IS NOT PRESENT %d TIMES IN THE LINKEDLIST.", doublyCLLVal, positionDCLL);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			}
			else
			{
				sprintf(singlyCLLStr2, "PRESENT AT POSITION %d.", positionDCLL, check);
				gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			}
		}
		break;

			// case 22:
			// {

			// 	int check = isPalindromeDCLL();

			// 	if (check == -1)
			// 		gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"LINKEDLIST IS EMPTY.");
			// 	else if (check == 0)
			// 	{
			// 		sprintf(singlyCLLStr2, "NOT A PALINDROME LINKEDLIST.", doublyCLLVal);
			// 		gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			// 	}
			// 	else
			// 	{
			// 		sprintf(singlyCLLStr2, "PALINDROME LINKEDLIST.");
			// 		gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)singlyCLLStr2);
			// 	}
			// }
			// break;
		}
	}
	break;
	}
}

void on_DSshocode_clicked(GtkButton *b)
{

	gtk_label_set_text(GTK_LABEL(Sourcecode), (const gchar *)"SOURCE CODE");

	switch (radioActive)
	{

	case -1:
	{
		// gtk_widget_modify_bg(GTK_WIDGET(Noutlabel), GTK_STATE_NORMAL, &color2);
		gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"SELECT LINKEDLIST TYPE.");
	}
	break;
	case 0:
	{
		switch (DSopt)
		{
		case 1:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 2:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 3:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 4:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 5:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 6:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 7:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 8:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 9:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 10:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 11:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 12:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/printPalindrome.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 13:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/sumOfDataDigit.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 14:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/sumOfData.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 15:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/max.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 16:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/min.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 17:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/inplaceReverse.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 18:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/firstOccurence.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 19:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/secondLastOccurence.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 20:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/occurenceCount.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 21:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/nthOccurrence.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 22:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyLikedList/isPalindrome.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		}
	}
	break;

	case 1:
	{
		switch (DSopt)
		{
		case 1:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 2:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 3:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 4:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 5:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 6:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 7:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 8:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 9:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 10:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 11:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 12:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyLinkedList/PaliNo.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 13:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyLinkedList/SumOfDigits.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 14:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/sumOfData.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 15:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyLinkedList/maxData.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 16:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyLinkedList/MinData.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 17:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyLinkedList/Reverse.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 18:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyLinkedList/firstOccurence.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 19:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyLinkedList/SecLastOccur.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 20:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyLinkedList/TotalFreq.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 21:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyLinkedList/nthOccurence.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 22:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/palindromeLL.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		}
	}
	break;

	case 2:
	{
		switch (DSopt)
		{
		case 1:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 2:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 3:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 4:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 5:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 6:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 7:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 8:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 9:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 10:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 11:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 12:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/printPalindromeSCLL.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 13:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/sumOfDataDigitSCLL.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 14:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/sumOfDataSCLL.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 15:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/maxSCLL.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 16:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/minSCLL.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 17:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/inplaceReverseSCLL.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 18:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/firstOccurrenceSCLL.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 19:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/secondLastOccurrenceSCLL.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 20:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/occurrenceCountSCLL.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 21:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/nthOccurrenceSCLL.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 22:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/SinglyCircularLinkedList/isPalindromeSCLL.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		}
	}
	break;
		//---------------------------------------DONE----------------------------

	case 3:
	{
		switch (DSopt)
		{
		case 1:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 2:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 3:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 4:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 5:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 6:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 7:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 8:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 9:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 10:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 11:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 12:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/palindromeNo.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 13:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/sumofdigit.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 14:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/sumOfData.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 15:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/max.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 16:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/min.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		// case 17:
		//{
		//	FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/inplaceReverseDCLL.c", "r");
		//	FileReader(fp1);
		//	fclose(fp1);
		// }
		// break;
		case 18:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/firstOcurrence.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 19:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/secLastOcurrence.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 20:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/totalOcurrence.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
		case 21:
		{
			FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/nthOccurence.c", "r");
			FileReader(fp1);
			fclose(fp1);
		}
		break;
			// case 22:
			//{
			//	FILE *fp1 = fopen("./CODE_FILES/DS_CODES/DoublyCircularLinkedList/palindrimeLL.c", "r");
			//	FileReader(fp1);
			//	fclose(fp1);
			// }
			// break;
		}
	}
	break;
	}
}

void on_DSdownload_clicked(GtkButton *b)
{
	gtk_label_set_text(GTK_LABEL(Sourcecode), (const gchar *)"SOURCE CODE");

	switch (radioActive)
	{

	case -1:
	{
		// gtk_widget_modify_bg(GTK_WIDGET(Noutlabel), GTK_STATE_NORMAL, &color2);
		gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"SELECT LINKEDLIST TYPE.");
	}
	break;
	case 0:
	{
		switch (DSopt)
		{
		case 1:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;

		case 2:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 3:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 4:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 5:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 6:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/MainMain.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 7:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 8:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 9:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 10:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 11:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 12:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/printPalindrome.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 13:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/sumOfDataDigit.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 14:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/sumOfData.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 15:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/max.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 16:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/min.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 17:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/inplaceReverse.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 18:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/firstOccurence.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 19:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/secondLastOccurence.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 20:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/occurenceCount.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 21:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/nthOccurrence.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 22:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyLikedList/isPalindrome.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		}
	}
	break;

	case 1:
	{
		switch (DSopt)
		{
		case 1:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 2:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 3:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 4:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 5:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 6:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 7:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 8:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 9:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 10:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 11:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 12:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/PaliNo.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 13:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/SumOfDigits.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 14:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/sumOfData.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 15:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/maxData.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 16:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/MinData.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 17:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/Reverse.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 18:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/firstOccurence.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 19:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/SecLastOccur.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 20:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/TotalFreq.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 21:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/nthOccurence.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 22:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyLinkedList/palindromeLL.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		}
	}
	break;

	case 2:
	{
		switch (DSopt)
		{
		case 1:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 2:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 3:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 4:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 5:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 6:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 7:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 8:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 9:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 10:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 11:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 12:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/printPalindromeSCLL.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 13:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/sumOfDataDigitsSCLL.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 14:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/sumOfDataSCLL.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 15:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/maxSCLL.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 16:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/minSCLL.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;

		case 17:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/inplaceReverseSCLL.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 18:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/firstOccurrenceSCLL.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 19:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/secondLastOccurrenceSCLL.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 20:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/occurrenceCountSCLL.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 21:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/nthOccurrenceSCLL.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 22:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/SinglyCircularLinkedList/isPalindromeSCLL.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		}
	}
	break;
		//---------------------Done---------------------------------------------

	case 3:
	{
		switch (DSopt)
		{
		case 1:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 2:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 3:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 4:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 5:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 6:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 7:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 8:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 9:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 10:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 11:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/Main.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 12:
		{

			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/palindromeNo.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 13:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/sumofdigit.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 14:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/sumOfData.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 15:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/max.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 16:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/min.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		// case 17:
		// {
		// 	const gchar *text1 =
		// 		"CHROME LINK : "
		// 		"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/inplaceReverseDCLL.c\">"
		// 		"COPY THIS LINK</a>";
		// 	gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		// }
		// break;
		case 18:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/firstOcurrence.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 19:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/secLastOcurrence.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 20:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/totalOcurrence.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 21:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/nthOccurence.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		case 22:
		{
			const gchar *text1 =
				"CHROME LINK : "
				"<a href=\"file://wsl.localhost/Ubuntu-22.04/home/karan/C_PROJECT/cproject/CODE_FILES/DS_CODES/DoublyCircularLinkedList/palindromeLL.c\">"
				"COPY THIS LINK</a>";
			gtk_label_set_markup(GTK_LABEL(DSoutlabel), text1);
		}
		break;
		}
	}
	break;
	}
}

void on_Stackswitc_button_release_event(GtkButton *b)
{
	gtk_label_set_text(GTK_LABEL(Outputwindow), (const gchar *)"");
	gtk_label_set_text(GTK_LABEL(Patternoutput), (const gchar *)"");
	gtk_label_set_text(GTK_LABEL(Patternlink), (const gchar *)"");
	gtk_widget_set_visible(Numberl2, FALSE);
	gtk_widget_set_visible(Numarg2, FALSE);
	gtk_widget_set_visible(Cimg1, TRUE);
	gtk_widget_set_visible(Cimg2, FALSE);
	gtk_widget_set_visible(Cimg3, FALSE);
	gtk_widget_set_visible(Cimg4, FALSE);
	gtk_widget_set_visible(Cimg5, FALSE);
	gtk_widget_set_visible(Cimg6, FALSE);
	gtk_widget_set_visible(Cimg7, FALSE);
	gtk_widget_set_visible(Cimg8, FALSE);
	gtk_widget_set_visible(Cimg9, FALSE);
	gtk_widget_set_visible(Cimg10, FALSE);
	gtk_widget_set_visible(Cimg11, FALSE);
	gtk_widget_set_visible(Cimg12, FALSE);
	gtk_widget_set_visible(Cimg13, FALSE);
	gtk_widget_set_visible(Mainimg, FALSE);
	gtk_widget_set_visible(Teamlabel, FALSE);
	gtk_widget_set_visible(Thankimg, FALSE);
	gtk_label_set_text(GTK_LABEL(Selectlabel1), (const gchar *)"SELECT OPTION");
	gtk_label_set_text(GTK_LABEL(Selectlabel8), (const gchar *)"SELECT OPTION");
	gtk_label_set_text(GTK_LABEL(Selectlabel5), (const gchar *)"SELECT OPTION");
	gtk_label_set_text(GTK_LABEL(Selectlabel4), (const gchar *)"SELECT OPTION");
	gtk_label_set_text(GTK_LABEL(Selectlabel7), (const gchar *)"SELECT OPTION");
	gtk_label_set_text(GTK_LABEL(Selectlabel6), (const gchar *)"SELECT OPTION");
	gtk_label_set_text(GTK_LABEL(Sourcecode), (const gchar *)"SOURCE CODE");
	gtk_label_set_text(GTK_LABEL(Code), (const gchar *)"INPUT WINDOW");
	gtk_label_set_text(GTK_LABEL(Noutlabel), (const gchar *)"");
	gtk_label_set_text(GTK_LABEL(Aoutlabel2), (const gchar *)"");
	gtk_label_set_text(GTK_LABEL(Aoutlabel1), (const gchar *)"");
	gtk_label_set_text(GTK_LABEL(Soutputlabel), (const gchar *)"");
	gtk_label_set_text(GTK_LABEL(DSoutlabel), (const gchar *)"");
	gtk_spin_button_set_value(DSarg1, 0);
	gtk_spin_button_set_value(DSarg2, 0);
	radioActive = -1;
	stropt = 0;
	arropt = 0;
	numopt = 0;
	patopt = 0;
	DSopt = 0;
	copt = 0;
	ipcnt = 0;
	strunhide(stropt);
	gtk_spin_button_set_value(strspin1, 0);
	gtk_spin_button_set_value(strspin2, 0);
	arrayHideSpinLabel(1, 1, 1, 1);
	gtk_spin_button_set_value(Patternopt, 0);
	gtk_spin_button_set_value(Patternrow, 0);
	gtk_entry_set_text(strentry1, "");
	gtk_entry_set_text(strentry2, "");
	gtk_spin_button_set_value(SetArraySizeSpin, 0);
	gtk_spin_button_set_value(FillArrayElementSpin, 0);
	gtk_spin_button_set_value(ArrayTargetElementSpin, 0);
	gtk_spin_button_set_value(ArrayTargetPositionSpin, 0);
	gtk_spin_button_set_value(Numarg1, 0);
	gtk_spin_button_set_value(Numarg2, 0);
}
void on_Homeb_clicked(GtkButton *b)
{
	gtk_widget_set_visible(Mainimg, TRUE);
	gtk_widget_set_visible(Thankimg, FALSE);
	gtk_widget_set_visible(Teamlabel, FALSE);
	gtk_label_set_text(GTK_LABEL(Code), (const gchar *)"WELCOME");
	gtk_label_set_text(GTK_LABEL(Sourcecode), (const gchar *)"ABOUT CCPL");
	gtk_label_set_text(GTK_LABEL(Patternoutput), "");
	FILE *fp = fopen("./DESCRIPTION/CCONCEPTS/aboutus.txt", "r");
	char tmp[100000];
	char x = '0';
	int i = 0;
	while ((x = getc(fp)) != EOF)
	{
		tmp[i] = x;
		i++;
	}
	tmp[i] = '\0';
	gtk_label_set_text(GTK_LABEL(Outputwindow), tmp);
	fclose(fp);
}
void on_Ourteam_clicked(GtkButton *b)
{
	gtk_widget_set_visible(Mainimg, FALSE);
	gtk_widget_set_visible(Teamlabel, TRUE);
	gtk_widget_set_visible(Thankimg, TRUE);
	gtk_label_set_text(GTK_LABEL(Code), (const gchar *)"THANK YOU");
	gtk_label_set_text(GTK_LABEL(Sourcecode), (const gchar *)"OUR TEAM");
	FILE *fp = fopen("./DESCRIPTION/CCONCEPTS/Thank_Letter.txt", "r");
	char tmp[100000];
	char x = '0';
	int i = 0;
	while ((x = getc(fp)) != EOF)
	{
		tmp[i] = x;
		i++;
	}
	tmp[i] = '\0';
	gtk_label_set_text(GTK_LABEL(Outputwindow), tmp);
	fclose(fp);
}
