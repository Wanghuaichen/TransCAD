

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Wed Jan 03 07:03:50 2018
 */
/* Compiler settings for TransCAD.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "TransCAD_i.h"

#define TYPE_FORMAT_STRING_SIZE   2049                              
#define PROC_FORMAT_STRING_SIZE   12091                             
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _TransCAD_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } TransCAD_MIDL_TYPE_FORMAT_STRING;

typedef struct _TransCAD_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } TransCAD_MIDL_PROC_FORMAT_STRING;

typedef struct _TransCAD_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } TransCAD_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const TransCAD_MIDL_TYPE_FORMAT_STRING TransCAD__MIDL_TypeFormatString;
extern const TransCAD_MIDL_PROC_FORMAT_STRING TransCAD__MIDL_ProcFormatString;
extern const TransCAD_MIDL_EXPR_FORMAT_STRING TransCAD__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IApplication_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IApplication_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDocs_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IDocs_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDoc_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IDoc_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPartDocument_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPartDocument_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPart_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPart_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFeatures_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFeatures_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdDefaultDatumPlaneFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdDefaultDatumPlaneFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSketchFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSketchFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSolidProtrusionExtrudeFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSolidProtrusionExtrudeFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSolidCutExtrudeFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSolidCutExtrudeFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSolidFilletConstantFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSolidFilletConstantFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSketchOrigin_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSketchOrigin_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSketchVDirection_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSketchVDirection_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSketchHDirection_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSketchHDirection_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSketchGeometries_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSketchGeometries_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSketchConstraints_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSketchConstraints_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSketchGeometry_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSketchGeometry_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSketchConstraint_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSketchConstraint_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSketchCircle_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSketchCircle_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSketchCircularArc_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSketchCircularArc_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSketchControlPoint_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSketchControlPoint_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSketchLine_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSketchLine_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IReferences_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IReferences_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IReference_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IReference_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IExplicitModelObject_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IExplicitModelObject_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISketch_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISketch_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISketchEditor_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISketchEditor_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSolidProtrusionSweepFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSolidProtrusionSweepFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSolidProtrusionRevolveFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSolidProtrusionRevolveFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSketchCenterline_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSketchCenterline_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSolidOperatePatternRectangularFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSolidOperatePatternRectangularFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSolidChamferFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSolidChamferFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSolidCutRevolveFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSolidCutRevolveFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSolidOperatePatternCircularFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSolidOperatePatternCircularFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSolidHoleCounterboredFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSolidHoleCounterboredFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSolidHoleCountersunkFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSolidHoleCountersunkFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSketchCoincidentSamePoints_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSketchCoincidentSamePoints_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSketchParallel_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSketchParallel_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSketchPerpendicular_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSketchPerpendicular_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSketchHorizontal_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSketchHorizontal_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSketchVertical_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSketchVertical_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdDatumPlaneOffsetFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdDatumPlaneOffsetFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSolidLoftFacesFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSolidLoftFacesFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSolidLoftSectionsFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSolidLoftSectionsFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSolidCutSweepFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSolidCutSweepFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSolidHoleSimpleFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSolidHoleSimpleFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSolidShellFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSolidShellFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSolidRevolveWithExternalAxisFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSolidRevolveWithExternalAxisFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSolidDraftFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSolidDraftFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSolidOffsetFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSolidOffsetFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdSolidImportedBrepFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdSolidImportedBrepFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISolid_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISolid_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFaces_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFaces_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEdges_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEdges_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFace_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFace_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEdge_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEdge_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVertices_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVertices_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVertex_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVertex_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPoint3D_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPoint3D_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAxis1_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAxis1_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAssemDocument_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAssemDocument_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IComp_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IComp_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAssem_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAssem_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdAssemConstraints_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdAssemConstraints_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdAssemConstraint_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdAssemConstraint_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdAssemConstraintCoaxial_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdAssemConstraintCoaxial_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStdAssemConstraintIncidence_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStdAssemConstraintIncidence_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const TransCAD_MIDL_PROC_FORMAT_STRING TransCAD__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure get_Visible */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x22 ),	/* 34 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 24 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Visible */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	NdrFcShort( 0x6 ),	/* 6 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 52 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 60 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Application */

/* 72 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x9 ),	/* 9 */
/* 80 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x8 ),	/* 8 */
/* 86 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 88 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 96 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 98 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 100 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Parent */

/* 108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0xa ),	/* 10 */
/* 116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 122 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 124 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 132 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ActiveDocument */

/* 144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0xb ),	/* 11 */
/* 152 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 158 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 160 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 168 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 172 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Return value */

/* 174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Documents */

/* 180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0xc ),	/* 12 */
/* 188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 194 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 196 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 204 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 208 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */

/* 216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0xd ),	/* 13 */
/* 224 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 230 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 232 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 234 */	NdrFcShort( 0x1 ),	/* 1 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 240 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 244 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Return value */

/* 246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Close */


	/* Procedure Quit */

/* 252 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0xe ),	/* 14 */
/* 260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x8 ),	/* 8 */
/* 266 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 268 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 278 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Application */


	/* Procedure get_Application */


	/* Procedure get_Application */

/* 282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0x7 ),	/* 7 */
/* 290 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 296 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 298 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */

/* 306 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 308 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 310 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 314 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Parent */


	/* Procedure get_Parent */


	/* Procedure get_Parent */

/* 318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 326 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 332 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 334 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */

/* 342 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 344 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 346 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 350 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Count */


	/* Procedure get_Count */


	/* Procedure get_Count */


	/* Procedure get_Count */

/* 354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x9 ),	/* 9 */
/* 362 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x24 ),	/* 36 */
/* 368 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 370 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 378 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Item */

/* 390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0xa ),	/* 10 */
/* 398 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 400 */	NdrFcShort( 0x8 ),	/* 8 */
/* 402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 404 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 406 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 414 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 420 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 422 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 424 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Return value */

/* 426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */

/* 432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 438 */	NdrFcShort( 0xb ),	/* 11 */
/* 440 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 446 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 448 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppUnk */

/* 456 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 458 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 460 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 464 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddPartDocument */

/* 468 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0xc ),	/* 12 */
/* 476 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x8 ),	/* 8 */
/* 482 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 484 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 492 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 494 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 496 */	NdrFcShort( 0xa0 ),	/* Type Offset=160 */

	/* Return value */

/* 498 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 500 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddAssemDocument */

/* 504 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0xd ),	/* 13 */
/* 512 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x8 ),	/* 8 */
/* 518 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 520 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 528 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 530 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 532 */	NdrFcShort( 0xb6 ),	/* Type Offset=182 */

	/* Return value */

/* 534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 536 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Open */

/* 540 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0xf ),	/* 15 */
/* 548 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 554 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 556 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x1 ),	/* 1 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filename */

/* 564 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 566 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 568 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter ppVal */

/* 570 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 572 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 574 */	NdrFcShort( 0xa0 ),	/* Type Offset=160 */

	/* Return value */

/* 576 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 578 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */


	/* Procedure get_ReferenceeName */


	/* Procedure get_Name */


	/* Procedure get_Name */


	/* Procedure get_Name */


	/* Procedure get_Name */


	/* Procedure get_FullName */

/* 582 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x9 ),	/* 9 */
/* 590 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 596 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 598 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 600 */	NdrFcShort( 0x1 ),	/* 1 */
/* 602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 606 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 608 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 610 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 614 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */


	/* Procedure get_ParentName */


	/* Procedure get_Name */


	/* Procedure get_Name */


	/* Procedure get_Name */


	/* Procedure get_Name */

/* 618 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0xa ),	/* 10 */
/* 626 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0x8 ),	/* 8 */
/* 632 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 634 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 636 */	NdrFcShort( 0x1 ),	/* 1 */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 642 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 644 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 646 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 650 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */


	/* Procedure get_Path */

/* 654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0xb ),	/* 11 */
/* 662 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 668 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 670 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 672 */	NdrFcShort( 0x1 ),	/* 1 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 678 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 680 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 682 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Return value */


	/* Return value */

/* 684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 686 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Saved */

/* 690 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0xc ),	/* 12 */
/* 698 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0x22 ),	/* 34 */
/* 704 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 706 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 714 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 716 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 718 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 720 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 722 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Activate */

/* 726 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0xd ),	/* 13 */
/* 734 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 738 */	NdrFcShort( 0x8 ),	/* 8 */
/* 740 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 742 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 752 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Close */

/* 756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0xe ),	/* 14 */
/* 764 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 766 */	NdrFcShort( 0x6 ),	/* 6 */
/* 768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 770 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 772 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x1 ),	/* 1 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter saveChanges */

/* 780 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 782 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 784 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter filename */

/* 786 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 788 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 790 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 792 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 794 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Save */

/* 798 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0xf ),	/* 15 */
/* 806 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0x8 ),	/* 8 */
/* 812 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 814 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 824 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SaveAs */

/* 828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x10 ),	/* 16 */
/* 836 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 842 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 844 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 848 */	NdrFcShort( 0x1 ),	/* 1 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filename */

/* 852 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 854 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 856 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 860 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Part */

/* 864 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 870 */	NdrFcShort( 0x11 ),	/* 17 */
/* 872 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0x8 ),	/* 8 */
/* 878 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 880 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 886 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 888 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 890 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 892 */	NdrFcShort( 0xda ),	/* Type Offset=218 */

	/* Return value */

/* 894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 896 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Update */


	/* Procedure Update */

/* 900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0x12 ),	/* 18 */
/* 908 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 914 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 916 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 924 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 926 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Title */

/* 930 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 936 */	NdrFcShort( 0x13 ),	/* 19 */
/* 938 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x8 ),	/* 8 */
/* 944 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 946 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 948 */	NdrFcShort( 0x1 ),	/* 1 */
/* 950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 954 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 956 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 958 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Return value */

/* 960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 962 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoMeshGeneration */

/* 966 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x14 ),	/* 20 */
/* 974 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 976 */	NdrFcShort( 0x20 ),	/* 32 */
/* 978 */	NdrFcShort( 0x8 ),	/* 8 */
/* 980 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 982 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter normalTolerance */

/* 990 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 992 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 994 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter surfaceTolerance */

/* 996 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 998 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1000 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 1002 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1004 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBBDiagonal */

/* 1008 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1016 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1022 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1024 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1034 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ImportFromCATIA */

/* 1038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1044 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1046 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1052 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1054 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filePath */

/* 1062 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1066 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 1068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1070 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExportToCATIA */

/* 1074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1082 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1088 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1090 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filePath */

/* 1098 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1100 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1102 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 1104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1106 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteByName */


	/* Procedure ImportFromUG */

/* 1110 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1116 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1118 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1124 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1126 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */


	/* Parameter filePath */

/* 1134 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1136 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1138 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */


	/* Return value */

/* 1140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1142 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExportToUG */

/* 1146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1152 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1154 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1160 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1162 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1166 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1168 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filePath */

/* 1170 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1172 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1174 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 1176 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1178 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExportToMesh */

/* 1182 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1190 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1196 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1198 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1202 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filePath */

/* 1206 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1208 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1210 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 1212 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1214 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExportToBrep */

/* 1218 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1224 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1226 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1232 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1234 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1238 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1240 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filePath */

/* 1242 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1244 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1246 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 1248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1250 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExportToXML */

/* 1254 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1260 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1262 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1268 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1270 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1274 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1276 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filePath */

/* 1278 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1280 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1282 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 1284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1286 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ImportFromXML */

/* 1290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1296 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1298 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1304 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1306 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1310 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filePath */

/* 1314 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1316 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1318 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 1320 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1322 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RunScriptInterface */

/* 1326 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1334 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1338 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1340 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1342 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1346 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter command */

/* 1350 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1352 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1354 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 1356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1358 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ImportFromBrep */

/* 1362 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1368 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1370 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1374 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1376 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1378 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1382 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1384 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filePath */

/* 1386 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1388 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1390 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 1392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1394 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ConvertMesh */

/* 1398 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1406 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1410 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1412 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1414 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1418 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1420 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sourcePath */

/* 1422 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1424 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1426 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter targetPath */

/* 1428 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1430 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1432 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 1434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1436 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Features */

/* 1440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0xa ),	/* 10 */
/* 1448 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1454 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1456 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 1464 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1466 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1468 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */

	/* Return value */

/* 1470 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1472 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateReferences */

/* 1476 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1482 */	NdrFcShort( 0xb ),	/* 11 */
/* 1484 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1490 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1492 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 1500 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1502 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1504 */	NdrFcShort( 0x106 ),	/* Type Offset=262 */

	/* Return value */

/* 1506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1508 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SelectObjectByName */

/* 1512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1518 */	NdrFcShort( 0xc ),	/* 12 */
/* 1520 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1524 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1526 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1528 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1532 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1534 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 1536 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1538 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1540 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter ppVal */

/* 1542 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1544 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1546 */	NdrFcShort( 0x11c ),	/* Type Offset=284 */

	/* Return value */

/* 1548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1550 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SelectBrepByName */

/* 1554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1560 */	NdrFcShort( 0xd ),	/* 13 */
/* 1562 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1568 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1570 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1576 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 1578 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1580 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1582 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter ppVal */

/* 1584 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1586 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1588 */	NdrFcShort( 0x11c ),	/* Type Offset=284 */

	/* Return value */

/* 1590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1592 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SelectPlaneByAxis */

/* 1596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1602 */	NdrFcShort( 0xe ),	/* 14 */
/* 1604 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 1606 */	NdrFcShort( 0x90 ),	/* 144 */
/* 1608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1610 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0xb,		/* 11 */
/* 1612 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ox */

/* 1620 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1622 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1624 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter oy */

/* 1626 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1628 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1630 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter oz */

/* 1632 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1634 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1636 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xx */

/* 1638 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1640 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1642 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xy */

/* 1644 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1646 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1648 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xz */

/* 1650 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1652 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1654 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter yx */

/* 1656 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1658 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 1660 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter yy */

/* 1662 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1664 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 1666 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter yz */

/* 1668 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1670 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 1672 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 1674 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1676 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 1678 */	NdrFcShort( 0x11c ),	/* Type Offset=284 */

	/* Return value */

/* 1680 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1682 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 1684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SelectCurveBy3Points */

/* 1686 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1692 */	NdrFcShort( 0xf ),	/* 15 */
/* 1694 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 1696 */	NdrFcShort( 0x90 ),	/* 144 */
/* 1698 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1700 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0xb,		/* 11 */
/* 1702 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1708 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startx */

/* 1710 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1712 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1714 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter starty */

/* 1716 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1718 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1720 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter startz */

/* 1722 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1724 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1726 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter endx */

/* 1728 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1730 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1732 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter endy */

/* 1734 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1736 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1738 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter endz */

/* 1740 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1742 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1744 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter curvex */

/* 1746 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1748 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 1750 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter curvey */

/* 1752 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1754 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 1756 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter curvez */

/* 1758 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1760 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 1762 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 1764 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1766 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 1768 */	NdrFcShort( 0x11c ),	/* Type Offset=284 */

	/* Return value */

/* 1770 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1772 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 1774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SelectFeatureByName */

/* 1776 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1782 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1784 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1790 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1792 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1796 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1798 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 1800 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1802 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1804 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter ppVal */

/* 1806 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1808 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1810 */	NdrFcShort( 0x11c ),	/* Type Offset=284 */

	/* Return value */

/* 1812 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1814 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SelectCurveByPoint */

/* 1818 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1824 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1826 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1828 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1832 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1834 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter curvex */

/* 1842 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1844 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1846 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter curvey */

/* 1848 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1850 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1852 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter curvez */

/* 1854 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1856 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1858 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 1860 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1862 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1864 */	NdrFcShort( 0x11c ),	/* Type Offset=284 */

	/* Return value */

/* 1866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1868 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure set_Name */

/* 1872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1878 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1880 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1886 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1888 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1892 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1896 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1898 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1900 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 1902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1904 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteByName */


	/* Procedure set_ParentName */

/* 1908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1914 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1916 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1922 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1924 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1928 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */


	/* Parameter pVal */

/* 1932 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1934 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1936 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */


	/* Return value */

/* 1938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1940 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ParentName */

/* 1944 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1950 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1952 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1958 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1960 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1962 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1968 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1970 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1972 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Return value */

/* 1974 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1976 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LoadFromFile */

/* 1980 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1986 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1988 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1992 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1994 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1996 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2000 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2002 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 2004 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2006 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2008 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 2010 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2012 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsCut */


	/* Procedure IsBrepPart */

/* 2016 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2022 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2024 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2028 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2030 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2032 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2038 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 2040 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2042 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2044 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2046 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2048 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SelectSketchSegmentByName */

/* 2052 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2058 */	NdrFcShort( 0x17 ),	/* 23 */
/* 2060 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2064 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2066 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2068 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2072 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2074 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 2076 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2078 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2080 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter ppVal */

/* 2082 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2084 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2086 */	NdrFcShort( 0x11c ),	/* Type Offset=284 */

	/* Return value */

/* 2088 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2090 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Solid */

/* 2094 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2096 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2100 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2102 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2108 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2110 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2116 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 2118 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2120 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2122 */	NdrFcShort( 0x132 ),	/* Type Offset=306 */

	/* Return value */

/* 2124 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2126 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Application */

/* 2130 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2136 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2138 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2144 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2146 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2152 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 2154 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2156 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2158 */	NdrFcShort( 0x148 ),	/* Type Offset=328 */

	/* Return value */

/* 2160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2162 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Parent */

/* 2166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2174 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2180 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2182 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 2190 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2192 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2194 */	NdrFcShort( 0x15e ),	/* Type Offset=350 */

	/* Return value */

/* 2196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2198 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Item */

/* 2202 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2208 */	NdrFcShort( 0xa ),	/* 10 */
/* 2210 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2214 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2216 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2218 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2224 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 2226 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2228 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 2232 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2234 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2236 */	NdrFcShort( 0x174 ),	/* Type Offset=372 */

	/* Return value */

/* 2238 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2240 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */

/* 2244 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2250 */	NdrFcShort( 0xb ),	/* 11 */
/* 2252 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2256 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2258 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2260 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2266 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppUnk */

/* 2268 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2270 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2272 */	NdrFcShort( 0x18a ),	/* Type Offset=394 */

	/* Return value */

/* 2274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2276 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewSketchFeature */

/* 2280 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2286 */	NdrFcShort( 0xc ),	/* 12 */
/* 2288 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2294 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2296 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2300 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 2304 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2306 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2308 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pSketchPlane */

/* 2310 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2312 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2314 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */

	/* Parameter ppVal */

/* 2316 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2318 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2320 */	NdrFcShort( 0x1b2 ),	/* Type Offset=434 */

	/* Return value */

/* 2322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2324 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewSolidProtrusionExtrudeFeature */

/* 2328 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2334 */	NdrFcShort( 0xd ),	/* 13 */
/* 2336 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2338 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2342 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 2344 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2348 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2350 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 2352 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2354 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2356 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pProfileSketch */

/* 2358 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2360 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2362 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */

	/* Parameter startDepth */

/* 2364 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2366 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2368 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter startCondition */

/* 2370 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2372 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2374 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter endDepth */

/* 2376 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2378 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2380 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter endCondition */

/* 2382 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2384 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2386 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter isFlip */

/* 2388 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2390 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2392 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 2394 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2396 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2398 */	NdrFcShort( 0x1c8 ),	/* Type Offset=456 */

	/* Return value */

/* 2400 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2402 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewSolidCutExtrudeFeature */

/* 2406 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2408 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2412 */	NdrFcShort( 0xe ),	/* 14 */
/* 2414 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2416 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2418 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2420 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 2422 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2426 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 2430 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2432 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2434 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pProfileSketch */

/* 2436 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2438 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2440 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */

	/* Parameter startDepth */

/* 2442 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2444 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2446 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter startCondition */

/* 2448 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2450 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2452 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter endDepth */

/* 2454 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2456 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2458 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter endCondition */

/* 2460 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2462 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2464 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter isFlip */

/* 2466 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2468 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2470 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 2472 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2474 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2476 */	NdrFcShort( 0x1de ),	/* Type Offset=478 */

	/* Return value */

/* 2478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2480 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewSolidFilletConstantFeature */

/* 2484 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2490 */	NdrFcShort( 0xf ),	/* 15 */
/* 2492 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2494 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2498 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2500 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2504 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 2508 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2510 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2512 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pfilletEdges */

/* 2514 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2516 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2518 */	NdrFcShort( 0x1f4 ),	/* Type Offset=500 */

	/* Parameter radius */

/* 2520 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2522 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2524 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter propagation */

/* 2526 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2528 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2530 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 2532 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2534 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2536 */	NdrFcShort( 0x206 ),	/* Type Offset=518 */

	/* Return value */

/* 2538 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2540 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewSolidChamferFeature */

/* 2544 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2550 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2552 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2554 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2556 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2558 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2560 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2564 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2566 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 2568 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2570 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2572 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pSelectedEdges */

/* 2574 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2576 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2578 */	NdrFcShort( 0x1f4 ),	/* Type Offset=500 */

	/* Parameter length */

/* 2580 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2582 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2584 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 2586 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2588 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2590 */	NdrFcShort( 0x21c ),	/* Type Offset=540 */

	/* Return value */

/* 2592 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2594 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewSolidProtrusionSweepFeature */

/* 2598 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2600 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2604 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2606 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2612 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2614 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2618 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2620 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 2622 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2624 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2626 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pProfileSketch */

/* 2628 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2630 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2632 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */

	/* Parameter pGuideCurve */

/* 2634 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2636 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2638 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */

	/* Parameter ppVal */

/* 2640 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2642 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2644 */	NdrFcShort( 0x232 ),	/* Type Offset=562 */

	/* Return value */

/* 2646 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2648 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewSolidProtrusionRevolveFeature */

/* 2652 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2654 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2658 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2660 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2662 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2666 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 2668 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2672 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2674 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 2676 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2678 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2680 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pProfileSketch */

/* 2682 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2684 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2686 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */

	/* Parameter startAngle */

/* 2688 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2690 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2692 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter startCondition */

/* 2694 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2696 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2698 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter endAngle */

/* 2700 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2702 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2704 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter endCondition */

/* 2706 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2708 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2710 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter isFlip */

/* 2712 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2714 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2716 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 2718 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2720 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2722 */	NdrFcShort( 0x248 ),	/* Type Offset=584 */

	/* Return value */

/* 2724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2726 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewSolidCutRevolveFeature */

/* 2730 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2736 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2738 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2740 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2744 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 2746 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2750 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2752 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 2754 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2756 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2758 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pProfileSketch */

/* 2760 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2762 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2764 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */

	/* Parameter startAngle */

/* 2766 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2768 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2770 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter startCondition */

/* 2772 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2774 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2776 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter endAngle */

/* 2778 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2780 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2782 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter endCondition */

/* 2784 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2786 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2788 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter isFlip */

/* 2790 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2792 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2794 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 2796 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2798 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2800 */	NdrFcShort( 0x25e ),	/* Type Offset=606 */

	/* Return value */

/* 2802 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2804 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewSolidOperatePatternRectangularFeature */

/* 2808 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2810 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2814 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2816 */	NdrFcShort( 0x5c ),	/* x86 Stack size/offset = 92 */
/* 2818 */	NdrFcShort( 0x90 ),	/* 144 */
/* 2820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2822 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xe,		/* 14 */
/* 2824 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2828 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2830 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 2832 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2834 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2836 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pTargetFeatures */

/* 2838 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2840 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2842 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter columnSpacing */

/* 2844 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2846 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2848 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter colDirX */

/* 2850 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2852 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2854 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter colDirY */

/* 2856 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2858 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2860 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter colDirZ */

/* 2862 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2864 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2866 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter columnNumber */

/* 2868 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2870 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rowSpacing */

/* 2874 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2876 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2878 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter rowDirX */

/* 2880 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2882 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 2884 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter rowDirY */

/* 2886 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2888 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 2890 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter rowDirZ */

/* 2892 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2894 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 2896 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter rowNumber */

/* 2898 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2900 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 2902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 2904 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2906 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 2908 */	NdrFcShort( 0x274 ),	/* Type Offset=628 */

	/* Return value */

/* 2910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2912 */	NdrFcShort( 0x58 ),	/* x86 Stack size/offset = 88 */
/* 2914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewSolidOperatePatternCircularFeature */

/* 2916 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2922 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2924 */	NdrFcShort( 0x60 ),	/* x86 Stack size/offset = 96 */
/* 2926 */	NdrFcShort( 0x96 ),	/* 150 */
/* 2928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2930 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xf,		/* 15 */
/* 2932 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2936 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 2940 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2942 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2944 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pTargetFeatures */

/* 2946 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2948 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2950 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter x1 */

/* 2952 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2954 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2956 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 2958 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2960 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2962 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter z1 */

/* 2964 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2966 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2968 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 2970 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2972 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2974 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 2976 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2978 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2980 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter z2 */

/* 2982 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2984 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 2986 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter angleNumber */

/* 2988 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2990 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 2992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter angleIncrement */

/* 2994 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2996 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 2998 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter radialNumber */

/* 3000 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3002 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 3004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter radialSpacing */

/* 3006 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3008 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 3010 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter radialAlignment */

/* 3012 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3014 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 3016 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 3018 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3020 */	NdrFcShort( 0x58 ),	/* x86 Stack size/offset = 88 */
/* 3022 */	NdrFcShort( 0x28a ),	/* Type Offset=650 */

	/* Return value */

/* 3024 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3026 */	NdrFcShort( 0x5c ),	/* x86 Stack size/offset = 92 */
/* 3028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewSolidHoleCounterboredFeature */

/* 3030 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3036 */	NdrFcShort( 0x16 ),	/* 22 */
/* 3038 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 3040 */	NdrFcShort( 0x80 ),	/* 128 */
/* 3042 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3044 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xc,		/* 12 */
/* 3046 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3050 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3052 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3054 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3056 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3058 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pTargetFace */

/* 3060 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3062 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3064 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */

	/* Parameter cx */

/* 3066 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3068 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3070 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter cy */

/* 3072 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3074 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3076 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter cz */

/* 3078 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3080 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3082 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter startRadius */

/* 3084 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3086 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3088 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter startDepth */

/* 3090 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3092 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 3094 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter endRadius */

/* 3096 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3098 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 3100 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter endDepth */

/* 3102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3104 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 3106 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter angle */

/* 3108 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3110 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 3112 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 3114 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3116 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 3118 */	NdrFcShort( 0x2a0 ),	/* Type Offset=672 */

	/* Return value */

/* 3120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3122 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 3124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewSolidHoleCountersunkFeature */

/* 3126 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3132 */	NdrFcShort( 0x17 ),	/* 23 */
/* 3134 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 3136 */	NdrFcShort( 0x80 ),	/* 128 */
/* 3138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3140 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xc,		/* 12 */
/* 3142 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3146 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3150 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3152 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3154 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pTargetFace */

/* 3156 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3158 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3160 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */

	/* Parameter cx */

/* 3162 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3164 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3166 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter cy */

/* 3168 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3170 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3172 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter cz */

/* 3174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3176 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3178 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter radius */

/* 3180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3182 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3184 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter depth */

/* 3186 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3188 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 3190 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter sinkRadius */

/* 3192 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3194 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 3196 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter sinkAngle */

/* 3198 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3200 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 3202 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter bottomAngle */

/* 3204 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3206 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 3208 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 3210 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3212 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 3214 */	NdrFcShort( 0x2b6 ),	/* Type Offset=694 */

	/* Return value */

/* 3216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3218 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 3220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewDatumPlaneOffsetFeature */

/* 3222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3228 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3230 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3232 */	NdrFcShort( 0x16 ),	/* 22 */
/* 3234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3236 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3238 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3242 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3246 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3248 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3250 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pSelectedPlane */

/* 3252 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3254 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3256 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */

	/* Parameter distance */

/* 3258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3260 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3262 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter isFlip */

/* 3264 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3266 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3268 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 3270 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3272 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3274 */	NdrFcShort( 0x2cc ),	/* Type Offset=716 */

	/* Return value */

/* 3276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3278 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewDatumPlaneOffsetFeature2 */

/* 3282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3288 */	NdrFcShort( 0x19 ),	/* 25 */
/* 3290 */	NdrFcShort( 0x5c ),	/* x86 Stack size/offset = 92 */
/* 3292 */	NdrFcShort( 0x96 ),	/* 150 */
/* 3294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3296 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xd,		/* 13 */
/* 3298 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3302 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3306 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3308 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3310 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter ox */

/* 3312 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3314 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3316 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter oy */

/* 3318 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3320 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3322 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter oz */

/* 3324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3326 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3328 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xx */

/* 3330 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3332 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3334 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xy */

/* 3336 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3338 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3340 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xz */

/* 3342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3344 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 3346 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter yx */

/* 3348 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3350 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 3352 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter yy */

/* 3354 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3356 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 3358 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter yz */

/* 3360 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3362 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 3364 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter isFlip */

/* 3366 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3368 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 3370 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 3372 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3374 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 3376 */	NdrFcShort( 0x2cc ),	/* Type Offset=716 */

	/* Return value */

/* 3378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3380 */	NdrFcShort( 0x58 ),	/* x86 Stack size/offset = 88 */
/* 3382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewSolidLoftFacesFeature */

/* 3384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3390 */	NdrFcShort( 0x1a ),	/* 26 */
/* 3392 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3394 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3398 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3400 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3404 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3408 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3410 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3412 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pFace1 */

/* 3414 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3416 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3418 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */

	/* Parameter param1 */

/* 3420 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3422 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3424 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter pFace2 */

/* 3426 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3428 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3430 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */

	/* Parameter param2 */

/* 3432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3434 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3436 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 3438 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3440 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3442 */	NdrFcShort( 0x2e2 ),	/* Type Offset=738 */

	/* Return value */

/* 3444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3446 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewSolidLoftSectionsFeature */

/* 3450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3456 */	NdrFcShort( 0x1b ),	/* 27 */
/* 3458 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3460 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3464 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3466 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3470 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3474 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3476 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3478 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pLoftSections */

/* 3480 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3482 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3484 */	NdrFcShort( 0x1f4 ),	/* Type Offset=500 */

	/* Parameter isCut */

/* 3486 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3488 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3490 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 3492 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3494 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3496 */	NdrFcShort( 0x2f8 ),	/* Type Offset=760 */

	/* Return value */

/* 3498 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3500 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewSolidCutSweepFeature */

/* 3504 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3510 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3512 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3516 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3518 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3520 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3524 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3528 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3530 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3532 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pProfileSketch */

/* 3534 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3536 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3538 */	NdrFcShort( 0x30e ),	/* Type Offset=782 */

	/* Parameter pGuideCurve */

/* 3540 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3542 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3544 */	NdrFcShort( 0x30e ),	/* Type Offset=782 */

	/* Parameter ppVal */

/* 3546 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3548 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3550 */	NdrFcShort( 0x320 ),	/* Type Offset=800 */

	/* Return value */

/* 3552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3554 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewSolidHoleSimpleFeature */

/* 3558 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3564 */	NdrFcShort( 0x1d ),	/* 29 */
/* 3566 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 3568 */	NdrFcShort( 0x50 ),	/* 80 */
/* 3570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3572 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 3574 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3578 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3580 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3582 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3584 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3586 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pTargetFace */

/* 3588 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3590 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3592 */	NdrFcShort( 0x30e ),	/* Type Offset=782 */

	/* Parameter cx */

/* 3594 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3596 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3598 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter cy */

/* 3600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3602 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3604 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter cz */

/* 3606 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3608 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3610 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter Radius */

/* 3612 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3614 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3616 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter Depth */

/* 3618 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3620 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 3622 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 3624 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3626 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 3628 */	NdrFcShort( 0x336 ),	/* Type Offset=822 */

	/* Return value */

/* 3630 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3632 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 3634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewSolidShellFeature */

/* 3636 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3642 */	NdrFcShort( 0x1e ),	/* 30 */
/* 3644 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3646 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3648 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3650 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3652 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3656 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3660 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3662 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3664 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pTargetFaces */

/* 3666 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3668 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3670 */	NdrFcShort( 0x1f4 ),	/* Type Offset=500 */

	/* Parameter innerThickness */

/* 3672 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3674 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3676 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter outerThickness */

/* 3678 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3680 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3682 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 3684 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3686 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3688 */	NdrFcShort( 0x34c ),	/* Type Offset=844 */

	/* Return value */

/* 3690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3692 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewSolidRevolveWithExternalAxisFeature */

/* 3696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3702 */	NdrFcShort( 0x1f ),	/* 31 */
/* 3704 */	NdrFcShort( 0x64 ),	/* x86 Stack size/offset = 100 */
/* 3706 */	NdrFcShort( 0x98 ),	/* 152 */
/* 3708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3710 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x10,		/* 16 */
/* 3712 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3716 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3720 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3722 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3724 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pProfileSketch */

/* 3726 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3728 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3730 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */

	/* Parameter startAngle */

/* 3732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3734 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3736 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter startCondition */

/* 3738 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3740 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3742 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter endAngle */

/* 3744 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3746 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3748 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter endCondition */

/* 3750 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3752 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3754 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter orgX */

/* 3756 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3758 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3760 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter orgY */

/* 3762 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3764 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 3766 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter orgZ */

/* 3768 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3770 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 3772 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dirX */

/* 3774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3776 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 3778 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dirY */

/* 3780 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3782 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 3784 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dirZ */

/* 3786 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3788 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 3790 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter isCut */

/* 3792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3794 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 3796 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter isFlip */

/* 3798 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3800 */	NdrFcShort( 0x58 ),	/* x86 Stack size/offset = 88 */
/* 3802 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 3804 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3806 */	NdrFcShort( 0x5c ),	/* x86 Stack size/offset = 92 */
/* 3808 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Return value */

/* 3810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3812 */	NdrFcShort( 0x60 ),	/* x86 Stack size/offset = 96 */
/* 3814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Delete */

/* 3816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3822 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3824 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3826 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3830 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3832 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 3840 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3842 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3848 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteByName */

/* 3852 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3858 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3860 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3866 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3868 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3872 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3876 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3878 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3880 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 3882 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3884 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewSolidDraftFeature */

/* 3888 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3894 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3896 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 3898 */	NdrFcShort( 0x70 ),	/* 112 */
/* 3900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3902 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 3904 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3908 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3912 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3914 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3916 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pTargetFaces */

/* 3918 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3920 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3922 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter orgX */

/* 3924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3926 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3928 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter orgY */

/* 3930 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3932 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3934 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter orgZ */

/* 3936 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3938 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3940 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dirX */

/* 3942 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3944 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3946 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dirY */

/* 3948 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3950 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 3952 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dirZ */

/* 3954 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3956 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 3958 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter draftAngle */

/* 3960 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3962 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 3964 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 3966 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3968 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 3970 */	NdrFcShort( 0x378 ),	/* Type Offset=888 */

	/* Return value */

/* 3972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3974 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 3976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewSolidOffsetFeature */

/* 3978 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3984 */	NdrFcShort( 0x23 ),	/* 35 */
/* 3986 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3988 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3990 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3992 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3994 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3998 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4000 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 4002 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4004 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4006 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pTargetFaces */

/* 4008 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4010 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4012 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter offsetThickness */

/* 4014 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4016 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4018 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 4020 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4022 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4024 */	NdrFcShort( 0x38e ),	/* Type Offset=910 */

	/* Return value */

/* 4026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4028 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewSolidImportedBrepFeature */

/* 4032 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4038 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4040 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4044 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4046 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4048 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4052 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4054 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 4056 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4058 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4060 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter filePath */

/* 4062 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4064 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4066 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter ppVal */

/* 4068 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4070 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4072 */	NdrFcShort( 0x3a4 ),	/* Type Offset=932 */

	/* Return value */

/* 4074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4076 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Application */

/* 4080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4086 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4088 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4094 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4096 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 4104 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4106 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4108 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Return value */

/* 4110 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4112 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Parent */

/* 4116 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4124 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4128 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4130 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4132 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 4140 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4142 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4144 */	NdrFcShort( 0x3d0 ),	/* Type Offset=976 */

	/* Return value */

/* 4146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4148 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Type */


	/* Procedure get_Type */


	/* Procedure get_Type */


	/* Procedure get_Type */


	/* Procedure get_Type */

/* 4152 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4158 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4160 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4164 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4166 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4168 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 4176 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 4178 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4180 */	NdrFcShort( 0x3e6 ),	/* Type Offset=998 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 4182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4184 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetName */


	/* Procedure SetName */

/* 4188 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4194 */	NdrFcShort( 0xb ),	/* 11 */
/* 4196 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4202 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4204 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4208 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4210 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 4212 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4214 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4216 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */


	/* Return value */

/* 4218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4220 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Origin */

/* 4224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4230 */	NdrFcShort( 0xc ),	/* 12 */
/* 4232 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4238 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4240 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 4248 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4250 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4252 */	NdrFcShort( 0x3ea ),	/* Type Offset=1002 */

	/* Return value */

/* 4254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4256 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HDirection */

/* 4260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4266 */	NdrFcShort( 0xd ),	/* 13 */
/* 4268 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4274 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4276 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 4284 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4286 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4288 */	NdrFcShort( 0x400 ),	/* Type Offset=1024 */

	/* Return value */

/* 4290 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4292 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VDirection */

/* 4296 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4302 */	NdrFcShort( 0xe ),	/* 14 */
/* 4304 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4308 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4310 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4312 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4318 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 4320 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4322 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4324 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 4326 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4328 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Geometries */

/* 4332 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4338 */	NdrFcShort( 0xf ),	/* 15 */
/* 4340 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4344 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4346 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4348 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4354 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 4356 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4358 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4360 */	NdrFcShort( 0x42c ),	/* Type Offset=1068 */

	/* Return value */

/* 4362 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4364 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Constraints */

/* 4368 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4374 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4376 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4380 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4382 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4384 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4390 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 4392 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4394 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4396 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Return value */

/* 4398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4400 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Sketch */

/* 4404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4410 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4412 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4418 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4420 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4426 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 4428 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4430 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4432 */	NdrFcShort( 0x458 ),	/* Type Offset=1112 */

	/* Return value */

/* 4434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4436 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SketchPlane */

/* 4440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4446 */	NdrFcShort( 0x12 ),	/* 18 */
/* 4448 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4454 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4456 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 4464 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4466 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4468 */	NdrFcShort( 0x46e ),	/* Type Offset=1134 */

	/* Return value */

/* 4470 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4472 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsInversed */

/* 4476 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4482 */	NdrFcShort( 0x13 ),	/* 19 */
/* 4484 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4488 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4490 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4492 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4500 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4502 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4504 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4508 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenEditor */

/* 4512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4518 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4520 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4524 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4526 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4528 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4534 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 4536 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4538 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4540 */	NdrFcShort( 0x472 ),	/* Type Offset=1138 */

	/* Return value */

/* 4542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4544 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenEditorEx */

/* 4548 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4554 */	NdrFcShort( 0x15 ),	/* 21 */
/* 4556 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4558 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4562 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4564 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter activateDcm */

/* 4572 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4574 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4576 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 4578 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4580 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4582 */	NdrFcShort( 0x472 ),	/* Type Offset=1138 */

	/* Return value */

/* 4584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4586 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCoordinateSystem */

/* 4590 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4596 */	NdrFcShort( 0x16 ),	/* 22 */
/* 4598 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 4600 */	NdrFcShort( 0x90 ),	/* 144 */
/* 4602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4604 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xa,		/* 10 */
/* 4606 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4612 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ox */

/* 4614 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4616 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4618 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter oy */

/* 4620 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4622 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4624 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter oz */

/* 4626 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4628 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4630 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xx */

/* 4632 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4634 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4636 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xy */

/* 4638 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4640 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4642 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xz */

/* 4644 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4646 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 4648 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter yx */

/* 4650 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4652 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 4654 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter yy */

/* 4656 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4658 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 4660 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter yz */

/* 4662 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4664 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 4666 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 4668 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4670 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 4672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCoordinateSystem */

/* 4674 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4680 */	NdrFcShort( 0x17 ),	/* 23 */
/* 4682 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 4684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4686 */	NdrFcShort( 0x14c ),	/* 332 */
/* 4688 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xa,		/* 10 */
/* 4690 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4696 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ox */

/* 4698 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4700 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4702 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter oy */

/* 4704 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4706 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4708 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter oz */

/* 4710 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4712 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4714 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xx */

/* 4716 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4718 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4720 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xy */

/* 4722 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4724 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4726 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xz */

/* 4728 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4730 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4732 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter yx */

/* 4734 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4736 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4738 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter yy */

/* 4740 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4742 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4744 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter yz */

/* 4746 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4748 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4750 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 4752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4754 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProfileSketch */


	/* Procedure get_ProfileSketch */

/* 4758 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4764 */	NdrFcShort( 0xc ),	/* 12 */
/* 4766 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4772 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4774 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4780 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */

/* 4782 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4784 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4786 */	NdrFcShort( 0x46e ),	/* Type Offset=1134 */

	/* Return value */


	/* Return value */

/* 4788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4790 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ProfileSketch */


	/* Procedure put_ProfileSketch */

/* 4794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4800 */	NdrFcShort( 0xd ),	/* 13 */
/* 4802 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4808 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4810 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4816 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */

/* 4818 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4820 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4822 */	NdrFcShort( 0x30e ),	/* Type Offset=782 */

	/* Return value */


	/* Return value */

/* 4824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4826 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsFlip */


	/* Procedure get_IsFlip */


	/* Procedure get_IsFlip */


	/* Procedure get_IsFlip */


	/* Procedure get_IsFlip */

/* 4830 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4836 */	NdrFcShort( 0xe ),	/* 14 */
/* 4838 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4842 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4844 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4846 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 4854 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4856 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4858 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 4860 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4862 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_IsFlip */


	/* Procedure put_IsFlip */


	/* Procedure put_IsFlip */


	/* Procedure put_IsFlip */


	/* Procedure put_IsFlip */

/* 4866 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4872 */	NdrFcShort( 0xf ),	/* 15 */
/* 4874 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4876 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4878 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4880 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4882 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 4890 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4892 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4894 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 4896 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4898 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_StartCondition */


	/* Procedure get_StartCondition */


	/* Procedure get_StartCondition */


	/* Procedure get_Propagation */


	/* Procedure get_StartCondition */


	/* Procedure get_StartCondition */

/* 4902 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4908 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4910 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4914 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4916 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4918 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 4926 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 4928 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4930 */	NdrFcShort( 0x3e6 ),	/* Type Offset=998 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 4932 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4934 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Propagation */


	/* Procedure put_StartCondition */


	/* Procedure put_StartCondition */

/* 4938 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4944 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4946 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4948 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4950 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4952 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4954 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4960 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 4962 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4964 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4966 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 4968 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4970 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Value */


	/* Procedure get_StartPosX */


	/* Procedure get_StartDepth */


	/* Procedure get_StartDepth */

/* 4974 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4976 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4980 */	NdrFcShort( 0x12 ),	/* 18 */
/* 4982 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4986 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4988 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4990 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4996 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 4998 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5000 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5002 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 5004 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5006 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_StartDepth */


	/* Procedure put_StartDepth */

/* 5010 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5012 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5016 */	NdrFcShort( 0x13 ),	/* 19 */
/* 5018 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5020 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5022 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5024 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5026 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5032 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 5034 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5036 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5038 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5040 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5042 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EndCondition */


	/* Procedure get_EndCondition */

/* 5046 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5048 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5052 */	NdrFcShort( 0x14 ),	/* 20 */
/* 5054 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5058 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5060 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5062 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5068 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 5070 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 5072 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5074 */	NdrFcShort( 0x3e6 ),	/* Type Offset=998 */

	/* Return value */


	/* Return value */

/* 5076 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5078 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EndCondition */


	/* Procedure put_EndCondition */

/* 5082 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5084 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5088 */	NdrFcShort( 0x15 ),	/* 21 */
/* 5090 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5092 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5094 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5096 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5098 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5104 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 5106 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5108 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5110 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5114 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EndPosX */


	/* Procedure get_EndPosY */


	/* Procedure get_EndDepth */


	/* Procedure get_EndDepth */

/* 5118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5124 */	NdrFcShort( 0x16 ),	/* 22 */
/* 5126 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5130 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5132 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5134 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5140 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 5142 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5144 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5146 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 5148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5150 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EndDepth */


	/* Procedure put_EndDepth */

/* 5154 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5160 */	NdrFcShort( 0x17 ),	/* 23 */
/* 5162 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5164 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5168 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5170 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 5178 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5180 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5182 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5184 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5186 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FilletEdges */

/* 5190 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5196 */	NdrFcShort( 0xc ),	/* 12 */
/* 5198 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5204 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5206 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5212 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 5214 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5216 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5218 */	NdrFcShort( 0x48c ),	/* Type Offset=1164 */

	/* Return value */

/* 5220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5222 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_FilletEdges */

/* 5226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5232 */	NdrFcShort( 0xd ),	/* 13 */
/* 5234 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5240 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5242 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 5250 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5252 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5254 */	NdrFcShort( 0x490 ),	/* Type Offset=1168 */

	/* Return value */

/* 5256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5258 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_OffsetThickness */


	/* Procedure get_DraftAngle */


	/* Procedure get_StartAngle */


	/* Procedure get_InnerThickness */


	/* Procedure get_ColumnSpacing */


	/* Procedure get_Radius */

/* 5262 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5268 */	NdrFcShort( 0xe ),	/* 14 */
/* 5270 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5274 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5276 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5278 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 5286 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5288 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5290 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 5292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5294 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_OffsetThickness */


	/* Procedure put_DraftAngle */


	/* Procedure put_StartAngle */


	/* Procedure put_InnerThickness */


	/* Procedure put_ColumnSpacing */


	/* Procedure put_Radius */

/* 5298 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5304 */	NdrFcShort( 0xf ),	/* 15 */
/* 5306 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5308 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5312 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5314 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5320 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 5322 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5324 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5326 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 5328 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5330 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SinkRadius */


	/* Procedure get_EndRadius */


	/* Procedure get_StartPosX */


	/* Procedure get_RowSpacing */


	/* Procedure get_StartPosY */

/* 5334 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5340 */	NdrFcShort( 0x13 ),	/* 19 */
/* 5342 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5346 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5348 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5350 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5356 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 5358 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5360 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5362 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 5364 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5366 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EndAngle */


	/* Procedure get_StartPosY */


	/* Procedure get_EndAngle */


	/* Procedure get_StartPosZ */

/* 5370 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5376 */	NdrFcShort( 0x14 ),	/* 20 */
/* 5378 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5382 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5384 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5386 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5392 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 5394 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5396 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5398 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 5400 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5402 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SinkAngle */


	/* Procedure get_EndDepth */


	/* Procedure get_RadialSpacing */


	/* Procedure get_StartPosZ */


	/* Procedure get_EndPosX */

/* 5406 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5408 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5412 */	NdrFcShort( 0x15 ),	/* 21 */
/* 5414 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5418 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5420 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5422 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 5430 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5432 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5434 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 5436 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5438 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BottomAngle */


	/* Procedure get_Angle */


	/* Procedure get_EndPosY */


	/* Procedure get_EndPosZ */

/* 5442 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5448 */	NdrFcShort( 0x17 ),	/* 23 */
/* 5450 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5454 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5456 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5458 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 5466 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5468 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5470 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 5472 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5474 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_StartPosXAt */

/* 5478 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5480 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5484 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5486 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5490 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5492 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5494 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5500 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 5502 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5504 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 5508 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5510 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5512 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 5514 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5516 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_StartPosXAt */


	/* Procedure get_StartPosYAt */

/* 5520 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5526 */	NdrFcShort( 0x19 ),	/* 25 */
/* 5528 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5530 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5532 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5534 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5536 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5542 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */


	/* Parameter index */

/* 5544 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5546 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 5550 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5552 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5554 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5556 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5558 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_StartPosYAt */


	/* Procedure get_StartPosZAt */

/* 5562 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5564 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5568 */	NdrFcShort( 0x1a ),	/* 26 */
/* 5570 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5574 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5576 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5578 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5584 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */


	/* Parameter index */

/* 5586 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5588 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 5592 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5594 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5596 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5598 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5600 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_StartPosZAt */


	/* Procedure get_EndPosXAt */

/* 5604 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5610 */	NdrFcShort( 0x1b ),	/* 27 */
/* 5612 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5614 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5616 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5618 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5620 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5626 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */


	/* Parameter index */

/* 5628 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5630 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 5634 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5636 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5638 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5640 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5642 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EndPosXAt */


	/* Procedure get_EndPosYAt */

/* 5646 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5648 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5652 */	NdrFcShort( 0x1c ),	/* 28 */
/* 5654 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5656 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5658 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5660 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5662 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5668 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */


	/* Parameter index */

/* 5670 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5672 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 5676 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5678 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5680 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5682 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5684 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EndPosYAt */


	/* Procedure get_EndPosZAt */

/* 5688 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5694 */	NdrFcShort( 0x1d ),	/* 29 */
/* 5696 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5698 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5700 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5702 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5704 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5710 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */


	/* Parameter index */

/* 5712 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5714 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 5718 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5720 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5722 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5726 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Application */


	/* Procedure get_Application */


	/* Procedure get_Application */


	/* Procedure get_Application */

/* 5730 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5736 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5738 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5744 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5746 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5752 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */

/* 5754 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5756 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5758 */	NdrFcShort( 0x4a2 ),	/* Type Offset=1186 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 5760 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5762 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Parent */


	/* Procedure get_Parent */


	/* Procedure get_Parent */


	/* Procedure get_Parent */

/* 5766 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5768 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5772 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5774 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5778 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5780 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5782 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5788 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */

/* 5790 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5792 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5794 */	NdrFcShort( 0x4b8 ),	/* Type Offset=1208 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 5796 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5798 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SketchFeature */


	/* Procedure get_SketchFeature */


	/* Procedure get_SketchFeature */

/* 5802 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5808 */	NdrFcShort( 0xa ),	/* 10 */
/* 5810 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5816 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5818 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5824 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */

/* 5826 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5828 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5830 */	NdrFcShort( 0x4ce ),	/* Type Offset=1230 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 5832 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5834 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Item */

/* 5838 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5844 */	NdrFcShort( 0xa ),	/* 10 */
/* 5846 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5852 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5854 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5860 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 5862 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5864 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 5868 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5870 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5872 */	NdrFcShort( 0x4e4 ),	/* Type Offset=1252 */

	/* Return value */

/* 5874 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5876 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */

/* 5880 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5882 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5886 */	NdrFcShort( 0xb ),	/* 11 */
/* 5888 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5892 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5894 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5896 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5902 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppUnk */

/* 5904 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5906 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5908 */	NdrFcShort( 0x4fa ),	/* Type Offset=1274 */

	/* Return value */

/* 5910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5912 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FindByName */

/* 5916 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5922 */	NdrFcShort( 0xc ),	/* 12 */
/* 5924 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5930 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5932 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 5940 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5942 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5944 */	NdrFcShort( 0x4e4 ),	/* Type Offset=1252 */

	/* Return value */

/* 5946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5948 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Application */


	/* Procedure get_Application */


	/* Procedure get_Application */


	/* Procedure get_Application */


	/* Procedure get_Application */

/* 5952 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5958 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5960 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5964 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5966 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5968 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5974 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */

/* 5976 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5978 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5980 */	NdrFcShort( 0x510 ),	/* Type Offset=1296 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 5982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5984 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Parent */


	/* Procedure get_Parent */


	/* Procedure get_Parent */


	/* Procedure get_Parent */


	/* Procedure get_Parent */

/* 5988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5994 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5996 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6002 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6004 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */

/* 6012 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6014 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6016 */	NdrFcShort( 0x526 ),	/* Type Offset=1318 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 6018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6020 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Item */

/* 6024 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6030 */	NdrFcShort( 0xa ),	/* 10 */
/* 6032 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6034 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6038 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6040 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6046 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 6048 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6050 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 6054 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6056 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6058 */	NdrFcShort( 0x53c ),	/* Type Offset=1340 */

	/* Return value */

/* 6060 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6062 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */

/* 6066 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6068 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6072 */	NdrFcShort( 0xb ),	/* 11 */
/* 6074 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6078 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6080 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6082 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6088 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppUnk */

/* 6090 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6092 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6094 */	NdrFcShort( 0x552 ),	/* Type Offset=1362 */

	/* Return value */

/* 6096 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6098 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FindByName */

/* 6102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6108 */	NdrFcShort( 0xc ),	/* 12 */
/* 6110 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6116 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6118 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 6126 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6128 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6130 */	NdrFcShort( 0x53c ),	/* Type Offset=1340 */

	/* Return value */

/* 6132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6134 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SketchFeature */


	/* Procedure get_SketchFeature */

/* 6138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6144 */	NdrFcShort( 0xb ),	/* 11 */
/* 6146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6152 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6154 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */

/* 6162 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6164 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6166 */	NdrFcShort( 0x568 ),	/* Type Offset=1384 */

	/* Return value */


	/* Return value */

/* 6168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6170 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_StartPoint */


	/* Procedure get_CenterPoint */


	/* Procedure get_CenterPoint */

/* 6174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6180 */	NdrFcShort( 0xc ),	/* 12 */
/* 6182 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6188 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6190 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6196 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */

/* 6198 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6200 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6202 */	NdrFcShort( 0x57e ),	/* Type Offset=1406 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 6204 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6206 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Param1 */


	/* Procedure get_Y */


	/* Procedure get_Radius */

/* 6210 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6216 */	NdrFcShort( 0xd ),	/* 13 */
/* 6218 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6222 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6224 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6226 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6232 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 6234 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6236 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6238 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 6240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6242 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EndPoint */


	/* Procedure get_StartPoint */

/* 6246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6252 */	NdrFcShort( 0xd ),	/* 13 */
/* 6254 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6260 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6262 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6268 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */

/* 6270 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6272 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6274 */	NdrFcShort( 0x57e ),	/* Type Offset=1406 */

	/* Return value */


	/* Return value */

/* 6276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6278 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EndPoint */

/* 6282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6288 */	NdrFcShort( 0xe ),	/* 14 */
/* 6290 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6296 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6298 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 6306 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6308 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6310 */	NdrFcShort( 0x57e ),	/* Type Offset=1406 */

	/* Return value */

/* 6312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6314 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Area */


	/* Procedure get_Radius */


	/* Procedure get_Param2 */


	/* Procedure get_Radius */


	/* Procedure get_StartRadius */


	/* Procedure get_Radius */

/* 6318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6324 */	NdrFcShort( 0xf ),	/* 15 */
/* 6326 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6330 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6332 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6334 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 6342 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6344 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6346 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 6348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6350 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_OuterThickness */


	/* Procedure get_Distance */


	/* Procedure get_Length */


	/* Procedure get_StartAngle */

/* 6354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6360 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6362 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6366 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6368 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6370 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 6378 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6382 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 6384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EndAngle */


	/* Procedure get_Depth */


	/* Procedure get_Depth */


	/* Procedure get_StartDepth */


	/* Procedure get_AngleIncrement */


	/* Procedure get_StartAngle */


	/* Procedure get_StartAngle */


	/* Procedure get_EndAngle */

/* 6390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6396 */	NdrFcShort( 0x11 ),	/* 17 */
/* 6398 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6402 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6404 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6406 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 6414 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6418 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 6420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6422 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_X */

/* 6426 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6432 */	NdrFcShort( 0xc ),	/* 12 */
/* 6434 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6438 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6440 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6442 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 6450 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6452 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6454 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 6456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6458 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Count */


	/* Procedure get_Count */


	/* Procedure get_Count */


	/* Procedure get_Count */


	/* Procedure get_Count */

/* 6462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6468 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6470 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6474 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6476 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6478 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 6486 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 6492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6494 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Item */

/* 6498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6506 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6512 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6514 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 6522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 6528 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6530 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6532 */	NdrFcShort( 0x594 ),	/* Type Offset=1428 */

	/* Return value */

/* 6534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6536 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */

/* 6540 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6546 */	NdrFcShort( 0x9 ),	/* 9 */
/* 6548 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6554 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6556 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppUnk */

/* 6564 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6566 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6568 */	NdrFcShort( 0x4fa ),	/* Type Offset=1274 */

	/* Return value */

/* 6570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6572 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Add */

/* 6576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6582 */	NdrFcShort( 0xa ),	/* 10 */
/* 6584 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6590 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6592 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 6600 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6602 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6604 */	NdrFcShort( 0x598 ),	/* Type Offset=1432 */

	/* Return value */

/* 6606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Type */


	/* Procedure get_Type */


	/* Procedure get_Type */

/* 6612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6618 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6624 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6626 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6628 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 6636 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 6638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6640 */	NdrFcShort( 0x3e6 ),	/* Type Offset=998 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 6642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */


	/* Procedure get_Name */


	/* Procedure get_Name */

/* 6648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6656 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6662 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6664 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6666 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 6672 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6676 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 6678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Creator */

/* 6684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6690 */	NdrFcShort( 0xa ),	/* 10 */
/* 6692 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6698 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6700 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 6708 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6710 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6712 */	NdrFcShort( 0x5aa ),	/* Type Offset=1450 */

	/* Return value */

/* 6714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6716 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Close */

/* 6720 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6726 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6728 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6732 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6734 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 6736 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6742 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 6744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6746 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Create2DLine2Points */

/* 6750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6758 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 6760 */	NdrFcShort( 0x40 ),	/* 64 */
/* 6762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6764 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 6766 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6770 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 6774 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6776 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6778 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter startX */

/* 6780 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6782 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6784 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter startY */

/* 6786 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6788 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6790 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter endX */

/* 6792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6794 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6796 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter endY */

/* 6798 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6800 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 6802 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 6804 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6806 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 6808 */	NdrFcShort( 0x5c0 ),	/* Type Offset=1472 */

	/* Return value */

/* 6810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6812 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 6814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Create2DCircleCenterPoint */

/* 6816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6822 */	NdrFcShort( 0x9 ),	/* 9 */
/* 6824 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 6826 */	NdrFcShort( 0x30 ),	/* 48 */
/* 6828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6830 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 6832 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6836 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 6840 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6842 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6844 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter centerX */

/* 6846 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6848 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6850 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter centerY */

/* 6852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6854 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6856 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter radius */

/* 6858 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6860 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6862 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 6864 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6866 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 6868 */	NdrFcShort( 0x5d6 ),	/* Type Offset=1494 */

	/* Return value */

/* 6870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6872 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 6874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Create2DArc */

/* 6876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6882 */	NdrFcShort( 0xa ),	/* 10 */
/* 6884 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 6886 */	NdrFcShort( 0x50 ),	/* 80 */
/* 6888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6890 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 6892 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6896 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 6900 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6902 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6904 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter centerX */

/* 6906 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6908 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6910 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter centerY */

/* 6912 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6914 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6916 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter radius */

/* 6918 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6920 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6922 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter startAngle */

/* 6924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6926 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 6928 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter endAngle */

/* 6930 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6932 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 6934 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 6936 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6938 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 6940 */	NdrFcShort( 0x5ec ),	/* Type Offset=1516 */

	/* Return value */

/* 6942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6944 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 6946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Create2DArcCenterStartEnd */

/* 6948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6954 */	NdrFcShort( 0xb ),	/* 11 */
/* 6956 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 6958 */	NdrFcShort( 0x60 ),	/* 96 */
/* 6960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6962 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 6964 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6968 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 6972 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6974 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6976 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter centerX */

/* 6978 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6980 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6982 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter centerY */

/* 6984 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6986 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6988 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter startX */

/* 6990 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6992 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6994 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter startY */

/* 6996 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6998 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 7000 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter endX */

/* 7002 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7004 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 7006 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter endY */

/* 7008 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7010 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 7012 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 7014 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7016 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 7018 */	NdrFcShort( 0x5ec ),	/* Type Offset=1516 */

	/* Return value */

/* 7020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7022 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 7024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Create2DArc3Points */

/* 7026 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7032 */	NdrFcShort( 0xc ),	/* 12 */
/* 7034 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 7036 */	NdrFcShort( 0x60 ),	/* 96 */
/* 7038 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7040 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 7042 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7046 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 7050 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7052 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7054 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter startX */

/* 7056 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7058 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7060 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter startY */

/* 7062 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7064 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7066 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter intermediateX */

/* 7068 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7070 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7072 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter intermediateY */

/* 7074 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7076 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 7078 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter endX */

/* 7080 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7082 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 7084 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter endY */

/* 7086 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7088 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 7090 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 7092 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7094 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 7096 */	NdrFcShort( 0x5ec ),	/* Type Offset=1516 */

	/* Return value */

/* 7098 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7100 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 7102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Create2DCenterline2Points */

/* 7104 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7110 */	NdrFcShort( 0xd ),	/* 13 */
/* 7112 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 7114 */	NdrFcShort( 0x40 ),	/* 64 */
/* 7116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7118 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 7120 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7124 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7126 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 7128 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7130 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7132 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter startX */

/* 7134 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7136 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7138 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter startY */

/* 7140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7142 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7144 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter endX */

/* 7146 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7148 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7150 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter endY */

/* 7152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7154 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 7156 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 7158 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7160 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 7162 */	NdrFcShort( 0x5c0 ),	/* Type Offset=1472 */

	/* Return value */

/* 7164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7166 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 7168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateCoincidentSamePoints */

/* 7170 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7176 */	NdrFcShort( 0xe ),	/* 14 */
/* 7178 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 7180 */	NdrFcShort( 0xc ),	/* 12 */
/* 7182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7184 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 7186 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7190 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7192 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 7194 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7196 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7198 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pFirstObject */

/* 7200 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7202 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7204 */	NdrFcShort( 0x602 ),	/* Type Offset=1538 */

	/* Parameter firstType */

/* 7206 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7208 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7210 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pSecondObject */

/* 7212 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7214 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7216 */	NdrFcShort( 0x602 ),	/* Type Offset=1538 */

	/* Parameter secondType */

/* 7218 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7220 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7222 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 7224 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7226 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7228 */	NdrFcShort( 0x614 ),	/* Type Offset=1556 */

	/* Return value */

/* 7230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7232 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreatePerpendicular */

/* 7236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7242 */	NdrFcShort( 0xf ),	/* 15 */
/* 7244 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7250 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7252 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7256 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 7260 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7262 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7264 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pReferenceEdit */

/* 7266 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7268 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7270 */	NdrFcShort( 0x602 ),	/* Type Offset=1538 */

	/* Parameter pTarget */

/* 7272 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7274 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7276 */	NdrFcShort( 0x602 ),	/* Type Offset=1538 */

	/* Parameter ppVal */

/* 7278 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7280 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7282 */	NdrFcShort( 0x62a ),	/* Type Offset=1578 */

	/* Return value */

/* 7284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7286 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateParallel */

/* 7290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7296 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7298 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7304 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7306 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7310 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 7314 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7316 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7318 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pReferenceEdit */

/* 7320 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7322 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7324 */	NdrFcShort( 0x602 ),	/* Type Offset=1538 */

	/* Parameter pTarget */

/* 7326 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7328 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7330 */	NdrFcShort( 0x602 ),	/* Type Offset=1538 */

	/* Parameter ppVal */

/* 7332 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7334 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7336 */	NdrFcShort( 0x640 ),	/* Type Offset=1600 */

	/* Return value */

/* 7338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7340 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateHorizontal */

/* 7344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7350 */	NdrFcShort( 0x11 ),	/* 17 */
/* 7352 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7358 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7360 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7364 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 7368 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7370 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7372 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pTarget */

/* 7374 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7376 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7378 */	NdrFcShort( 0x602 ),	/* Type Offset=1538 */

	/* Parameter ppVal */

/* 7380 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7382 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7384 */	NdrFcShort( 0x656 ),	/* Type Offset=1622 */

	/* Return value */

/* 7386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7388 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateVertical */

/* 7392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7398 */	NdrFcShort( 0x12 ),	/* 18 */
/* 7400 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7404 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7406 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7408 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7412 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 7416 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7418 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7420 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pTarget */

/* 7422 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7424 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7426 */	NdrFcShort( 0x602 ),	/* Type Offset=1538 */

	/* Parameter ppVal */

/* 7428 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7430 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7432 */	NdrFcShort( 0x66c ),	/* Type Offset=1644 */

	/* Return value */

/* 7434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7436 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProfileSketch */


	/* Procedure get_TargetFace */


	/* Procedure get_ProfileSketch */


	/* Procedure get_Face1 */


	/* Procedure get_SelectedPlane */


	/* Procedure get_Target */


	/* Procedure get_Target */


	/* Procedure get_ReferenceEdit */


	/* Procedure get_ReferenceEdit */


	/* Procedure get_FirstObject */


	/* Procedure get_TargetFace */


	/* Procedure get_TargetFace */


	/* Procedure get_ProfileSketch */


	/* Procedure get_ProfileSketch */


	/* Procedure get_ProfileSketch */

/* 7440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7446 */	NdrFcShort( 0xc ),	/* 12 */
/* 7448 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7454 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7456 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */

/* 7464 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7466 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7468 */	NdrFcShort( 0x682 ),	/* Type Offset=1666 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 7470 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7472 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ProfileSketch */


	/* Procedure put_TargetFace */


	/* Procedure put_ProfileSketch */


	/* Procedure put_SelectedPlane */


	/* Procedure put_TargetFace */


	/* Procedure put_TargetFace */


	/* Procedure put_ProfileSketch */


	/* Procedure put_ProfileSketch */


	/* Procedure put_ProfileSketch */

/* 7476 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7482 */	NdrFcShort( 0xd ),	/* 13 */
/* 7484 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7490 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7492 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */

/* 7500 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7502 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7504 */	NdrFcShort( 0x602 ),	/* Type Offset=1538 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 7506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7508 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_GuideCurve */


	/* Procedure get_Face2 */


	/* Procedure get_SecondObject */


	/* Procedure get_GuideCurve */

/* 7512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7518 */	NdrFcShort( 0xe ),	/* 14 */
/* 7520 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7524 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7526 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7528 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7534 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */

/* 7536 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7538 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7540 */	NdrFcShort( 0x682 ),	/* Type Offset=1666 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 7542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7544 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_GuideCurve */


	/* Procedure put_GuideCurve */

/* 7548 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7554 */	NdrFcShort( 0xf ),	/* 15 */
/* 7556 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7562 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7564 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */

/* 7572 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7574 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7576 */	NdrFcShort( 0x602 ),	/* Type Offset=1538 */

	/* Return value */


	/* Return value */

/* 7578 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7580 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EndAngle */


	/* Procedure put_Depth */


	/* Procedure put_Depth */


	/* Procedure put_StartDepth */


	/* Procedure put_AngleIncrement */


	/* Procedure put_StartAngle */


	/* Procedure put_StartAngle */

/* 7584 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7590 */	NdrFcShort( 0x12 ),	/* 18 */
/* 7592 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7594 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7596 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7598 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7600 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7606 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 7608 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7610 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7612 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 7614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7616 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EndCondition */


	/* Procedure get_EndCondition */


	/* Procedure get_EndCondition */

/* 7620 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7626 */	NdrFcShort( 0x13 ),	/* 19 */
/* 7628 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7632 */	NdrFcShort( 0x22 ),	/* 34 */
/* 7634 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7636 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7642 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 7644 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 7646 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7648 */	NdrFcShort( 0x3e6 ),	/* Type Offset=998 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 7650 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7652 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EndAngle */


	/* Procedure put_EndAngle */

/* 7656 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7658 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7662 */	NdrFcShort( 0x15 ),	/* 21 */
/* 7664 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7666 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7668 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7670 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7672 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7678 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 7680 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7682 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7684 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 7686 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7688 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_StartPoint */

/* 7692 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7698 */	NdrFcShort( 0xc ),	/* 12 */
/* 7700 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7706 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7708 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7714 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 7716 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7718 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7720 */	NdrFcShort( 0x686 ),	/* Type Offset=1670 */

	/* Return value */

/* 7722 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7724 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EndPoint */

/* 7728 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7730 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7734 */	NdrFcShort( 0xd ),	/* 13 */
/* 7736 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7740 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7742 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7744 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 7752 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7754 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7756 */	NdrFcShort( 0x686 ),	/* Type Offset=1670 */

	/* Return value */

/* 7758 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7760 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TargetFaces */


	/* Procedure get_TargetFaces */


	/* Procedure get_TargetFaces */


	/* Procedure get_References */


	/* Procedure get_TargetFeatures */


	/* Procedure get_TargetFeatures */

/* 7764 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7770 */	NdrFcShort( 0xc ),	/* 12 */
/* 7772 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7776 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7778 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7780 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7786 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */

/* 7788 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7790 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7792 */	NdrFcShort( 0x69c ),	/* Type Offset=1692 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 7794 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7796 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TargetFaces */


	/* Procedure put_TargetFaces */


	/* Procedure put_TargetFaces */


	/* Procedure put_TargetFeatures */


	/* Procedure put_TargetFeatures */

/* 7800 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7802 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7806 */	NdrFcShort( 0xd ),	/* 13 */
/* 7808 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7812 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7814 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7816 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7822 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */

/* 7824 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7826 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7828 */	NdrFcShort( 0x6a0 ),	/* Type Offset=1696 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 7830 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7832 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ColumnDirection */

/* 7836 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7842 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7844 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7848 */	NdrFcShort( 0x74 ),	/* 116 */
/* 7850 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 7852 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7858 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x */

/* 7860 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7862 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7864 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter y */

/* 7866 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7868 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7870 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter z */

/* 7872 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7874 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7876 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 7878 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7880 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSize */


	/* Procedure get_ColumnNumber */

/* 7884 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7890 */	NdrFcShort( 0x11 ),	/* 17 */
/* 7892 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7896 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7898 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7900 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7906 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 7908 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7910 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 7914 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7916 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ColumnNumber */

/* 7920 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7926 */	NdrFcShort( 0x12 ),	/* 18 */
/* 7928 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7930 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7934 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7936 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7942 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 7944 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7946 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7950 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7952 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_SinkRadius */


	/* Procedure put_EndRadius */


	/* Procedure put_RowSpacing */

/* 7956 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7962 */	NdrFcShort( 0x14 ),	/* 20 */
/* 7964 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7966 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7968 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7970 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7972 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 7980 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7982 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7984 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 7986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7988 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_YDirection */


	/* Procedure get_RowDirection */

/* 7992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7998 */	NdrFcShort( 0x15 ),	/* 21 */
/* 8000 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8004 */	NdrFcShort( 0x74 ),	/* 116 */
/* 8006 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 8008 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter yx */


	/* Parameter x */

/* 8016 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8020 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter yy */


	/* Parameter y */

/* 8022 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8024 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8026 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter yz */


	/* Parameter z */

/* 8028 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8030 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8032 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 8034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8036 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RowNumber */

/* 8040 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8046 */	NdrFcShort( 0x16 ),	/* 22 */
/* 8048 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8052 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8054 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8056 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8064 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8066 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8072 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RowNumber */

/* 8076 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8082 */	NdrFcShort( 0x17 ),	/* 23 */
/* 8084 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8088 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8090 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8092 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8100 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8102 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8108 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PutYDirection */


	/* Procedure PutColumnDirection */

/* 8112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8118 */	NdrFcShort( 0x18 ),	/* 24 */
/* 8120 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 8122 */	NdrFcShort( 0x30 ),	/* 48 */
/* 8124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8126 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 8128 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter yx */


	/* Parameter x */

/* 8136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8138 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8140 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter yy */


	/* Parameter y */

/* 8142 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8144 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8146 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter yz */


	/* Parameter z */

/* 8148 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8150 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8152 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 8154 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8156 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PutCenterPoint */


	/* Procedure PutCenterPoint */


	/* Procedure PutRowDirection */

/* 8160 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8166 */	NdrFcShort( 0x19 ),	/* 25 */
/* 8168 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 8170 */	NdrFcShort( 0x30 ),	/* 48 */
/* 8172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8174 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 8176 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8182 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cx */


	/* Parameter cx */


	/* Parameter x */

/* 8184 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8186 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8188 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter cy */


	/* Parameter cy */


	/* Parameter y */

/* 8190 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8194 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter cz */


	/* Parameter cz */


	/* Parameter z */

/* 8196 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8198 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8200 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 8202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8204 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ChamferType */

/* 8208 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8214 */	NdrFcShort( 0xc ),	/* 12 */
/* 8216 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8220 */	NdrFcShort( 0x22 ),	/* 34 */
/* 8222 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8224 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8232 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 8234 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8236 */	NdrFcShort( 0x3e6 ),	/* Type Offset=998 */

	/* Return value */

/* 8238 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8240 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SelectedEdges */

/* 8244 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8250 */	NdrFcShort( 0xd ),	/* 13 */
/* 8252 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8256 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8258 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8260 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8266 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 8268 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8270 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8272 */	NdrFcShort( 0x69c ),	/* Type Offset=1692 */

	/* Return value */

/* 8274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8276 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_SelectedEdges */

/* 8280 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8286 */	NdrFcShort( 0xe ),	/* 14 */
/* 8288 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8294 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8296 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 8304 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8306 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8308 */	NdrFcShort( 0x6a0 ),	/* Type Offset=1696 */

	/* Return value */

/* 8310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8312 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ReferenceGeometry */


	/* Procedure get_ReferenceGeometry */


	/* Procedure get_SelectedFace */

/* 8316 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8322 */	NdrFcShort( 0xf ),	/* 15 */
/* 8324 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8330 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8332 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */

/* 8340 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8342 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8344 */	NdrFcShort( 0x682 ),	/* Type Offset=1666 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 8346 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8348 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_OuterThickness */


	/* Procedure put_Distance */


	/* Procedure put_Length */

/* 8352 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8358 */	NdrFcShort( 0x11 ),	/* 17 */
/* 8360 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8362 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8366 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8368 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8374 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 8376 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8378 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8380 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 8382 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8384 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EndPosZ */

/* 8388 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8394 */	NdrFcShort( 0x18 ),	/* 24 */
/* 8396 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8400 */	NdrFcShort( 0x2c ),	/* 44 */
/* 8402 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8404 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8410 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8412 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8414 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8416 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 8418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8420 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EndPosZAt */

/* 8424 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8430 */	NdrFcShort( 0x1e ),	/* 30 */
/* 8432 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8436 */	NdrFcShort( 0x2c ),	/* 44 */
/* 8438 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 8440 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8446 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 8448 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8450 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 8454 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8456 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8458 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 8460 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8462 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CenterAxis */

/* 8466 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8468 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8472 */	NdrFcShort( 0xe ),	/* 14 */
/* 8474 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 8476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8478 */	NdrFcShort( 0xe0 ),	/* 224 */
/* 8480 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 8482 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8488 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 8490 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8492 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8494 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 8496 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8498 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8500 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter z1 */

/* 8502 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8504 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8506 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 8508 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8510 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8512 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 8514 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8516 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8518 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter z2 */

/* 8520 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8522 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8524 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 8526 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8528 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AngleNumber */

/* 8532 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8538 */	NdrFcShort( 0xf ),	/* 15 */
/* 8540 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8544 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8546 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8548 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8556 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8558 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8564 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AngleNumber */

/* 8568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8574 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8576 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8578 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8582 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8584 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8590 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8592 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8594 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8598 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8600 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RadialNumber */

/* 8604 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8610 */	NdrFcShort( 0x13 ),	/* 19 */
/* 8612 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8616 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8618 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8620 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8626 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8628 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8630 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8636 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RadialNumber */

/* 8640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8646 */	NdrFcShort( 0x14 ),	/* 20 */
/* 8648 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8654 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8656 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8662 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8664 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8666 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8670 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8672 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_SinkAngle */


	/* Procedure put_EndDepth */


	/* Procedure put_RadialSpacing */

/* 8676 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8682 */	NdrFcShort( 0x16 ),	/* 22 */
/* 8684 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8686 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8690 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8692 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 8700 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8702 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8704 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 8706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8708 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsRadialAnignment */

/* 8712 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8718 */	NdrFcShort( 0x17 ),	/* 23 */
/* 8720 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8724 */	NdrFcShort( 0x22 ),	/* 34 */
/* 8726 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8728 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8734 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8736 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8738 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8740 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 8742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8744 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_IsRadialAnignment */

/* 8748 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8754 */	NdrFcShort( 0x18 ),	/* 24 */
/* 8756 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8758 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8762 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8764 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8772 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8774 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8776 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 8778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8780 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PutRevolveAxis */


	/* Procedure PutCenterAxis */

/* 8784 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8790 */	NdrFcShort( 0x19 ),	/* 25 */
/* 8792 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 8794 */	NdrFcShort( 0x60 ),	/* 96 */
/* 8796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8798 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 8800 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter orgX */


	/* Parameter x1 */

/* 8808 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8810 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8812 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter orgY */


	/* Parameter y1 */

/* 8814 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8816 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8818 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter orgZ */


	/* Parameter z1 */

/* 8820 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8822 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8824 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dirX */


	/* Parameter x2 */

/* 8826 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8828 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8830 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dirY */


	/* Parameter y2 */

/* 8832 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8834 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 8836 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dirZ */


	/* Parameter z2 */

/* 8838 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8840 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 8842 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 8844 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8846 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 8848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ZDirection */


	/* Procedure get_CenterPoint */


	/* Procedure get_CenterPoint */


	/* Procedure get_CenterPoint */

/* 8850 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8852 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8856 */	NdrFcShort( 0xe ),	/* 14 */
/* 8858 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8862 */	NdrFcShort( 0x74 ),	/* 116 */
/* 8864 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 8866 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8872 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter zx */


	/* Parameter cx */


	/* Parameter cx */


	/* Parameter cx */

/* 8874 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8876 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8878 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter zy */


	/* Parameter cy */


	/* Parameter cy */


	/* Parameter cy */

/* 8880 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8882 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8884 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter zz */


	/* Parameter cz */


	/* Parameter cz */


	/* Parameter cz */

/* 8886 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8888 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8890 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 8892 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8894 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Radius */


	/* Procedure put_Radius */


	/* Procedure put_StartRadius */

/* 8898 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8900 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8904 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8906 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8908 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8910 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8912 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8914 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8920 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 8922 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8924 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8926 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 8928 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8930 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_BottomAngle */


	/* Procedure put_Angle */

/* 8934 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8936 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8940 */	NdrFcShort( 0x18 ),	/* 24 */
/* 8942 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8944 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8946 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8948 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8950 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8956 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 8958 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8960 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8962 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 8964 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8966 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FirstType */

/* 8970 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8972 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8976 */	NdrFcShort( 0xd ),	/* 13 */
/* 8978 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8982 */	NdrFcShort( 0x22 ),	/* 34 */
/* 8984 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8986 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8992 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8994 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 8996 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8998 */	NdrFcShort( 0x3e6 ),	/* Type Offset=998 */

	/* Return value */

/* 9000 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9002 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SecondType */

/* 9006 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9008 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9012 */	NdrFcShort( 0xf ),	/* 15 */
/* 9014 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9018 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9020 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9022 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9028 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9030 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 9032 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9034 */	NdrFcShort( 0x3e6 ),	/* Type Offset=998 */

	/* Return value */

/* 9036 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9038 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9040 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ConstrainedGeometry */


	/* Procedure get_ConstrainedGeometry */


	/* Procedure get_Target */


	/* Procedure get_Target */

/* 9042 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9044 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9048 */	NdrFcShort( 0xd ),	/* 13 */
/* 9050 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9054 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9056 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9058 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9064 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */

/* 9066 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9068 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9070 */	NdrFcShort( 0x682 ),	/* Type Offset=1666 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 9072 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9074 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsFree */

/* 9078 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9080 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9084 */	NdrFcShort( 0x12 ),	/* 18 */
/* 9086 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9090 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9092 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9094 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9102 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9104 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9106 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 9108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9110 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Origin */

/* 9114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9120 */	NdrFcShort( 0x13 ),	/* 19 */
/* 9122 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9126 */	NdrFcShort( 0x74 ),	/* 116 */
/* 9128 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 9130 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ox */

/* 9138 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9140 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9142 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter oy */

/* 9144 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9146 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9148 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter oz */

/* 9150 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9152 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9154 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 9156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9158 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_XDirection */

/* 9162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9168 */	NdrFcShort( 0x14 ),	/* 20 */
/* 9170 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9174 */	NdrFcShort( 0x74 ),	/* 116 */
/* 9176 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 9178 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter xx */

/* 9186 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9188 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9190 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xy */

/* 9192 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9194 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9196 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xz */

/* 9198 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9200 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9202 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 9204 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9206 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PutOrigin */

/* 9210 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9216 */	NdrFcShort( 0x16 ),	/* 22 */
/* 9218 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 9220 */	NdrFcShort( 0x30 ),	/* 48 */
/* 9222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9224 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 9226 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9232 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ox */

/* 9234 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9236 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9238 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter oy */

/* 9240 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9242 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9244 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter oz */

/* 9246 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9248 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9250 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 9252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9254 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 9256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PutXDirection */

/* 9258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9264 */	NdrFcShort( 0x17 ),	/* 23 */
/* 9266 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 9268 */	NdrFcShort( 0x30 ),	/* 48 */
/* 9270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9272 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 9274 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter xx */

/* 9282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9286 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xy */

/* 9288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9290 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9292 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xz */

/* 9294 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9296 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9298 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 9300 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9302 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 9304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsCut */

/* 9306 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9312 */	NdrFcShort( 0xd ),	/* 13 */
/* 9314 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9318 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9320 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9322 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9330 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9332 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9334 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 9336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9338 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PutCenterPoint */

/* 9342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9348 */	NdrFcShort( 0x13 ),	/* 19 */
/* 9350 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 9352 */	NdrFcShort( 0x30 ),	/* 48 */
/* 9354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9356 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 9358 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cx */

/* 9366 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9370 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter cy */

/* 9372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9374 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9376 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter cz */

/* 9378 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9380 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9382 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 9384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9386 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 9388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsFlip */

/* 9390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9396 */	NdrFcShort( 0x14 ),	/* 20 */
/* 9398 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9402 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9404 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9406 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9414 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9418 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 9420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9422 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_IsFlip */

/* 9426 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9432 */	NdrFcShort( 0x15 ),	/* 21 */
/* 9434 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9436 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9440 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9442 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9450 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9452 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9454 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 9456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9458 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_IsCut */

/* 9462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9468 */	NdrFcShort( 0x17 ),	/* 23 */
/* 9470 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9472 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9476 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9478 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9486 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9490 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 9492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9494 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RevolveAxis */

/* 9498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9504 */	NdrFcShort( 0x18 ),	/* 24 */
/* 9506 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 9508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9510 */	NdrFcShort( 0xe0 ),	/* 224 */
/* 9512 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 9514 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter orgX */

/* 9522 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9526 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter orgY */

/* 9528 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9530 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9532 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter orgZ */

/* 9534 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9536 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9538 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dirX */

/* 9540 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9542 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9544 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dirY */

/* 9546 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9548 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9550 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dirZ */

/* 9552 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9554 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9556 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 9558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9560 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 9562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PullingDirection */

/* 9564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9570 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9572 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 9574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9576 */	NdrFcShort( 0xe0 ),	/* 224 */
/* 9578 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 9580 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter orgX */

/* 9588 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9590 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9592 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter orgY */

/* 9594 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9596 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9598 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter orgZ */

/* 9600 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9602 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9604 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dirX */

/* 9606 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9608 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9610 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dirY */

/* 9612 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9614 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9616 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dirZ */

/* 9618 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9620 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9622 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 9624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9626 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 9628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PutPullingDirection */

/* 9630 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9636 */	NdrFcShort( 0x11 ),	/* 17 */
/* 9638 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 9640 */	NdrFcShort( 0x60 ),	/* 96 */
/* 9642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9644 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 9646 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9652 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter orgX */

/* 9654 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9656 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9658 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter orgY */

/* 9660 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9662 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9664 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter orgZ */

/* 9666 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9668 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9670 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dirX */

/* 9672 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9674 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 9676 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dirY */

/* 9678 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9680 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 9682 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dirZ */

/* 9684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9686 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 9688 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 9690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9692 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 9694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */


	/* Procedure get_FilePath */

/* 9696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9702 */	NdrFcShort( 0xc ),	/* 12 */
/* 9704 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9710 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9712 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9714 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 9720 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9722 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9724 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Return value */


	/* Return value */

/* 9726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9728 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Faces */

/* 9732 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9738 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9740 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9744 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9746 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9748 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 9756 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9758 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9760 */	NdrFcShort( 0x6b2 ),	/* Type Offset=1714 */

	/* Return value */

/* 9762 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9764 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Edges */

/* 9768 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9770 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9776 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9782 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9784 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9790 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 9792 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9794 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9796 */	NdrFcShort( 0x6c8 ),	/* Type Offset=1736 */

	/* Return value */

/* 9798 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9800 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Vertices */

/* 9804 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9810 */	NdrFcShort( 0x9 ),	/* 9 */
/* 9812 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9816 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9818 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9820 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 9828 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9830 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9832 */	NdrFcShort( 0x6de ),	/* Type Offset=1758 */

	/* Return value */

/* 9834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9836 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Item */

/* 9840 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9848 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9854 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 9856 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 9864 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9866 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 9870 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9872 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9874 */	NdrFcShort( 0x6f4 ),	/* Type Offset=1780 */

	/* Return value */

/* 9876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9878 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */


	/* Procedure get__NewEnum */


	/* Procedure get__NewEnum */

/* 9882 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9888 */	NdrFcShort( 0x9 ),	/* 9 */
/* 9890 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9894 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9896 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9898 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9904 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppUnk */


	/* Parameter ppUnk */


	/* Parameter ppUnk */

/* 9906 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9908 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9910 */	NdrFcShort( 0x552 ),	/* Type Offset=1362 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 9912 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9914 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Item */

/* 9918 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9920 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9926 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9930 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9932 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 9934 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9940 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 9942 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9944 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 9948 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9950 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9952 */	NdrFcShort( 0x70a ),	/* Type Offset=1802 */

	/* Return value */

/* 9954 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9956 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Edges */

/* 9960 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9962 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9966 */	NdrFcShort( 0x9 ),	/* 9 */
/* 9968 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9972 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9974 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9976 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9982 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 9984 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9986 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9988 */	NdrFcShort( 0x6c8 ),	/* Type Offset=1736 */

	/* Return value */

/* 9990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9992 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Vertices */

/* 9996 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10002 */	NdrFcShort( 0xa ),	/* 10 */
/* 10004 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10010 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10012 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10018 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 10020 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10022 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10024 */	NdrFcShort( 0x6de ),	/* Type Offset=1758 */

	/* Return value */

/* 10026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10028 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Centroid */

/* 10032 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10038 */	NdrFcShort( 0xb ),	/* 11 */
/* 10040 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10044 */	NdrFcShort( 0x74 ),	/* 116 */
/* 10046 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 10048 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10054 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cx */

/* 10056 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10058 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10060 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter cy */

/* 10062 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10064 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10066 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter cz */

/* 10068 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10070 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10072 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10076 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_XDirection */

/* 10080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10086 */	NdrFcShort( 0xc ),	/* 12 */
/* 10088 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10092 */	NdrFcShort( 0x74 ),	/* 116 */
/* 10094 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 10096 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter xx */

/* 10104 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10106 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10108 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xy */

/* 10110 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10112 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10114 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xz */

/* 10116 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10118 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10120 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10124 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_YDirection */

/* 10128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10134 */	NdrFcShort( 0xd ),	/* 13 */
/* 10136 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10140 */	NdrFcShort( 0x74 ),	/* 116 */
/* 10142 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 10144 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter yx */

/* 10152 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10154 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10156 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter yy */

/* 10158 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10160 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10162 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter yz */

/* 10164 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10166 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10168 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10172 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_StartPoint */

/* 10176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10182 */	NdrFcShort( 0x9 ),	/* 9 */
/* 10184 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10190 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10192 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 10200 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10202 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10204 */	NdrFcShort( 0x720 ),	/* Type Offset=1824 */

	/* Return value */

/* 10206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10208 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EndPoint */

/* 10212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10218 */	NdrFcShort( 0xa ),	/* 10 */
/* 10220 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10226 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10228 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10234 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 10236 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10238 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10240 */	NdrFcShort( 0x720 ),	/* Type Offset=1824 */

	/* Return value */

/* 10242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10244 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Item */

/* 10248 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10254 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10256 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10262 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 10264 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 10272 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10274 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 10278 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10280 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10282 */	NdrFcShort( 0x720 ),	/* Type Offset=1824 */

	/* Return value */

/* 10284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10286 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */

/* 10290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10296 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10298 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10304 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10306 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10308 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10314 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10316 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10318 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Return value */

/* 10320 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10322 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Coordinates */

/* 10326 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10334 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10338 */	NdrFcShort( 0x74 ),	/* 116 */
/* 10340 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 10342 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x */

/* 10350 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10352 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10354 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter y */

/* 10356 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10358 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10360 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter z */

/* 10362 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10364 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10366 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10368 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10370 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Y */


	/* Procedure get_X */

/* 10374 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10380 */	NdrFcShort( 0x9 ),	/* 9 */
/* 10382 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10386 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10388 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10390 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10396 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter x */

/* 10398 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10400 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10402 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 10404 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10406 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Y */

/* 10410 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10412 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10416 */	NdrFcShort( 0xa ),	/* 10 */
/* 10418 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10422 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10424 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10426 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10432 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter y */

/* 10434 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10436 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10438 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10440 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10442 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Z */


	/* Procedure get_Z */

/* 10446 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10448 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10452 */	NdrFcShort( 0xb ),	/* 11 */
/* 10454 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10458 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10460 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10462 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10468 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter z */

/* 10470 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10472 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10474 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 10476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10478 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_X */

/* 10482 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10488 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10490 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10494 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10496 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10498 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10504 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10506 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10508 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10510 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10514 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_X */

/* 10518 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10524 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10526 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10528 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10530 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10532 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10534 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10542 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10544 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10546 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10550 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Y */

/* 10554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10560 */	NdrFcShort( 0xa ),	/* 10 */
/* 10562 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10564 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10568 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10570 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10576 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10578 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10580 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10582 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10586 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Z */

/* 10590 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10596 */	NdrFcShort( 0xc ),	/* 12 */
/* 10598 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10600 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10604 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10606 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10612 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10614 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10616 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10618 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10620 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10622 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Location */

/* 10626 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10632 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10634 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10640 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10642 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10648 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10650 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10652 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10654 */	NdrFcShort( 0x736 ),	/* Type Offset=1846 */

	/* Return value */

/* 10656 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10658 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Location */

/* 10662 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10664 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10668 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10670 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10674 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10676 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10678 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10684 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10686 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10688 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10690 */	NdrFcShort( 0x73a ),	/* Type Offset=1850 */

	/* Return value */

/* 10692 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10694 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Direction */

/* 10698 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10704 */	NdrFcShort( 0x9 ),	/* 9 */
/* 10706 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10712 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10714 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10722 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10724 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10726 */	NdrFcShort( 0x736 ),	/* Type Offset=1846 */

	/* Return value */

/* 10728 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10730 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Direction */

/* 10734 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10740 */	NdrFcShort( 0xa ),	/* 10 */
/* 10742 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10746 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10748 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10750 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10756 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10758 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10760 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10762 */	NdrFcShort( 0x73a ),	/* Type Offset=1850 */

	/* Return value */

/* 10764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10766 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Assem */

/* 10770 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10776 */	NdrFcShort( 0x11 ),	/* 17 */
/* 10778 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10782 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10784 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10786 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10794 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10796 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10798 */	NdrFcShort( 0x74c ),	/* Type Offset=1868 */

	/* Return value */

/* 10800 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10802 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure test */

/* 10806 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10812 */	NdrFcShort( 0x13 ),	/* 19 */
/* 10814 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10818 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10820 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 10822 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10828 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 10830 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10832 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure set_Name */

/* 10836 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10842 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10844 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10850 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10852 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10856 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10858 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10860 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10862 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10864 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 10866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10868 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure set_ParentName */

/* 10872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10878 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10880 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10886 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10888 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10892 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10896 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10898 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10900 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 10902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10904 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPart */

/* 10908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10914 */	NdrFcShort( 0xb ),	/* 11 */
/* 10916 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10922 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 10924 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10930 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter i */

/* 10932 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10934 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 10938 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10940 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10942 */	NdrFcShort( 0x762 ),	/* Type Offset=1890 */

	/* Return value */

/* 10944 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10946 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetComponent */

/* 10950 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10952 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10956 */	NdrFcShort( 0xc ),	/* 12 */
/* 10958 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10962 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10964 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 10966 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10972 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter i */

/* 10974 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10976 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 10980 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10982 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10984 */	NdrFcShort( 0x778 ),	/* Type Offset=1912 */

	/* Return value */

/* 10986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10988 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsComponent */

/* 10992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10998 */	NdrFcShort( 0xd ),	/* 13 */
/* 11000 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11002 */	NdrFcShort( 0x22 ),	/* 34 */
/* 11004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11006 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11008 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter i */

/* 11016 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 11022 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 11024 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11026 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 11028 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11030 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsPart */

/* 11034 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11040 */	NdrFcShort( 0xe ),	/* 14 */
/* 11042 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11044 */	NdrFcShort( 0x22 ),	/* 34 */
/* 11046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11048 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11050 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11056 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter i */

/* 11058 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11060 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 11064 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 11066 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11068 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 11070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11072 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddPart */

/* 11076 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11082 */	NdrFcShort( 0xf ),	/* 15 */
/* 11084 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11088 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11090 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11092 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 11100 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11102 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11104 */	NdrFcShort( 0x766 ),	/* Type Offset=1894 */

	/* Return value */

/* 11106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11108 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddComponent */

/* 11112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11118 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11120 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11126 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11128 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 11136 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11138 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11140 */	NdrFcShort( 0x77c ),	/* Type Offset=1916 */

	/* Return value */

/* 11142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11144 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPlacement */

/* 11148 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11154 */	NdrFcShort( 0x12 ),	/* 18 */
/* 11156 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 11158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11160 */	NdrFcShort( 0x14c ),	/* 332 */
/* 11162 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xa,		/* 10 */
/* 11164 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ox */

/* 11172 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11174 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11176 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter oy */

/* 11178 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11180 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11182 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter oz */

/* 11184 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11186 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11188 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xx */

/* 11190 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11192 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11194 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xy */

/* 11196 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11198 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11200 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xz */

/* 11202 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11204 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 11206 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter yx */

/* 11208 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11210 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 11212 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter yy */

/* 11214 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11216 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 11218 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter yz */

/* 11220 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11222 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 11224 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 11226 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11228 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 11230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPlacement */

/* 11232 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11238 */	NdrFcShort( 0x13 ),	/* 19 */
/* 11240 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 11242 */	NdrFcShort( 0x90 ),	/* 144 */
/* 11244 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11246 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xa,		/* 10 */
/* 11248 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11254 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ox */

/* 11256 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11258 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11260 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter oy */

/* 11262 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11264 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11266 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter oz */

/* 11268 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11270 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11272 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter zx */

/* 11274 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11276 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 11278 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter zy */

/* 11280 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11282 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 11284 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter zz */

/* 11286 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11288 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 11290 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xx */

/* 11292 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11294 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 11296 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xy */

/* 11298 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11300 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 11302 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xz */

/* 11304 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11306 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 11308 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 11310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11312 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 11314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SaveAsMesh */

/* 11316 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11322 */	NdrFcShort( 0x14 ),	/* 20 */
/* 11324 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11330 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11332 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11336 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter i */

/* 11340 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11342 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 11346 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11348 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11350 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 11352 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11354 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreatePart */

/* 11358 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11360 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11364 */	NdrFcShort( 0x15 ),	/* 21 */
/* 11366 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11370 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11372 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11374 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11378 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11380 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 11382 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11384 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11386 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter ppVal */

/* 11388 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11390 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11392 */	NdrFcShort( 0x762 ),	/* Type Offset=1890 */

	/* Return value */

/* 11394 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11396 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ImportPartFromXML */

/* 11400 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11406 */	NdrFcShort( 0x16 ),	/* 22 */
/* 11408 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11412 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11414 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11416 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11420 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11422 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 11424 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11426 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11428 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pVal */

/* 11430 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11432 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11434 */	NdrFcShort( 0x766 ),	/* Type Offset=1894 */

	/* Parameter ppVal */

/* 11436 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11438 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11440 */	NdrFcShort( 0x762 ),	/* Type Offset=1890 */

	/* Return value */

/* 11442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11444 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPartPlacement */

/* 11448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11454 */	NdrFcShort( 0x17 ),	/* 23 */
/* 11456 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 11458 */	NdrFcShort( 0x90 ),	/* 144 */
/* 11460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11462 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 11464 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 11472 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11474 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11476 */	NdrFcShort( 0x766 ),	/* Type Offset=1894 */

	/* Parameter ox */

/* 11478 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11480 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11482 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter oy */

/* 11484 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11486 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11488 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter oz */

/* 11490 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11492 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 11494 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter zx */

/* 11496 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11498 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 11500 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter zy */

/* 11502 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11504 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 11506 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter zz */

/* 11508 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11510 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 11512 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xx */

/* 11514 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11516 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 11518 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xy */

/* 11520 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11522 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 11524 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter xz */

/* 11526 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11528 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 11530 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 11532 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11534 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 11536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreatePart */

/* 11538 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11544 */	NdrFcShort( 0x7 ),	/* 7 */
/* 11546 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11550 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11552 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11554 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11560 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 11562 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11564 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11566 */	NdrFcShort( 0x762 ),	/* Type Offset=1890 */

	/* Return value */

/* 11568 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11570 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateComponent */

/* 11574 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11582 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11588 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11590 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 11598 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11600 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11602 */	NdrFcShort( 0x778 ),	/* Type Offset=1912 */

	/* Return value */

/* 11604 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11606 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddComponent */

/* 11610 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11616 */	NdrFcShort( 0x9 ),	/* 9 */
/* 11618 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11624 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11626 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11632 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 11634 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11636 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11638 */	NdrFcShort( 0x77c ),	/* Type Offset=1916 */

	/* Return value */

/* 11640 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11642 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetComponent */

/* 11646 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11648 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11652 */	NdrFcShort( 0xa ),	/* 10 */
/* 11654 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11656 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11658 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11660 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 11662 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11668 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 11670 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11672 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 11676 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11678 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11680 */	NdrFcShort( 0x778 ),	/* Type Offset=1912 */

	/* Return value */

/* 11682 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11684 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSize */

/* 11688 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11694 */	NdrFcShort( 0xb ),	/* 11 */
/* 11696 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11700 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11702 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11704 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11710 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 11712 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11714 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11718 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11720 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Constraints */

/* 11724 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11730 */	NdrFcShort( 0xd ),	/* 13 */
/* 11732 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11736 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11738 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11740 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11746 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 11748 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11750 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11752 */	NdrFcShort( 0x792 ),	/* Type Offset=1938 */

	/* Return value */

/* 11754 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11756 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Constraint */

/* 11760 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11766 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11768 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11772 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11774 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 11776 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11782 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 11784 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11786 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 11790 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11792 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11794 */	NdrFcShort( 0x7a8 ),	/* Type Offset=1960 */

	/* Return value */

/* 11796 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11798 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SelectConstraintByName */

/* 11802 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11808 */	NdrFcShort( 0x9 ),	/* 9 */
/* 11810 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11816 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11818 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11822 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11824 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 11826 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11828 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11830 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter ppVal */

/* 11832 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11834 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11836 */	NdrFcShort( 0x7a8 ),	/* Type Offset=1960 */

	/* Return value */

/* 11838 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11840 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewAssemblyCoaxialConstraint */

/* 11844 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11846 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11850 */	NdrFcShort( 0xa ),	/* 10 */
/* 11852 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 11854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11856 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11858 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 11860 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11864 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11866 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 11868 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11870 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11872 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pConstrainedPart */

/* 11874 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11876 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11878 */	NdrFcShort( 0x766 ),	/* Type Offset=1894 */

	/* Parameter pConstrainedGeometry */

/* 11880 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11882 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11884 */	NdrFcShort( 0x598 ),	/* Type Offset=1432 */

	/* Parameter pReferencePart */

/* 11886 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11888 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11890 */	NdrFcShort( 0x766 ),	/* Type Offset=1894 */

	/* Parameter pReferenceGeometry */

/* 11892 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11894 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11896 */	NdrFcShort( 0x598 ),	/* Type Offset=1432 */

	/* Parameter ppVal */

/* 11898 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11900 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 11902 */	NdrFcShort( 0x7be ),	/* Type Offset=1982 */

	/* Return value */

/* 11904 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11906 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 11908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNewAssemblyIncidenceConstraint */

/* 11910 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11916 */	NdrFcShort( 0xb ),	/* 11 */
/* 11918 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 11920 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11924 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 11926 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11930 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11932 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 11934 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11936 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11938 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pConstrainedPart */

/* 11940 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11942 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11944 */	NdrFcShort( 0x766 ),	/* Type Offset=1894 */

	/* Parameter pConstrainedGeometry */

/* 11946 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11948 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11950 */	NdrFcShort( 0x598 ),	/* Type Offset=1432 */

	/* Parameter pReferencePart */

/* 11952 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11954 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11956 */	NdrFcShort( 0x766 ),	/* Type Offset=1894 */

	/* Parameter pReferenceGeometry */

/* 11958 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11960 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11962 */	NdrFcShort( 0x598 ),	/* Type Offset=1432 */

	/* Parameter incidenceType */

/* 11964 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11966 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 11968 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppVal */

/* 11970 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11972 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 11974 */	NdrFcShort( 0x7d4 ),	/* Type Offset=2004 */

	/* Return value */

/* 11976 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11978 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 11980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ConstrainedPart */

/* 11982 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11988 */	NdrFcShort( 0xc ),	/* 12 */
/* 11990 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11994 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11996 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11998 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12004 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 12006 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12008 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12010 */	NdrFcShort( 0x762 ),	/* Type Offset=1890 */

	/* Return value */

/* 12012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12014 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ReferencePart */


	/* Procedure get_ReferencePart */

/* 12018 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12024 */	NdrFcShort( 0xe ),	/* 14 */
/* 12026 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12032 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12034 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12040 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */

/* 12042 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12044 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12046 */	NdrFcShort( 0x7ea ),	/* Type Offset=2026 */

	/* Return value */


	/* Return value */

/* 12048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12050 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ConstrainedPart */

/* 12054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12060 */	NdrFcShort( 0xc ),	/* 12 */
/* 12062 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12066 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12068 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12070 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12076 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 12078 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12080 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12082 */	NdrFcShort( 0x7ea ),	/* Type Offset=2026 */

	/* Return value */

/* 12084 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12086 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const TransCAD_MIDL_TYPE_FORMAT_STRING TransCAD__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 12 */	NdrFcLong( 0x19487fb9 ),	/* 424181689 */
/* 16 */	NdrFcShort( 0x54f2 ),	/* 21746 */
/* 18 */	NdrFcShort( 0x49a6 ),	/* 18854 */
/* 20 */	0x9d,		/* 157 */
			0xae,		/* 174 */
/* 22 */	0xfd,		/* 253 */
			0x9a,		/* 154 */
/* 24 */	0xdd,		/* 221 */
			0xd1,		/* 209 */
/* 26 */	0x2a,		/* 42 */
			0x76,		/* 118 */
/* 28 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 30 */	NdrFcShort( 0x2 ),	/* Offset= 2 (32) */
/* 32 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 34 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0x0 ),	/* 0 */
/* 42 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 44 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 46 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 48 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 50 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 52 */	NdrFcShort( 0x2 ),	/* Offset= 2 (54) */
/* 54 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 56 */	NdrFcLong( 0xbc5f8ab3 ),	/* -1134589261 */
/* 60 */	NdrFcShort( 0x439 ),	/* 1081 */
/* 62 */	NdrFcShort( 0x4f12 ),	/* 20242 */
/* 64 */	0xaf,		/* 175 */
			0x8,		/* 8 */
/* 66 */	0x8f,		/* 143 */
			0x7d,		/* 125 */
/* 68 */	0x74,		/* 116 */
			0x92,		/* 146 */
/* 70 */	0x89,		/* 137 */
			0x40,		/* 64 */
/* 72 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 74 */	NdrFcShort( 0x2 ),	/* Offset= 2 (76) */
/* 76 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 78 */	NdrFcLong( 0xc12fb0da ),	/* -1053839142 */
/* 82 */	NdrFcShort( 0x8bb2 ),	/* -29774 */
/* 84 */	NdrFcShort( 0x4cf4 ),	/* 19700 */
/* 86 */	0xbc,		/* 188 */
			0x4f,		/* 79 */
/* 88 */	0x7d,		/* 125 */
			0x53,		/* 83 */
/* 90 */	0x8b,		/* 139 */
			0xa3,		/* 163 */
/* 92 */	0x67,		/* 103 */
			0x27,		/* 39 */
/* 94 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 96 */	NdrFcShort( 0x1c ),	/* Offset= 28 (124) */
/* 98 */	
			0x13, 0x0,	/* FC_OP */
/* 100 */	NdrFcShort( 0xe ),	/* Offset= 14 (114) */
/* 102 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 104 */	NdrFcShort( 0x2 ),	/* 2 */
/* 106 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 108 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 110 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 112 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 114 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 118 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (102) */
/* 120 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 122 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 124 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x4 ),	/* 4 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0xffde ),	/* Offset= -34 (98) */
/* 134 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 136 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 138 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 140 */	NdrFcShort( 0x2 ),	/* Offset= 2 (142) */
/* 142 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 152 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 154 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 156 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 158 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 160 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 162 */	NdrFcShort( 0x2 ),	/* Offset= 2 (164) */
/* 164 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 166 */	NdrFcLong( 0xc37f3bc0 ),	/* -1015071808 */
/* 170 */	NdrFcShort( 0x22dd ),	/* 8925 */
/* 172 */	NdrFcShort( 0x4e20 ),	/* 20000 */
/* 174 */	0xa2,		/* 162 */
			0x3,		/* 3 */
/* 176 */	0x28,		/* 40 */
			0x6a,		/* 106 */
/* 178 */	0xce,		/* 206 */
			0x86,		/* 134 */
/* 180 */	0x27,		/* 39 */
			0x58,		/* 88 */
/* 182 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 184 */	NdrFcShort( 0x2 ),	/* Offset= 2 (186) */
/* 186 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 188 */	NdrFcLong( 0x1ee2b408 ),	/* 518173704 */
/* 192 */	NdrFcShort( 0x2ce ),	/* 718 */
/* 194 */	NdrFcShort( 0x4e5f ),	/* 20063 */
/* 196 */	0xbf,		/* 191 */
			0xfc,		/* 252 */
/* 198 */	0xb7,		/* 183 */
			0x93,		/* 147 */
/* 200 */	0xba,		/* 186 */
			0xc3,		/* 195 */
/* 202 */	0x22,		/* 34 */
			0xc1,		/* 193 */
/* 204 */	
			0x12, 0x0,	/* FC_UP */
/* 206 */	NdrFcShort( 0xffa4 ),	/* Offset= -92 (114) */
/* 208 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x4 ),	/* 4 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 216 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (204) */
/* 218 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 220 */	NdrFcShort( 0x2 ),	/* Offset= 2 (222) */
/* 222 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 224 */	NdrFcLong( 0x37ebffcd ),	/* 938213325 */
/* 228 */	NdrFcShort( 0x77e ),	/* 1918 */
/* 230 */	NdrFcShort( 0x4323 ),	/* 17187 */
/* 232 */	0x83,		/* 131 */
			0xe0,		/* 224 */
/* 234 */	0x3a,		/* 58 */
			0x82,		/* 130 */
/* 236 */	0x55,		/* 85 */
			0xaf,		/* 175 */
/* 238 */	0xb8,		/* 184 */
			0x45,		/* 69 */
/* 240 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 242 */	NdrFcShort( 0x2 ),	/* Offset= 2 (244) */
/* 244 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 246 */	NdrFcLong( 0x8084c085 ),	/* -2138783611 */
/* 250 */	NdrFcShort( 0x5f3f ),	/* 24383 */
/* 252 */	NdrFcShort( 0x49f0 ),	/* 18928 */
/* 254 */	0xb8,		/* 184 */
			0x2c,		/* 44 */
/* 256 */	0x22,		/* 34 */
			0x76,		/* 118 */
/* 258 */	0xf1,		/* 241 */
			0x2c,		/* 44 */
/* 260 */	0x88,		/* 136 */
			0xab,		/* 171 */
/* 262 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 264 */	NdrFcShort( 0x2 ),	/* Offset= 2 (266) */
/* 266 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 268 */	NdrFcLong( 0x2a7e4fcc ),	/* 712921036 */
/* 272 */	NdrFcShort( 0x4df6 ),	/* 19958 */
/* 274 */	NdrFcShort( 0x4e4f ),	/* 20047 */
/* 276 */	0x81,		/* 129 */
			0xf8,		/* 248 */
/* 278 */	0x80,		/* 128 */
			0xc0,		/* 192 */
/* 280 */	0x48,		/* 72 */
			0x31,		/* 49 */
/* 282 */	0x61,		/* 97 */
			0x56,		/* 86 */
/* 284 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 286 */	NdrFcShort( 0x2 ),	/* Offset= 2 (288) */
/* 288 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 290 */	NdrFcLong( 0xa0cdfcd7 ),	/* -1597113129 */
/* 294 */	NdrFcShort( 0xc97b ),	/* -13957 */
/* 296 */	NdrFcShort( 0x426f ),	/* 17007 */
/* 298 */	0x85,		/* 133 */
			0x28,		/* 40 */
/* 300 */	0xa,		/* 10 */
			0xa0,		/* 160 */
/* 302 */	0x32,		/* 50 */
			0x1e,		/* 30 */
/* 304 */	0xa0,		/* 160 */
			0xfa,		/* 250 */
/* 306 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 308 */	NdrFcShort( 0x2 ),	/* Offset= 2 (310) */
/* 310 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 312 */	NdrFcLong( 0x280df2d0 ),	/* 672002768 */
/* 316 */	NdrFcShort( 0xbe2a ),	/* -16854 */
/* 318 */	NdrFcShort( 0x448c ),	/* 17548 */
/* 320 */	0xbb,		/* 187 */
			0xce,		/* 206 */
/* 322 */	0x11,		/* 17 */
			0x81,		/* 129 */
/* 324 */	0x46,		/* 70 */
			0x36,		/* 54 */
/* 326 */	0xc4,		/* 196 */
			0xc8,		/* 200 */
/* 328 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 330 */	NdrFcShort( 0x2 ),	/* Offset= 2 (332) */
/* 332 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 334 */	NdrFcLong( 0x19487fb9 ),	/* 424181689 */
/* 338 */	NdrFcShort( 0x54f2 ),	/* 21746 */
/* 340 */	NdrFcShort( 0x49a6 ),	/* 18854 */
/* 342 */	0x9d,		/* 157 */
			0xae,		/* 174 */
/* 344 */	0xfd,		/* 253 */
			0x9a,		/* 154 */
/* 346 */	0xdd,		/* 221 */
			0xd1,		/* 209 */
/* 348 */	0x2a,		/* 42 */
			0x76,		/* 118 */
/* 350 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 352 */	NdrFcShort( 0x2 ),	/* Offset= 2 (354) */
/* 354 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 356 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 366 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 368 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 370 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 372 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 374 */	NdrFcShort( 0x2 ),	/* Offset= 2 (376) */
/* 376 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 378 */	NdrFcLong( 0xf898093c ),	/* -124253892 */
/* 382 */	NdrFcShort( 0x1b98 ),	/* 7064 */
/* 384 */	NdrFcShort( 0x420d ),	/* 16909 */
/* 386 */	0xb0,		/* 176 */
			0x97,		/* 151 */
/* 388 */	0xc2,		/* 194 */
			0xf1,		/* 241 */
/* 390 */	0xe8,		/* 232 */
			0x8c,		/* 140 */
/* 392 */	0xa3,		/* 163 */
			0x45,		/* 69 */
/* 394 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 396 */	NdrFcShort( 0x2 ),	/* Offset= 2 (398) */
/* 398 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 408 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 410 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 412 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 414 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 416 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 418 */	NdrFcLong( 0xa0cdfcd7 ),	/* -1597113129 */
/* 422 */	NdrFcShort( 0xc97b ),	/* -13957 */
/* 424 */	NdrFcShort( 0x426f ),	/* 17007 */
/* 426 */	0x85,		/* 133 */
			0x28,		/* 40 */
/* 428 */	0xa,		/* 10 */
			0xa0,		/* 160 */
/* 430 */	0x32,		/* 50 */
			0x1e,		/* 30 */
/* 432 */	0xa0,		/* 160 */
			0xfa,		/* 250 */
/* 434 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 436 */	NdrFcShort( 0x2 ),	/* Offset= 2 (438) */
/* 438 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 440 */	NdrFcLong( 0x54a6f7f9 ),	/* 1420228601 */
/* 444 */	NdrFcShort( 0x5c98 ),	/* 23704 */
/* 446 */	NdrFcShort( 0x4c65 ),	/* 19557 */
/* 448 */	0x96,		/* 150 */
			0xd5,		/* 213 */
/* 450 */	0xbd,		/* 189 */
			0x43,		/* 67 */
/* 452 */	0xd2,		/* 210 */
			0x48,		/* 72 */
/* 454 */	0xb7,		/* 183 */
			0x88,		/* 136 */
/* 456 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 458 */	NdrFcShort( 0x2 ),	/* Offset= 2 (460) */
/* 460 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 462 */	NdrFcLong( 0x570069a3 ),	/* 1459644835 */
/* 466 */	NdrFcShort( 0xac18 ),	/* -21480 */
/* 468 */	NdrFcShort( 0x40e5 ),	/* 16613 */
/* 470 */	0x9c,		/* 156 */
			0xd4,		/* 212 */
/* 472 */	0xbe,		/* 190 */
			0x1e,		/* 30 */
/* 474 */	0xcf,		/* 207 */
			0x83,		/* 131 */
/* 476 */	0x18,		/* 24 */
			0xe2,		/* 226 */
/* 478 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 480 */	NdrFcShort( 0x2 ),	/* Offset= 2 (482) */
/* 482 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 484 */	NdrFcLong( 0x8645e5ad ),	/* -2042239571 */
/* 488 */	NdrFcShort( 0x94df ),	/* -27425 */
/* 490 */	NdrFcShort( 0x48a8 ),	/* 18600 */
/* 492 */	0xad,		/* 173 */
			0x8e,		/* 142 */
/* 494 */	0x9e,		/* 158 */
			0xd7,		/* 215 */
/* 496 */	0x17,		/* 23 */
			0xac,		/* 172 */
/* 498 */	0x46,		/* 70 */
			0x91,		/* 145 */
/* 500 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 502 */	NdrFcLong( 0x2a7e4fcc ),	/* 712921036 */
/* 506 */	NdrFcShort( 0x4df6 ),	/* 19958 */
/* 508 */	NdrFcShort( 0x4e4f ),	/* 20047 */
/* 510 */	0x81,		/* 129 */
			0xf8,		/* 248 */
/* 512 */	0x80,		/* 128 */
			0xc0,		/* 192 */
/* 514 */	0x48,		/* 72 */
			0x31,		/* 49 */
/* 516 */	0x61,		/* 97 */
			0x56,		/* 86 */
/* 518 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 520 */	NdrFcShort( 0x2 ),	/* Offset= 2 (522) */
/* 522 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 524 */	NdrFcLong( 0x7813d4f8 ),	/* 2014565624 */
/* 528 */	NdrFcShort( 0x1398 ),	/* 5016 */
/* 530 */	NdrFcShort( 0x4a75 ),	/* 19061 */
/* 532 */	0x8f,		/* 143 */
			0xea,		/* 234 */
/* 534 */	0xaf,		/* 175 */
			0x3a,		/* 58 */
/* 536 */	0x26,		/* 38 */
			0x2a,		/* 42 */
/* 538 */	0x98,		/* 152 */
			0x98,		/* 152 */
/* 540 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 542 */	NdrFcShort( 0x2 ),	/* Offset= 2 (544) */
/* 544 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 546 */	NdrFcLong( 0x7397f21a ),	/* 1939337754 */
/* 550 */	NdrFcShort( 0xe19f ),	/* -7777 */
/* 552 */	NdrFcShort( 0x4eda ),	/* 20186 */
/* 554 */	0xb8,		/* 184 */
			0x9f,		/* 159 */
/* 556 */	0xe1,		/* 225 */
			0x84,		/* 132 */
/* 558 */	0x5,		/* 5 */
			0xbd,		/* 189 */
/* 560 */	0x37,		/* 55 */
			0x60,		/* 96 */
/* 562 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 564 */	NdrFcShort( 0x2 ),	/* Offset= 2 (566) */
/* 566 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 568 */	NdrFcLong( 0x62f39890 ),	/* 1660131472 */
/* 572 */	NdrFcShort( 0x584 ),	/* 1412 */
/* 574 */	NdrFcShort( 0x4142 ),	/* 16706 */
/* 576 */	0xa8,		/* 168 */
			0xde,		/* 222 */
/* 578 */	0xe4,		/* 228 */
			0x19,		/* 25 */
/* 580 */	0xf9,		/* 249 */
			0xbf,		/* 191 */
/* 582 */	0x73,		/* 115 */
			0x1,		/* 1 */
/* 584 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 586 */	NdrFcShort( 0x2 ),	/* Offset= 2 (588) */
/* 588 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 590 */	NdrFcLong( 0xb8aac9d3 ),	/* -1196766765 */
/* 594 */	NdrFcShort( 0x8453 ),	/* -31661 */
/* 596 */	NdrFcShort( 0x48c9 ),	/* 18633 */
/* 598 */	0xac,		/* 172 */
			0x93,		/* 147 */
/* 600 */	0xa1,		/* 161 */
			0x16,		/* 22 */
/* 602 */	0xe8,		/* 232 */
			0x91,		/* 145 */
/* 604 */	0x10,		/* 16 */
			0x1e,		/* 30 */
/* 606 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 608 */	NdrFcShort( 0x2 ),	/* Offset= 2 (610) */
/* 610 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 612 */	NdrFcLong( 0x1b8e8e40 ),	/* 462327360 */
/* 616 */	NdrFcShort( 0x7d68 ),	/* 32104 */
/* 618 */	NdrFcShort( 0x4387 ),	/* 17287 */
/* 620 */	0xa1,		/* 161 */
			0x3f,		/* 63 */
/* 622 */	0xd8,		/* 216 */
			0xe2,		/* 226 */
/* 624 */	0x4,		/* 4 */
			0x21,		/* 33 */
/* 626 */	0x26,		/* 38 */
			0x7,		/* 7 */
/* 628 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 630 */	NdrFcShort( 0x2 ),	/* Offset= 2 (632) */
/* 632 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 634 */	NdrFcLong( 0x929007fb ),	/* -1836054533 */
/* 638 */	NdrFcShort( 0xff4 ),	/* 4084 */
/* 640 */	NdrFcShort( 0x477a ),	/* 18298 */
/* 642 */	0xbc,		/* 188 */
			0x6b,		/* 107 */
/* 644 */	0x9d,		/* 157 */
			0xb6,		/* 182 */
/* 646 */	0x3b,		/* 59 */
			0x4f,		/* 79 */
/* 648 */	0x64,		/* 100 */
			0x7,		/* 7 */
/* 650 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 652 */	NdrFcShort( 0x2 ),	/* Offset= 2 (654) */
/* 654 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 656 */	NdrFcLong( 0x1b44e76f ),	/* 457500527 */
/* 660 */	NdrFcShort( 0x21ad ),	/* 8621 */
/* 662 */	NdrFcShort( 0x482b ),	/* 18475 */
/* 664 */	0xa2,		/* 162 */
			0xd4,		/* 212 */
/* 666 */	0x95,		/* 149 */
			0x3,		/* 3 */
/* 668 */	0x75,		/* 117 */
			0xec,		/* 236 */
/* 670 */	0x2d,		/* 45 */
			0x61,		/* 97 */
/* 672 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 674 */	NdrFcShort( 0x2 ),	/* Offset= 2 (676) */
/* 676 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 678 */	NdrFcLong( 0x5089ae2e ),	/* 1351200302 */
/* 682 */	NdrFcShort( 0x41c5 ),	/* 16837 */
/* 684 */	NdrFcShort( 0x4dd3 ),	/* 19923 */
/* 686 */	0xbf,		/* 191 */
			0xfa,		/* 250 */
/* 688 */	0x6b,		/* 107 */
			0x5e,		/* 94 */
/* 690 */	0xcf,		/* 207 */
			0xf9,		/* 249 */
/* 692 */	0x91,		/* 145 */
			0x41,		/* 65 */
/* 694 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 696 */	NdrFcShort( 0x2 ),	/* Offset= 2 (698) */
/* 698 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 700 */	NdrFcLong( 0x9980b5be ),	/* -1719618114 */
/* 704 */	NdrFcShort( 0x2421 ),	/* 9249 */
/* 706 */	NdrFcShort( 0x46dc ),	/* 18140 */
/* 708 */	0x94,		/* 148 */
			0x25,		/* 37 */
/* 710 */	0x84,		/* 132 */
			0x58,		/* 88 */
/* 712 */	0x80,		/* 128 */
			0x82,		/* 130 */
/* 714 */	0xdd,		/* 221 */
			0x28,		/* 40 */
/* 716 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 718 */	NdrFcShort( 0x2 ),	/* Offset= 2 (720) */
/* 720 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 722 */	NdrFcLong( 0x5a9fb9f5 ),	/* 1520417269 */
/* 726 */	NdrFcShort( 0x92a5 ),	/* -27995 */
/* 728 */	NdrFcShort( 0x4e46 ),	/* 20038 */
/* 730 */	0xb5,		/* 181 */
			0xa5,		/* 165 */
/* 732 */	0xd9,		/* 217 */
			0xc1,		/* 193 */
/* 734 */	0x63,		/* 99 */
			0xa1,		/* 161 */
/* 736 */	0xfd,		/* 253 */
			0x8c,		/* 140 */
/* 738 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 740 */	NdrFcShort( 0x2 ),	/* Offset= 2 (742) */
/* 742 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 744 */	NdrFcLong( 0xb1a7fe7f ),	/* -1314390401 */
/* 748 */	NdrFcShort( 0x54bf ),	/* 21695 */
/* 750 */	NdrFcShort( 0x4ce5 ),	/* 19685 */
/* 752 */	0x89,		/* 137 */
			0x47,		/* 71 */
/* 754 */	0x83,		/* 131 */
			0x13,		/* 19 */
/* 756 */	0x58,		/* 88 */
			0xc3,		/* 195 */
/* 758 */	0x8d,		/* 141 */
			0x56,		/* 86 */
/* 760 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 762 */	NdrFcShort( 0x2 ),	/* Offset= 2 (764) */
/* 764 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 766 */	NdrFcLong( 0x9be8c17 ),	/* 163482647 */
/* 770 */	NdrFcShort( 0xdb20 ),	/* -9440 */
/* 772 */	NdrFcShort( 0x4474 ),	/* 17524 */
/* 774 */	0x8b,		/* 139 */
			0xe9,		/* 233 */
/* 776 */	0xf4,		/* 244 */
			0xd9,		/* 217 */
/* 778 */	0x4e,		/* 78 */
			0x27,		/* 39 */
/* 780 */	0x26,		/* 38 */
			0x1a,		/* 26 */
/* 782 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 784 */	NdrFcLong( 0xa0cdfcd7 ),	/* -1597113129 */
/* 788 */	NdrFcShort( 0xc97b ),	/* -13957 */
/* 790 */	NdrFcShort( 0x426f ),	/* 17007 */
/* 792 */	0x85,		/* 133 */
			0x28,		/* 40 */
/* 794 */	0xa,		/* 10 */
			0xa0,		/* 160 */
/* 796 */	0x32,		/* 50 */
			0x1e,		/* 30 */
/* 798 */	0xa0,		/* 160 */
			0xfa,		/* 250 */
/* 800 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 802 */	NdrFcShort( 0x2 ),	/* Offset= 2 (804) */
/* 804 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 806 */	NdrFcLong( 0xcf090569 ),	/* -821492375 */
/* 810 */	NdrFcShort( 0x5d8 ),	/* 1496 */
/* 812 */	NdrFcShort( 0x44a0 ),	/* 17568 */
/* 814 */	0x86,		/* 134 */
			0x56,		/* 86 */
/* 816 */	0x82,		/* 130 */
			0xbd,		/* 189 */
/* 818 */	0xfe,		/* 254 */
			0x1b,		/* 27 */
/* 820 */	0x79,		/* 121 */
			0xa6,		/* 166 */
/* 822 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 824 */	NdrFcShort( 0x2 ),	/* Offset= 2 (826) */
/* 826 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 828 */	NdrFcLong( 0xfccf7496 ),	/* -53513066 */
/* 832 */	NdrFcShort( 0x9645 ),	/* -27067 */
/* 834 */	NdrFcShort( 0x4b6d ),	/* 19309 */
/* 836 */	0x9c,		/* 156 */
			0x4d,		/* 77 */
/* 838 */	0x6,		/* 6 */
			0x7d,		/* 125 */
/* 840 */	0x3d,		/* 61 */
			0x1d,		/* 29 */
/* 842 */	0x60,		/* 96 */
			0xaf,		/* 175 */
/* 844 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 846 */	NdrFcShort( 0x2 ),	/* Offset= 2 (848) */
/* 848 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 850 */	NdrFcLong( 0x66548701 ),	/* 1716815617 */
/* 854 */	NdrFcShort( 0x6acc ),	/* 27340 */
/* 856 */	NdrFcShort( 0x4271 ),	/* 17009 */
/* 858 */	0x98,		/* 152 */
			0xa8,		/* 168 */
/* 860 */	0xd7,		/* 215 */
			0x66,		/* 102 */
/* 862 */	0x69,		/* 105 */
			0x30,		/* 48 */
/* 864 */	0xff,		/* 255 */
			0x5,		/* 5 */
/* 866 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 868 */	NdrFcShort( 0x2 ),	/* Offset= 2 (870) */
/* 870 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 872 */	NdrFcLong( 0xea1585e2 ),	/* -367688222 */
/* 876 */	NdrFcShort( 0x4e46 ),	/* 20038 */
/* 878 */	NdrFcShort( 0x44e1 ),	/* 17633 */
/* 880 */	0x80,		/* 128 */
			0x8b,		/* 139 */
/* 882 */	0x44,		/* 68 */
			0x32,		/* 50 */
/* 884 */	0xb9,		/* 185 */
			0x89,		/* 137 */
/* 886 */	0x6e,		/* 110 */
			0x2d,		/* 45 */
/* 888 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 890 */	NdrFcShort( 0x2 ),	/* Offset= 2 (892) */
/* 892 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 894 */	NdrFcLong( 0x2ac4b8da ),	/* 717535450 */
/* 898 */	NdrFcShort( 0xf372 ),	/* -3214 */
/* 900 */	NdrFcShort( 0x4214 ),	/* 16916 */
/* 902 */	0x89,		/* 137 */
			0xf7,		/* 247 */
/* 904 */	0xab,		/* 171 */
			0x62,		/* 98 */
/* 906 */	0x31,		/* 49 */
			0xe9,		/* 233 */
/* 908 */	0x46,		/* 70 */
			0x91,		/* 145 */
/* 910 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 912 */	NdrFcShort( 0x2 ),	/* Offset= 2 (914) */
/* 914 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 916 */	NdrFcLong( 0xb7a36313 ),	/* -1214029037 */
/* 920 */	NdrFcShort( 0xca66 ),	/* -13722 */
/* 922 */	NdrFcShort( 0x4a4b ),	/* 19019 */
/* 924 */	0x83,		/* 131 */
			0xbe,		/* 190 */
/* 926 */	0xb7,		/* 183 */
			0x97,		/* 151 */
/* 928 */	0xfb,		/* 251 */
			0xd,		/* 13 */
/* 930 */	0xe8,		/* 232 */
			0xa,		/* 10 */
/* 932 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 934 */	NdrFcShort( 0x2 ),	/* Offset= 2 (936) */
/* 936 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 938 */	NdrFcLong( 0x378eba37 ),	/* 932100663 */
/* 942 */	NdrFcShort( 0x1568 ),	/* 5480 */
/* 944 */	NdrFcShort( 0x40e9 ),	/* 16617 */
/* 946 */	0xbd,		/* 189 */
			0x72,		/* 114 */
/* 948 */	0xea,		/* 234 */
			0x48,		/* 72 */
/* 950 */	0xed,		/* 237 */
			0x47,		/* 71 */
/* 952 */	0x1e,		/* 30 */
			0xdc,		/* 220 */
/* 954 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 956 */	NdrFcShort( 0x2 ),	/* Offset= 2 (958) */
/* 958 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 960 */	NdrFcLong( 0x19487fb9 ),	/* 424181689 */
/* 964 */	NdrFcShort( 0x54f2 ),	/* 21746 */
/* 966 */	NdrFcShort( 0x49a6 ),	/* 18854 */
/* 968 */	0x9d,		/* 157 */
			0xae,		/* 174 */
/* 970 */	0xfd,		/* 253 */
			0x9a,		/* 154 */
/* 972 */	0xdd,		/* 221 */
			0xd1,		/* 209 */
/* 974 */	0x2a,		/* 42 */
			0x76,		/* 118 */
/* 976 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 978 */	NdrFcShort( 0x2 ),	/* Offset= 2 (980) */
/* 980 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 982 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 990 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 992 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 994 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 996 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 998 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1000 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 1002 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1004 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1006) */
/* 1006 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1008 */	NdrFcLong( 0x1804c402 ),	/* 402965506 */
/* 1012 */	NdrFcShort( 0xfbaf ),	/* -1105 */
/* 1014 */	NdrFcShort( 0x438f ),	/* 17295 */
/* 1016 */	0xb8,		/* 184 */
			0x49,		/* 73 */
/* 1018 */	0xab,		/* 171 */
			0x69,		/* 105 */
/* 1020 */	0x40,		/* 64 */
			0x60,		/* 96 */
/* 1022 */	0x6e,		/* 110 */
			0x6d,		/* 109 */
/* 1024 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1026 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1028) */
/* 1028 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1030 */	NdrFcLong( 0x5a732443 ),	/* 1517495363 */
/* 1034 */	NdrFcShort( 0x2a35 ),	/* 10805 */
/* 1036 */	NdrFcShort( 0x4519 ),	/* 17689 */
/* 1038 */	0x9c,		/* 156 */
			0x1a,		/* 26 */
/* 1040 */	0x5c,		/* 92 */
			0x9e,		/* 158 */
/* 1042 */	0x25,		/* 37 */
			0x34,		/* 52 */
/* 1044 */	0x2d,		/* 45 */
			0x22,		/* 34 */
/* 1046 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1048 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1050) */
/* 1050 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1052 */	NdrFcLong( 0x1c5fdd6c ),	/* 476044652 */
/* 1056 */	NdrFcShort( 0x3075 ),	/* 12405 */
/* 1058 */	NdrFcShort( 0x4a54 ),	/* 19028 */
/* 1060 */	0x9e,		/* 158 */
			0x8,		/* 8 */
/* 1062 */	0xd9,		/* 217 */
			0x59,		/* 89 */
/* 1064 */	0x76,		/* 118 */
			0x9c,		/* 156 */
/* 1066 */	0x24,		/* 36 */
			0xc6,		/* 198 */
/* 1068 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1070 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1072) */
/* 1072 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1074 */	NdrFcLong( 0x7ffe9084 ),	/* 2147389572 */
/* 1078 */	NdrFcShort( 0x7c7b ),	/* 31867 */
/* 1080 */	NdrFcShort( 0x4e75 ),	/* 20085 */
/* 1082 */	0xab,		/* 171 */
			0xf6,		/* 246 */
/* 1084 */	0xc2,		/* 194 */
			0x1a,		/* 26 */
/* 1086 */	0x12,		/* 18 */
			0x81,		/* 129 */
/* 1088 */	0xe2,		/* 226 */
			0x79,		/* 121 */
/* 1090 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1092 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1094) */
/* 1094 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1096 */	NdrFcLong( 0x82dd5568 ),	/* -2099423896 */
/* 1100 */	NdrFcShort( 0xc7f7 ),	/* -14345 */
/* 1102 */	NdrFcShort( 0x4647 ),	/* 17991 */
/* 1104 */	0xb8,		/* 184 */
			0x15,		/* 21 */
/* 1106 */	0x66,		/* 102 */
			0xd4,		/* 212 */
/* 1108 */	0xe7,		/* 231 */
			0x2d,		/* 45 */
/* 1110 */	0x57,		/* 87 */
			0x38,		/* 56 */
/* 1112 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1114 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1116) */
/* 1116 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1118 */	NdrFcLong( 0x235d6ab ),	/* 37082795 */
/* 1122 */	NdrFcShort( 0xe6f9 ),	/* -6407 */
/* 1124 */	NdrFcShort( 0x4665 ),	/* 18021 */
/* 1126 */	0x98,		/* 152 */
			0xaf,		/* 175 */
/* 1128 */	0x75,		/* 117 */
			0xb7,		/* 183 */
/* 1130 */	0xd5,		/* 213 */
			0x6a,		/* 106 */
/* 1132 */	0x1,		/* 1 */
			0x29,		/* 41 */
/* 1134 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1136 */	NdrFcShort( 0xfe9e ),	/* Offset= -354 (782) */
/* 1138 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1140 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1142) */
/* 1142 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1144 */	NdrFcLong( 0x57fae9e3 ),	/* 1476061667 */
/* 1148 */	NdrFcShort( 0xf8d4 ),	/* -1836 */
/* 1150 */	NdrFcShort( 0x49b2 ),	/* 18866 */
/* 1152 */	0xab,		/* 171 */
			0xa,		/* 10 */
/* 1154 */	0xb8,		/* 184 */
			0x8f,		/* 143 */
/* 1156 */	0x64,		/* 100 */
			0xb,		/* 11 */
/* 1158 */	0x7c,		/* 124 */
			0xf2,		/* 242 */
/* 1160 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1162 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1164 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1166 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1168) */
/* 1168 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1170 */	NdrFcLong( 0x2a7e4fcc ),	/* 712921036 */
/* 1174 */	NdrFcShort( 0x4df6 ),	/* 19958 */
/* 1176 */	NdrFcShort( 0x4e4f ),	/* 20047 */
/* 1178 */	0x81,		/* 129 */
			0xf8,		/* 248 */
/* 1180 */	0x80,		/* 128 */
			0xc0,		/* 192 */
/* 1182 */	0x48,		/* 72 */
			0x31,		/* 49 */
/* 1184 */	0x61,		/* 97 */
			0x56,		/* 86 */
/* 1186 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1188 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1190) */
/* 1190 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1192 */	NdrFcLong( 0x19487fb9 ),	/* 424181689 */
/* 1196 */	NdrFcShort( 0x54f2 ),	/* 21746 */
/* 1198 */	NdrFcShort( 0x49a6 ),	/* 18854 */
/* 1200 */	0x9d,		/* 157 */
			0xae,		/* 174 */
/* 1202 */	0xfd,		/* 253 */
			0x9a,		/* 154 */
/* 1204 */	0xdd,		/* 221 */
			0xd1,		/* 209 */
/* 1206 */	0x2a,		/* 42 */
			0x76,		/* 118 */
/* 1208 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1210 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1212) */
/* 1212 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1214 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1222 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1224 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1226 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1228 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1230 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1232 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1234) */
/* 1234 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1236 */	NdrFcLong( 0x54a6f7f9 ),	/* 1420228601 */
/* 1240 */	NdrFcShort( 0x5c98 ),	/* 23704 */
/* 1242 */	NdrFcShort( 0x4c65 ),	/* 19557 */
/* 1244 */	0x96,		/* 150 */
			0xd5,		/* 213 */
/* 1246 */	0xbd,		/* 189 */
			0x43,		/* 67 */
/* 1248 */	0xd2,		/* 210 */
			0x48,		/* 72 */
/* 1250 */	0xb7,		/* 183 */
			0x88,		/* 136 */
/* 1252 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1254 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1256) */
/* 1256 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1258 */	NdrFcLong( 0x882df9bc ),	/* -2010252868 */
/* 1262 */	NdrFcShort( 0xff59 ),	/* -167 */
/* 1264 */	NdrFcShort( 0x4e65 ),	/* 20069 */
/* 1266 */	0x8e,		/* 142 */
			0x7b,		/* 123 */
/* 1268 */	0xb,		/* 11 */
			0xca,		/* 202 */
/* 1270 */	0xd3,		/* 211 */
			0xd4,		/* 212 */
/* 1272 */	0x15,		/* 21 */
			0xf,		/* 15 */
/* 1274 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1276 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1278) */
/* 1278 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1288 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1290 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1292 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1294 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1296 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1298 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1300) */
/* 1300 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1302 */	NdrFcLong( 0x19487fb9 ),	/* 424181689 */
/* 1306 */	NdrFcShort( 0x54f2 ),	/* 21746 */
/* 1308 */	NdrFcShort( 0x49a6 ),	/* 18854 */
/* 1310 */	0x9d,		/* 157 */
			0xae,		/* 174 */
/* 1312 */	0xfd,		/* 253 */
			0x9a,		/* 154 */
/* 1314 */	0xdd,		/* 221 */
			0xd1,		/* 209 */
/* 1316 */	0x2a,		/* 42 */
			0x76,		/* 118 */
/* 1318 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1320 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1322) */
/* 1322 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1324 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 1328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1332 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1334 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1336 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1338 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1340 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1342 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1344) */
/* 1344 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1346 */	NdrFcLong( 0x23057881 ),	/* 587561089 */
/* 1350 */	NdrFcShort( 0x19b6 ),	/* 6582 */
/* 1352 */	NdrFcShort( 0x4395 ),	/* 17301 */
/* 1354 */	0x9d,		/* 157 */
			0x39,		/* 57 */
/* 1356 */	0xb5,		/* 181 */
			0xb6,		/* 182 */
/* 1358 */	0x2f,		/* 47 */
			0x75,		/* 117 */
/* 1360 */	0xb5,		/* 181 */
			0xef,		/* 239 */
/* 1362 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1364 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1366) */
/* 1366 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1376 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1378 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1380 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1382 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1384 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1386 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1388) */
/* 1388 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1390 */	NdrFcLong( 0x54a6f7f9 ),	/* 1420228601 */
/* 1394 */	NdrFcShort( 0x5c98 ),	/* 23704 */
/* 1396 */	NdrFcShort( 0x4c65 ),	/* 19557 */
/* 1398 */	0x96,		/* 150 */
			0xd5,		/* 213 */
/* 1400 */	0xbd,		/* 189 */
			0x43,		/* 67 */
/* 1402 */	0xd2,		/* 210 */
			0x48,		/* 72 */
/* 1404 */	0xb7,		/* 183 */
			0x88,		/* 136 */
/* 1406 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1408 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1410) */
/* 1410 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1412 */	NdrFcLong( 0x3966e6f5 ),	/* 963045109 */
/* 1416 */	NdrFcShort( 0xec21 ),	/* -5087 */
/* 1418 */	NdrFcShort( 0x413e ),	/* 16702 */
/* 1420 */	0xb0,		/* 176 */
			0xea,		/* 234 */
/* 1422 */	0xaf,		/* 175 */
			0x50,		/* 80 */
/* 1424 */	0x77,		/* 119 */
			0x20,		/* 32 */
/* 1426 */	0x59,		/* 89 */
			0x67,		/* 103 */
/* 1428 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1430 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1432) */
/* 1432 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1434 */	NdrFcLong( 0xa0cdfcd7 ),	/* -1597113129 */
/* 1438 */	NdrFcShort( 0xc97b ),	/* -13957 */
/* 1440 */	NdrFcShort( 0x426f ),	/* 17007 */
/* 1442 */	0x85,		/* 133 */
			0x28,		/* 40 */
/* 1444 */	0xa,		/* 10 */
			0xa0,		/* 160 */
/* 1446 */	0x32,		/* 50 */
			0x1e,		/* 30 */
/* 1448 */	0xa0,		/* 160 */
			0xfa,		/* 250 */
/* 1450 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1452 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1454) */
/* 1454 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1456 */	NdrFcLong( 0xf898093c ),	/* -124253892 */
/* 1460 */	NdrFcShort( 0x1b98 ),	/* 7064 */
/* 1462 */	NdrFcShort( 0x420d ),	/* 16909 */
/* 1464 */	0xb0,		/* 176 */
			0x97,		/* 151 */
/* 1466 */	0xc2,		/* 194 */
			0xf1,		/* 241 */
/* 1468 */	0xe8,		/* 232 */
			0x8c,		/* 140 */
/* 1470 */	0xa3,		/* 163 */
			0x45,		/* 69 */
/* 1472 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1474 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1476) */
/* 1476 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1478 */	NdrFcLong( 0xee1eb2ea ),	/* -299978006 */
/* 1482 */	NdrFcShort( 0xdfa3 ),	/* -8285 */
/* 1484 */	NdrFcShort( 0x42a5 ),	/* 17061 */
/* 1486 */	0xa9,		/* 169 */
			0xcb,		/* 203 */
/* 1488 */	0x32,		/* 50 */
			0x1f,		/* 31 */
/* 1490 */	0xc4,		/* 196 */
			0xb,		/* 11 */
/* 1492 */	0x4,		/* 4 */
			0xdc,		/* 220 */
/* 1494 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1496 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1498) */
/* 1498 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1500 */	NdrFcLong( 0xc10c6fdd ),	/* -1056149539 */
/* 1504 */	NdrFcShort( 0x8b99 ),	/* -29799 */
/* 1506 */	NdrFcShort( 0x4449 ),	/* 17481 */
/* 1508 */	0x82,		/* 130 */
			0xf1,		/* 241 */
/* 1510 */	0xea,		/* 234 */
			0xe6,		/* 230 */
/* 1512 */	0x74,		/* 116 */
			0x7,		/* 7 */
/* 1514 */	0xce,		/* 206 */
			0x67,		/* 103 */
/* 1516 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1518 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1520) */
/* 1520 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1522 */	NdrFcLong( 0xef6bf49c ),	/* -278137700 */
/* 1526 */	NdrFcShort( 0x742c ),	/* 29740 */
/* 1528 */	NdrFcShort( 0x4c57 ),	/* 19543 */
/* 1530 */	0x8a,		/* 138 */
			0x37,		/* 55 */
/* 1532 */	0xce,		/* 206 */
			0xcf,		/* 207 */
/* 1534 */	0xe2,		/* 226 */
			0x79,		/* 121 */
/* 1536 */	0xdb,		/* 219 */
			0x97,		/* 151 */
/* 1538 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1540 */	NdrFcLong( 0xa0cdfcd7 ),	/* -1597113129 */
/* 1544 */	NdrFcShort( 0xc97b ),	/* -13957 */
/* 1546 */	NdrFcShort( 0x426f ),	/* 17007 */
/* 1548 */	0x85,		/* 133 */
			0x28,		/* 40 */
/* 1550 */	0xa,		/* 10 */
			0xa0,		/* 160 */
/* 1552 */	0x32,		/* 50 */
			0x1e,		/* 30 */
/* 1554 */	0xa0,		/* 160 */
			0xfa,		/* 250 */
/* 1556 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1558 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1560) */
/* 1560 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1562 */	NdrFcLong( 0x16103c6e ),	/* 370162798 */
/* 1566 */	NdrFcShort( 0xb6d1 ),	/* -18735 */
/* 1568 */	NdrFcShort( 0x4f7c ),	/* 20348 */
/* 1570 */	0xbd,		/* 189 */
			0xa8,		/* 168 */
/* 1572 */	0xe6,		/* 230 */
			0xcf,		/* 207 */
/* 1574 */	0x51,		/* 81 */
			0x12,		/* 18 */
/* 1576 */	0xac,		/* 172 */
			0xcd,		/* 205 */
/* 1578 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1580 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1582) */
/* 1582 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1584 */	NdrFcLong( 0xff3a0bdd ),	/* -12973091 */
/* 1588 */	NdrFcShort( 0x1aa5 ),	/* 6821 */
/* 1590 */	NdrFcShort( 0x48fa ),	/* 18682 */
/* 1592 */	0x9f,		/* 159 */
			0x40,		/* 64 */
/* 1594 */	0x22,		/* 34 */
			0x8a,		/* 138 */
/* 1596 */	0x0,		/* 0 */
			0xc6,		/* 198 */
/* 1598 */	0x4a,		/* 74 */
			0x47,		/* 71 */
/* 1600 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1602 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1604) */
/* 1604 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1606 */	NdrFcLong( 0xaba27711 ),	/* -1415416047 */
/* 1610 */	NdrFcShort( 0x124a ),	/* 4682 */
/* 1612 */	NdrFcShort( 0x47c3 ),	/* 18371 */
/* 1614 */	0xbb,		/* 187 */
			0x88,		/* 136 */
/* 1616 */	0x3d,		/* 61 */
			0x27,		/* 39 */
/* 1618 */	0x3,		/* 3 */
			0xf8,		/* 248 */
/* 1620 */	0x79,		/* 121 */
			0x84,		/* 132 */
/* 1622 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1624 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1626) */
/* 1626 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1628 */	NdrFcLong( 0x3c500269 ),	/* 1011876457 */
/* 1632 */	NdrFcShort( 0x634e ),	/* 25422 */
/* 1634 */	NdrFcShort( 0x4018 ),	/* 16408 */
/* 1636 */	0x95,		/* 149 */
			0x98,		/* 152 */
/* 1638 */	0x91,		/* 145 */
			0x6c,		/* 108 */
/* 1640 */	0x70,		/* 112 */
			0x35,		/* 53 */
/* 1642 */	0xcc,		/* 204 */
			0xaa,		/* 170 */
/* 1644 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1646 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1648) */
/* 1648 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1650 */	NdrFcLong( 0x7f4ba82 ),	/* 133479042 */
/* 1654 */	NdrFcShort( 0xaa63 ),	/* -21917 */
/* 1656 */	NdrFcShort( 0x4c00 ),	/* 19456 */
/* 1658 */	0xb6,		/* 182 */
			0x40,		/* 64 */
/* 1660 */	0xd,		/* 13 */
			0x0,		/* 0 */
/* 1662 */	0x4,		/* 4 */
			0x4f,		/* 79 */
/* 1664 */	0xb2,		/* 178 */
			0xdc,		/* 220 */
/* 1666 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1668 */	NdrFcShort( 0xff7e ),	/* Offset= -130 (1538) */
/* 1670 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1672 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1674) */
/* 1674 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1676 */	NdrFcLong( 0x3966e6f5 ),	/* 963045109 */
/* 1680 */	NdrFcShort( 0xec21 ),	/* -5087 */
/* 1682 */	NdrFcShort( 0x413e ),	/* 16702 */
/* 1684 */	0xb0,		/* 176 */
			0xea,		/* 234 */
/* 1686 */	0xaf,		/* 175 */
			0x50,		/* 80 */
/* 1688 */	0x77,		/* 119 */
			0x20,		/* 32 */
/* 1690 */	0x59,		/* 89 */
			0x67,		/* 103 */
/* 1692 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1694 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1696) */
/* 1696 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1698 */	NdrFcLong( 0x2a7e4fcc ),	/* 712921036 */
/* 1702 */	NdrFcShort( 0x4df6 ),	/* 19958 */
/* 1704 */	NdrFcShort( 0x4e4f ),	/* 20047 */
/* 1706 */	0x81,		/* 129 */
			0xf8,		/* 248 */
/* 1708 */	0x80,		/* 128 */
			0xc0,		/* 192 */
/* 1710 */	0x48,		/* 72 */
			0x31,		/* 49 */
/* 1712 */	0x61,		/* 97 */
			0x56,		/* 86 */
/* 1714 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1716 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1718) */
/* 1718 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1720 */	NdrFcLong( 0x3c5c1ab1 ),	/* 1012669105 */
/* 1724 */	NdrFcShort( 0xafe7 ),	/* -20505 */
/* 1726 */	NdrFcShort( 0x43b3 ),	/* 17331 */
/* 1728 */	0x87,		/* 135 */
			0x4b,		/* 75 */
/* 1730 */	0xd7,		/* 215 */
			0x6d,		/* 109 */
/* 1732 */	0x77,		/* 119 */
			0x90,		/* 144 */
/* 1734 */	0x90,		/* 144 */
			0x18,		/* 24 */
/* 1736 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1738 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1740) */
/* 1740 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1742 */	NdrFcLong( 0x9e0256d6 ),	/* -1644013866 */
/* 1746 */	NdrFcShort( 0x3731 ),	/* 14129 */
/* 1748 */	NdrFcShort( 0x41c9 ),	/* 16841 */
/* 1750 */	0x99,		/* 153 */
			0x7b,		/* 123 */
/* 1752 */	0x24,		/* 36 */
			0x5f,		/* 95 */
/* 1754 */	0xf5,		/* 245 */
			0x62,		/* 98 */
/* 1756 */	0xe8,		/* 232 */
			0x29,		/* 41 */
/* 1758 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1760 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1762) */
/* 1762 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1764 */	NdrFcLong( 0xac5c4dc7 ),	/* -1403236921 */
/* 1768 */	NdrFcShort( 0xe3a7 ),	/* -7257 */
/* 1770 */	NdrFcShort( 0x4978 ),	/* 18808 */
/* 1772 */	0x97,		/* 151 */
			0xe0,		/* 224 */
/* 1774 */	0xe4,		/* 228 */
			0xf2,		/* 242 */
/* 1776 */	0xdb,		/* 219 */
			0x12,		/* 18 */
/* 1778 */	0x26,		/* 38 */
			0xef,		/* 239 */
/* 1780 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1782 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1784) */
/* 1784 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1786 */	NdrFcLong( 0x2439d908 ),	/* 607770888 */
/* 1790 */	NdrFcShort( 0xc5b ),	/* 3163 */
/* 1792 */	NdrFcShort( 0x47e0 ),	/* 18400 */
/* 1794 */	0x89,		/* 137 */
			0xe,		/* 14 */
/* 1796 */	0x46,		/* 70 */
			0xc2,		/* 194 */
/* 1798 */	0xb,		/* 11 */
			0x9f,		/* 159 */
/* 1800 */	0x18,		/* 24 */
			0x97,		/* 151 */
/* 1802 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1804 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1806) */
/* 1806 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1808 */	NdrFcLong( 0xd54bd7b3 ),	/* -716449869 */
/* 1812 */	NdrFcShort( 0x4ae1 ),	/* 19169 */
/* 1814 */	NdrFcShort( 0x4b8e ),	/* 19342 */
/* 1816 */	0x89,		/* 137 */
			0x25,		/* 37 */
/* 1818 */	0xa9,		/* 169 */
			0x2a,		/* 42 */
/* 1820 */	0x22,		/* 34 */
			0x3e,		/* 62 */
/* 1822 */	0xf6,		/* 246 */
			0x14,		/* 20 */
/* 1824 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1826 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1828) */
/* 1828 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1830 */	NdrFcLong( 0xea073cc ),	/* 245396428 */
/* 1834 */	NdrFcShort( 0x3c4a ),	/* 15434 */
/* 1836 */	NdrFcShort( 0x48ea ),	/* 18666 */
/* 1838 */	0x97,		/* 151 */
			0x99,		/* 153 */
/* 1840 */	0x3c,		/* 60 */
			0x81,		/* 129 */
/* 1842 */	0x8d,		/* 141 */
			0x81,		/* 129 */
/* 1844 */	0x7,		/* 7 */
			0xa6,		/* 166 */
/* 1846 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1848 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1850) */
/* 1850 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1852 */	NdrFcLong( 0x381b3303 ),	/* 941306627 */
/* 1856 */	NdrFcShort( 0x9eea ),	/* -24854 */
/* 1858 */	NdrFcShort( 0x482a ),	/* 18474 */
/* 1860 */	0xa1,		/* 161 */
			0x84,		/* 132 */
/* 1862 */	0xf4,		/* 244 */
			0x4,		/* 4 */
/* 1864 */	0xc8,		/* 200 */
			0x5a,		/* 90 */
/* 1866 */	0xb8,		/* 184 */
			0x7d,		/* 125 */
/* 1868 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1870 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1872) */
/* 1872 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1874 */	NdrFcLong( 0xad55f898 ),	/* -1386874728 */
/* 1878 */	NdrFcShort( 0x5cf6 ),	/* 23798 */
/* 1880 */	NdrFcShort( 0x4d13 ),	/* 19731 */
/* 1882 */	0x97,		/* 151 */
			0xdb,		/* 219 */
/* 1884 */	0xfe,		/* 254 */
			0xab,		/* 171 */
/* 1886 */	0x11,		/* 17 */
			0x56,		/* 86 */
/* 1888 */	0x62,		/* 98 */
			0x6f,		/* 111 */
/* 1890 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1892 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1894) */
/* 1894 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1896 */	NdrFcLong( 0x37ebffcd ),	/* 938213325 */
/* 1900 */	NdrFcShort( 0x77e ),	/* 1918 */
/* 1902 */	NdrFcShort( 0x4323 ),	/* 17187 */
/* 1904 */	0x83,		/* 131 */
			0xe0,		/* 224 */
/* 1906 */	0x3a,		/* 58 */
			0x82,		/* 130 */
/* 1908 */	0x55,		/* 85 */
			0xaf,		/* 175 */
/* 1910 */	0xb8,		/* 184 */
			0x45,		/* 69 */
/* 1912 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1914 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1916) */
/* 1916 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1918 */	NdrFcLong( 0x47b8d6ab ),	/* 1203295915 */
/* 1922 */	NdrFcShort( 0x475c ),	/* 18268 */
/* 1924 */	NdrFcShort( 0x4102 ),	/* 16642 */
/* 1926 */	0xaf,		/* 175 */
			0x1a,		/* 26 */
/* 1928 */	0x69,		/* 105 */
			0x62,		/* 98 */
/* 1930 */	0xa7,		/* 167 */
			0x79,		/* 121 */
/* 1932 */	0x6c,		/* 108 */
			0x3a,		/* 58 */
/* 1934 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1936 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1938 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1940 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1942) */
/* 1942 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1944 */	NdrFcLong( 0x4ab8ed74 ),	/* 1253633396 */
/* 1948 */	NdrFcShort( 0x3b2f ),	/* 15151 */
/* 1950 */	NdrFcShort( 0x47ab ),	/* 18347 */
/* 1952 */	0xb0,		/* 176 */
			0x81,		/* 129 */
/* 1954 */	0xd6,		/* 214 */
			0x76,		/* 118 */
/* 1956 */	0xc2,		/* 194 */
			0xc4,		/* 196 */
/* 1958 */	0x5a,		/* 90 */
			0xe8,		/* 232 */
/* 1960 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1962 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1964) */
/* 1964 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1966 */	NdrFcLong( 0x861dbf0 ),	/* 140631024 */
/* 1970 */	NdrFcShort( 0x310a ),	/* 12554 */
/* 1972 */	NdrFcShort( 0x4f63 ),	/* 20323 */
/* 1974 */	0xbb,		/* 187 */
			0x23,		/* 35 */
/* 1976 */	0xdc,		/* 220 */
			0x9c,		/* 156 */
/* 1978 */	0x37,		/* 55 */
			0x34,		/* 52 */
/* 1980 */	0x11,		/* 17 */
			0x55,		/* 85 */
/* 1982 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1984 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1986) */
/* 1986 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1988 */	NdrFcLong( 0xf5074ba1 ),	/* -184071263 */
/* 1992 */	NdrFcShort( 0x513a ),	/* 20794 */
/* 1994 */	NdrFcShort( 0x4f33 ),	/* 20275 */
/* 1996 */	0x90,		/* 144 */
			0x91,		/* 145 */
/* 1998 */	0xcc,		/* 204 */
			0x8c,		/* 140 */
/* 2000 */	0xf5,		/* 245 */
			0x6d,		/* 109 */
/* 2002 */	0xaa,		/* 170 */
			0xb1,		/* 177 */
/* 2004 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2006 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2008) */
/* 2008 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2010 */	NdrFcLong( 0x449f2c9c ),	/* 1151282332 */
/* 2014 */	NdrFcShort( 0xfa8e ),	/* -1394 */
/* 2016 */	NdrFcShort( 0x43a1 ),	/* 17313 */
/* 2018 */	0xb3,		/* 179 */
			0x32,		/* 50 */
/* 2020 */	0xaf,		/* 175 */
			0xad,		/* 173 */
/* 2022 */	0x30,		/* 48 */
			0x36,		/* 54 */
/* 2024 */	0xc,		/* 12 */
			0x60,		/* 96 */
/* 2026 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2028 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2030) */
/* 2030 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2032 */	NdrFcLong( 0x37ebffcd ),	/* 938213325 */
/* 2036 */	NdrFcShort( 0x77e ),	/* 1918 */
/* 2038 */	NdrFcShort( 0x4323 ),	/* 17187 */
/* 2040 */	0x83,		/* 131 */
			0xe0,		/* 224 */
/* 2042 */	0x3a,		/* 58 */
			0x82,		/* 130 */
/* 2044 */	0x55,		/* 85 */
			0xaf,		/* 175 */
/* 2046 */	0xb8,		/* 184 */
			0x45,		/* 69 */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            }

        };



/* Standard interface: __MIDL_itf_TransCAD_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IApplication, ver. 0.0,
   GUID={0x19487FB9,0x54F2,0x49A6,{0x9D,0xAE,0xFD,0x9A,0xDD,0xD1,0x2A,0x76}} */

#pragma code_seg(".orpc")
static const unsigned short IApplication_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    108,
    144,
    180,
    216,
    252
    };

static const MIDL_STUBLESS_PROXY_INFO IApplication_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IApplication_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IApplication_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IApplication_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(15) _IApplicationProxyVtbl = 
{
    &IApplication_ProxyInfo,
    &IID_IApplication,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IApplication::get_Visible */ ,
    (void *) (INT_PTR) -1 /* IApplication::put_Visible */ ,
    (void *) (INT_PTR) -1 /* IApplication::get_Application */ ,
    (void *) (INT_PTR) -1 /* IApplication::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IApplication::get_ActiveDocument */ ,
    (void *) (INT_PTR) -1 /* IApplication::get_Documents */ ,
    (void *) (INT_PTR) -1 /* IApplication::get_Name */ ,
    (void *) (INT_PTR) -1 /* IApplication::Quit */
};


static const PRPC_STUB_FUNCTION IApplication_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IApplicationStubVtbl =
{
    &IID_IApplication,
    &IApplication_ServerInfo,
    15,
    &IApplication_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IDocs, ver. 0.0,
   GUID={0xC12FB0DA,0x8BB2,0x4CF4,{0xBC,0x4F,0x7D,0x53,0x8B,0xA3,0x67,0x27}} */

#pragma code_seg(".orpc")
static const unsigned short IDocs_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    282,
    318,
    354,
    390,
    432,
    468,
    504,
    252,
    540
    };

static const MIDL_STUBLESS_PROXY_INFO IDocs_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IDocs_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IDocs_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IDocs_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(16) _IDocsProxyVtbl = 
{
    &IDocs_ProxyInfo,
    &IID_IDocs,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IDocs::get_Application */ ,
    (void *) (INT_PTR) -1 /* IDocs::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IDocs::get_Count */ ,
    (void *) (INT_PTR) -1 /* IDocs::get_Item */ ,
    (void *) (INT_PTR) -1 /* IDocs::get__NewEnum */ ,
    (void *) (INT_PTR) -1 /* IDocs::AddPartDocument */ ,
    (void *) (INT_PTR) -1 /* IDocs::AddAssemDocument */ ,
    (void *) (INT_PTR) -1 /* IDocs::Close */ ,
    (void *) (INT_PTR) -1 /* IDocs::Open */
};


static const PRPC_STUB_FUNCTION IDocs_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IDocsStubVtbl =
{
    &IID_IDocs,
    &IDocs_ServerInfo,
    16,
    &IDocs_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IDoc, ver. 0.0,
   GUID={0xBC5F8AB3,0x0439,0x4F12,{0xAF,0x08,0x8F,0x7D,0x74,0x92,0x89,0x40}} */

#pragma code_seg(".orpc")
static const unsigned short IDoc_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    282,
    318,
    582,
    618,
    654,
    690,
    726,
    756,
    798,
    828
    };

static const MIDL_STUBLESS_PROXY_INFO IDoc_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IDoc_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IDoc_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IDoc_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(17) _IDocProxyVtbl = 
{
    &IDoc_ProxyInfo,
    &IID_IDoc,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IDoc::get_Application */ ,
    (void *) (INT_PTR) -1 /* IDoc::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IDoc::get_FullName */ ,
    (void *) (INT_PTR) -1 /* IDoc::get_Name */ ,
    (void *) (INT_PTR) -1 /* IDoc::get_Path */ ,
    (void *) (INT_PTR) -1 /* IDoc::get_Saved */ ,
    (void *) (INT_PTR) -1 /* IDoc::Activate */ ,
    (void *) (INT_PTR) -1 /* IDoc::Close */ ,
    (void *) (INT_PTR) -1 /* IDoc::Save */ ,
    (void *) (INT_PTR) -1 /* IDoc::SaveAs */
};


static const PRPC_STUB_FUNCTION IDoc_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IDocStubVtbl =
{
    &IID_IDoc,
    &IDoc_ServerInfo,
    17,
    &IDoc_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IPartDocument, ver. 0.0,
   GUID={0xC37F3BC0,0x22DD,0x4E20,{0xA2,0x03,0x28,0x6A,0xCE,0x86,0x27,0x58}} */

#pragma code_seg(".orpc")
static const unsigned short IPartDocument_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    282,
    318,
    582,
    618,
    654,
    690,
    726,
    756,
    798,
    828,
    864,
    900,
    930,
    966,
    1008,
    1038,
    1074,
    1110,
    1146,
    1182,
    1218,
    1254,
    1290,
    1326,
    1362,
    1398
    };

static const MIDL_STUBLESS_PROXY_INFO IPartDocument_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IPartDocument_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPartDocument_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IPartDocument_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(33) _IPartDocumentProxyVtbl = 
{
    &IPartDocument_ProxyInfo,
    &IID_IPartDocument,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IDoc::get_Application */ ,
    (void *) (INT_PTR) -1 /* IDoc::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IDoc::get_FullName */ ,
    (void *) (INT_PTR) -1 /* IDoc::get_Name */ ,
    (void *) (INT_PTR) -1 /* IDoc::get_Path */ ,
    (void *) (INT_PTR) -1 /* IDoc::get_Saved */ ,
    (void *) (INT_PTR) -1 /* IDoc::Activate */ ,
    (void *) (INT_PTR) -1 /* IDoc::Close */ ,
    (void *) (INT_PTR) -1 /* IDoc::Save */ ,
    (void *) (INT_PTR) -1 /* IDoc::SaveAs */ ,
    (void *) (INT_PTR) -1 /* IPartDocument::get_Part */ ,
    (void *) (INT_PTR) -1 /* IPartDocument::Update */ ,
    (void *) (INT_PTR) -1 /* IPartDocument::get_Title */ ,
    (void *) (INT_PTR) -1 /* IPartDocument::DoMeshGeneration */ ,
    (void *) (INT_PTR) -1 /* IPartDocument::GetBBDiagonal */ ,
    (void *) (INT_PTR) -1 /* IPartDocument::ImportFromCATIA */ ,
    (void *) (INT_PTR) -1 /* IPartDocument::ExportToCATIA */ ,
    (void *) (INT_PTR) -1 /* IPartDocument::ImportFromUG */ ,
    (void *) (INT_PTR) -1 /* IPartDocument::ExportToUG */ ,
    (void *) (INT_PTR) -1 /* IPartDocument::ExportToMesh */ ,
    (void *) (INT_PTR) -1 /* IPartDocument::ExportToBrep */ ,
    (void *) (INT_PTR) -1 /* IPartDocument::ExportToXML */ ,
    (void *) (INT_PTR) -1 /* IPartDocument::ImportFromXML */ ,
    (void *) (INT_PTR) -1 /* IPartDocument::RunScriptInterface */ ,
    (void *) (INT_PTR) -1 /* IPartDocument::ImportFromBrep */ ,
    (void *) (INT_PTR) -1 /* IPartDocument::ConvertMesh */
};


static const PRPC_STUB_FUNCTION IPartDocument_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPartDocumentStubVtbl =
{
    &IID_IPartDocument,
    &IPartDocument_ServerInfo,
    33,
    &IPartDocument_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IPart, ver. 0.0,
   GUID={0x37EBFFCD,0x077E,0x4323,{0x83,0xE0,0x3A,0x82,0x55,0xAF,0xB8,0x45}} */

#pragma code_seg(".orpc")
static const unsigned short IPart_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    282,
    318,
    582,
    1440,
    1476,
    1512,
    1554,
    1596,
    1686,
    1776,
    1818,
    1872,
    1908,
    1944,
    1980,
    2016,
    2052,
    2094
    };

static const MIDL_STUBLESS_PROXY_INFO IPart_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IPart_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPart_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IPart_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(25) _IPartProxyVtbl = 
{
    &IPart_ProxyInfo,
    &IID_IPart,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IPart::get_Application */ ,
    (void *) (INT_PTR) -1 /* IPart::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IPart::get_Name */ ,
    (void *) (INT_PTR) -1 /* IPart::get_Features */ ,
    (void *) (INT_PTR) -1 /* IPart::CreateReferences */ ,
    (void *) (INT_PTR) -1 /* IPart::SelectObjectByName */ ,
    (void *) (INT_PTR) -1 /* IPart::SelectBrepByName */ ,
    (void *) (INT_PTR) -1 /* IPart::SelectPlaneByAxis */ ,
    (void *) (INT_PTR) -1 /* IPart::SelectCurveBy3Points */ ,
    (void *) (INT_PTR) -1 /* IPart::SelectFeatureByName */ ,
    (void *) (INT_PTR) -1 /* IPart::SelectCurveByPoint */ ,
    (void *) (INT_PTR) -1 /* IPart::set_Name */ ,
    (void *) (INT_PTR) -1 /* IPart::set_ParentName */ ,
    (void *) (INT_PTR) -1 /* IPart::get_ParentName */ ,
    (void *) (INT_PTR) -1 /* IPart::LoadFromFile */ ,
    (void *) (INT_PTR) -1 /* IPart::IsBrepPart */ ,
    (void *) (INT_PTR) -1 /* IPart::SelectSketchSegmentByName */ ,
    (void *) (INT_PTR) -1 /* IPart::get_Solid */
};


static const PRPC_STUB_FUNCTION IPart_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPartStubVtbl =
{
    &IID_IPart,
    &IPart_ServerInfo,
    25,
    &IPart_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IFeatures, ver. 0.0,
   GUID={0x8084C085,0x5F3F,0x49F0,{0xB8,0x2C,0x22,0x76,0xF1,0x2C,0x88,0xAB}} */

#pragma code_seg(".orpc")
static const unsigned short IFeatures_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2130,
    2166,
    354,
    2202,
    2244,
    2280,
    2328,
    2406,
    2484,
    2544,
    2598,
    2652,
    2730,
    2808,
    2916,
    3030,
    3126,
    3222,
    3282,
    3384,
    3450,
    3504,
    3558,
    3636,
    3696,
    3816,
    3852,
    3888,
    3978,
    4032
    };

static const MIDL_STUBLESS_PROXY_INFO IFeatures_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IFeatures_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IFeatures_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IFeatures_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(37) _IFeaturesProxyVtbl = 
{
    &IFeatures_ProxyInfo,
    &IID_IFeatures,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeatures::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeatures::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeatures::get_Count */ ,
    (void *) (INT_PTR) -1 /* IFeatures::get_Item */ ,
    (void *) (INT_PTR) -1 /* IFeatures::get__NewEnum */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewSketchFeature */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewSolidProtrusionExtrudeFeature */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewSolidCutExtrudeFeature */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewSolidFilletConstantFeature */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewSolidChamferFeature */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewSolidProtrusionSweepFeature */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewSolidProtrusionRevolveFeature */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewSolidCutRevolveFeature */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewSolidOperatePatternRectangularFeature */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewSolidOperatePatternCircularFeature */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewSolidHoleCounterboredFeature */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewSolidHoleCountersunkFeature */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewDatumPlaneOffsetFeature */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewDatumPlaneOffsetFeature2 */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewSolidLoftFacesFeature */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewSolidLoftSectionsFeature */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewSolidCutSweepFeature */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewSolidHoleSimpleFeature */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewSolidShellFeature */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewSolidRevolveWithExternalAxisFeature */ ,
    (void *) (INT_PTR) -1 /* IFeatures::Delete */ ,
    (void *) (INT_PTR) -1 /* IFeatures::DeleteByName */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewSolidDraftFeature */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewSolidOffsetFeature */ ,
    (void *) (INT_PTR) -1 /* IFeatures::AddNewSolidImportedBrepFeature */
};


static const PRPC_STUB_FUNCTION IFeatures_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IFeaturesStubVtbl =
{
    &IID_IFeatures,
    &IFeatures_ServerInfo,
    37,
    &IFeatures_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IFeature, ver. 0.0,
   GUID={0xF898093C,0x1B98,0x420d,{0xB0,0x97,0xC2,0xF1,0xE8,0x8C,0xA3,0x45}} */

#pragma code_seg(".orpc")
static const unsigned short IFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188
    };

static const MIDL_STUBLESS_PROXY_INFO IFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IFeatureProxyVtbl = 
{
    &IFeature_ProxyInfo,
    &IID_IFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */
};


static const PRPC_STUB_FUNCTION IFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IFeatureStubVtbl =
{
    &IID_IFeature,
    &IFeature_ServerInfo,
    12,
    &IFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdDefaultDatumPlaneFeature, ver. 0.0,
   GUID={0xF91A93A8,0x65A9,0x48DC,{0xA4,0x4F,0xBD,0xD0,0x1C,0xBE,0xF5,0x88}} */

#pragma code_seg(".orpc")
static const unsigned short IStdDefaultDatumPlaneFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IStdDefaultDatumPlaneFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdDefaultDatumPlaneFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdDefaultDatumPlaneFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdDefaultDatumPlaneFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IStdDefaultDatumPlaneFeatureProxyVtbl = 
{
    0,
    &IID_IStdDefaultDatumPlaneFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IFeature::get_Application */ ,
    0 /* forced delegation IFeature::get_Parent */ ,
    0 /* forced delegation IFeature::get_Type */ ,
    0 /* forced delegation IFeature::get_Name */ ,
    0 /* forced delegation IFeature::SetName */
};


static const PRPC_STUB_FUNCTION IStdDefaultDatumPlaneFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdDefaultDatumPlaneFeatureStubVtbl =
{
    &IID_IStdDefaultDatumPlaneFeature,
    &IStdDefaultDatumPlaneFeature_ServerInfo,
    12,
    &IStdDefaultDatumPlaneFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSketchFeature, ver. 0.0,
   GUID={0x54A6F7F9,0x5C98,0x4C65,{0x96,0xD5,0xBD,0x43,0xD2,0x48,0xB7,0x88}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSketchFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    4224,
    4260,
    4296,
    4332,
    4368,
    4404,
    4440,
    4476,
    4512,
    4548,
    4590,
    4674,
    1110
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSketchFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSketchFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(25) _IStdSketchFeatureProxyVtbl = 
{
    &IStdSketchFeature_ProxyInfo,
    &IID_IStdSketchFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdSketchFeature::get_Origin */ ,
    (void *) (INT_PTR) -1 /* IStdSketchFeature::get_HDirection */ ,
    (void *) (INT_PTR) -1 /* IStdSketchFeature::get_VDirection */ ,
    (void *) (INT_PTR) -1 /* IStdSketchFeature::get_Geometries */ ,
    (void *) (INT_PTR) -1 /* IStdSketchFeature::get_Constraints */ ,
    (void *) (INT_PTR) -1 /* IStdSketchFeature::get_Sketch */ ,
    (void *) (INT_PTR) -1 /* IStdSketchFeature::get_SketchPlane */ ,
    (void *) (INT_PTR) -1 /* IStdSketchFeature::get_IsInversed */ ,
    (void *) (INT_PTR) -1 /* IStdSketchFeature::OpenEditor */ ,
    (void *) (INT_PTR) -1 /* IStdSketchFeature::OpenEditorEx */ ,
    (void *) (INT_PTR) -1 /* IStdSketchFeature::SetCoordinateSystem */ ,
    (void *) (INT_PTR) -1 /* IStdSketchFeature::GetCoordinateSystem */ ,
    (void *) (INT_PTR) -1 /* IStdSketchFeature::DeleteByName */
};


static const PRPC_STUB_FUNCTION IStdSketchFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSketchFeatureStubVtbl =
{
    &IID_IStdSketchFeature,
    &IStdSketchFeature_ServerInfo,
    25,
    &IStdSketchFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSolidProtrusionExtrudeFeature, ver. 0.0,
   GUID={0x570069A3,0xAC18,0x40E5,{0x9C,0xD4,0xBE,0x1E,0xCF,0x83,0x18,0xE2}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSolidProtrusionExtrudeFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    4758,
    4794,
    4830,
    4866,
    4902,
    4938,
    4974,
    5010,
    5046,
    5082,
    5118,
    5154
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSolidProtrusionExtrudeFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidProtrusionExtrudeFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSolidProtrusionExtrudeFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidProtrusionExtrudeFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(24) _IStdSolidProtrusionExtrudeFeatureProxyVtbl = 
{
    &IStdSolidProtrusionExtrudeFeature_ProxyInfo,
    &IID_IStdSolidProtrusionExtrudeFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionExtrudeFeature::get_ProfileSketch */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionExtrudeFeature::put_ProfileSketch */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionExtrudeFeature::get_IsFlip */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionExtrudeFeature::put_IsFlip */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionExtrudeFeature::get_StartCondition */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionExtrudeFeature::put_StartCondition */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionExtrudeFeature::get_StartDepth */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionExtrudeFeature::put_StartDepth */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionExtrudeFeature::get_EndCondition */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionExtrudeFeature::put_EndCondition */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionExtrudeFeature::get_EndDepth */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionExtrudeFeature::put_EndDepth */
};


static const PRPC_STUB_FUNCTION IStdSolidProtrusionExtrudeFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSolidProtrusionExtrudeFeatureStubVtbl =
{
    &IID_IStdSolidProtrusionExtrudeFeature,
    &IStdSolidProtrusionExtrudeFeature_ServerInfo,
    24,
    &IStdSolidProtrusionExtrudeFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSolidCutExtrudeFeature, ver. 0.0,
   GUID={0x8645E5AD,0x94DF,0x48A8,{0xAD,0x8E,0x9E,0xD7,0x17,0xAC,0x46,0x91}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSolidCutExtrudeFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    4758,
    4794,
    4830,
    4866,
    4902,
    4938,
    4974,
    5010,
    5046,
    5082,
    5118,
    5154
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSolidCutExtrudeFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidCutExtrudeFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSolidCutExtrudeFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidCutExtrudeFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(24) _IStdSolidCutExtrudeFeatureProxyVtbl = 
{
    &IStdSolidCutExtrudeFeature_ProxyInfo,
    &IID_IStdSolidCutExtrudeFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutExtrudeFeature::get_ProfileSketch */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutExtrudeFeature::put_ProfileSketch */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutExtrudeFeature::get_IsFlip */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutExtrudeFeature::put_IsFlip */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutExtrudeFeature::get_StartCondition */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutExtrudeFeature::put_StartCondition */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutExtrudeFeature::get_StartDepth */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutExtrudeFeature::put_StartDepth */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutExtrudeFeature::get_EndCondition */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutExtrudeFeature::put_EndCondition */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutExtrudeFeature::get_EndDepth */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutExtrudeFeature::put_EndDepth */
};


static const PRPC_STUB_FUNCTION IStdSolidCutExtrudeFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSolidCutExtrudeFeatureStubVtbl =
{
    &IID_IStdSolidCutExtrudeFeature,
    &IStdSolidCutExtrudeFeature_ServerInfo,
    24,
    &IStdSolidCutExtrudeFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSolidFilletConstantFeature, ver. 0.0,
   GUID={0x7813D4F8,0x1398,0x4A75,{0x8F,0xEA,0xAF,0x3A,0x26,0x2A,0x98,0x98}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSolidFilletConstantFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    5190,
    5226,
    5262,
    5298,
    4902,
    4938,
    4974,
    5334,
    5370,
    5406,
    5118,
    5442,
    5478,
    5520,
    5562,
    5604,
    5646,
    5688
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSolidFilletConstantFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidFilletConstantFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSolidFilletConstantFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidFilletConstantFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(30) _IStdSolidFilletConstantFeatureProxyVtbl = 
{
    &IStdSolidFilletConstantFeature_ProxyInfo,
    &IID_IStdSolidFilletConstantFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdSolidFilletConstantFeature::get_FilletEdges */ ,
    (void *) (INT_PTR) -1 /* IStdSolidFilletConstantFeature::put_FilletEdges */ ,
    (void *) (INT_PTR) -1 /* IStdSolidFilletConstantFeature::get_Radius */ ,
    (void *) (INT_PTR) -1 /* IStdSolidFilletConstantFeature::put_Radius */ ,
    (void *) (INT_PTR) -1 /* IStdSolidFilletConstantFeature::get_Propagation */ ,
    (void *) (INT_PTR) -1 /* IStdSolidFilletConstantFeature::put_Propagation */ ,
    (void *) (INT_PTR) -1 /* IStdSolidFilletConstantFeature::get_StartPosX */ ,
    (void *) (INT_PTR) -1 /* IStdSolidFilletConstantFeature::get_StartPosY */ ,
    (void *) (INT_PTR) -1 /* IStdSolidFilletConstantFeature::get_StartPosZ */ ,
    (void *) (INT_PTR) -1 /* IStdSolidFilletConstantFeature::get_EndPosX */ ,
    (void *) (INT_PTR) -1 /* IStdSolidFilletConstantFeature::get_EndPosY */ ,
    (void *) (INT_PTR) -1 /* IStdSolidFilletConstantFeature::get_EndPosZ */ ,
    (void *) (INT_PTR) -1 /* IStdSolidFilletConstantFeature::get_StartPosXAt */ ,
    (void *) (INT_PTR) -1 /* IStdSolidFilletConstantFeature::get_StartPosYAt */ ,
    (void *) (INT_PTR) -1 /* IStdSolidFilletConstantFeature::get_StartPosZAt */ ,
    (void *) (INT_PTR) -1 /* IStdSolidFilletConstantFeature::get_EndPosXAt */ ,
    (void *) (INT_PTR) -1 /* IStdSolidFilletConstantFeature::get_EndPosYAt */ ,
    (void *) (INT_PTR) -1 /* IStdSolidFilletConstantFeature::get_EndPosZAt */
};


static const PRPC_STUB_FUNCTION IStdSolidFilletConstantFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSolidFilletConstantFeatureStubVtbl =
{
    &IID_IStdSolidFilletConstantFeature,
    &IStdSolidFilletConstantFeature_ServerInfo,
    30,
    &IStdSolidFilletConstantFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSketchOrigin, ver. 0.0,
   GUID={0x1804C402,0xFBAF,0x438F,{0xB8,0x49,0xAB,0x69,0x40,0x60,0x6E,0x6D}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSketchOrigin_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5730,
    5766,
    582,
    5802
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSketchOrigin_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchOrigin_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSketchOrigin_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchOrigin_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IStdSketchOriginProxyVtbl = 
{
    &IStdSketchOrigin_ProxyInfo,
    &IID_IStdSketchOrigin,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IStdSketchOrigin::get_Application */ ,
    (void *) (INT_PTR) -1 /* IStdSketchOrigin::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IStdSketchOrigin::get_Name */ ,
    (void *) (INT_PTR) -1 /* IStdSketchOrigin::get_SketchFeature */
};


static const PRPC_STUB_FUNCTION IStdSketchOrigin_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSketchOriginStubVtbl =
{
    &IID_IStdSketchOrigin,
    &IStdSketchOrigin_ServerInfo,
    11,
    &IStdSketchOrigin_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSketchVDirection, ver. 0.0,
   GUID={0x1C5FDD6C,0x3075,0x4A54,{0x9E,0x08,0xD9,0x59,0x76,0x9C,0x24,0xC6}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSketchVDirection_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5730,
    5766,
    582,
    5802
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSketchVDirection_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchVDirection_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSketchVDirection_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchVDirection_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IStdSketchVDirectionProxyVtbl = 
{
    &IStdSketchVDirection_ProxyInfo,
    &IID_IStdSketchVDirection,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IStdSketchVDirection::get_Application */ ,
    (void *) (INT_PTR) -1 /* IStdSketchVDirection::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IStdSketchVDirection::get_Name */ ,
    (void *) (INT_PTR) -1 /* IStdSketchVDirection::get_SketchFeature */
};


static const PRPC_STUB_FUNCTION IStdSketchVDirection_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSketchVDirectionStubVtbl =
{
    &IID_IStdSketchVDirection,
    &IStdSketchVDirection_ServerInfo,
    11,
    &IStdSketchVDirection_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSketchHDirection, ver. 0.0,
   GUID={0x5A732443,0x2A35,0x4519,{0x9C,0x1A,0x5C,0x9E,0x25,0x34,0x2D,0x22}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSketchHDirection_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5730,
    5766,
    582,
    5802
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSketchHDirection_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchHDirection_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSketchHDirection_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchHDirection_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IStdSketchHDirectionProxyVtbl = 
{
    &IStdSketchHDirection_ProxyInfo,
    &IID_IStdSketchHDirection,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IStdSketchHDirection::get_Application */ ,
    (void *) (INT_PTR) -1 /* IStdSketchHDirection::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IStdSketchHDirection::get_Name */ ,
    (void *) (INT_PTR) -1 /* IStdSketchHDirection::get_SketchFeature */
};


static const PRPC_STUB_FUNCTION IStdSketchHDirection_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSketchHDirectionStubVtbl =
{
    &IID_IStdSketchHDirection,
    &IStdSketchHDirection_ServerInfo,
    11,
    &IStdSketchHDirection_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSketchGeometries, ver. 0.0,
   GUID={0x7FFE9084,0x7C7B,0x4E75,{0xAB,0xF6,0xC2,0x1A,0x12,0x81,0xE2,0x79}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSketchGeometries_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5730,
    5766,
    354,
    5838,
    5880,
    5916
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSketchGeometries_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchGeometries_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSketchGeometries_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchGeometries_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IStdSketchGeometriesProxyVtbl = 
{
    &IStdSketchGeometries_ProxyInfo,
    &IID_IStdSketchGeometries,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometries::get_Application */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometries::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometries::get_Count */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometries::get_Item */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometries::get__NewEnum */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometries::get_FindByName */
};


static const PRPC_STUB_FUNCTION IStdSketchGeometries_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSketchGeometriesStubVtbl =
{
    &IID_IStdSketchGeometries,
    &IStdSketchGeometries_ServerInfo,
    13,
    &IStdSketchGeometries_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSketchConstraints, ver. 0.0,
   GUID={0x82DD5568,0xC7F7,0x4647,{0xB8,0x15,0x66,0xD4,0xE7,0x2D,0x57,0x38}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSketchConstraints_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5952,
    5988,
    354,
    6024,
    6066,
    6102
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSketchConstraints_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchConstraints_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSketchConstraints_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchConstraints_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IStdSketchConstraintsProxyVtbl = 
{
    &IStdSketchConstraints_ProxyInfo,
    &IID_IStdSketchConstraints,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraints::get_Application */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraints::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraints::get_Count */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraints::get_Item */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraints::get__NewEnum */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraints::get_FindByName */
};


static const PRPC_STUB_FUNCTION IStdSketchConstraints_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSketchConstraintsStubVtbl =
{
    &IID_IStdSketchConstraints,
    &IStdSketchConstraints_ServerInfo,
    13,
    &IStdSketchConstraints_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSketchGeometry, ver. 0.0,
   GUID={0x882DF9BC,0xFF59,0x4E65,{0x8E,0x7B,0x0B,0xCA,0xD3,0xD4,0x15,0x0F}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSketchGeometry_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5952,
    5988,
    4152,
    618,
    6138
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSketchGeometry_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchGeometry_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSketchGeometry_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchGeometry_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IStdSketchGeometryProxyVtbl = 
{
    &IStdSketchGeometry_ProxyInfo,
    &IID_IStdSketchGeometry,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Application */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Type */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Name */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_SketchFeature */
};


static const PRPC_STUB_FUNCTION IStdSketchGeometry_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSketchGeometryStubVtbl =
{
    &IID_IStdSketchGeometry,
    &IStdSketchGeometry_ServerInfo,
    12,
    &IStdSketchGeometry_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSketchConstraint, ver. 0.0,
   GUID={0x23057881,0x19B6,0x4395,{0x9D,0x39,0xB5,0xB6,0x2F,0x75,0xB5,0xEF}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSketchConstraint_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5952,
    5988,
    4152,
    618,
    6138
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSketchConstraint_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchConstraint_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSketchConstraint_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchConstraint_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IStdSketchConstraintProxyVtbl = 
{
    &IStdSketchConstraint_ProxyInfo,
    &IID_IStdSketchConstraint,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Application */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Type */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Name */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_SketchFeature */
};


static const PRPC_STUB_FUNCTION IStdSketchConstraint_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSketchConstraintStubVtbl =
{
    &IID_IStdSketchConstraint,
    &IStdSketchConstraint_ServerInfo,
    12,
    &IStdSketchConstraint_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSketchCircle, ver. 0.0,
   GUID={0xC10C6FDD,0x8B99,0x4449,{0x82,0xF1,0xEA,0xE6,0x74,0x07,0xCE,0x67}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSketchCircle_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5952,
    5988,
    4152,
    618,
    6138,
    6174,
    6210
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSketchCircle_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchCircle_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSketchCircle_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchCircle_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IStdSketchCircleProxyVtbl = 
{
    &IStdSketchCircle_ProxyInfo,
    &IID_IStdSketchCircle,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Application */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Type */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Name */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_SketchFeature */ ,
    (void *) (INT_PTR) -1 /* IStdSketchCircle::get_CenterPoint */ ,
    (void *) (INT_PTR) -1 /* IStdSketchCircle::get_Radius */
};


static const PRPC_STUB_FUNCTION IStdSketchCircle_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSketchCircleStubVtbl =
{
    &IID_IStdSketchCircle,
    &IStdSketchCircle_ServerInfo,
    14,
    &IStdSketchCircle_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSketchCircularArc, ver. 0.0,
   GUID={0xEF6BF49C,0x742C,0x4C57,{0x8A,0x37,0xCE,0xCF,0xE2,0x79,0xDB,0x97}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSketchCircularArc_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5952,
    5988,
    4152,
    618,
    6138,
    6174,
    6246,
    6282,
    6318,
    6354,
    6390
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSketchCircularArc_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchCircularArc_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSketchCircularArc_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchCircularArc_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) _IStdSketchCircularArcProxyVtbl = 
{
    &IStdSketchCircularArc_ProxyInfo,
    &IID_IStdSketchCircularArc,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Application */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Type */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Name */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_SketchFeature */ ,
    (void *) (INT_PTR) -1 /* IStdSketchCircularArc::get_CenterPoint */ ,
    (void *) (INT_PTR) -1 /* IStdSketchCircularArc::get_StartPoint */ ,
    (void *) (INT_PTR) -1 /* IStdSketchCircularArc::get_EndPoint */ ,
    (void *) (INT_PTR) -1 /* IStdSketchCircularArc::get_Radius */ ,
    (void *) (INT_PTR) -1 /* IStdSketchCircularArc::get_StartAngle */ ,
    (void *) (INT_PTR) -1 /* IStdSketchCircularArc::get_EndAngle */
};


static const PRPC_STUB_FUNCTION IStdSketchCircularArc_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSketchCircularArcStubVtbl =
{
    &IID_IStdSketchCircularArc,
    &IStdSketchCircularArc_ServerInfo,
    18,
    &IStdSketchCircularArc_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSketchControlPoint, ver. 0.0,
   GUID={0x3966E6F5,0xEC21,0x413E,{0xB0,0xEA,0xAF,0x50,0x77,0x20,0x59,0x67}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSketchControlPoint_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5952,
    5988,
    4152,
    618,
    6138,
    6426,
    6210
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSketchControlPoint_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchControlPoint_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSketchControlPoint_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchControlPoint_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IStdSketchControlPointProxyVtbl = 
{
    &IStdSketchControlPoint_ProxyInfo,
    &IID_IStdSketchControlPoint,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Application */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Type */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Name */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_SketchFeature */ ,
    (void *) (INT_PTR) -1 /* IStdSketchControlPoint::get_X */ ,
    (void *) (INT_PTR) -1 /* IStdSketchControlPoint::get_Y */
};


static const PRPC_STUB_FUNCTION IStdSketchControlPoint_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSketchControlPointStubVtbl =
{
    &IID_IStdSketchControlPoint,
    &IStdSketchControlPoint_ServerInfo,
    14,
    &IStdSketchControlPoint_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSketchLine, ver. 0.0,
   GUID={0xEE1EB2EA,0xDFA3,0x42A5,{0xA9,0xCB,0x32,0x1F,0xC4,0x0B,0x04,0xDC}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSketchLine_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5952,
    5988,
    4152,
    618,
    6138,
    6174,
    6246
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSketchLine_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchLine_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSketchLine_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchLine_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IStdSketchLineProxyVtbl = 
{
    &IStdSketchLine_ProxyInfo,
    &IID_IStdSketchLine,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Application */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Type */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Name */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_SketchFeature */ ,
    (void *) (INT_PTR) -1 /* IStdSketchLine::get_StartPoint */ ,
    (void *) (INT_PTR) -1 /* IStdSketchLine::get_EndPoint */
};


static const PRPC_STUB_FUNCTION IStdSketchLine_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSketchLineStubVtbl =
{
    &IID_IStdSketchLine,
    &IStdSketchLine_ServerInfo,
    14,
    &IStdSketchLine_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IReferences, ver. 0.0,
   GUID={0x2A7E4FCC,0x4DF6,0x4E4F,{0x81,0xF8,0x80,0xC0,0x48,0x31,0x61,0x56}} */

#pragma code_seg(".orpc")
static const unsigned short IReferences_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6462,
    6498,
    6540,
    6576
    };

static const MIDL_STUBLESS_PROXY_INFO IReferences_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IReferences_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IReferences_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IReferences_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IReferencesProxyVtbl = 
{
    &IReferences_ProxyInfo,
    &IID_IReferences,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IReferences::get_Count */ ,
    (void *) (INT_PTR) -1 /* IReferences::get_Item */ ,
    (void *) (INT_PTR) -1 /* IReferences::get__NewEnum */ ,
    (void *) (INT_PTR) -1 /* IReferences::Add */
};


static const PRPC_STUB_FUNCTION IReferences_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IReferencesStubVtbl =
{
    &IID_IReferences,
    &IReferences_ServerInfo,
    11,
    &IReferences_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IReference, ver. 0.0,
   GUID={0xA0CDFCD7,0xC97B,0x426F,{0x85,0x28,0x0A,0xA0,0x32,0x1E,0xA0,0xFA}} */

#pragma code_seg(".orpc")
static const unsigned short IReference_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6612,
    6648,
    582
    };

static const MIDL_STUBLESS_PROXY_INFO IReference_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IReference_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IReference_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IReference_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IReferenceProxyVtbl = 
{
    &IReference_ProxyInfo,
    &IID_IReference,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IReference::get_Type */ ,
    (void *) (INT_PTR) -1 /* IReference::get_Name */ ,
    (void *) (INT_PTR) -1 /* IReference::get_ReferenceeName */
};


static const PRPC_STUB_FUNCTION IReference_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IReferenceStubVtbl =
{
    &IID_IReference,
    &IReference_ServerInfo,
    10,
    &IReference_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IExplicitModelObject, ver. 0.0,
   GUID={0x86E4FF07,0x1F31,0x42AD,{0xA9,0x22,0x31,0x5C,0x8D,0xD5,0x79,0x43}} */

#pragma code_seg(".orpc")
static const unsigned short IExplicitModelObject_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5952,
    5988,
    4152,
    6684,
    654
    };

static const MIDL_STUBLESS_PROXY_INFO IExplicitModelObject_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IExplicitModelObject_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IExplicitModelObject_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IExplicitModelObject_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IExplicitModelObjectProxyVtbl = 
{
    &IExplicitModelObject_ProxyInfo,
    &IID_IExplicitModelObject,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IExplicitModelObject::get_Application */ ,
    (void *) (INT_PTR) -1 /* IExplicitModelObject::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IExplicitModelObject::get_Type */ ,
    (void *) (INT_PTR) -1 /* IExplicitModelObject::get_Creator */ ,
    (void *) (INT_PTR) -1 /* IExplicitModelObject::get_Name */
};


static const PRPC_STUB_FUNCTION IExplicitModelObject_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IExplicitModelObjectStubVtbl =
{
    &IID_IExplicitModelObject,
    &IExplicitModelObject_ServerInfo,
    12,
    &IExplicitModelObject_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ISketch, ver. 0.0,
   GUID={0x0235D6AB,0xE6F9,0x4665,{0x98,0xAF,0x75,0xB7,0xD5,0x6A,0x01,0x29}} */

#pragma code_seg(".orpc")
static const unsigned short ISketch_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5952,
    5988,
    4152,
    6684,
    654,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ISketch_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &ISketch_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISketch_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &ISketch_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _ISketchProxyVtbl = 
{
    0,
    &IID_ISketch,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IExplicitModelObject::get_Application */ ,
    0 /* forced delegation IExplicitModelObject::get_Parent */ ,
    0 /* forced delegation IExplicitModelObject::get_Type */ ,
    0 /* forced delegation IExplicitModelObject::get_Creator */ ,
    0 /* forced delegation IExplicitModelObject::get_Name */
};


static const PRPC_STUB_FUNCTION ISketch_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ISketchStubVtbl =
{
    &IID_ISketch,
    &ISketch_ServerInfo,
    12,
    &ISketch_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ISketchEditor, ver. 0.0,
   GUID={0x57FAE9E3,0xF8D4,0x49B2,{0xAB,0x0A,0xB8,0x8F,0x64,0x0B,0x7C,0xF2}} */

#pragma code_seg(".orpc")
static const unsigned short ISketchEditor_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6720,
    6750,
    6816,
    6876,
    6948,
    7026,
    7104,
    7170,
    7236,
    7290,
    7344,
    7392,
    1908
    };

static const MIDL_STUBLESS_PROXY_INFO ISketchEditor_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &ISketchEditor_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISketchEditor_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &ISketchEditor_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(20) _ISketchEditorProxyVtbl = 
{
    &ISketchEditor_ProxyInfo,
    &IID_ISketchEditor,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ISketchEditor::Close */ ,
    (void *) (INT_PTR) -1 /* ISketchEditor::Create2DLine2Points */ ,
    (void *) (INT_PTR) -1 /* ISketchEditor::Create2DCircleCenterPoint */ ,
    (void *) (INT_PTR) -1 /* ISketchEditor::Create2DArc */ ,
    (void *) (INT_PTR) -1 /* ISketchEditor::Create2DArcCenterStartEnd */ ,
    (void *) (INT_PTR) -1 /* ISketchEditor::Create2DArc3Points */ ,
    (void *) (INT_PTR) -1 /* ISketchEditor::Create2DCenterline2Points */ ,
    (void *) (INT_PTR) -1 /* ISketchEditor::CreateCoincidentSamePoints */ ,
    (void *) (INT_PTR) -1 /* ISketchEditor::CreatePerpendicular */ ,
    (void *) (INT_PTR) -1 /* ISketchEditor::CreateParallel */ ,
    (void *) (INT_PTR) -1 /* ISketchEditor::CreateHorizontal */ ,
    (void *) (INT_PTR) -1 /* ISketchEditor::CreateVertical */ ,
    (void *) (INT_PTR) -1 /* ISketchEditor::DeleteByName */
};


static const PRPC_STUB_FUNCTION ISketchEditor_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ISketchEditorStubVtbl =
{
    &IID_ISketchEditor,
    &ISketchEditor_ServerInfo,
    20,
    &ISketchEditor_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSolidProtrusionSweepFeature, ver. 0.0,
   GUID={0x62F39890,0x0584,0x4142,{0xA8,0xDE,0xE4,0x19,0xF9,0xBF,0x73,0x01}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSolidProtrusionSweepFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    7440,
    7476,
    7512,
    7548
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSolidProtrusionSweepFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidProtrusionSweepFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSolidProtrusionSweepFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidProtrusionSweepFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(16) _IStdSolidProtrusionSweepFeatureProxyVtbl = 
{
    &IStdSolidProtrusionSweepFeature_ProxyInfo,
    &IID_IStdSolidProtrusionSweepFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionSweepFeature::get_ProfileSketch */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionSweepFeature::put_ProfileSketch */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionSweepFeature::get_GuideCurve */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionSweepFeature::put_GuideCurve */
};


static const PRPC_STUB_FUNCTION IStdSolidProtrusionSweepFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSolidProtrusionSweepFeatureStubVtbl =
{
    &IID_IStdSolidProtrusionSweepFeature,
    &IStdSolidProtrusionSweepFeature_ServerInfo,
    16,
    &IStdSolidProtrusionSweepFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSolidProtrusionRevolveFeature, ver. 0.0,
   GUID={0xB8AAC9D3,0x8453,0x48C9,{0xAC,0x93,0xA1,0x16,0xE8,0x91,0x10,0x1E}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSolidProtrusionRevolveFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    7440,
    7476,
    4830,
    4866,
    4902,
    6390,
    7584,
    7620,
    5370,
    7656
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSolidProtrusionRevolveFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidProtrusionRevolveFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSolidProtrusionRevolveFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidProtrusionRevolveFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(22) _IStdSolidProtrusionRevolveFeatureProxyVtbl = 
{
    &IStdSolidProtrusionRevolveFeature_ProxyInfo,
    &IID_IStdSolidProtrusionRevolveFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionRevolveFeature::get_ProfileSketch */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionRevolveFeature::put_ProfileSketch */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionRevolveFeature::get_IsFlip */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionRevolveFeature::put_IsFlip */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionRevolveFeature::get_StartCondition */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionRevolveFeature::get_StartAngle */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionRevolveFeature::put_StartAngle */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionRevolveFeature::get_EndCondition */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionRevolveFeature::get_EndAngle */ ,
    (void *) (INT_PTR) -1 /* IStdSolidProtrusionRevolveFeature::put_EndAngle */
};


static const PRPC_STUB_FUNCTION IStdSolidProtrusionRevolveFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSolidProtrusionRevolveFeatureStubVtbl =
{
    &IID_IStdSolidProtrusionRevolveFeature,
    &IStdSolidProtrusionRevolveFeature_ServerInfo,
    22,
    &IStdSolidProtrusionRevolveFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSketchCenterline, ver. 0.0,
   GUID={0x2600ED0F,0x883F,0x478A,{0xAF,0xDA,0xA7,0x74,0x3A,0x1A,0xDF,0x3A}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSketchCenterline_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5952,
    5988,
    4152,
    618,
    6138,
    7692,
    7728
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSketchCenterline_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchCenterline_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSketchCenterline_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchCenterline_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IStdSketchCenterlineProxyVtbl = 
{
    &IStdSketchCenterline_ProxyInfo,
    &IID_IStdSketchCenterline,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Application */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Type */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_Name */ ,
    (void *) (INT_PTR) -1 /* IStdSketchGeometry::get_SketchFeature */ ,
    (void *) (INT_PTR) -1 /* IStdSketchCenterline::get_StartPoint */ ,
    (void *) (INT_PTR) -1 /* IStdSketchCenterline::get_EndPoint */
};


static const PRPC_STUB_FUNCTION IStdSketchCenterline_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSketchCenterlineStubVtbl =
{
    &IID_IStdSketchCenterline,
    &IStdSketchCenterline_ServerInfo,
    14,
    &IStdSketchCenterline_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSolidOperatePatternRectangularFeature, ver. 0.0,
   GUID={0x929007FB,0x0FF4,0x477A,{0xBC,0x6B,0x9D,0xB6,0x3B,0x4F,0x64,0x07}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSolidOperatePatternRectangularFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    7764,
    7800,
    5262,
    5298,
    7836,
    7884,
    7920,
    5334,
    7956,
    7992,
    8040,
    8076,
    8112,
    8160
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSolidOperatePatternRectangularFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidOperatePatternRectangularFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSolidOperatePatternRectangularFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidOperatePatternRectangularFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(26) _IStdSolidOperatePatternRectangularFeatureProxyVtbl = 
{
    &IStdSolidOperatePatternRectangularFeature_ProxyInfo,
    &IID_IStdSolidOperatePatternRectangularFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternRectangularFeature::get_TargetFeatures */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternRectangularFeature::put_TargetFeatures */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternRectangularFeature::get_ColumnSpacing */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternRectangularFeature::put_ColumnSpacing */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternRectangularFeature::get_ColumnDirection */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternRectangularFeature::get_ColumnNumber */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternRectangularFeature::put_ColumnNumber */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternRectangularFeature::get_RowSpacing */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternRectangularFeature::put_RowSpacing */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternRectangularFeature::get_RowDirection */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternRectangularFeature::get_RowNumber */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternRectangularFeature::put_RowNumber */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternRectangularFeature::PutColumnDirection */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternRectangularFeature::PutRowDirection */
};


static const PRPC_STUB_FUNCTION IStdSolidOperatePatternRectangularFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSolidOperatePatternRectangularFeatureStubVtbl =
{
    &IID_IStdSolidOperatePatternRectangularFeature,
    &IStdSolidOperatePatternRectangularFeature_ServerInfo,
    26,
    &IStdSolidOperatePatternRectangularFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSolidChamferFeature, ver. 0.0,
   GUID={0x7397F21A,0xE19F,0x4EDA,{0xB8,0x9F,0xE1,0x84,0x05,0xBD,0x37,0x60}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSolidChamferFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    8208,
    8244,
    8280,
    8316,
    6354,
    8352,
    4974,
    5334,
    5370,
    5406,
    5118,
    5442,
    8388,
    5520,
    5562,
    5604,
    5646,
    5688,
    8424
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSolidChamferFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidChamferFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSolidChamferFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidChamferFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(31) _IStdSolidChamferFeatureProxyVtbl = 
{
    &IStdSolidChamferFeature_ProxyInfo,
    &IID_IStdSolidChamferFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdSolidChamferFeature::get_ChamferType */ ,
    (void *) (INT_PTR) -1 /* IStdSolidChamferFeature::get_SelectedEdges */ ,
    (void *) (INT_PTR) -1 /* IStdSolidChamferFeature::put_SelectedEdges */ ,
    (void *) (INT_PTR) -1 /* IStdSolidChamferFeature::get_SelectedFace */ ,
    (void *) (INT_PTR) -1 /* IStdSolidChamferFeature::get_Length */ ,
    (void *) (INT_PTR) -1 /* IStdSolidChamferFeature::put_Length */ ,
    (void *) (INT_PTR) -1 /* IStdSolidChamferFeature::get_Value */ ,
    (void *) (INT_PTR) -1 /* IStdSolidChamferFeature::get_StartPosX */ ,
    (void *) (INT_PTR) -1 /* IStdSolidChamferFeature::get_StartPosY */ ,
    (void *) (INT_PTR) -1 /* IStdSolidChamferFeature::get_StartPosZ */ ,
    (void *) (INT_PTR) -1 /* IStdSolidChamferFeature::get_EndPosX */ ,
    (void *) (INT_PTR) -1 /* IStdSolidChamferFeature::get_EndPosY */ ,
    (void *) (INT_PTR) -1 /* IStdSolidChamferFeature::get_EndPosZ */ ,
    (void *) (INT_PTR) -1 /* IStdSolidChamferFeature::get_StartPosXAt */ ,
    (void *) (INT_PTR) -1 /* IStdSolidChamferFeature::get_StartPosYAt */ ,
    (void *) (INT_PTR) -1 /* IStdSolidChamferFeature::get_StartPosZAt */ ,
    (void *) (INT_PTR) -1 /* IStdSolidChamferFeature::get_EndPosXAt */ ,
    (void *) (INT_PTR) -1 /* IStdSolidChamferFeature::get_EndPosYAt */ ,
    (void *) (INT_PTR) -1 /* IStdSolidChamferFeature::get_EndPosZAt */
};


static const PRPC_STUB_FUNCTION IStdSolidChamferFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSolidChamferFeatureStubVtbl =
{
    &IID_IStdSolidChamferFeature,
    &IStdSolidChamferFeature_ServerInfo,
    31,
    &IStdSolidChamferFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSolidCutRevolveFeature, ver. 0.0,
   GUID={0x1B8E8E40,0x7D68,0x4387,{0xA1,0x3F,0xD8,0xE2,0x04,0x21,0x26,0x07}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSolidCutRevolveFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    7440,
    7476,
    4830,
    4866,
    4902,
    6390,
    7584,
    7620,
    5370,
    7656
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSolidCutRevolveFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidCutRevolveFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSolidCutRevolveFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidCutRevolveFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(22) _IStdSolidCutRevolveFeatureProxyVtbl = 
{
    &IStdSolidCutRevolveFeature_ProxyInfo,
    &IID_IStdSolidCutRevolveFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutRevolveFeature::get_ProfileSketch */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutRevolveFeature::put_ProfileSketch */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutRevolveFeature::get_IsFlip */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutRevolveFeature::put_IsFlip */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutRevolveFeature::get_StartCondition */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutRevolveFeature::get_StartAngle */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutRevolveFeature::put_StartAngle */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutRevolveFeature::get_EndCondition */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutRevolveFeature::get_EndAngle */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutRevolveFeature::put_EndAngle */
};


static const PRPC_STUB_FUNCTION IStdSolidCutRevolveFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSolidCutRevolveFeatureStubVtbl =
{
    &IID_IStdSolidCutRevolveFeature,
    &IStdSolidCutRevolveFeature_ServerInfo,
    22,
    &IStdSolidCutRevolveFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSolidOperatePatternCircularFeature, ver. 0.0,
   GUID={0x1B44E76F,0x21AD,0x482B,{0xA2,0xD4,0x95,0x03,0x75,0xEC,0x2D,0x61}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSolidOperatePatternCircularFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    7764,
    7800,
    8466,
    8532,
    8568,
    6390,
    7584,
    8604,
    8640,
    5406,
    8676,
    8712,
    8748,
    8784
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSolidOperatePatternCircularFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidOperatePatternCircularFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSolidOperatePatternCircularFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidOperatePatternCircularFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(26) _IStdSolidOperatePatternCircularFeatureProxyVtbl = 
{
    &IStdSolidOperatePatternCircularFeature_ProxyInfo,
    &IID_IStdSolidOperatePatternCircularFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternCircularFeature::get_TargetFeatures */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternCircularFeature::put_TargetFeatures */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternCircularFeature::get_CenterAxis */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternCircularFeature::get_AngleNumber */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternCircularFeature::put_AngleNumber */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternCircularFeature::get_AngleIncrement */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternCircularFeature::put_AngleIncrement */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternCircularFeature::get_RadialNumber */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternCircularFeature::put_RadialNumber */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternCircularFeature::get_RadialSpacing */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternCircularFeature::put_RadialSpacing */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternCircularFeature::get_IsRadialAnignment */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternCircularFeature::put_IsRadialAnignment */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOperatePatternCircularFeature::PutCenterAxis */
};


static const PRPC_STUB_FUNCTION IStdSolidOperatePatternCircularFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSolidOperatePatternCircularFeatureStubVtbl =
{
    &IID_IStdSolidOperatePatternCircularFeature,
    &IStdSolidOperatePatternCircularFeature_ServerInfo,
    26,
    &IStdSolidOperatePatternCircularFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSolidHoleCounterboredFeature, ver. 0.0,
   GUID={0x5089AE2E,0x41C5,0x4DD3,{0xBF,0xFA,0x6B,0x5E,0xCF,0xF9,0x91,0x41}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSolidHoleCounterboredFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    7440,
    7476,
    8850,
    6318,
    8898,
    6390,
    7584,
    5334,
    7956,
    5406,
    8676,
    5442,
    8934,
    8160
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSolidHoleCounterboredFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidHoleCounterboredFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSolidHoleCounterboredFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidHoleCounterboredFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(26) _IStdSolidHoleCounterboredFeatureProxyVtbl = 
{
    &IStdSolidHoleCounterboredFeature_ProxyInfo,
    &IID_IStdSolidHoleCounterboredFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCounterboredFeature::get_TargetFace */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCounterboredFeature::put_TargetFace */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCounterboredFeature::get_CenterPoint */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCounterboredFeature::get_StartRadius */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCounterboredFeature::put_StartRadius */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCounterboredFeature::get_StartDepth */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCounterboredFeature::put_StartDepth */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCounterboredFeature::get_EndRadius */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCounterboredFeature::put_EndRadius */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCounterboredFeature::get_EndDepth */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCounterboredFeature::put_EndDepth */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCounterboredFeature::get_Angle */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCounterboredFeature::put_Angle */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCounterboredFeature::PutCenterPoint */
};


static const PRPC_STUB_FUNCTION IStdSolidHoleCounterboredFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSolidHoleCounterboredFeatureStubVtbl =
{
    &IID_IStdSolidHoleCounterboredFeature,
    &IStdSolidHoleCounterboredFeature_ServerInfo,
    26,
    &IStdSolidHoleCounterboredFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSolidHoleCountersunkFeature, ver. 0.0,
   GUID={0x9980B5BE,0x2421,0x46DC,{0x94,0x25,0x84,0x58,0x80,0x82,0xDD,0x28}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSolidHoleCountersunkFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    7440,
    7476,
    8850,
    6318,
    8898,
    6390,
    7584,
    5334,
    7956,
    5406,
    8676,
    5442,
    8934,
    8160
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSolidHoleCountersunkFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidHoleCountersunkFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSolidHoleCountersunkFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidHoleCountersunkFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(26) _IStdSolidHoleCountersunkFeatureProxyVtbl = 
{
    &IStdSolidHoleCountersunkFeature_ProxyInfo,
    &IID_IStdSolidHoleCountersunkFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCountersunkFeature::get_TargetFace */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCountersunkFeature::put_TargetFace */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCountersunkFeature::get_CenterPoint */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCountersunkFeature::get_Radius */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCountersunkFeature::put_Radius */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCountersunkFeature::get_Depth */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCountersunkFeature::put_Depth */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCountersunkFeature::get_SinkRadius */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCountersunkFeature::put_SinkRadius */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCountersunkFeature::get_SinkAngle */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCountersunkFeature::put_SinkAngle */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCountersunkFeature::get_BottomAngle */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCountersunkFeature::put_BottomAngle */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleCountersunkFeature::PutCenterPoint */
};


static const PRPC_STUB_FUNCTION IStdSolidHoleCountersunkFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSolidHoleCountersunkFeatureStubVtbl =
{
    &IID_IStdSolidHoleCountersunkFeature,
    &IStdSolidHoleCountersunkFeature_ServerInfo,
    26,
    &IStdSolidHoleCountersunkFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSketchCoincidentSamePoints, ver. 0.0,
   GUID={0x16103C6E,0xB6D1,0x4F7C,{0xBD,0xA8,0xE6,0xCF,0x51,0x12,0xAC,0xCD}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSketchCoincidentSamePoints_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5952,
    5988,
    4152,
    618,
    6138,
    7440,
    8970,
    7512,
    9006
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSketchCoincidentSamePoints_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchCoincidentSamePoints_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSketchCoincidentSamePoints_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchCoincidentSamePoints_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(16) _IStdSketchCoincidentSamePointsProxyVtbl = 
{
    &IStdSketchCoincidentSamePoints_ProxyInfo,
    &IID_IStdSketchCoincidentSamePoints,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Application */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Type */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Name */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_SketchFeature */ ,
    (void *) (INT_PTR) -1 /* IStdSketchCoincidentSamePoints::get_FirstObject */ ,
    (void *) (INT_PTR) -1 /* IStdSketchCoincidentSamePoints::get_FirstType */ ,
    (void *) (INT_PTR) -1 /* IStdSketchCoincidentSamePoints::get_SecondObject */ ,
    (void *) (INT_PTR) -1 /* IStdSketchCoincidentSamePoints::get_SecondType */
};


static const PRPC_STUB_FUNCTION IStdSketchCoincidentSamePoints_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSketchCoincidentSamePointsStubVtbl =
{
    &IID_IStdSketchCoincidentSamePoints,
    &IStdSketchCoincidentSamePoints_ServerInfo,
    16,
    &IStdSketchCoincidentSamePoints_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSketchParallel, ver. 0.0,
   GUID={0xABA27711,0x124A,0x47C3,{0xBB,0x88,0x3D,0x27,0x03,0xF8,0x79,0x84}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSketchParallel_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5952,
    5988,
    4152,
    618,
    6138,
    7440,
    9042
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSketchParallel_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchParallel_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSketchParallel_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchParallel_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IStdSketchParallelProxyVtbl = 
{
    &IStdSketchParallel_ProxyInfo,
    &IID_IStdSketchParallel,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Application */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Type */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Name */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_SketchFeature */ ,
    (void *) (INT_PTR) -1 /* IStdSketchParallel::get_ReferenceEdit */ ,
    (void *) (INT_PTR) -1 /* IStdSketchParallel::get_Target */
};


static const PRPC_STUB_FUNCTION IStdSketchParallel_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSketchParallelStubVtbl =
{
    &IID_IStdSketchParallel,
    &IStdSketchParallel_ServerInfo,
    14,
    &IStdSketchParallel_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSketchPerpendicular, ver. 0.0,
   GUID={0xFF3A0BDD,0x1AA5,0x48FA,{0x9F,0x40,0x22,0x8A,0x00,0xC6,0x4A,0x47}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSketchPerpendicular_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5952,
    5988,
    4152,
    618,
    6138,
    7440,
    9042
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSketchPerpendicular_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchPerpendicular_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSketchPerpendicular_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchPerpendicular_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IStdSketchPerpendicularProxyVtbl = 
{
    &IStdSketchPerpendicular_ProxyInfo,
    &IID_IStdSketchPerpendicular,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Application */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Type */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Name */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_SketchFeature */ ,
    (void *) (INT_PTR) -1 /* IStdSketchPerpendicular::get_ReferenceEdit */ ,
    (void *) (INT_PTR) -1 /* IStdSketchPerpendicular::get_Target */
};


static const PRPC_STUB_FUNCTION IStdSketchPerpendicular_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSketchPerpendicularStubVtbl =
{
    &IID_IStdSketchPerpendicular,
    &IStdSketchPerpendicular_ServerInfo,
    14,
    &IStdSketchPerpendicular_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSketchHorizontal, ver. 0.0,
   GUID={0x3C500269,0x634E,0x4018,{0x95,0x98,0x91,0x6C,0x70,0x35,0xCC,0xAA}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSketchHorizontal_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5952,
    5988,
    4152,
    618,
    6138,
    7440
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSketchHorizontal_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchHorizontal_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSketchHorizontal_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchHorizontal_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IStdSketchHorizontalProxyVtbl = 
{
    &IStdSketchHorizontal_ProxyInfo,
    &IID_IStdSketchHorizontal,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Application */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Type */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Name */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_SketchFeature */ ,
    (void *) (INT_PTR) -1 /* IStdSketchHorizontal::get_Target */
};


static const PRPC_STUB_FUNCTION IStdSketchHorizontal_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSketchHorizontalStubVtbl =
{
    &IID_IStdSketchHorizontal,
    &IStdSketchHorizontal_ServerInfo,
    13,
    &IStdSketchHorizontal_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSketchVertical, ver. 0.0,
   GUID={0x07F4BA82,0xAA63,0x4C00,{0xB6,0x40,0x0D,0x00,0x04,0x4F,0xB2,0xDC}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSketchVertical_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5952,
    5988,
    4152,
    618,
    6138,
    7440
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSketchVertical_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchVertical_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSketchVertical_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSketchVertical_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IStdSketchVerticalProxyVtbl = 
{
    &IStdSketchVertical_ProxyInfo,
    &IID_IStdSketchVertical,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Application */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Type */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_Name */ ,
    (void *) (INT_PTR) -1 /* IStdSketchConstraint::get_SketchFeature */ ,
    (void *) (INT_PTR) -1 /* IStdSketchVertical::get_Target */
};


static const PRPC_STUB_FUNCTION IStdSketchVertical_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSketchVerticalStubVtbl =
{
    &IID_IStdSketchVertical,
    &IStdSketchVertical_ServerInfo,
    13,
    &IStdSketchVertical_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdDatumPlaneOffsetFeature, ver. 0.0,
   GUID={0x5A9FB9F5,0x92A5,0x4E46,{0xB5,0xA5,0xD9,0xC1,0x63,0xA1,0xFD,0x8C}} */

#pragma code_seg(".orpc")
static const unsigned short IStdDatumPlaneOffsetFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    7440,
    7476,
    4830,
    4866,
    6354,
    8352,
    9078,
    9114,
    9162,
    7992,
    9210,
    9258,
    8112
    };

static const MIDL_STUBLESS_PROXY_INFO IStdDatumPlaneOffsetFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdDatumPlaneOffsetFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdDatumPlaneOffsetFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdDatumPlaneOffsetFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(25) _IStdDatumPlaneOffsetFeatureProxyVtbl = 
{
    &IStdDatumPlaneOffsetFeature_ProxyInfo,
    &IID_IStdDatumPlaneOffsetFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdDatumPlaneOffsetFeature::get_SelectedPlane */ ,
    (void *) (INT_PTR) -1 /* IStdDatumPlaneOffsetFeature::put_SelectedPlane */ ,
    (void *) (INT_PTR) -1 /* IStdDatumPlaneOffsetFeature::get_IsFlip */ ,
    (void *) (INT_PTR) -1 /* IStdDatumPlaneOffsetFeature::put_IsFlip */ ,
    (void *) (INT_PTR) -1 /* IStdDatumPlaneOffsetFeature::get_Distance */ ,
    (void *) (INT_PTR) -1 /* IStdDatumPlaneOffsetFeature::put_Distance */ ,
    (void *) (INT_PTR) -1 /* IStdDatumPlaneOffsetFeature::get_IsFree */ ,
    (void *) (INT_PTR) -1 /* IStdDatumPlaneOffsetFeature::get_Origin */ ,
    (void *) (INT_PTR) -1 /* IStdDatumPlaneOffsetFeature::get_XDirection */ ,
    (void *) (INT_PTR) -1 /* IStdDatumPlaneOffsetFeature::get_YDirection */ ,
    (void *) (INT_PTR) -1 /* IStdDatumPlaneOffsetFeature::PutOrigin */ ,
    (void *) (INT_PTR) -1 /* IStdDatumPlaneOffsetFeature::PutXDirection */ ,
    (void *) (INT_PTR) -1 /* IStdDatumPlaneOffsetFeature::PutYDirection */
};


static const PRPC_STUB_FUNCTION IStdDatumPlaneOffsetFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdDatumPlaneOffsetFeatureStubVtbl =
{
    &IID_IStdDatumPlaneOffsetFeature,
    &IStdDatumPlaneOffsetFeature_ServerInfo,
    25,
    &IStdDatumPlaneOffsetFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSolidLoftFacesFeature, ver. 0.0,
   GUID={0xB1A7FE7F,0x54BF,0x4CE5,{0x89,0x47,0x83,0x13,0x58,0xC3,0x8D,0x56}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSolidLoftFacesFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    7440,
    6210,
    7512,
    6318
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSolidLoftFacesFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidLoftFacesFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSolidLoftFacesFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidLoftFacesFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(16) _IStdSolidLoftFacesFeatureProxyVtbl = 
{
    &IStdSolidLoftFacesFeature_ProxyInfo,
    &IID_IStdSolidLoftFacesFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdSolidLoftFacesFeature::get_Face1 */ ,
    (void *) (INT_PTR) -1 /* IStdSolidLoftFacesFeature::get_Param1 */ ,
    (void *) (INT_PTR) -1 /* IStdSolidLoftFacesFeature::get_Face2 */ ,
    (void *) (INT_PTR) -1 /* IStdSolidLoftFacesFeature::get_Param2 */
};


static const PRPC_STUB_FUNCTION IStdSolidLoftFacesFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSolidLoftFacesFeatureStubVtbl =
{
    &IID_IStdSolidLoftFacesFeature,
    &IStdSolidLoftFacesFeature_ServerInfo,
    16,
    &IStdSolidLoftFacesFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSolidLoftSectionsFeature, ver. 0.0,
   GUID={0x09BE8C17,0xDB20,0x4474,{0x8B,0xE9,0xF4,0xD9,0x4E,0x27,0x26,0x1A}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSolidLoftSectionsFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    7764,
    9306
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSolidLoftSectionsFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidLoftSectionsFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSolidLoftSectionsFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidLoftSectionsFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IStdSolidLoftSectionsFeatureProxyVtbl = 
{
    &IStdSolidLoftSectionsFeature_ProxyInfo,
    &IID_IStdSolidLoftSectionsFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdSolidLoftSectionsFeature::get_References */ ,
    (void *) (INT_PTR) -1 /* IStdSolidLoftSectionsFeature::get_IsCut */
};


static const PRPC_STUB_FUNCTION IStdSolidLoftSectionsFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSolidLoftSectionsFeatureStubVtbl =
{
    &IID_IStdSolidLoftSectionsFeature,
    &IStdSolidLoftSectionsFeature_ServerInfo,
    14,
    &IStdSolidLoftSectionsFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSolidCutSweepFeature, ver. 0.0,
   GUID={0xCF090569,0x05D8,0x44A0,{0x86,0x56,0x82,0xBD,0xFE,0x1B,0x79,0xA6}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSolidCutSweepFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    7440,
    7476,
    7512,
    7548
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSolidCutSweepFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidCutSweepFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSolidCutSweepFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidCutSweepFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(16) _IStdSolidCutSweepFeatureProxyVtbl = 
{
    &IStdSolidCutSweepFeature_ProxyInfo,
    &IID_IStdSolidCutSweepFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutSweepFeature::get_ProfileSketch */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutSweepFeature::put_ProfileSketch */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutSweepFeature::get_GuideCurve */ ,
    (void *) (INT_PTR) -1 /* IStdSolidCutSweepFeature::put_GuideCurve */
};


static const PRPC_STUB_FUNCTION IStdSolidCutSweepFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSolidCutSweepFeatureStubVtbl =
{
    &IID_IStdSolidCutSweepFeature,
    &IStdSolidCutSweepFeature_ServerInfo,
    16,
    &IStdSolidCutSweepFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSolidHoleSimpleFeature, ver. 0.0,
   GUID={0xFCCF7496,0x9645,0x4B6D,{0x9C,0x4D,0x06,0x7D,0x3D,0x1D,0x60,0xAF}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSolidHoleSimpleFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    7440,
    7476,
    8850,
    6318,
    8898,
    6390,
    7584,
    9342
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSolidHoleSimpleFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidHoleSimpleFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSolidHoleSimpleFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidHoleSimpleFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(20) _IStdSolidHoleSimpleFeatureProxyVtbl = 
{
    &IStdSolidHoleSimpleFeature_ProxyInfo,
    &IID_IStdSolidHoleSimpleFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleSimpleFeature::get_TargetFace */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleSimpleFeature::put_TargetFace */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleSimpleFeature::get_CenterPoint */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleSimpleFeature::get_Radius */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleSimpleFeature::put_Radius */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleSimpleFeature::get_Depth */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleSimpleFeature::put_Depth */ ,
    (void *) (INT_PTR) -1 /* IStdSolidHoleSimpleFeature::PutCenterPoint */
};


static const PRPC_STUB_FUNCTION IStdSolidHoleSimpleFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSolidHoleSimpleFeatureStubVtbl =
{
    &IID_IStdSolidHoleSimpleFeature,
    &IStdSolidHoleSimpleFeature_ServerInfo,
    20,
    &IStdSolidHoleSimpleFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSolidShellFeature, ver. 0.0,
   GUID={0x66548701,0x6ACC,0x4271,{0x98,0xA8,0xD7,0x66,0x69,0x30,0xFF,0x05}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSolidShellFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    7764,
    7800,
    5262,
    5298,
    6354,
    8352
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSolidShellFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidShellFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSolidShellFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidShellFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) _IStdSolidShellFeatureProxyVtbl = 
{
    &IStdSolidShellFeature_ProxyInfo,
    &IID_IStdSolidShellFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdSolidShellFeature::get_TargetFaces */ ,
    (void *) (INT_PTR) -1 /* IStdSolidShellFeature::put_TargetFaces */ ,
    (void *) (INT_PTR) -1 /* IStdSolidShellFeature::get_InnerThickness */ ,
    (void *) (INT_PTR) -1 /* IStdSolidShellFeature::put_InnerThickness */ ,
    (void *) (INT_PTR) -1 /* IStdSolidShellFeature::get_OuterThickness */ ,
    (void *) (INT_PTR) -1 /* IStdSolidShellFeature::put_OuterThickness */
};


static const PRPC_STUB_FUNCTION IStdSolidShellFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSolidShellFeatureStubVtbl =
{
    &IID_IStdSolidShellFeature,
    &IStdSolidShellFeature_ServerInfo,
    18,
    &IStdSolidShellFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSolidRevolveWithExternalAxisFeature, ver. 0.0,
   GUID={0xEA1585E2,0x4E46,0x44E1,{0x80,0x8B,0x44,0x32,0xB9,0x89,0x6E,0x2D}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSolidRevolveWithExternalAxisFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    7440,
    7476,
    5262,
    5298,
    4902,
    6390,
    7584,
    7620,
    9390,
    9426,
    2016,
    9462,
    9498,
    8784
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSolidRevolveWithExternalAxisFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidRevolveWithExternalAxisFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSolidRevolveWithExternalAxisFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidRevolveWithExternalAxisFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(26) _IStdSolidRevolveWithExternalAxisFeatureProxyVtbl = 
{
    &IStdSolidRevolveWithExternalAxisFeature_ProxyInfo,
    &IID_IStdSolidRevolveWithExternalAxisFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdSolidRevolveWithExternalAxisFeature::get_ProfileSketch */ ,
    (void *) (INT_PTR) -1 /* IStdSolidRevolveWithExternalAxisFeature::put_ProfileSketch */ ,
    (void *) (INT_PTR) -1 /* IStdSolidRevolveWithExternalAxisFeature::get_StartAngle */ ,
    (void *) (INT_PTR) -1 /* IStdSolidRevolveWithExternalAxisFeature::put_StartAngle */ ,
    (void *) (INT_PTR) -1 /* IStdSolidRevolveWithExternalAxisFeature::get_StartCondition */ ,
    (void *) (INT_PTR) -1 /* IStdSolidRevolveWithExternalAxisFeature::get_EndAngle */ ,
    (void *) (INT_PTR) -1 /* IStdSolidRevolveWithExternalAxisFeature::put_EndAngle */ ,
    (void *) (INT_PTR) -1 /* IStdSolidRevolveWithExternalAxisFeature::get_EndCondition */ ,
    (void *) (INT_PTR) -1 /* IStdSolidRevolveWithExternalAxisFeature::get_IsFlip */ ,
    (void *) (INT_PTR) -1 /* IStdSolidRevolveWithExternalAxisFeature::put_IsFlip */ ,
    (void *) (INT_PTR) -1 /* IStdSolidRevolveWithExternalAxisFeature::get_IsCut */ ,
    (void *) (INT_PTR) -1 /* IStdSolidRevolveWithExternalAxisFeature::put_IsCut */ ,
    (void *) (INT_PTR) -1 /* IStdSolidRevolveWithExternalAxisFeature::get_RevolveAxis */ ,
    (void *) (INT_PTR) -1 /* IStdSolidRevolveWithExternalAxisFeature::PutRevolveAxis */
};


static const PRPC_STUB_FUNCTION IStdSolidRevolveWithExternalAxisFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSolidRevolveWithExternalAxisFeatureStubVtbl =
{
    &IID_IStdSolidRevolveWithExternalAxisFeature,
    &IStdSolidRevolveWithExternalAxisFeature_ServerInfo,
    26,
    &IStdSolidRevolveWithExternalAxisFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSolidDraftFeature, ver. 0.0,
   GUID={0x2AC4B8DA,0xF372,0x4214,{0x89,0xF7,0xAB,0x62,0x31,0xE9,0x46,0x91}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSolidDraftFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    7764,
    7800,
    5262,
    5298,
    9564,
    9630
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSolidDraftFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidDraftFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSolidDraftFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidDraftFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) _IStdSolidDraftFeatureProxyVtbl = 
{
    &IStdSolidDraftFeature_ProxyInfo,
    &IID_IStdSolidDraftFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdSolidDraftFeature::get_TargetFaces */ ,
    (void *) (INT_PTR) -1 /* IStdSolidDraftFeature::put_TargetFaces */ ,
    (void *) (INT_PTR) -1 /* IStdSolidDraftFeature::get_DraftAngle */ ,
    (void *) (INT_PTR) -1 /* IStdSolidDraftFeature::put_DraftAngle */ ,
    (void *) (INT_PTR) -1 /* IStdSolidDraftFeature::get_PullingDirection */ ,
    (void *) (INT_PTR) -1 /* IStdSolidDraftFeature::PutPullingDirection */
};


static const PRPC_STUB_FUNCTION IStdSolidDraftFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSolidDraftFeatureStubVtbl =
{
    &IID_IStdSolidDraftFeature,
    &IStdSolidDraftFeature_ServerInfo,
    18,
    &IStdSolidDraftFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSolidOffsetFeature, ver. 0.0,
   GUID={0xB7A36313,0xCA66,0x4A4B,{0x83,0xBE,0xB7,0x97,0xFB,0x0D,0xE8,0x0A}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSolidOffsetFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    7764,
    7800,
    5262,
    5298
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSolidOffsetFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidOffsetFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSolidOffsetFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidOffsetFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(16) _IStdSolidOffsetFeatureProxyVtbl = 
{
    &IStdSolidOffsetFeature_ProxyInfo,
    &IID_IStdSolidOffsetFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOffsetFeature::get_TargetFaces */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOffsetFeature::put_TargetFaces */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOffsetFeature::get_OffsetThickness */ ,
    (void *) (INT_PTR) -1 /* IStdSolidOffsetFeature::put_OffsetThickness */
};


static const PRPC_STUB_FUNCTION IStdSolidOffsetFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSolidOffsetFeatureStubVtbl =
{
    &IID_IStdSolidOffsetFeature,
    &IStdSolidOffsetFeature_ServerInfo,
    16,
    &IStdSolidOffsetFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdSolidImportedBrepFeature, ver. 0.0,
   GUID={0x378EBA37,0x1568,0x40E9,{0xBD,0x72,0xEA,0x48,0xED,0x47,0x1E,0xDC}} */

#pragma code_seg(".orpc")
static const unsigned short IStdSolidImportedBrepFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4080,
    4116,
    4152,
    618,
    4188,
    9696
    };

static const MIDL_STUBLESS_PROXY_INFO IStdSolidImportedBrepFeature_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidImportedBrepFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdSolidImportedBrepFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdSolidImportedBrepFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IStdSolidImportedBrepFeatureProxyVtbl = 
{
    &IStdSolidImportedBrepFeature_ProxyInfo,
    &IID_IStdSolidImportedBrepFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Application */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFeature::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeature::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdSolidImportedBrepFeature::get_FilePath */
};


static const PRPC_STUB_FUNCTION IStdSolidImportedBrepFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdSolidImportedBrepFeatureStubVtbl =
{
    &IID_IStdSolidImportedBrepFeature,
    &IStdSolidImportedBrepFeature_ServerInfo,
    13,
    &IStdSolidImportedBrepFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ISolid, ver. 0.0,
   GUID={0x280DF2D0,0xBE2A,0x448C,{0xBB,0xCE,0x11,0x81,0x46,0x36,0xC4,0xC8}} */

#pragma code_seg(".orpc")
static const unsigned short ISolid_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9732,
    9768,
    9804
    };

static const MIDL_STUBLESS_PROXY_INFO ISolid_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &ISolid_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISolid_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &ISolid_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _ISolidProxyVtbl = 
{
    &ISolid_ProxyInfo,
    &IID_ISolid,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ISolid::get_Faces */ ,
    (void *) (INT_PTR) -1 /* ISolid::get_Edges */ ,
    (void *) (INT_PTR) -1 /* ISolid::get_Vertices */
};


static const PRPC_STUB_FUNCTION ISolid_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ISolidStubVtbl =
{
    &IID_ISolid,
    &ISolid_ServerInfo,
    10,
    &ISolid_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IFaces, ver. 0.0,
   GUID={0x3C5C1AB1,0xAFE7,0x43B3,{0x87,0x4B,0xD7,0x6D,0x77,0x90,0x90,0x18}} */

#pragma code_seg(".orpc")
static const unsigned short IFaces_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6462,
    9840,
    9882
    };

static const MIDL_STUBLESS_PROXY_INFO IFaces_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IFaces_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IFaces_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IFaces_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IFacesProxyVtbl = 
{
    &IFaces_ProxyInfo,
    &IID_IFaces,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFaces::get_Count */ ,
    (void *) (INT_PTR) -1 /* IFaces::get_Item */ ,
    (void *) (INT_PTR) -1 /* IFaces::get__NewEnum */
};


static const PRPC_STUB_FUNCTION IFaces_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IFacesStubVtbl =
{
    &IID_IFaces,
    &IFaces_ServerInfo,
    10,
    &IFaces_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IEdges, ver. 0.0,
   GUID={0x9E0256D6,0x3731,0x41C9,{0x99,0x7B,0x24,0x5F,0xF5,0x62,0xE8,0x29}} */

#pragma code_seg(".orpc")
static const unsigned short IEdges_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6462,
    9918,
    9882
    };

static const MIDL_STUBLESS_PROXY_INFO IEdges_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IEdges_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEdges_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IEdges_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IEdgesProxyVtbl = 
{
    &IEdges_ProxyInfo,
    &IID_IEdges,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEdges::get_Count */ ,
    (void *) (INT_PTR) -1 /* IEdges::get_Item */ ,
    (void *) (INT_PTR) -1 /* IEdges::get__NewEnum */
};


static const PRPC_STUB_FUNCTION IEdges_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IEdgesStubVtbl =
{
    &IID_IEdges,
    &IEdges_ServerInfo,
    10,
    &IEdges_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IFace, ver. 0.0,
   GUID={0x2439D908,0x0C5B,0x47E0,{0x89,0x0E,0x46,0xC2,0x0B,0x9F,0x18,0x97}} */

#pragma code_seg(".orpc")
static const unsigned short IFace_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6612,
    6648,
    9960,
    9996,
    10032,
    10080,
    10128,
    8850,
    6318
    };

static const MIDL_STUBLESS_PROXY_INFO IFace_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IFace_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IFace_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IFace_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(16) _IFaceProxyVtbl = 
{
    &IFace_ProxyInfo,
    &IID_IFace,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFace::get_Type */ ,
    (void *) (INT_PTR) -1 /* IFace::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFace::get_Edges */ ,
    (void *) (INT_PTR) -1 /* IFace::get_Vertices */ ,
    (void *) (INT_PTR) -1 /* IFace::get_Centroid */ ,
    (void *) (INT_PTR) -1 /* IFace::get_XDirection */ ,
    (void *) (INT_PTR) -1 /* IFace::get_YDirection */ ,
    (void *) (INT_PTR) -1 /* IFace::get_ZDirection */ ,
    (void *) (INT_PTR) -1 /* IFace::get_Area */
};


static const PRPC_STUB_FUNCTION IFace_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IFaceStubVtbl =
{
    &IID_IFace,
    &IFace_ServerInfo,
    16,
    &IFace_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IEdge, ver. 0.0,
   GUID={0xD54BD7B3,0x4AE1,0x4B8E,{0x89,0x25,0xA9,0x2A,0x22,0x3E,0xF6,0x14}} */

#pragma code_seg(".orpc")
static const unsigned short IEdge_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6612,
    6648,
    10176,
    10212
    };

static const MIDL_STUBLESS_PROXY_INFO IEdge_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IEdge_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEdge_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IEdge_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IEdgeProxyVtbl = 
{
    &IEdge_ProxyInfo,
    &IID_IEdge,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEdge::get_Type */ ,
    (void *) (INT_PTR) -1 /* IEdge::get_Name */ ,
    (void *) (INT_PTR) -1 /* IEdge::get_StartPoint */ ,
    (void *) (INT_PTR) -1 /* IEdge::get_EndPoint */
};


static const PRPC_STUB_FUNCTION IEdge_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IEdgeStubVtbl =
{
    &IID_IEdge,
    &IEdge_ServerInfo,
    11,
    &IEdge_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IVertices, ver. 0.0,
   GUID={0xAC5C4DC7,0xE3A7,0x4978,{0x97,0xE0,0xE4,0xF2,0xDB,0x12,0x26,0xEF}} */

#pragma code_seg(".orpc")
static const unsigned short IVertices_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6462,
    10248,
    9882
    };

static const MIDL_STUBLESS_PROXY_INFO IVertices_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IVertices_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVertices_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IVertices_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IVerticesProxyVtbl = 
{
    &IVertices_ProxyInfo,
    &IID_IVertices,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IVertices::get_Count */ ,
    (void *) (INT_PTR) -1 /* IVertices::get_Item */ ,
    (void *) (INT_PTR) -1 /* IVertices::get__NewEnum */
};


static const PRPC_STUB_FUNCTION IVertices_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IVerticesStubVtbl =
{
    &IID_IVertices,
    &IVertices_ServerInfo,
    10,
    &IVertices_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IVertex, ver. 0.0,
   GUID={0x0EA073CC,0x3C4A,0x48EA,{0x97,0x99,0x3C,0x81,0x8D,0x81,0x07,0xA6}} */

#pragma code_seg(".orpc")
static const unsigned short IVertex_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    10290,
    10326,
    10374,
    10410,
    10446
    };

static const MIDL_STUBLESS_PROXY_INFO IVertex_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IVertex_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVertex_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IVertex_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IVertexProxyVtbl = 
{
    &IVertex_ProxyInfo,
    &IID_IVertex,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IVertex::get_Name */ ,
    (void *) (INT_PTR) -1 /* IVertex::get_Coordinates */ ,
    (void *) (INT_PTR) -1 /* IVertex::get_X */ ,
    (void *) (INT_PTR) -1 /* IVertex::get_Y */ ,
    (void *) (INT_PTR) -1 /* IVertex::get_Z */
};


static const PRPC_STUB_FUNCTION IVertex_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IVertexStubVtbl =
{
    &IID_IVertex,
    &IVertex_ServerInfo,
    12,
    &IVertex_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IPoint3D, ver. 0.0,
   GUID={0x381B3303,0x9EEA,0x482A,{0xA1,0x84,0xF4,0x04,0xC8,0x5A,0xB8,0x7D}} */

#pragma code_seg(".orpc")
static const unsigned short IPoint3D_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    10482,
    10518,
    10374,
    10554,
    10446,
    10590
    };

static const MIDL_STUBLESS_PROXY_INFO IPoint3D_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IPoint3D_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPoint3D_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IPoint3D_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IPoint3DProxyVtbl = 
{
    &IPoint3D_ProxyInfo,
    &IID_IPoint3D,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IPoint3D::get_X */ ,
    (void *) (INT_PTR) -1 /* IPoint3D::put_X */ ,
    (void *) (INT_PTR) -1 /* IPoint3D::get_Y */ ,
    (void *) (INT_PTR) -1 /* IPoint3D::put_Y */ ,
    (void *) (INT_PTR) -1 /* IPoint3D::get_Z */ ,
    (void *) (INT_PTR) -1 /* IPoint3D::put_Z */
};


static const PRPC_STUB_FUNCTION IPoint3D_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPoint3DStubVtbl =
{
    &IID_IPoint3D,
    &IPoint3D_ServerInfo,
    13,
    &IPoint3D_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IAxis1, ver. 0.0,
   GUID={0xF30AD8B9,0x836E,0x4869,{0xB5,0xA2,0xCD,0x76,0x82,0x55,0x57,0x19}} */

#pragma code_seg(".orpc")
static const unsigned short IAxis1_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    10626,
    10662,
    10698,
    10734
    };

static const MIDL_STUBLESS_PROXY_INFO IAxis1_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IAxis1_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAxis1_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IAxis1_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IAxis1ProxyVtbl = 
{
    &IAxis1_ProxyInfo,
    &IID_IAxis1,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IAxis1::get_Location */ ,
    (void *) (INT_PTR) -1 /* IAxis1::put_Location */ ,
    (void *) (INT_PTR) -1 /* IAxis1::get_Direction */ ,
    (void *) (INT_PTR) -1 /* IAxis1::put_Direction */
};


static const PRPC_STUB_FUNCTION IAxis1_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAxis1StubVtbl =
{
    &IID_IAxis1,
    &IAxis1_ServerInfo,
    11,
    &IAxis1_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IAssemDocument, ver. 0.0,
   GUID={0x1EE2B408,0x02CE,0x4E5F,{0xBF,0xFC,0xB7,0x93,0xBA,0xC3,0x22,0xC1}} */

#pragma code_seg(".orpc")
static const unsigned short IAssemDocument_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    282,
    318,
    582,
    618,
    654,
    690,
    726,
    756,
    798,
    828,
    10770,
    900,
    10806
    };

static const MIDL_STUBLESS_PROXY_INFO IAssemDocument_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IAssemDocument_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAssemDocument_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IAssemDocument_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(20) _IAssemDocumentProxyVtbl = 
{
    &IAssemDocument_ProxyInfo,
    &IID_IAssemDocument,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IDoc::get_Application */ ,
    (void *) (INT_PTR) -1 /* IDoc::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IDoc::get_FullName */ ,
    (void *) (INT_PTR) -1 /* IDoc::get_Name */ ,
    (void *) (INT_PTR) -1 /* IDoc::get_Path */ ,
    (void *) (INT_PTR) -1 /* IDoc::get_Saved */ ,
    (void *) (INT_PTR) -1 /* IDoc::Activate */ ,
    (void *) (INT_PTR) -1 /* IDoc::Close */ ,
    (void *) (INT_PTR) -1 /* IDoc::Save */ ,
    (void *) (INT_PTR) -1 /* IDoc::SaveAs */ ,
    (void *) (INT_PTR) -1 /* IAssemDocument::get_Assem */ ,
    (void *) (INT_PTR) -1 /* IAssemDocument::Update */ ,
    (void *) (INT_PTR) -1 /* IAssemDocument::test */
};


static const PRPC_STUB_FUNCTION IAssemDocument_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAssemDocumentStubVtbl =
{
    &IID_IAssemDocument,
    &IAssemDocument_ServerInfo,
    20,
    &IAssemDocument_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IComp, ver. 0.0,
   GUID={0x47B8D6AB,0x475C,0x4102,{0xAF,0x1A,0x69,0x62,0xA7,0x79,0x6C,0x3A}} */

#pragma code_seg(".orpc")
static const unsigned short IComp_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    10836,
    10872,
    582,
    618,
    10908,
    10950,
    10992,
    11034,
    11076,
    11112,
    7884,
    11148,
    11232,
    11316,
    11358,
    11400,
    11448
    };

static const MIDL_STUBLESS_PROXY_INFO IComp_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IComp_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IComp_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IComp_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(24) _ICompProxyVtbl = 
{
    &IComp_ProxyInfo,
    &IID_IComp,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IComp::set_Name */ ,
    (void *) (INT_PTR) -1 /* IComp::set_ParentName */ ,
    (void *) (INT_PTR) -1 /* IComp::get_Name */ ,
    (void *) (INT_PTR) -1 /* IComp::get_ParentName */ ,
    (void *) (INT_PTR) -1 /* IComp::GetPart */ ,
    (void *) (INT_PTR) -1 /* IComp::GetComponent */ ,
    (void *) (INT_PTR) -1 /* IComp::IsComponent */ ,
    (void *) (INT_PTR) -1 /* IComp::IsPart */ ,
    (void *) (INT_PTR) -1 /* IComp::AddPart */ ,
    (void *) (INT_PTR) -1 /* IComp::AddComponent */ ,
    (void *) (INT_PTR) -1 /* IComp::GetSize */ ,
    (void *) (INT_PTR) -1 /* IComp::GetPlacement */ ,
    (void *) (INT_PTR) -1 /* IComp::SetPlacement */ ,
    (void *) (INT_PTR) -1 /* IComp::SaveAsMesh */ ,
    (void *) (INT_PTR) -1 /* IComp::CreatePart */ ,
    (void *) (INT_PTR) -1 /* IComp::ImportPartFromXML */ ,
    (void *) (INT_PTR) -1 /* IComp::SetPartPlacement */
};


static const PRPC_STUB_FUNCTION IComp_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ICompStubVtbl =
{
    &IID_IComp,
    &IComp_ServerInfo,
    24,
    &IComp_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IAssem, ver. 0.0,
   GUID={0xAD55F898,0x5CF6,0x4D13,{0x97,0xDB,0xFE,0xAB,0x11,0x56,0x62,0x6F}} */

#pragma code_seg(".orpc")
static const unsigned short IAssem_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    11538,
    11574,
    11610,
    11646,
    11688,
    9696,
    11724
    };

static const MIDL_STUBLESS_PROXY_INFO IAssem_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IAssem_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAssem_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IAssem_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IAssemProxyVtbl = 
{
    &IAssem_ProxyInfo,
    &IID_IAssem,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IAssem::CreatePart */ ,
    (void *) (INT_PTR) -1 /* IAssem::CreateComponent */ ,
    (void *) (INT_PTR) -1 /* IAssem::AddComponent */ ,
    (void *) (INT_PTR) -1 /* IAssem::GetComponent */ ,
    (void *) (INT_PTR) -1 /* IAssem::GetSize */ ,
    (void *) (INT_PTR) -1 /* IAssem::get_Name */ ,
    (void *) (INT_PTR) -1 /* IAssem::get_Constraints */
};


static const PRPC_STUB_FUNCTION IAssem_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAssemStubVtbl =
{
    &IID_IAssem,
    &IAssem_ServerInfo,
    14,
    &IAssem_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdAssemConstraints, ver. 0.0,
   GUID={0x4AB8ED74,0x3B2F,0x47AB,{0xB0,0x81,0xD6,0x76,0xC2,0xC4,0x5A,0xE8}} */

#pragma code_seg(".orpc")
static const unsigned short IStdAssemConstraints_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6462,
    11760,
    11802,
    11844,
    11910
    };

static const MIDL_STUBLESS_PROXY_INFO IStdAssemConstraints_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdAssemConstraints_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdAssemConstraints_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdAssemConstraints_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IStdAssemConstraintsProxyVtbl = 
{
    &IStdAssemConstraints_ProxyInfo,
    &IID_IStdAssemConstraints,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraints::get_Count */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraints::get_Constraint */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraints::SelectConstraintByName */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraints::AddNewAssemblyCoaxialConstraint */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraints::AddNewAssemblyIncidenceConstraint */
};


static const PRPC_STUB_FUNCTION IStdAssemConstraints_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdAssemConstraintsStubVtbl =
{
    &IID_IStdAssemConstraints,
    &IStdAssemConstraints_ServerInfo,
    12,
    &IStdAssemConstraints_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdAssemConstraint, ver. 0.0,
   GUID={0x0861DBF0,0x310A,0x4F63,{0xBB,0x23,0xDC,0x9C,0x37,0x34,0x11,0x55}} */

#pragma code_seg(".orpc")
static const unsigned short IStdAssemConstraint_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5952,
    5988,
    4152,
    618,
    4188
    };

static const MIDL_STUBLESS_PROXY_INFO IStdAssemConstraint_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdAssemConstraint_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdAssemConstraint_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdAssemConstraint_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IStdAssemConstraintProxyVtbl = 
{
    &IStdAssemConstraint_ProxyInfo,
    &IID_IStdAssemConstraint,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraint::get_Application */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraint::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraint::get_Type */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraint::get_Name */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraint::SetName */
};


static const PRPC_STUB_FUNCTION IStdAssemConstraint_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdAssemConstraintStubVtbl =
{
    &IID_IStdAssemConstraint,
    &IStdAssemConstraint_ServerInfo,
    12,
    &IStdAssemConstraint_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdAssemConstraintCoaxial, ver. 0.0,
   GUID={0xF5074BA1,0x513A,0x4F33,{0x90,0x91,0xCC,0x8C,0xF5,0x6D,0xAA,0xB1}} */

#pragma code_seg(".orpc")
static const unsigned short IStdAssemConstraintCoaxial_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5952,
    5988,
    4152,
    618,
    4188,
    11982,
    9042,
    12018,
    8316
    };

static const MIDL_STUBLESS_PROXY_INFO IStdAssemConstraintCoaxial_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdAssemConstraintCoaxial_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdAssemConstraintCoaxial_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdAssemConstraintCoaxial_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(16) _IStdAssemConstraintCoaxialProxyVtbl = 
{
    &IStdAssemConstraintCoaxial_ProxyInfo,
    &IID_IStdAssemConstraintCoaxial,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraint::get_Application */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraint::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraint::get_Type */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraint::get_Name */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraint::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraintCoaxial::get_ConstrainedPart */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraintCoaxial::get_ConstrainedGeometry */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraintCoaxial::get_ReferencePart */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraintCoaxial::get_ReferenceGeometry */
};


static const PRPC_STUB_FUNCTION IStdAssemConstraintCoaxial_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdAssemConstraintCoaxialStubVtbl =
{
    &IID_IStdAssemConstraintCoaxial,
    &IStdAssemConstraintCoaxial_ServerInfo,
    16,
    &IStdAssemConstraintCoaxial_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStdAssemConstraintIncidence, ver. 0.0,
   GUID={0x449F2C9C,0xFA8E,0x43A1,{0xB3,0x32,0xAF,0xAD,0x30,0x36,0x0C,0x60}} */

#pragma code_seg(".orpc")
static const unsigned short IStdAssemConstraintIncidence_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5952,
    5988,
    4152,
    618,
    4188,
    12054,
    9042,
    12018,
    8316
    };

static const MIDL_STUBLESS_PROXY_INFO IStdAssemConstraintIncidence_ProxyInfo =
    {
    &Object_StubDesc,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdAssemConstraintIncidence_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStdAssemConstraintIncidence_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TransCAD__MIDL_ProcFormatString.Format,
    &IStdAssemConstraintIncidence_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(16) _IStdAssemConstraintIncidenceProxyVtbl = 
{
    &IStdAssemConstraintIncidence_ProxyInfo,
    &IID_IStdAssemConstraintIncidence,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraint::get_Application */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraint::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraint::get_Type */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraint::get_Name */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraint::SetName */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraintIncidence::get_ConstrainedPart */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraintIncidence::get_ConstrainedGeometry */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraintIncidence::get_ReferencePart */ ,
    (void *) (INT_PTR) -1 /* IStdAssemConstraintIncidence::get_ReferenceGeometry */
};


static const PRPC_STUB_FUNCTION IStdAssemConstraintIncidence_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IStdAssemConstraintIncidenceStubVtbl =
{
    &IID_IStdAssemConstraintIncidence,
    &IStdAssemConstraintIncidence_ServerInfo,
    16,
    &IStdAssemConstraintIncidence_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    TransCAD__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x700022b, /* MIDL Version 7.0.555 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _TransCAD_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IStdSolidShellFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSketchOriginProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPoint3DProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IExplicitModelObjectProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAssemDocumentProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFaceProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSketchCenterlineProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSketchParallelProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSolidOffsetFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSolidLoftSectionsFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSolidChamferFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSolidHoleCounterboredFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSolidImportedBrepFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSolidCutRevolveFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSketchHDirectionProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSketchConstraintsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSketchHorizontalProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSolidCutSweepFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSketchVDirectionProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSketchCoincidentSamePointsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSolidOperatePatternCircularFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdAssemConstraintsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSolidLoftFacesFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSketchConstraintProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSketchVerticalProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSketchGeometriesProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFeaturesProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSolidProtrusionSweepFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSolidHoleSimpleFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAssemProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdAssemConstraintIncidenceProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSketchCircularArcProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdAssemConstraintCoaxialProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSolidProtrusionExtrudeFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdDefaultDatumPlaneFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISketchProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ICompProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSolidCutExtrudeFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFacesProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IDocProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEdgeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IApplicationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAxis1ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSketchGeometryProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSolidHoleCountersunkFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPartDocumentProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVerticesProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IReferencesProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVertexProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPartProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISolidProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSolidProtrusionRevolveFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEdgesProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IReferenceProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IDocsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSolidDraftFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSketchPerpendicularProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSketchCircleProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSolidRevolveWithExternalAxisFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISketchEditorProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSketchLineProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdAssemConstraintProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdDatumPlaneOffsetFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSketchControlPointProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSolidFilletConstantFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSketchFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStdSolidOperatePatternRectangularFeatureProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _TransCAD_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IStdSolidShellFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSketchOriginStubVtbl,
    ( CInterfaceStubVtbl *) &_IPoint3DStubVtbl,
    ( CInterfaceStubVtbl *) &_IExplicitModelObjectStubVtbl,
    ( CInterfaceStubVtbl *) &_IAssemDocumentStubVtbl,
    ( CInterfaceStubVtbl *) &_IFaceStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSketchCenterlineStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSketchParallelStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSolidOffsetFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSolidLoftSectionsFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSolidChamferFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSolidHoleCounterboredFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSolidImportedBrepFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSolidCutRevolveFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSketchHDirectionStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSketchConstraintsStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSketchHorizontalStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSolidCutSweepFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSketchVDirectionStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSketchCoincidentSamePointsStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSolidOperatePatternCircularFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdAssemConstraintsStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSolidLoftFacesFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSketchConstraintStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSketchVerticalStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSketchGeometriesStubVtbl,
    ( CInterfaceStubVtbl *) &_IFeaturesStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSolidProtrusionSweepFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSolidHoleSimpleFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IAssemStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdAssemConstraintIncidenceStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSketchCircularArcStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdAssemConstraintCoaxialStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSolidProtrusionExtrudeFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdDefaultDatumPlaneFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_ISketchStubVtbl,
    ( CInterfaceStubVtbl *) &_ICompStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSolidCutExtrudeFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IFacesStubVtbl,
    ( CInterfaceStubVtbl *) &_IDocStubVtbl,
    ( CInterfaceStubVtbl *) &_IEdgeStubVtbl,
    ( CInterfaceStubVtbl *) &_IApplicationStubVtbl,
    ( CInterfaceStubVtbl *) &_IAxis1StubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSketchGeometryStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSolidHoleCountersunkFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IPartDocumentStubVtbl,
    ( CInterfaceStubVtbl *) &_IVerticesStubVtbl,
    ( CInterfaceStubVtbl *) &_IReferencesStubVtbl,
    ( CInterfaceStubVtbl *) &_IVertexStubVtbl,
    ( CInterfaceStubVtbl *) &_IPartStubVtbl,
    ( CInterfaceStubVtbl *) &_ISolidStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSolidProtrusionRevolveFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IEdgesStubVtbl,
    ( CInterfaceStubVtbl *) &_IReferenceStubVtbl,
    ( CInterfaceStubVtbl *) &_IDocsStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSolidDraftFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSketchPerpendicularStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSketchCircleStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSolidRevolveWithExternalAxisFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_ISketchEditorStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSketchLineStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdAssemConstraintStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdDatumPlaneOffsetFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSketchControlPointStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSolidFilletConstantFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSketchFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IStdSolidOperatePatternRectangularFeatureStubVtbl,
    0
};

PCInterfaceName const _TransCAD_InterfaceNamesList[] = 
{
    "IStdSolidShellFeature",
    "IStdSketchOrigin",
    "IPoint3D",
    "IExplicitModelObject",
    "IAssemDocument",
    "IFace",
    "IStdSketchCenterline",
    "IStdSketchParallel",
    "IStdSolidOffsetFeature",
    "IStdSolidLoftSectionsFeature",
    "IStdSolidChamferFeature",
    "IStdSolidHoleCounterboredFeature",
    "IStdSolidImportedBrepFeature",
    "IFeature",
    "IStdSolidCutRevolveFeature",
    "IStdSketchHDirection",
    "IStdSketchConstraints",
    "IStdSketchHorizontal",
    "IStdSolidCutSweepFeature",
    "IStdSketchVDirection",
    "IStdSketchCoincidentSamePoints",
    "IStdSolidOperatePatternCircularFeature",
    "IStdAssemConstraints",
    "IStdSolidLoftFacesFeature",
    "IStdSketchConstraint",
    "IStdSketchVertical",
    "IStdSketchGeometries",
    "IFeatures",
    "IStdSolidProtrusionSweepFeature",
    "IStdSolidHoleSimpleFeature",
    "IAssem",
    "IStdAssemConstraintIncidence",
    "IStdSketchCircularArc",
    "IStdAssemConstraintCoaxial",
    "IStdSolidProtrusionExtrudeFeature",
    "IStdDefaultDatumPlaneFeature",
    "ISketch",
    "IComp",
    "IStdSolidCutExtrudeFeature",
    "IFaces",
    "IDoc",
    "IEdge",
    "IApplication",
    "IAxis1",
    "IStdSketchGeometry",
    "IStdSolidHoleCountersunkFeature",
    "IPartDocument",
    "IVertices",
    "IReferences",
    "IVertex",
    "IPart",
    "ISolid",
    "IStdSolidProtrusionRevolveFeature",
    "IEdges",
    "IReference",
    "IDocs",
    "IStdSolidDraftFeature",
    "IStdSketchPerpendicular",
    "IStdSketchCircle",
    "IStdSolidRevolveWithExternalAxisFeature",
    "ISketchEditor",
    "IStdSketchLine",
    "IStdAssemConstraint",
    "IStdDatumPlaneOffsetFeature",
    "IStdSketchControlPoint",
    "IStdSolidFilletConstantFeature",
    "IStdSketchFeature",
    "IStdSolidOperatePatternRectangularFeature",
    0
};

const IID *  const _TransCAD_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _TransCAD_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _TransCAD, pIID, n)

int __stdcall _TransCAD_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _TransCAD, 68, 64 )
    IID_BS_LOOKUP_NEXT_TEST( _TransCAD, 32 )
    IID_BS_LOOKUP_NEXT_TEST( _TransCAD, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _TransCAD, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _TransCAD, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _TransCAD, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _TransCAD, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _TransCAD, 68, *pIndex )
    
}

const ExtendedProxyFileInfo TransCAD_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _TransCAD_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _TransCAD_StubVtblList,
    (const PCInterfaceName * ) & _TransCAD_InterfaceNamesList,
    (const IID ** ) & _TransCAD_BaseIIDList,
    & _TransCAD_IID_Lookup, 
    68,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

