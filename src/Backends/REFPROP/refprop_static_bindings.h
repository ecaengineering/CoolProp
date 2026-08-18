// Generated for CoolProp's REFPROP backend when COOLPROP_REFPROP_STATIC_LINK is
// defined - declares the mangled (gfortran/flang lowercase+trailing-underscore)
// symbols exported by a statically-linked librefprop.a, and binds each *dll
// pointer that REFPROPMixtureBackend.cpp actually calls straight to the linked-in
// Fortran routine, instead of resolving it via dlopen()/dlsym() at runtime.
//
// The name list below is exactly the set of REFPROP dll functions referenced by
// REFPROPMixtureBackend.cpp/REFPROPBackend.cpp/.h for this pinned CoolProp
// version - if a future CoolProp update calls a new one, the compiler will fail
// loudly on an undeclared identifier, pointing exactly at what to add here.
//
// Included from REFPROPMixtureBackend.cpp itself (see COOLPROP_REFPROP_STATIC_LINK
// below), right after <REFPROP_lib.h> while REFPROP_CSTYLE_REFERENCES is still in
// effect, so DOUBLE_REF/INT_REF still expand to plain pointers here.

extern "C" {
void chempotdll_(CHEMPOTdll_ARGS);
void critpdll_(CRITPdll_ARGS);
void dbdtdll_(DBDTdll_ARGS);
void deflshdll_(DEFLSHdll_ARGS);
void dhflshdll_(DHFLSHdll_ARGS);
void dpdd2dll_(DPDD2dll_ARGS);
void dpdddll_(DPDDdll_ARGS);
void dptsatkdll_(DPTSATKdll_ARGS);
void dqfl2dll_(DQFL2dll_ARGS);
void dsfl1dll_(DSFL1dll_ARGS);
void dsflshdll_(DSFLSHdll_ARGS);
void esflshdll_(ESFLSHdll_ARGS);
void excessdll_(EXCESSdll_ARGS);
void fgcty2dll_(FGCTY2dll_ARGS);
void fugcofdll_(FUGCOFdll_ARGS);
void gerg04dll_(GERG04dll_ARGS);
void getktvdll_(GETKTVdll_ARGS);
void hsflshdll_(HSFLSHdll_ARGS);
void infodll_(INFOdll_ARGS);
void limitsdll_(LIMITSdll_ARGS);
void limitxdll_(LIMITXdll_ARGS);
void meltpdll_(MELTPdll_ARGS);
void melttdll_(MELTTdll_ARGS);
void namedll_(NAMEdll_ARGS);
void pdflshdll_(PDFLSHdll_ARGS);
void peflshdll_(PEFLSHdll_ARGS);
void phflshdll_(PHFLSHdll_ARGS);
void phi0dll_(PHI0dll_ARGS);
void phixdll_(PHIXdll_ARGS);
void pqflshdll_(PQFLSHdll_ARGS);
void preosdll_(PREOSdll_ARGS);
void psflshdll_(PSFLSHdll_ARGS);
void redxdll_(REDXdll_ARGS);
void rmix2dll_(RMIX2dll_ARGS);
void satpdll_(SATPdll_ARGS);
void satsplndll_(SATSPLNdll_ARGS);
void sattpdll_(SATTPdll_ARGS);
void sattdll_(SATTdll_ARGS);
void setktvdll_(SETKTVdll_ARGS);
void setmixdll_(SETMIXdll_ARGS);
void setpathdll_(SETPATHdll_ARGS);
void setrefdll_(SETREFdll_ARGS);
void setupdll_(SETUPdll_ARGS);
void splnvaldll_(SPLNVALdll_ARGS);
void surftdll_(SURFTdll_ARGS);
void tdflshdll_(TDFLSHdll_ARGS);
void teflshdll_(TEFLSHdll_ARGS);
void therm0dll_(THERM0dll_ARGS);
void therm2dll_(THERM2dll_ARGS);
void thermdll_(THERMdll_ARGS);
void thflshdll_(THFLSHdll_ARGS);
void tpflshdll_(TPFLSHdll_ARGS);
void tprhodll_(TPRHOdll_ARGS);
void tqflshdll_(TQFLSHdll_ARGS);
void trnprpdll_(TRNPRPdll_ARGS);
void tsflshdll_(TSFLSHdll_ARGS);
void virbdll_(VIRBdll_ARGS);
void vircdll_(VIRCdll_ARGS);
void wmoldll_(WMOLdll_ARGS);
}

// Points every *dll pointer REFPROPMixtureBackend.cpp calls at its statically
// linked Fortran routine. Called once from REFPROP_supported() instead of
// load_REFPROP()'s dlopen()/dlsym() dance.
static inline void bind_REFPROP_static() {
    CHEMPOTdll = (CHEMPOTdll_POINTER)&chempotdll_;
    CRITPdll = (CRITPdll_POINTER)&critpdll_;
    DBDTdll = (DBDTdll_POINTER)&dbdtdll_;
    DEFLSHdll = (DEFLSHdll_POINTER)&deflshdll_;
    DHFLSHdll = (DHFLSHdll_POINTER)&dhflshdll_;
    DPDD2dll = (DPDD2dll_POINTER)&dpdd2dll_;
    DPDDdll = (DPDDdll_POINTER)&dpdddll_;
    DPTSATKdll = (DPTSATKdll_POINTER)&dptsatkdll_;
    DQFL2dll = (DQFL2dll_POINTER)&dqfl2dll_;
    DSFL1dll = (DSFL1dll_POINTER)&dsfl1dll_;
    DSFLSHdll = (DSFLSHdll_POINTER)&dsflshdll_;
    ESFLSHdll = (ESFLSHdll_POINTER)&esflshdll_;
    EXCESSdll = (EXCESSdll_POINTER)&excessdll_;
    FGCTY2dll = (FGCTY2dll_POINTER)&fgcty2dll_;
    FUGCOFdll = (FUGCOFdll_POINTER)&fugcofdll_;
    GERG04dll = (GERG04dll_POINTER)&gerg04dll_;
    GETKTVdll = (GETKTVdll_POINTER)&getktvdll_;
    HSFLSHdll = (HSFLSHdll_POINTER)&hsflshdll_;
    INFOdll = (INFOdll_POINTER)&infodll_;
    LIMITSdll = (LIMITSdll_POINTER)&limitsdll_;
    LIMITXdll = (LIMITXdll_POINTER)&limitxdll_;
    MELTPdll = (MELTPdll_POINTER)&meltpdll_;
    MELTTdll = (MELTTdll_POINTER)&melttdll_;
    NAMEdll = (NAMEdll_POINTER)&namedll_;
    PDFLSHdll = (PDFLSHdll_POINTER)&pdflshdll_;
    PEFLSHdll = (PEFLSHdll_POINTER)&peflshdll_;
    PHFLSHdll = (PHFLSHdll_POINTER)&phflshdll_;
    PHI0dll = (PHI0dll_POINTER)&phi0dll_;
    PHIXdll = (PHIXdll_POINTER)&phixdll_;
    PQFLSHdll = (PQFLSHdll_POINTER)&pqflshdll_;
    PREOSdll = (PREOSdll_POINTER)&preosdll_;
    PSFLSHdll = (PSFLSHdll_POINTER)&psflshdll_;
    REDXdll = (REDXdll_POINTER)&redxdll_;
    RMIX2dll = (RMIX2dll_POINTER)&rmix2dll_;
    SATPdll = (SATPdll_POINTER)&satpdll_;
    SATSPLNdll = (SATSPLNdll_POINTER)&satsplndll_;
    SATTPdll = (SATTPdll_POINTER)&sattpdll_;
    SATTdll = (SATTdll_POINTER)&sattdll_;
    SETKTVdll = (SETKTVdll_POINTER)&setktvdll_;
    SETMIXdll = (SETMIXdll_POINTER)&setmixdll_;
    SETPATHdll = (SETPATHdll_POINTER)&setpathdll_;
    SETREFdll = (SETREFdll_POINTER)&setrefdll_;
    SETUPdll = (SETUPdll_POINTER)&setupdll_;
    SPLNVALdll = (SPLNVALdll_POINTER)&splnvaldll_;
    SURFTdll = (SURFTdll_POINTER)&surftdll_;
    TDFLSHdll = (TDFLSHdll_POINTER)&tdflshdll_;
    TEFLSHdll = (TEFLSHdll_POINTER)&teflshdll_;
    THERM0dll = (THERM0dll_POINTER)&therm0dll_;
    THERM2dll = (THERM2dll_POINTER)&therm2dll_;
    THERMdll = (THERMdll_POINTER)&thermdll_;
    THFLSHdll = (THFLSHdll_POINTER)&thflshdll_;
    TPFLSHdll = (TPFLSHdll_POINTER)&tpflshdll_;
    TPRHOdll = (TPRHOdll_POINTER)&tprhodll_;
    TQFLSHdll = (TQFLSHdll_POINTER)&tqflshdll_;
    TRNPRPdll = (TRNPRPdll_POINTER)&trnprpdll_;
    TSFLSHdll = (TSFLSHdll_POINTER)&tsflshdll_;
    VIRBdll = (VIRBdll_POINTER)&virbdll_;
    VIRCdll = (VIRCdll_POINTER)&vircdll_;
    WMOLdll = (WMOLdll_POINTER)&wmoldll_;
}
