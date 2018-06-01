#include "stdafx.h"  //________________________________________ GABO.cpp
#include "GABO.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	GABO app;
	return app.BeginDialog(IDI_GABO, hInstance);
}

void GABO::Window_Open(Win::Event& e)
{
}



void GABO::btH_Click(Win::Event& e)
{
}

void GABO::btH_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btH.DrawButton(pDrawItem);
//	btH.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::lbH_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb01_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb03_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb011_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb019_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb037_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb055_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb087_CtlColorStatic(Win::Event& e)
{
}

void GABO::lbLi_CtlColorStatic(Win::Event& e)
{
}

void GABO::btLi_Click(Win::Event& e)
{
}

void GABO::btLi_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btLi.DrawButton(pDrawItem);
//	btLi.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btNa_Click(Win::Event& e)
{
}

void GABO::btNa_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btNa.DrawButton(pDrawItem);
//	btNa.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btK_Click(Win::Event& e)
{
}

void GABO::btK_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btK.DrawButton(pDrawItem);
//	btK.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btRb_Click(Win::Event& e)
{
}

void GABO::btRb_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btRb.DrawButton(pDrawItem);
//	btRb.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btCs_Click(Win::Event& e)
{
}

void GABO::btCs_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btCs.DrawButton(pDrawItem);
//	btCs.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btFr_Click(Win::Event& e)
{
}

void GABO::btFr_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btFr.DrawButton(pDrawItem);
//	btFr.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::lb13_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb14_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb15_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb16_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb17_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb04_CtlColorStatic(Win::Event& e)
{
}


void GABO::lb20_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb21_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb22_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb23_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb24_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb25_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb26_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb27_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb28_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb29_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb30_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb31_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb32_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb33_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb34_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb35_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb36_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb37_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb38_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb39_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb40_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb41_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb42_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb43_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb44_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb45_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb46_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb47_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb48_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb49_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb50_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb51_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb52_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb53_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb54_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb55_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb56_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb57_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb58_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb59_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb60_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb61_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb62_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb63_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb64_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb65_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb66_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb67_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb68_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb69_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb70_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb71_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb72_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb73_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb74_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb75_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb76_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb77_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb78_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb79_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb80_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb81_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb82_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb83_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb84_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb85_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb86_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb87_CtlColorStatic(Win::Event& e)
{
}

void GABO::btBe_Click(Win::Event& e)
{
}

void GABO::btBe_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btBe.DrawButton(pDrawItem);
//	btBe.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btCa_Click(Win::Event& e)
{
}

void GABO::btCa_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btCa.DrawButton(pDrawItem);
//	btCa.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btMg_Click(Win::Event& e)
{
}

void GABO::btMg_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btMg.DrawButton(pDrawItem);
//	btMg.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btSr_Click(Win::Event& e)
{
}

void GABO::btSr_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btSr.DrawButton(pDrawItem);
//	btSr.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btBa_Click(Win::Event& e)
{
}

void GABO::btBa_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btBa.DrawButton(pDrawItem);
//	btBa.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btRa_Click(Win::Event& e)
{
}

void GABO::btRa_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btRa.DrawButton(pDrawItem);
//	btRa.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btSc_Click(Win::Event& e)
{
}

void GABO::btSc_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btSc.DrawButton(pDrawItem);
//	btSc.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btY_Click(Win::Event& e)
{
}

void GABO::btY_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btY.DrawButton(pDrawItem);
//	btY.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btTi_Click(Win::Event& e)
{
}

void GABO::btTi_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btTi.DrawButton(pDrawItem);
//	btTi.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btZr_Click(Win::Event& e)
{
}

void GABO::btZr_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btZr.DrawButton(pDrawItem);
//	btZr.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btHf_Click(Win::Event& e)
{
}

void GABO::btHf_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btHf.DrawButton(pDrawItem);
//	btHf.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btRf_Click(Win::Event& e)
{
}

void GABO::btRf_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btRf.DrawButton(pDrawItem);
//	btRf.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btV_Click(Win::Event& e)
{
}

void GABO::btV_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btV.DrawButton(pDrawItem);
//	btV.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btNb_Click(Win::Event& e)
{
}

void GABO::btNb_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btNb.DrawButton(pDrawItem);
//	btNb.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btTa_Click(Win::Event& e)
{
}

void GABO::btTa_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btTa.DrawButton(pDrawItem);
//	btTa.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btDb_Click(Win::Event& e)
{
}

void GABO::btDb_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btDb.DrawButton(pDrawItem);
//	btDb.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btSg_Click(Win::Event& e)
{
}

void GABO::btSg_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btSg.DrawButton(pDrawItem);
//	btSg.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btW_Click(Win::Event& e)
{
}

void GABO::btW_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btW.DrawButton(pDrawItem);
//	btW.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btMb_Click(Win::Event& e)
{
}

void GABO::btMb_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btMb.DrawButton(pDrawItem);
//	btMb.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btCr_Click(Win::Event& e)
{
}

void GABO::btCr_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btCr.DrawButton(pDrawItem);
//	btCr.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btMn_Click(Win::Event& e)
{
}

void GABO::btMn_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btMn.DrawButton(pDrawItem);
//	btMn.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btTc_Click(Win::Event& e)
{
}

void GABO::btTc_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btTc.DrawButton(pDrawItem);
//	btTc.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btRe_Click(Win::Event& e)
{
}

void GABO::btRe_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btRe.DrawButton(pDrawItem);
//	btRe.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btBh_Click(Win::Event& e)
{
}

void GABO::btBh_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btBh.DrawButton(pDrawItem);
//	btBh.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btFe_Click(Win::Event& e)
{
}

void GABO::btFe_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btFe.DrawButton(pDrawItem);
//	btFe.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btRu_Click(Win::Event& e)
{
}

void GABO::btRu_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btRu.DrawButton(pDrawItem);
//	btRu.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btOs_Click(Win::Event& e)
{
}

void GABO::btOs_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btOs.DrawButton(pDrawItem);
//	btOs.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btHs_Click(Win::Event& e)
{
}

void GABO::btHs_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btHs.DrawButton(pDrawItem);
//	btHs.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btMt_Click(Win::Event& e)
{
}

void GABO::btMt_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btMt.DrawButton(pDrawItem);
//	btMt.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btIr_Click(Win::Event& e)
{
}

void GABO::btIr_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btIr.DrawButton(pDrawItem);
//	btIr.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btRh_Click(Win::Event& e)
{
}

void GABO::btRh_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btRh.DrawButton(pDrawItem);
//	btRh.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btCo_Click(Win::Event& e)
{
}

void GABO::btCo_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btCo.DrawButton(pDrawItem);
//	btCo.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btNi_Click(Win::Event& e)
{
}

void GABO::btNi_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btNi.DrawButton(pDrawItem);
//	btNi.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btPd_Click(Win::Event& e)
{
}

void GABO::btPd_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btPd.DrawButton(pDrawItem);
//	btPd.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btPt_Click(Win::Event& e)
{
}

void GABO::btPt_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btPt.DrawButton(pDrawItem);
//	btPt.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btDs_Click(Win::Event& e)
{
}

void GABO::btDs_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btDs.DrawButton(pDrawItem);
//	btDs.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btAu_Click(Win::Event& e)
{
}

void GABO::btAu_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btAu.DrawButton(pDrawItem);
//	btAu.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btAg_Click(Win::Event& e)
{
}

void GABO::btAg_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btAg.DrawButton(pDrawItem);
//	btAg.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btCu_Click(Win::Event& e)
{
}

void GABO::btCu_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btCu.DrawButton(pDrawItem);
	//	btCu.DrawButton(pDrawItem, bitmap);
		//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE;
}

void GABO::btRg_Click(Win::Event& e)
{
}

void GABO::btRg_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btRg.DrawButton(pDrawItem);
//	btRg.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btZn_Click(Win::Event& e)
{
}

void GABO::btZn_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btZn.DrawButton(pDrawItem);
//	btZn.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btCd_Click(Win::Event& e)
{
}

void GABO::btCd_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btCd.DrawButton(pDrawItem);
//	btCd.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btHg_Click(Win::Event& e)
{
}

void GABO::btHg_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btHg.DrawButton(pDrawItem);
//	btHg.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btCn_Click(Win::Event& e)
{
}

void GABO::btCn_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btCn.DrawButton(pDrawItem);
//	btCn.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::lb88_CtlColorStatic(Win::Event& e)
{
}



void GABO::lb89_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb90_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb91_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb92_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb93_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb94_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb95_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb96_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb97_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb98_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb99_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb100_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb101_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb102_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb103_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb104_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb105_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb106_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb107_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb108_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb109_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb110_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb111_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb112_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb113_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb114_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb115_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb116_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb117_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb120_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb121_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb122_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb123_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb124_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb125_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb126_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb127_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb128_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb129_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb130_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb131_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb132_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb133_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb134_CtlColorStatic(Win::Event& e)
{
}

void GABO::btGa_Click(Win::Event& e)
{
}

void GABO::btGa_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btGa.DrawButton(pDrawItem);
//	btGa.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btAl_Click(Win::Event& e)
{
}

void GABO::btAl_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btAl.DrawButton(pDrawItem);
//	btAl.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btTl_Click(Win::Event& e)
{
}

void GABO::btTl_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btTl.DrawButton(pDrawItem);
//	btTl.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btPb_Click(Win::Event& e)
{
}

void GABO::btPb_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btPb.DrawButton(pDrawItem);
//	btPb.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btSn_Click(Win::Event& e)
{
}

void GABO::btSn_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btSn.DrawButton(pDrawItem);
//	btSn.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btFi_Click(Win::Event& e)
{
}

void GABO::btFi_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btFi.DrawButton(pDrawItem);
//	btFi.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btBi_Click(Win::Event& e)
{
}

void GABO::btBi_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btBi.DrawButton(pDrawItem);
//	btBi.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btPo_Click(Win::Event& e)
{
}

void GABO::btPo_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btPo.DrawButton(pDrawItem);
//	btPo.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btIn_Click(Win::Event& e)
{
}

void GABO::btIn_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btIn.DrawButton(pDrawItem);
//	btIn.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}


void GABO::btP_Click(Win::Event& e)
{
}

void GABO::btP_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btP.DrawButton(pDrawItem);
//	btP.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btSi_Click(Win::Event& e)
{
}

void GABO::btSi_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btSi.DrawButton(pDrawItem);
//	btSi.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btS_Click(Win::Event& e)
{
}

void GABO::btS_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btS.DrawButton(pDrawItem);
//	btS.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btN_Click(Win::Event& e)
{
}

void GABO::btN_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btN.DrawButton(pDrawItem);
//	btN.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btC_Click(Win::Event& e)
{
}

void GABO::btC_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btC.DrawButton(pDrawItem);
//	btC.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btB_Click(Win::Event& e)
{
}

void GABO::btB_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btB.DrawButton(pDrawItem);
//	btB.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btCl_Click(Win::Event& e)
{
}

void GABO::btCl_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btCl.DrawButton(pDrawItem);
//	btCl.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btO_Click(Win::Event& e)
{
}

void GABO::btO_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btO.DrawButton(pDrawItem);
//	btO.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btF_Click(Win::Event& e)
{
}

void GABO::btF_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btF.DrawButton(pDrawItem);
//	btF.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btNe_Click(Win::Event& e)
{
}

void GABO::btNe_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btNe.DrawButton(pDrawItem);
//	btNe.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btHe_Click(Win::Event& e)
{
}

void GABO::btHe_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btHe.DrawButton(pDrawItem);
//	btHe.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}


void GABO::btSb_Click(Win::Event& e)
{
}

void GABO::btSb_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btSb.DrawButton(pDrawItem);
//	btSb.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btAs_Click(Win::Event& e)
{
}

void GABO::btAs_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btAs.DrawButton(pDrawItem);
//	btAs.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btGe_Click(Win::Event& e)
{
}

void GABO::btGe_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btGe.DrawButton(pDrawItem);
//	btGe.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btTe_Click(Win::Event& e)
{
}

void GABO::btTe_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btTe.DrawButton(pDrawItem);
//	btTe.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btSe_Click(Win::Event& e)
{
}

void GABO::btSe_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btSe.DrawButton(pDrawItem);
//	btSe.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btAt_Click(Win::Event& e)
{
}

void GABO::btAt_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btAt.DrawButton(pDrawItem);
//	btAt.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btI_Click(Win::Event& e)
{
}

void GABO::btI_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btI.DrawButton(pDrawItem);
//	btI.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btBr_Click(Win::Event& e)
{
}

void GABO::btBr_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btBr.DrawButton(pDrawItem);
//	btBr.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btAr_Click(Win::Event& e)
{
}

void GABO::btAr_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btAr.DrawButton(pDrawItem);
//	btAr.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btKr_Click(Win::Event& e)
{
}

void GABO::btKr_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btKr.DrawButton(pDrawItem);
//	btKr.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btXe_Click(Win::Event& e)
{
}

void GABO::btXe_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btXe.DrawButton(pDrawItem);
//	btXe.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btRn_Click(Win::Event& e)
{
}

void GABO::btRn_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btRn.DrawButton(pDrawItem);
//	btRn.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btMc_Click(Win::Event& e)
{
}

void GABO::btMc_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btMc.DrawButton(pDrawItem);
//	btMc.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btLv_Click(Win::Event& e)
{
}

void GABO::btLv_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btLv.DrawButton(pDrawItem);
//	btLv.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btTs_Click(Win::Event& e)
{
}

void GABO::btTs_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btTs.DrawButton(pDrawItem);
//	btTs.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btOg_Click(Win::Event& e)
{
}

void GABO::btOg_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btOg.DrawButton(pDrawItem);
//	btOg.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btNh_Click(Win::Event& e)
{
}

void GABO::btNh_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btNh.DrawButton(pDrawItem);
//	btNh.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::lbN_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb135_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb136_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb137_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb138_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb139_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb140_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb141_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb142_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb143_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb144_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb145_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb146_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb147_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb148_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb149_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb150_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb151_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb152_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb153_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb154_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb155_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb156_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb157_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb158_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb159_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb160_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb161_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb162_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb163_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb164_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb165_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb166_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb167_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb168_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb169_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb170_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb171_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb172_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb173_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb174_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb175_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb176_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb177_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb178_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb179_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb180_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb182_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb183_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb184_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb185_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb186_CtlColorStatic(Win::Event& e)
{
}

void GABO::lbb_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb187_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb188_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb189_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb190_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb191_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb192_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb193_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb194_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb195_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb196_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb197_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb198_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb199_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb200_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb201_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb202_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb203_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb204_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb205_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb206_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb207_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb208_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb209_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb210_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb211_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb212_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb213_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb214_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb215_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb216_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb217_CtlColorStatic(Win::Event& e)
{
}


void GABO::btLa_Click(Win::Event& e)
{
}

void GABO::btLa_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btLa.DrawButton(pDrawItem);
//	btLa.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btPr_Click(Win::Event& e)
{
}

void GABO::btPr_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btPr.DrawButton(pDrawItem);
//	btPr.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btCe_Click(Win::Event& e)
{
}

void GABO::btCe_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btCe.DrawButton(pDrawItem);
//	btCe.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btNd_Click(Win::Event& e)
{
}

void GABO::btNd_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btNd.DrawButton(pDrawItem);
//	btNd.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btPm_Click(Win::Event& e)
{
}

void GABO::btPm_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btPm.DrawButton(pDrawItem);
//	btPm.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btSm_Click(Win::Event& e)
{
}

void GABO::btSm_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btSm.DrawButton(pDrawItem);
//	btSm.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btEu_Click(Win::Event& e)
{
}

void GABO::btEu_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btEu.DrawButton(pDrawItem);
//	btEu.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btGd_Click(Win::Event& e)
{
}

void GABO::btGd_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btGd.DrawButton(pDrawItem);
//	btGd.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btTb_Click(Win::Event& e)
{
}

void GABO::btTb_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btTb.DrawButton(pDrawItem);
//	btTb.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btDy_Click(Win::Event& e)
{
}

void GABO::btDy_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btDy.DrawButton(pDrawItem);
//	btDy.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btEr_Click(Win::Event& e)
{
}

void GABO::btEr_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btEr.DrawButton(pDrawItem);
//	btEr.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btTm_Click(Win::Event& e)
{
}

void GABO::btTm_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btTm.DrawButton(pDrawItem);
//	btTm.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btHo_Click(Win::Event& e)
{
}

void GABO::btHo_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btHo.DrawButton(pDrawItem);
//	btHo.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btAc_Click(Win::Event& e)
{
}

void GABO::btAc_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btAc.DrawButton(pDrawItem);
//	btAc.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btTh_Click(Win::Event& e)
{
}

void GABO::btTh_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btTh.DrawButton(pDrawItem);
//	btTh.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btPa_Click(Win::Event& e)
{
}

void GABO::btPa_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btPa.DrawButton(pDrawItem);
//	btPa.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btU_Click(Win::Event& e)
{
}

void GABO::btU_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btU.DrawButton(pDrawItem);
//	btU.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btNp_Click(Win::Event& e)
{
}

void GABO::btNp_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btNp.DrawButton(pDrawItem);
//	btNp.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btPu_Click(Win::Event& e)
{
}

void GABO::btPu_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btPu.DrawButton(pDrawItem);
//	btPu.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btAm_Click(Win::Event& e)
{
}

void GABO::btAm_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btAm.DrawButton(pDrawItem);
//	btAm.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btCm_Click(Win::Event& e)
{
}

void GABO::btCm_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btCm.DrawButton(pDrawItem);
//	btCm.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btBk_Click(Win::Event& e)
{
}

void GABO::btBk_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btBk.DrawButton(pDrawItem);
//	btBk.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btCf_Click(Win::Event& e)
{
}

void GABO::btCf_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btCf.DrawButton(pDrawItem);
//	btCf.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btEs_Click(Win::Event& e)
{
}

void GABO::btEs_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btEs.DrawButton(pDrawItem);
//	btEs.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btFm_Click(Win::Event& e)
{
}

void GABO::btFm_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btFm.DrawButton(pDrawItem);
//	btFm.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btYb_Click(Win::Event& e)
{
}

void GABO::btYb_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btYb.DrawButton(pDrawItem);
//	btYb.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btLu_Click(Win::Event& e)
{
}

void GABO::btLu_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btLu.DrawButton(pDrawItem);
//	btLu.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btMd_Click(Win::Event& e)
{
}

void GABO::btMd_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btMd.DrawButton(pDrawItem);
//	btMd.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btNo_Click(Win::Event& e)
{
}

void GABO::btNo_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btNo.DrawButton(pDrawItem);
//	btNo.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::btLr_Click(Win::Event& e)
{
}

void GABO::btLr_DrawItem(Win::Event& e)
{
	DRAWITEMSTRUCT * pDrawItem = (DRAWITEMSTRUCT *)e.lParam;
	//PAINTSTRUCT ps;
	//ps.hdc = pDrawItem->hDC;
	//RECT rect = pDrawItem->rcItem;
	//const bool isSelected = ((pDrawItem->itemState & ODS_SELECTED) != 0);
	//const bool hasFocus = ((pDrawItem->itemState & ODS_FOCUS) != 0);
	//const bool isDefault = ((pDrawItem->itemState & ODS_DEFAULT) != 0);
	//CG::Gdi gdi(ps, false);
	btLr.DrawButton(pDrawItem);
//	btLr.DrawButton(pDrawItem, bitmap);
	//if (hasFocus == true) gdi.DrawFocusRect(&rect);
	e.returnValue = TRUE; 
}

void GABO::lb222_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb223_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb2224_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb225_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb226_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb227_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb228_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb229_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb230_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb232_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb233_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb234_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb231_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb235_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb236_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb237_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb238_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb239_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb240_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb241_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb242_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb243_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb244_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb245_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb246_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb247_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb248_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb249_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb251_CtlColorStatic(Win::Event& e)
{
}

void GABO::lb250_CtlColorStatic(Win::Event& e)
{
}

