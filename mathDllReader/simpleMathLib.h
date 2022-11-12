#ifndef INDLL_H
#define INDLL_H

#ifdef EXPORTING_DLL
extern __declspec(dllexport) int CalcSum(int a, int b, bool &err);
extern __declspec(dllexport) int CalcDiff(int a, int b, bool &err);
extern __declspec(dllexport) int CalcMult(int a, int b, bool &err);
extern __declspec(dllexport) float CalcDiv(int a, int b, bool &err);
extern __declspec(dllexport) float CalcPower(int base, int powr, bool &err);
#else
extern __declspec(dllimport) int CalcSum(int a, int b, bool &err);
extern __declspec(dllimport) int CalcDiff(int a, int b, bool &err);
extern __declspec(dllimport) int CalcMult(int a, int b, bool &err);
extern __declspec(dllimport) float CalcDiv(int a, int b, bool &err);
extern __declspec(dllimport) float CalcPower(int base, int powr, bool &err);
#endif

#endif
