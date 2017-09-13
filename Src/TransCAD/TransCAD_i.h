

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Thu Sep 07 00:36:56 2017
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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __TransCAD_i_h__
#define __TransCAD_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IApplication_FWD_DEFINED__
#define __IApplication_FWD_DEFINED__
typedef interface IApplication IApplication;
#endif 	/* __IApplication_FWD_DEFINED__ */


#ifndef __IDocs_FWD_DEFINED__
#define __IDocs_FWD_DEFINED__
typedef interface IDocs IDocs;
#endif 	/* __IDocs_FWD_DEFINED__ */


#ifndef __IDoc_FWD_DEFINED__
#define __IDoc_FWD_DEFINED__
typedef interface IDoc IDoc;
#endif 	/* __IDoc_FWD_DEFINED__ */


#ifndef __IPartDocument_FWD_DEFINED__
#define __IPartDocument_FWD_DEFINED__
typedef interface IPartDocument IPartDocument;
#endif 	/* __IPartDocument_FWD_DEFINED__ */


#ifndef __IPart_FWD_DEFINED__
#define __IPart_FWD_DEFINED__
typedef interface IPart IPart;
#endif 	/* __IPart_FWD_DEFINED__ */


#ifndef __IFeatures_FWD_DEFINED__
#define __IFeatures_FWD_DEFINED__
typedef interface IFeatures IFeatures;
#endif 	/* __IFeatures_FWD_DEFINED__ */


#ifndef __IFeature_FWD_DEFINED__
#define __IFeature_FWD_DEFINED__
typedef interface IFeature IFeature;
#endif 	/* __IFeature_FWD_DEFINED__ */


#ifndef __IStdDefaultDatumPlaneFeature_FWD_DEFINED__
#define __IStdDefaultDatumPlaneFeature_FWD_DEFINED__
typedef interface IStdDefaultDatumPlaneFeature IStdDefaultDatumPlaneFeature;
#endif 	/* __IStdDefaultDatumPlaneFeature_FWD_DEFINED__ */


#ifndef __IStdSketchFeature_FWD_DEFINED__
#define __IStdSketchFeature_FWD_DEFINED__
typedef interface IStdSketchFeature IStdSketchFeature;
#endif 	/* __IStdSketchFeature_FWD_DEFINED__ */


#ifndef __IStdSolidProtrusionExtrudeFeature_FWD_DEFINED__
#define __IStdSolidProtrusionExtrudeFeature_FWD_DEFINED__
typedef interface IStdSolidProtrusionExtrudeFeature IStdSolidProtrusionExtrudeFeature;
#endif 	/* __IStdSolidProtrusionExtrudeFeature_FWD_DEFINED__ */


#ifndef __IStdSolidCutExtrudeFeature_FWD_DEFINED__
#define __IStdSolidCutExtrudeFeature_FWD_DEFINED__
typedef interface IStdSolidCutExtrudeFeature IStdSolidCutExtrudeFeature;
#endif 	/* __IStdSolidCutExtrudeFeature_FWD_DEFINED__ */


#ifndef __IStdSolidFilletConstantFeature_FWD_DEFINED__
#define __IStdSolidFilletConstantFeature_FWD_DEFINED__
typedef interface IStdSolidFilletConstantFeature IStdSolidFilletConstantFeature;
#endif 	/* __IStdSolidFilletConstantFeature_FWD_DEFINED__ */


#ifndef __IStdSketchOrigin_FWD_DEFINED__
#define __IStdSketchOrigin_FWD_DEFINED__
typedef interface IStdSketchOrigin IStdSketchOrigin;
#endif 	/* __IStdSketchOrigin_FWD_DEFINED__ */


#ifndef __IStdSketchVDirection_FWD_DEFINED__
#define __IStdSketchVDirection_FWD_DEFINED__
typedef interface IStdSketchVDirection IStdSketchVDirection;
#endif 	/* __IStdSketchVDirection_FWD_DEFINED__ */


#ifndef __IStdSketchHDirection_FWD_DEFINED__
#define __IStdSketchHDirection_FWD_DEFINED__
typedef interface IStdSketchHDirection IStdSketchHDirection;
#endif 	/* __IStdSketchHDirection_FWD_DEFINED__ */


#ifndef __IStdSketchGeometries_FWD_DEFINED__
#define __IStdSketchGeometries_FWD_DEFINED__
typedef interface IStdSketchGeometries IStdSketchGeometries;
#endif 	/* __IStdSketchGeometries_FWD_DEFINED__ */


#ifndef __IStdSketchConstraints_FWD_DEFINED__
#define __IStdSketchConstraints_FWD_DEFINED__
typedef interface IStdSketchConstraints IStdSketchConstraints;
#endif 	/* __IStdSketchConstraints_FWD_DEFINED__ */


#ifndef __IStdSketchGeometry_FWD_DEFINED__
#define __IStdSketchGeometry_FWD_DEFINED__
typedef interface IStdSketchGeometry IStdSketchGeometry;
#endif 	/* __IStdSketchGeometry_FWD_DEFINED__ */


#ifndef __IStdSketchConstraint_FWD_DEFINED__
#define __IStdSketchConstraint_FWD_DEFINED__
typedef interface IStdSketchConstraint IStdSketchConstraint;
#endif 	/* __IStdSketchConstraint_FWD_DEFINED__ */


#ifndef __IStdSketchCircle_FWD_DEFINED__
#define __IStdSketchCircle_FWD_DEFINED__
typedef interface IStdSketchCircle IStdSketchCircle;
#endif 	/* __IStdSketchCircle_FWD_DEFINED__ */


#ifndef __IStdSketchCircularArc_FWD_DEFINED__
#define __IStdSketchCircularArc_FWD_DEFINED__
typedef interface IStdSketchCircularArc IStdSketchCircularArc;
#endif 	/* __IStdSketchCircularArc_FWD_DEFINED__ */


#ifndef __IStdSketchControlPoint_FWD_DEFINED__
#define __IStdSketchControlPoint_FWD_DEFINED__
typedef interface IStdSketchControlPoint IStdSketchControlPoint;
#endif 	/* __IStdSketchControlPoint_FWD_DEFINED__ */


#ifndef __IStdSketchLine_FWD_DEFINED__
#define __IStdSketchLine_FWD_DEFINED__
typedef interface IStdSketchLine IStdSketchLine;
#endif 	/* __IStdSketchLine_FWD_DEFINED__ */


#ifndef __IReferences_FWD_DEFINED__
#define __IReferences_FWD_DEFINED__
typedef interface IReferences IReferences;
#endif 	/* __IReferences_FWD_DEFINED__ */


#ifndef __IReference_FWD_DEFINED__
#define __IReference_FWD_DEFINED__
typedef interface IReference IReference;
#endif 	/* __IReference_FWD_DEFINED__ */


#ifndef __IExplicitModelObject_FWD_DEFINED__
#define __IExplicitModelObject_FWD_DEFINED__
typedef interface IExplicitModelObject IExplicitModelObject;
#endif 	/* __IExplicitModelObject_FWD_DEFINED__ */


#ifndef __ISketch_FWD_DEFINED__
#define __ISketch_FWD_DEFINED__
typedef interface ISketch ISketch;
#endif 	/* __ISketch_FWD_DEFINED__ */


#ifndef __ISketchEditor_FWD_DEFINED__
#define __ISketchEditor_FWD_DEFINED__
typedef interface ISketchEditor ISketchEditor;
#endif 	/* __ISketchEditor_FWD_DEFINED__ */


#ifndef __IStdSolidProtrusionSweepFeature_FWD_DEFINED__
#define __IStdSolidProtrusionSweepFeature_FWD_DEFINED__
typedef interface IStdSolidProtrusionSweepFeature IStdSolidProtrusionSweepFeature;
#endif 	/* __IStdSolidProtrusionSweepFeature_FWD_DEFINED__ */


#ifndef __IStdSolidProtrusionRevolveFeature_FWD_DEFINED__
#define __IStdSolidProtrusionRevolveFeature_FWD_DEFINED__
typedef interface IStdSolidProtrusionRevolveFeature IStdSolidProtrusionRevolveFeature;
#endif 	/* __IStdSolidProtrusionRevolveFeature_FWD_DEFINED__ */


#ifndef __IStdSketchCenterline_FWD_DEFINED__
#define __IStdSketchCenterline_FWD_DEFINED__
typedef interface IStdSketchCenterline IStdSketchCenterline;
#endif 	/* __IStdSketchCenterline_FWD_DEFINED__ */


#ifndef __IStdSolidOperatePatternRectangularFeature_FWD_DEFINED__
#define __IStdSolidOperatePatternRectangularFeature_FWD_DEFINED__
typedef interface IStdSolidOperatePatternRectangularFeature IStdSolidOperatePatternRectangularFeature;
#endif 	/* __IStdSolidOperatePatternRectangularFeature_FWD_DEFINED__ */


#ifndef __IStdSolidChamferFeature_FWD_DEFINED__
#define __IStdSolidChamferFeature_FWD_DEFINED__
typedef interface IStdSolidChamferFeature IStdSolidChamferFeature;
#endif 	/* __IStdSolidChamferFeature_FWD_DEFINED__ */


#ifndef __IStdSolidCutRevolveFeature_FWD_DEFINED__
#define __IStdSolidCutRevolveFeature_FWD_DEFINED__
typedef interface IStdSolidCutRevolveFeature IStdSolidCutRevolveFeature;
#endif 	/* __IStdSolidCutRevolveFeature_FWD_DEFINED__ */


#ifndef __IStdSolidOperatePatternCircularFeature_FWD_DEFINED__
#define __IStdSolidOperatePatternCircularFeature_FWD_DEFINED__
typedef interface IStdSolidOperatePatternCircularFeature IStdSolidOperatePatternCircularFeature;
#endif 	/* __IStdSolidOperatePatternCircularFeature_FWD_DEFINED__ */


#ifndef __IStdSolidHoleCounterboredFeature_FWD_DEFINED__
#define __IStdSolidHoleCounterboredFeature_FWD_DEFINED__
typedef interface IStdSolidHoleCounterboredFeature IStdSolidHoleCounterboredFeature;
#endif 	/* __IStdSolidHoleCounterboredFeature_FWD_DEFINED__ */


#ifndef __IStdSolidHoleCountersunkFeature_FWD_DEFINED__
#define __IStdSolidHoleCountersunkFeature_FWD_DEFINED__
typedef interface IStdSolidHoleCountersunkFeature IStdSolidHoleCountersunkFeature;
#endif 	/* __IStdSolidHoleCountersunkFeature_FWD_DEFINED__ */


#ifndef __IStdSketchCoincidentSamePoints_FWD_DEFINED__
#define __IStdSketchCoincidentSamePoints_FWD_DEFINED__
typedef interface IStdSketchCoincidentSamePoints IStdSketchCoincidentSamePoints;
#endif 	/* __IStdSketchCoincidentSamePoints_FWD_DEFINED__ */


#ifndef __IStdSketchParallel_FWD_DEFINED__
#define __IStdSketchParallel_FWD_DEFINED__
typedef interface IStdSketchParallel IStdSketchParallel;
#endif 	/* __IStdSketchParallel_FWD_DEFINED__ */


#ifndef __IStdSketchPerpendicular_FWD_DEFINED__
#define __IStdSketchPerpendicular_FWD_DEFINED__
typedef interface IStdSketchPerpendicular IStdSketchPerpendicular;
#endif 	/* __IStdSketchPerpendicular_FWD_DEFINED__ */


#ifndef __IStdSketchHorizontal_FWD_DEFINED__
#define __IStdSketchHorizontal_FWD_DEFINED__
typedef interface IStdSketchHorizontal IStdSketchHorizontal;
#endif 	/* __IStdSketchHorizontal_FWD_DEFINED__ */


#ifndef __IStdSketchVertical_FWD_DEFINED__
#define __IStdSketchVertical_FWD_DEFINED__
typedef interface IStdSketchVertical IStdSketchVertical;
#endif 	/* __IStdSketchVertical_FWD_DEFINED__ */


#ifndef __IStdDatumPlaneOffsetFeature_FWD_DEFINED__
#define __IStdDatumPlaneOffsetFeature_FWD_DEFINED__
typedef interface IStdDatumPlaneOffsetFeature IStdDatumPlaneOffsetFeature;
#endif 	/* __IStdDatumPlaneOffsetFeature_FWD_DEFINED__ */


#ifndef __IStdSolidLoftFacesFeature_FWD_DEFINED__
#define __IStdSolidLoftFacesFeature_FWD_DEFINED__
typedef interface IStdSolidLoftFacesFeature IStdSolidLoftFacesFeature;
#endif 	/* __IStdSolidLoftFacesFeature_FWD_DEFINED__ */


#ifndef __IStdSolidLoftSectionsFeature_FWD_DEFINED__
#define __IStdSolidLoftSectionsFeature_FWD_DEFINED__
typedef interface IStdSolidLoftSectionsFeature IStdSolidLoftSectionsFeature;
#endif 	/* __IStdSolidLoftSectionsFeature_FWD_DEFINED__ */


#ifndef __IStdSolidCutSweepFeature_FWD_DEFINED__
#define __IStdSolidCutSweepFeature_FWD_DEFINED__
typedef interface IStdSolidCutSweepFeature IStdSolidCutSweepFeature;
#endif 	/* __IStdSolidCutSweepFeature_FWD_DEFINED__ */


#ifndef __IStdSolidHoleSimpleFeature_FWD_DEFINED__
#define __IStdSolidHoleSimpleFeature_FWD_DEFINED__
typedef interface IStdSolidHoleSimpleFeature IStdSolidHoleSimpleFeature;
#endif 	/* __IStdSolidHoleSimpleFeature_FWD_DEFINED__ */


#ifndef __IStdSolidShellFeature_FWD_DEFINED__
#define __IStdSolidShellFeature_FWD_DEFINED__
typedef interface IStdSolidShellFeature IStdSolidShellFeature;
#endif 	/* __IStdSolidShellFeature_FWD_DEFINED__ */


#ifndef __IStdSolidRevolveWithExternalAxisFeature_FWD_DEFINED__
#define __IStdSolidRevolveWithExternalAxisFeature_FWD_DEFINED__
typedef interface IStdSolidRevolveWithExternalAxisFeature IStdSolidRevolveWithExternalAxisFeature;
#endif 	/* __IStdSolidRevolveWithExternalAxisFeature_FWD_DEFINED__ */


#ifndef __IStdSolidDraftFeature_FWD_DEFINED__
#define __IStdSolidDraftFeature_FWD_DEFINED__
typedef interface IStdSolidDraftFeature IStdSolidDraftFeature;
#endif 	/* __IStdSolidDraftFeature_FWD_DEFINED__ */


#ifndef __IStdSolidOffsetFeature_FWD_DEFINED__
#define __IStdSolidOffsetFeature_FWD_DEFINED__
typedef interface IStdSolidOffsetFeature IStdSolidOffsetFeature;
#endif 	/* __IStdSolidOffsetFeature_FWD_DEFINED__ */


#ifndef __IStdSolidImportedBrepFeature_FWD_DEFINED__
#define __IStdSolidImportedBrepFeature_FWD_DEFINED__
typedef interface IStdSolidImportedBrepFeature IStdSolidImportedBrepFeature;
#endif 	/* __IStdSolidImportedBrepFeature_FWD_DEFINED__ */


#ifndef __ISolid_FWD_DEFINED__
#define __ISolid_FWD_DEFINED__
typedef interface ISolid ISolid;
#endif 	/* __ISolid_FWD_DEFINED__ */


#ifndef __IFaces_FWD_DEFINED__
#define __IFaces_FWD_DEFINED__
typedef interface IFaces IFaces;
#endif 	/* __IFaces_FWD_DEFINED__ */


#ifndef __IEdges_FWD_DEFINED__
#define __IEdges_FWD_DEFINED__
typedef interface IEdges IEdges;
#endif 	/* __IEdges_FWD_DEFINED__ */


#ifndef __IFace_FWD_DEFINED__
#define __IFace_FWD_DEFINED__
typedef interface IFace IFace;
#endif 	/* __IFace_FWD_DEFINED__ */


#ifndef __IEdge_FWD_DEFINED__
#define __IEdge_FWD_DEFINED__
typedef interface IEdge IEdge;
#endif 	/* __IEdge_FWD_DEFINED__ */


#ifndef __IVertices_FWD_DEFINED__
#define __IVertices_FWD_DEFINED__
typedef interface IVertices IVertices;
#endif 	/* __IVertices_FWD_DEFINED__ */


#ifndef __IVertex_FWD_DEFINED__
#define __IVertex_FWD_DEFINED__
typedef interface IVertex IVertex;
#endif 	/* __IVertex_FWD_DEFINED__ */


#ifndef __IPoint3D_FWD_DEFINED__
#define __IPoint3D_FWD_DEFINED__
typedef interface IPoint3D IPoint3D;
#endif 	/* __IPoint3D_FWD_DEFINED__ */


#ifndef __IAxis1_FWD_DEFINED__
#define __IAxis1_FWD_DEFINED__
typedef interface IAxis1 IAxis1;
#endif 	/* __IAxis1_FWD_DEFINED__ */


#ifndef __IAssemDocument_FWD_DEFINED__
#define __IAssemDocument_FWD_DEFINED__
typedef interface IAssemDocument IAssemDocument;
#endif 	/* __IAssemDocument_FWD_DEFINED__ */


#ifndef __IComp_FWD_DEFINED__
#define __IComp_FWD_DEFINED__
typedef interface IComp IComp;
#endif 	/* __IComp_FWD_DEFINED__ */


#ifndef __IAssem_FWD_DEFINED__
#define __IAssem_FWD_DEFINED__
typedef interface IAssem IAssem;
#endif 	/* __IAssem_FWD_DEFINED__ */


#ifndef __IStdAssemConstraints_FWD_DEFINED__
#define __IStdAssemConstraints_FWD_DEFINED__
typedef interface IStdAssemConstraints IStdAssemConstraints;
#endif 	/* __IStdAssemConstraints_FWD_DEFINED__ */


#ifndef __IStdAssemConstraint_FWD_DEFINED__
#define __IStdAssemConstraint_FWD_DEFINED__
typedef interface IStdAssemConstraint IStdAssemConstraint;
#endif 	/* __IStdAssemConstraint_FWD_DEFINED__ */


#ifndef __IStdAssemConstraintCoaxial_FWD_DEFINED__
#define __IStdAssemConstraintCoaxial_FWD_DEFINED__
typedef interface IStdAssemConstraintCoaxial IStdAssemConstraintCoaxial;
#endif 	/* __IStdAssemConstraintCoaxial_FWD_DEFINED__ */


#ifndef __IStdAssemConstraintIncidence_FWD_DEFINED__
#define __IStdAssemConstraintIncidence_FWD_DEFINED__
typedef interface IStdAssemConstraintIncidence IStdAssemConstraintIncidence;
#endif 	/* __IStdAssemConstraintIncidence_FWD_DEFINED__ */


#ifndef __Application_FWD_DEFINED__
#define __Application_FWD_DEFINED__

#ifdef __cplusplus
typedef class Application Application;
#else
typedef struct Application Application;
#endif /* __cplusplus */

#endif 	/* __Application_FWD_DEFINED__ */


#ifndef __Documents_FWD_DEFINED__
#define __Documents_FWD_DEFINED__

#ifdef __cplusplus
typedef class Documents Documents;
#else
typedef struct Documents Documents;
#endif /* __cplusplus */

#endif 	/* __Documents_FWD_DEFINED__ */


#ifndef __Document_FWD_DEFINED__
#define __Document_FWD_DEFINED__

#ifdef __cplusplus
typedef class Document Document;
#else
typedef struct Document Document;
#endif /* __cplusplus */

#endif 	/* __Document_FWD_DEFINED__ */


#ifndef __PartDocument_FWD_DEFINED__
#define __PartDocument_FWD_DEFINED__

#ifdef __cplusplus
typedef class PartDocument PartDocument;
#else
typedef struct PartDocument PartDocument;
#endif /* __cplusplus */

#endif 	/* __PartDocument_FWD_DEFINED__ */


#ifndef __Part_FWD_DEFINED__
#define __Part_FWD_DEFINED__

#ifdef __cplusplus
typedef class Part Part;
#else
typedef struct Part Part;
#endif /* __cplusplus */

#endif 	/* __Part_FWD_DEFINED__ */


#ifndef __Features_FWD_DEFINED__
#define __Features_FWD_DEFINED__

#ifdef __cplusplus
typedef class Features Features;
#else
typedef struct Features Features;
#endif /* __cplusplus */

#endif 	/* __Features_FWD_DEFINED__ */


#ifndef __StdDefaultDatumPlaneFeature_FWD_DEFINED__
#define __StdDefaultDatumPlaneFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdDefaultDatumPlaneFeature StdDefaultDatumPlaneFeature;
#else
typedef struct StdDefaultDatumPlaneFeature StdDefaultDatumPlaneFeature;
#endif /* __cplusplus */

#endif 	/* __StdDefaultDatumPlaneFeature_FWD_DEFINED__ */


#ifndef __StdSketchFeature_FWD_DEFINED__
#define __StdSketchFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSketchFeature StdSketchFeature;
#else
typedef struct StdSketchFeature StdSketchFeature;
#endif /* __cplusplus */

#endif 	/* __StdSketchFeature_FWD_DEFINED__ */


#ifndef __StdSolidProtrusionExtrudeFeature_FWD_DEFINED__
#define __StdSolidProtrusionExtrudeFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSolidProtrusionExtrudeFeature StdSolidProtrusionExtrudeFeature;
#else
typedef struct StdSolidProtrusionExtrudeFeature StdSolidProtrusionExtrudeFeature;
#endif /* __cplusplus */

#endif 	/* __StdSolidProtrusionExtrudeFeature_FWD_DEFINED__ */


#ifndef __StdSolidCutExtrudeFeature_FWD_DEFINED__
#define __StdSolidCutExtrudeFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSolidCutExtrudeFeature StdSolidCutExtrudeFeature;
#else
typedef struct StdSolidCutExtrudeFeature StdSolidCutExtrudeFeature;
#endif /* __cplusplus */

#endif 	/* __StdSolidCutExtrudeFeature_FWD_DEFINED__ */


#ifndef __StdSolidFilletConstantFeature_FWD_DEFINED__
#define __StdSolidFilletConstantFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSolidFilletConstantFeature StdSolidFilletConstantFeature;
#else
typedef struct StdSolidFilletConstantFeature StdSolidFilletConstantFeature;
#endif /* __cplusplus */

#endif 	/* __StdSolidFilletConstantFeature_FWD_DEFINED__ */


#ifndef __StdSketchOrigin_FWD_DEFINED__
#define __StdSketchOrigin_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSketchOrigin StdSketchOrigin;
#else
typedef struct StdSketchOrigin StdSketchOrigin;
#endif /* __cplusplus */

#endif 	/* __StdSketchOrigin_FWD_DEFINED__ */


#ifndef __StdSketchVDirection_FWD_DEFINED__
#define __StdSketchVDirection_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSketchVDirection StdSketchVDirection;
#else
typedef struct StdSketchVDirection StdSketchVDirection;
#endif /* __cplusplus */

#endif 	/* __StdSketchVDirection_FWD_DEFINED__ */


#ifndef __StdSketchHDirection_FWD_DEFINED__
#define __StdSketchHDirection_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSketchHDirection StdSketchHDirection;
#else
typedef struct StdSketchHDirection StdSketchHDirection;
#endif /* __cplusplus */

#endif 	/* __StdSketchHDirection_FWD_DEFINED__ */


#ifndef __StdSketchGeometries_FWD_DEFINED__
#define __StdSketchGeometries_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSketchGeometries StdSketchGeometries;
#else
typedef struct StdSketchGeometries StdSketchGeometries;
#endif /* __cplusplus */

#endif 	/* __StdSketchGeometries_FWD_DEFINED__ */


#ifndef __StdSketchConstraints_FWD_DEFINED__
#define __StdSketchConstraints_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSketchConstraints StdSketchConstraints;
#else
typedef struct StdSketchConstraints StdSketchConstraints;
#endif /* __cplusplus */

#endif 	/* __StdSketchConstraints_FWD_DEFINED__ */


#ifndef __StdSketchGeometry_FWD_DEFINED__
#define __StdSketchGeometry_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSketchGeometry StdSketchGeometry;
#else
typedef struct StdSketchGeometry StdSketchGeometry;
#endif /* __cplusplus */

#endif 	/* __StdSketchGeometry_FWD_DEFINED__ */


#ifndef __StdSketchConstraint_FWD_DEFINED__
#define __StdSketchConstraint_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSketchConstraint StdSketchConstraint;
#else
typedef struct StdSketchConstraint StdSketchConstraint;
#endif /* __cplusplus */

#endif 	/* __StdSketchConstraint_FWD_DEFINED__ */


#ifndef __StdSketchCircle_FWD_DEFINED__
#define __StdSketchCircle_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSketchCircle StdSketchCircle;
#else
typedef struct StdSketchCircle StdSketchCircle;
#endif /* __cplusplus */

#endif 	/* __StdSketchCircle_FWD_DEFINED__ */


#ifndef __StdSketchCircularArc_FWD_DEFINED__
#define __StdSketchCircularArc_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSketchCircularArc StdSketchCircularArc;
#else
typedef struct StdSketchCircularArc StdSketchCircularArc;
#endif /* __cplusplus */

#endif 	/* __StdSketchCircularArc_FWD_DEFINED__ */


#ifndef __StdSketchControlPoint_FWD_DEFINED__
#define __StdSketchControlPoint_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSketchControlPoint StdSketchControlPoint;
#else
typedef struct StdSketchControlPoint StdSketchControlPoint;
#endif /* __cplusplus */

#endif 	/* __StdSketchControlPoint_FWD_DEFINED__ */


#ifndef __StdSketchLine_FWD_DEFINED__
#define __StdSketchLine_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSketchLine StdSketchLine;
#else
typedef struct StdSketchLine StdSketchLine;
#endif /* __cplusplus */

#endif 	/* __StdSketchLine_FWD_DEFINED__ */


#ifndef __References_FWD_DEFINED__
#define __References_FWD_DEFINED__

#ifdef __cplusplus
typedef class References References;
#else
typedef struct References References;
#endif /* __cplusplus */

#endif 	/* __References_FWD_DEFINED__ */


#ifndef __Reference_FWD_DEFINED__
#define __Reference_FWD_DEFINED__

#ifdef __cplusplus
typedef class Reference Reference;
#else
typedef struct Reference Reference;
#endif /* __cplusplus */

#endif 	/* __Reference_FWD_DEFINED__ */


#ifndef __ExplicitModelObject_FWD_DEFINED__
#define __ExplicitModelObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class ExplicitModelObject ExplicitModelObject;
#else
typedef struct ExplicitModelObject ExplicitModelObject;
#endif /* __cplusplus */

#endif 	/* __ExplicitModelObject_FWD_DEFINED__ */


#ifndef __Sketch_FWD_DEFINED__
#define __Sketch_FWD_DEFINED__

#ifdef __cplusplus
typedef class Sketch Sketch;
#else
typedef struct Sketch Sketch;
#endif /* __cplusplus */

#endif 	/* __Sketch_FWD_DEFINED__ */


#ifndef __SketchEditor_FWD_DEFINED__
#define __SketchEditor_FWD_DEFINED__

#ifdef __cplusplus
typedef class SketchEditor SketchEditor;
#else
typedef struct SketchEditor SketchEditor;
#endif /* __cplusplus */

#endif 	/* __SketchEditor_FWD_DEFINED__ */


#ifndef __StdSolidProtrusionSweepFeature_FWD_DEFINED__
#define __StdSolidProtrusionSweepFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSolidProtrusionSweepFeature StdSolidProtrusionSweepFeature;
#else
typedef struct StdSolidProtrusionSweepFeature StdSolidProtrusionSweepFeature;
#endif /* __cplusplus */

#endif 	/* __StdSolidProtrusionSweepFeature_FWD_DEFINED__ */


#ifndef __StdSolidProtrusionRevolveFeature_FWD_DEFINED__
#define __StdSolidProtrusionRevolveFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSolidProtrusionRevolveFeature StdSolidProtrusionRevolveFeature;
#else
typedef struct StdSolidProtrusionRevolveFeature StdSolidProtrusionRevolveFeature;
#endif /* __cplusplus */

#endif 	/* __StdSolidProtrusionRevolveFeature_FWD_DEFINED__ */


#ifndef __StdSketchCenterline_FWD_DEFINED__
#define __StdSketchCenterline_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSketchCenterline StdSketchCenterline;
#else
typedef struct StdSketchCenterline StdSketchCenterline;
#endif /* __cplusplus */

#endif 	/* __StdSketchCenterline_FWD_DEFINED__ */


#ifndef __StdSolidOperatePatternRectangularFeature_FWD_DEFINED__
#define __StdSolidOperatePatternRectangularFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSolidOperatePatternRectangularFeature StdSolidOperatePatternRectangularFeature;
#else
typedef struct StdSolidOperatePatternRectangularFeature StdSolidOperatePatternRectangularFeature;
#endif /* __cplusplus */

#endif 	/* __StdSolidOperatePatternRectangularFeature_FWD_DEFINED__ */


#ifndef __StdSolidChamferFeature_FWD_DEFINED__
#define __StdSolidChamferFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSolidChamferFeature StdSolidChamferFeature;
#else
typedef struct StdSolidChamferFeature StdSolidChamferFeature;
#endif /* __cplusplus */

#endif 	/* __StdSolidChamferFeature_FWD_DEFINED__ */


#ifndef __StdSolidCutRevolveFeature_FWD_DEFINED__
#define __StdSolidCutRevolveFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSolidCutRevolveFeature StdSolidCutRevolveFeature;
#else
typedef struct StdSolidCutRevolveFeature StdSolidCutRevolveFeature;
#endif /* __cplusplus */

#endif 	/* __StdSolidCutRevolveFeature_FWD_DEFINED__ */


#ifndef __StdSolidOperatePatternCircularFeature_FWD_DEFINED__
#define __StdSolidOperatePatternCircularFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSolidOperatePatternCircularFeature StdSolidOperatePatternCircularFeature;
#else
typedef struct StdSolidOperatePatternCircularFeature StdSolidOperatePatternCircularFeature;
#endif /* __cplusplus */

#endif 	/* __StdSolidOperatePatternCircularFeature_FWD_DEFINED__ */


#ifndef __StdSolidHoleCounterboredFeature_FWD_DEFINED__
#define __StdSolidHoleCounterboredFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSolidHoleCounterboredFeature StdSolidHoleCounterboredFeature;
#else
typedef struct StdSolidHoleCounterboredFeature StdSolidHoleCounterboredFeature;
#endif /* __cplusplus */

#endif 	/* __StdSolidHoleCounterboredFeature_FWD_DEFINED__ */


#ifndef __StdSolidHoleCountersunkFeature_FWD_DEFINED__
#define __StdSolidHoleCountersunkFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSolidHoleCountersunkFeature StdSolidHoleCountersunkFeature;
#else
typedef struct StdSolidHoleCountersunkFeature StdSolidHoleCountersunkFeature;
#endif /* __cplusplus */

#endif 	/* __StdSolidHoleCountersunkFeature_FWD_DEFINED__ */


#ifndef __StdSketchCoincidentSamePoints_FWD_DEFINED__
#define __StdSketchCoincidentSamePoints_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSketchCoincidentSamePoints StdSketchCoincidentSamePoints;
#else
typedef struct StdSketchCoincidentSamePoints StdSketchCoincidentSamePoints;
#endif /* __cplusplus */

#endif 	/* __StdSketchCoincidentSamePoints_FWD_DEFINED__ */


#ifndef __StdSketchParallel_FWD_DEFINED__
#define __StdSketchParallel_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSketchParallel StdSketchParallel;
#else
typedef struct StdSketchParallel StdSketchParallel;
#endif /* __cplusplus */

#endif 	/* __StdSketchParallel_FWD_DEFINED__ */


#ifndef __StdSketchPerpendicular_FWD_DEFINED__
#define __StdSketchPerpendicular_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSketchPerpendicular StdSketchPerpendicular;
#else
typedef struct StdSketchPerpendicular StdSketchPerpendicular;
#endif /* __cplusplus */

#endif 	/* __StdSketchPerpendicular_FWD_DEFINED__ */


#ifndef __StdSketchHorizontal_FWD_DEFINED__
#define __StdSketchHorizontal_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSketchHorizontal StdSketchHorizontal;
#else
typedef struct StdSketchHorizontal StdSketchHorizontal;
#endif /* __cplusplus */

#endif 	/* __StdSketchHorizontal_FWD_DEFINED__ */


#ifndef __StdSketchVertical_FWD_DEFINED__
#define __StdSketchVertical_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSketchVertical StdSketchVertical;
#else
typedef struct StdSketchVertical StdSketchVertical;
#endif /* __cplusplus */

#endif 	/* __StdSketchVertical_FWD_DEFINED__ */


#ifndef __StdDatumPlaneOffsetFeature_FWD_DEFINED__
#define __StdDatumPlaneOffsetFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdDatumPlaneOffsetFeature StdDatumPlaneOffsetFeature;
#else
typedef struct StdDatumPlaneOffsetFeature StdDatumPlaneOffsetFeature;
#endif /* __cplusplus */

#endif 	/* __StdDatumPlaneOffsetFeature_FWD_DEFINED__ */


#ifndef __AssemDocument_FWD_DEFINED__
#define __AssemDocument_FWD_DEFINED__

#ifdef __cplusplus
typedef class AssemDocument AssemDocument;
#else
typedef struct AssemDocument AssemDocument;
#endif /* __cplusplus */

#endif 	/* __AssemDocument_FWD_DEFINED__ */


#ifndef __Assem_FWD_DEFINED__
#define __Assem_FWD_DEFINED__

#ifdef __cplusplus
typedef class Assem Assem;
#else
typedef struct Assem Assem;
#endif /* __cplusplus */

#endif 	/* __Assem_FWD_DEFINED__ */


#ifndef __StdSolidLoftFacesFeature_FWD_DEFINED__
#define __StdSolidLoftFacesFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSolidLoftFacesFeature StdSolidLoftFacesFeature;
#else
typedef struct StdSolidLoftFacesFeature StdSolidLoftFacesFeature;
#endif /* __cplusplus */

#endif 	/* __StdSolidLoftFacesFeature_FWD_DEFINED__ */


#ifndef __Component_FWD_DEFINED__
#define __Component_FWD_DEFINED__

#ifdef __cplusplus
typedef class Component Component;
#else
typedef struct Component Component;
#endif /* __cplusplus */

#endif 	/* __Component_FWD_DEFINED__ */


#ifndef __StdSolidLoftSectionsFeature_FWD_DEFINED__
#define __StdSolidLoftSectionsFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSolidLoftSectionsFeature StdSolidLoftSectionsFeature;
#else
typedef struct StdSolidLoftSectionsFeature StdSolidLoftSectionsFeature;
#endif /* __cplusplus */

#endif 	/* __StdSolidLoftSectionsFeature_FWD_DEFINED__ */


#ifndef __StdSolidCutSweepFeature_FWD_DEFINED__
#define __StdSolidCutSweepFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSolidCutSweepFeature StdSolidCutSweepFeature;
#else
typedef struct StdSolidCutSweepFeature StdSolidCutSweepFeature;
#endif /* __cplusplus */

#endif 	/* __StdSolidCutSweepFeature_FWD_DEFINED__ */


#ifndef __StdSolidHoleSimpleFeature_FWD_DEFINED__
#define __StdSolidHoleSimpleFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSolidHoleSimpleFeature StdSolidHoleSimpleFeature;
#else
typedef struct StdSolidHoleSimpleFeature StdSolidHoleSimpleFeature;
#endif /* __cplusplus */

#endif 	/* __StdSolidHoleSimpleFeature_FWD_DEFINED__ */


#ifndef __StdSolidShellFeature_FWD_DEFINED__
#define __StdSolidShellFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSolidShellFeature StdSolidShellFeature;
#else
typedef struct StdSolidShellFeature StdSolidShellFeature;
#endif /* __cplusplus */

#endif 	/* __StdSolidShellFeature_FWD_DEFINED__ */


#ifndef __StdSolidRevolveWithExternalAxisFeature_FWD_DEFINED__
#define __StdSolidRevolveWithExternalAxisFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSolidRevolveWithExternalAxisFeature StdSolidRevolveWithExternalAxisFeature;
#else
typedef struct StdSolidRevolveWithExternalAxisFeature StdSolidRevolveWithExternalAxisFeature;
#endif /* __cplusplus */

#endif 	/* __StdSolidRevolveWithExternalAxisFeature_FWD_DEFINED__ */


#ifndef __StdSolidDraftFeature_FWD_DEFINED__
#define __StdSolidDraftFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSolidDraftFeature StdSolidDraftFeature;
#else
typedef struct StdSolidDraftFeature StdSolidDraftFeature;
#endif /* __cplusplus */

#endif 	/* __StdSolidDraftFeature_FWD_DEFINED__ */


#ifndef __StdSolidOffsetFeature_FWD_DEFINED__
#define __StdSolidOffsetFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSolidOffsetFeature StdSolidOffsetFeature;
#else
typedef struct StdSolidOffsetFeature StdSolidOffsetFeature;
#endif /* __cplusplus */

#endif 	/* __StdSolidOffsetFeature_FWD_DEFINED__ */


#ifndef __StdSolidImportedBrepFeature_FWD_DEFINED__
#define __StdSolidImportedBrepFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdSolidImportedBrepFeature StdSolidImportedBrepFeature;
#else
typedef struct StdSolidImportedBrepFeature StdSolidImportedBrepFeature;
#endif /* __cplusplus */

#endif 	/* __StdSolidImportedBrepFeature_FWD_DEFINED__ */


#ifndef __Solid_FWD_DEFINED__
#define __Solid_FWD_DEFINED__

#ifdef __cplusplus
typedef class Solid Solid;
#else
typedef struct Solid Solid;
#endif /* __cplusplus */

#endif 	/* __Solid_FWD_DEFINED__ */


#ifndef __Faces_FWD_DEFINED__
#define __Faces_FWD_DEFINED__

#ifdef __cplusplus
typedef class Faces Faces;
#else
typedef struct Faces Faces;
#endif /* __cplusplus */

#endif 	/* __Faces_FWD_DEFINED__ */


#ifndef __Edges_FWD_DEFINED__
#define __Edges_FWD_DEFINED__

#ifdef __cplusplus
typedef class Edges Edges;
#else
typedef struct Edges Edges;
#endif /* __cplusplus */

#endif 	/* __Edges_FWD_DEFINED__ */


#ifndef __Face_FWD_DEFINED__
#define __Face_FWD_DEFINED__

#ifdef __cplusplus
typedef class Face Face;
#else
typedef struct Face Face;
#endif /* __cplusplus */

#endif 	/* __Face_FWD_DEFINED__ */


#ifndef __Edge_FWD_DEFINED__
#define __Edge_FWD_DEFINED__

#ifdef __cplusplus
typedef class Edge Edge;
#else
typedef struct Edge Edge;
#endif /* __cplusplus */

#endif 	/* __Edge_FWD_DEFINED__ */


#ifndef __Vertices_FWD_DEFINED__
#define __Vertices_FWD_DEFINED__

#ifdef __cplusplus
typedef class Vertices Vertices;
#else
typedef struct Vertices Vertices;
#endif /* __cplusplus */

#endif 	/* __Vertices_FWD_DEFINED__ */


#ifndef __Vertex_FWD_DEFINED__
#define __Vertex_FWD_DEFINED__

#ifdef __cplusplus
typedef class Vertex Vertex;
#else
typedef struct Vertex Vertex;
#endif /* __cplusplus */

#endif 	/* __Vertex_FWD_DEFINED__ */


#ifndef __Point3D_FWD_DEFINED__
#define __Point3D_FWD_DEFINED__

#ifdef __cplusplus
typedef class Point3D Point3D;
#else
typedef struct Point3D Point3D;
#endif /* __cplusplus */

#endif 	/* __Point3D_FWD_DEFINED__ */


#ifndef __Axis1_FWD_DEFINED__
#define __Axis1_FWD_DEFINED__

#ifdef __cplusplus
typedef class Axis1 Axis1;
#else
typedef struct Axis1 Axis1;
#endif /* __cplusplus */

#endif 	/* __Axis1_FWD_DEFINED__ */


#ifndef __StdAssemConstraints_FWD_DEFINED__
#define __StdAssemConstraints_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdAssemConstraints StdAssemConstraints;
#else
typedef struct StdAssemConstraints StdAssemConstraints;
#endif /* __cplusplus */

#endif 	/* __StdAssemConstraints_FWD_DEFINED__ */


#ifndef __StdAssemConstraintCoaxial_FWD_DEFINED__
#define __StdAssemConstraintCoaxial_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdAssemConstraintCoaxial StdAssemConstraintCoaxial;
#else
typedef struct StdAssemConstraintCoaxial StdAssemConstraintCoaxial;
#endif /* __cplusplus */

#endif 	/* __StdAssemConstraintCoaxial_FWD_DEFINED__ */


#ifndef __StdAssemConstraintIncidence_FWD_DEFINED__
#define __StdAssemConstraintIncidence_FWD_DEFINED__

#ifdef __cplusplus
typedef class StdAssemConstraintIncidence StdAssemConstraintIncidence;
#else
typedef struct StdAssemConstraintIncidence StdAssemConstraintIncidence;
#endif /* __cplusplus */

#endif 	/* __StdAssemConstraintIncidence_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_TransCAD_0000_0000 */
/* [local] */ 




































































typedef 
enum StdExtrudeEndType
    {	Blind	= 0,
	ThroughAll	= ( Blind + 1 ) 
    } 	StdExtrudeEndType;

typedef 
enum StdRevolveEndType
    {	StdRevolveEndType_Blind	= 0
    } 	StdRevolveEndType;

typedef 
enum PropagationType
    {	Minimal	= 0,
	Tangency	= ( Minimal + 1 ) 
    } 	PropagationType;

typedef 
enum FeatureType
    {	StdDefaultDatumPlaneFeature	= 0,
	StdSketchFeature	= ( StdDefaultDatumPlaneFeature + 1 ) ,
	StdSolidProtrusionExtrudeFeature	= ( StdSketchFeature + 1 ) ,
	StdSolidCutExtrudeFeature	= ( StdSolidProtrusionExtrudeFeature + 1 ) ,
	StdSolidFilletConstantFeature	= ( StdSolidCutExtrudeFeature + 1 ) ,
	StdSolidChamferFeature	= ( StdSolidFilletConstantFeature + 1 ) ,
	StdSolidProtrusionSweepFeature	= ( StdSolidChamferFeature + 1 ) ,
	StdSolidProtrusionRevolveFeature	= ( StdSolidProtrusionSweepFeature + 1 ) ,
	StdSolidCutRevolveFeature	= ( StdSolidProtrusionRevolveFeature + 1 ) ,
	StdSolidOperatePatternRectangularFeature	= ( StdSolidCutRevolveFeature + 1 ) ,
	StdSolidOperatePatternCircularFeature	= ( StdSolidOperatePatternRectangularFeature + 1 ) ,
	StdSolidHoleCounterboredFeature	= ( StdSolidOperatePatternCircularFeature + 1 ) ,
	StdSolidHoleCountersunkFeature	= ( StdSolidHoleCounterboredFeature + 1 ) ,
	StdDatumPlaneOffsetFeature	= ( StdSolidHoleCountersunkFeature + 1 ) ,
	StdSolidLoftFacesFeature	= ( StdDatumPlaneOffsetFeature + 1 ) ,
	StdSolidLoftSectionsFeature	= ( StdSolidLoftFacesFeature + 1 ) ,
	StdSolidCutSweepFeature	= ( StdSolidLoftSectionsFeature + 1 ) ,
	StdSolidHoleSimpleFeature	= ( StdSolidCutSweepFeature + 1 ) ,
	StdSolidShellFeature	= ( StdSolidHoleSimpleFeature + 1 ) ,
	StdSolidRevolveWithExternalAxisFeature	= ( StdSolidShellFeature + 1 ) ,
	StdSolidDraftFeature	= ( StdSolidRevolveWithExternalAxisFeature + 1 ) ,
	StdSolidOffsetFeature	= ( StdSolidDraftFeature + 1 ) ,
	StdSolidImportedBrepFeature	= ( StdSolidOffsetFeature + 1 ) ,
	StdSolidSphereFeature	= ( StdSolidImportedBrepFeature + 1 ) 
    } 	FeatureType;

typedef 
enum StdSketchGeometryType
    {	Line	= 0,
	Centerline	= ( Line + 1 ) ,
	Circle	= ( Centerline + 1 ) ,
	CircularArc	= ( Circle + 1 ) ,
	ControlPoint	= ( CircularArc + 1 ) 
    } 	StdSketchGeometryType;

typedef 
enum StdSketchConstraintType
    {	SamePoints	= 0,
	Perpendicular	= ( SamePoints + 1 ) ,
	Parallel	= ( Perpendicular + 1 ) ,
	Horizontal	= ( Parallel + 1 ) ,
	Vertical	= ( Horizontal + 1 ) 
    } 	StdSketchConstraintType;

typedef 
enum StdCoincidentSamePointsType
    {	StartPoint	= 0,
	EndPoint	= ( StartPoint + 1 ) ,
	CenterPoint	= ( EndPoint + 1 ) ,
	Whole	= ( CenterPoint + 1 ) 
    } 	StdCoincidentSamePointsType;

typedef 
enum ExplicitModelObjectType
    {	Solid	= 0,
	DatumPlane	= ( Solid + 1 ) ,
	Sketch	= ( DatumPlane + 1 ) 
    } 	ExplicitModelObjectType;

typedef 
enum ReferenceType
    {	Feature	= 0,
	ExplicitModelObject	= ( Feature + 1 ) ,
	Brep	= ( ExplicitModelObject + 1 ) 
    } 	ReferenceType;

typedef 
enum ChamferType
    {	ChamferType_Length	= 0,
	ChamferType_Angle	= ( ChamferType_Length + 1 ) 
    } 	ChamferType;

typedef 
enum FaceType
    {	FaceType_Plane	= 0,
	FaceType_Cylinder	= ( FaceType_Plane + 1 ) ,
	FaceType_Cone	= ( FaceType_Cylinder + 1 ) ,
	FaceType_Sphere	= ( FaceType_Cone + 1 ) ,
	FaceType_Torus	= ( FaceType_Sphere + 1 ) ,
	FaceType_Spline	= ( FaceType_Torus + 1 ) 
    } 	FaceType;

typedef 
enum EdgeType
    {	EdgeType_Line	= 0,
	EdgeType_Circle	= ( EdgeType_Line + 1 ) ,
	EdgeType_Ellipse	= ( EdgeType_Circle + 1 ) ,
	EdgeType_Helix	= ( EdgeType_Ellipse + 1 ) ,
	EdgeType_Spline	= ( EdgeType_Helix + 1 ) 
    } 	EdgeType;

typedef 
enum StdAssemblyConstraintType
    {	Coaxial	= 0,
	Incidence	= ( Coaxial + 1 ) 
    } 	StdAssemblyConstraintType;

typedef 
enum StdAssemblyIncidenceType
    {	Opposite	= 0,
	Same	= ( Opposite + 1 ) 
    } 	StdAssemblyIncidenceType;



extern RPC_IF_HANDLE __MIDL_itf_TransCAD_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_TransCAD_0000_0000_v0_0_s_ifspec;

#ifndef __IApplication_INTERFACE_DEFINED__
#define __IApplication_INTERFACE_DEFINED__

/* interface IApplication */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IApplication;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19487FB9-54F2-49A6-9DAE-FD9ADDD12A76")
    IApplication : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IApplication **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveDocument( 
            /* [retval][out] */ IDoc **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Documents( 
            /* [retval][out] */ IDocs **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Quit( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IApplicationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IApplication * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IApplication * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IApplication * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IApplication * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IApplication * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IApplication * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IApplication * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IApplication * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Visible )( 
            IApplication * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IApplication * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IApplication * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveDocument )( 
            IApplication * This,
            /* [retval][out] */ IDoc **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Documents )( 
            IApplication * This,
            /* [retval][out] */ IDocs **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IApplication * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Quit )( 
            IApplication * This);
        
        END_INTERFACE
    } IApplicationVtbl;

    interface IApplication
    {
        CONST_VTBL struct IApplicationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplication_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IApplication_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IApplication_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IApplication_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IApplication_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IApplication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IApplication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IApplication_get_Visible(This,pVal)	\
    ( (This)->lpVtbl -> get_Visible(This,pVal) ) 

#define IApplication_put_Visible(This,newVal)	\
    ( (This)->lpVtbl -> put_Visible(This,newVal) ) 

#define IApplication_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IApplication_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IApplication_get_ActiveDocument(This,ppVal)	\
    ( (This)->lpVtbl -> get_ActiveDocument(This,ppVal) ) 

#define IApplication_get_Documents(This,ppVal)	\
    ( (This)->lpVtbl -> get_Documents(This,ppVal) ) 

#define IApplication_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IApplication_Quit(This)	\
    ( (This)->lpVtbl -> Quit(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IApplication_INTERFACE_DEFINED__ */


#ifndef __IDocs_INTERFACE_DEFINED__
#define __IDocs_INTERFACE_DEFINED__

/* interface IDocs */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IDocs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C12FB0DA-8BB2-4CF4-BC4F-7D538BA36727")
    IDocs : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IApplication **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long index,
            /* [retval][out] */ IDoc **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddPartDocument( 
            /* [retval][out] */ IPartDocument **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddAssemDocument( 
            /* [retval][out] */ IAssemDocument **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Open( 
            /* [in] */ BSTR filename,
            /* [retval][out] */ IPartDocument **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDocsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDocs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDocs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDocs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDocs * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDocs * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDocs * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDocs * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IDocs * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IDocs * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDocs * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDocs * This,
            /* [in] */ long index,
            /* [retval][out] */ IDoc **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDocs * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddPartDocument )( 
            IDocs * This,
            /* [retval][out] */ IPartDocument **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAssemDocument )( 
            IDocs * This,
            /* [retval][out] */ IAssemDocument **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IDocs * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IDocs * This,
            /* [in] */ BSTR filename,
            /* [retval][out] */ IPartDocument **ppVal);
        
        END_INTERFACE
    } IDocsVtbl;

    interface IDocs
    {
        CONST_VTBL struct IDocsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDocs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDocs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDocs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDocs_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDocs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDocs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDocs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDocs_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IDocs_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IDocs_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IDocs_get_Item(This,index,ppVal)	\
    ( (This)->lpVtbl -> get_Item(This,index,ppVal) ) 

#define IDocs_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#define IDocs_AddPartDocument(This,ppVal)	\
    ( (This)->lpVtbl -> AddPartDocument(This,ppVal) ) 

#define IDocs_AddAssemDocument(This,ppVal)	\
    ( (This)->lpVtbl -> AddAssemDocument(This,ppVal) ) 

#define IDocs_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IDocs_Open(This,filename,ppVal)	\
    ( (This)->lpVtbl -> Open(This,filename,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDocs_INTERFACE_DEFINED__ */


#ifndef __IDoc_INTERFACE_DEFINED__
#define __IDoc_INTERFACE_DEFINED__

/* interface IDoc */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IDoc;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BC5F8AB3-0439-4F12-AF08-8F7D74928940")
    IDoc : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IApplication **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FullName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Saved( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Activate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close( 
            /* [in] */ VARIANT_BOOL saveChanges,
            /* [in] */ BSTR filename) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveAs( 
            /* [in] */ BSTR filename) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDocVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDoc * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDoc * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDoc * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDoc * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDoc * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDoc * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDoc * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IDoc * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IDoc * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullName )( 
            IDoc * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDoc * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            IDoc * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Saved )( 
            IDoc * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IDoc * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IDoc * This,
            /* [in] */ VARIANT_BOOL saveChanges,
            /* [in] */ BSTR filename);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IDoc * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveAs )( 
            IDoc * This,
            /* [in] */ BSTR filename);
        
        END_INTERFACE
    } IDocVtbl;

    interface IDoc
    {
        CONST_VTBL struct IDocVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDoc_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDoc_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDoc_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDoc_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDoc_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDoc_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDoc_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDoc_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IDoc_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IDoc_get_FullName(This,pVal)	\
    ( (This)->lpVtbl -> get_FullName(This,pVal) ) 

#define IDoc_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IDoc_get_Path(This,pVal)	\
    ( (This)->lpVtbl -> get_Path(This,pVal) ) 

#define IDoc_get_Saved(This,pVal)	\
    ( (This)->lpVtbl -> get_Saved(This,pVal) ) 

#define IDoc_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IDoc_Close(This,saveChanges,filename)	\
    ( (This)->lpVtbl -> Close(This,saveChanges,filename) ) 

#define IDoc_Save(This)	\
    ( (This)->lpVtbl -> Save(This) ) 

#define IDoc_SaveAs(This,filename)	\
    ( (This)->lpVtbl -> SaveAs(This,filename) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDoc_INTERFACE_DEFINED__ */


#ifndef __IPartDocument_INTERFACE_DEFINED__
#define __IPartDocument_INTERFACE_DEFINED__

/* interface IPartDocument */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IPartDocument;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C37F3BC0-22DD-4E20-A203-286ACE862758")
    IPartDocument : public IDoc
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Part( 
            /* [retval][out] */ IPart **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Update( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Title( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DoMeshGeneration( 
            double normalTolerance,
            double surfaceTolerance) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBBDiagonal( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportFromCATIA( 
            /* [in] */ BSTR filePath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExportToCATIA( 
            /* [in] */ BSTR filePath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportFromUG( 
            /* [in] */ BSTR filePath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExportToUG( 
            /* [in] */ BSTR filePath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExportToMesh( 
            /* [in] */ BSTR filePath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExportToBrep( 
            /* [in] */ BSTR filePath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExportToXML( 
            /* [in] */ BSTR filePath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportFromXML( 
            /* [in] */ BSTR filePath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RunScriptInterface( 
            /* [in] */ BSTR command) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportFromBrep( 
            /* [in] */ BSTR filePath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ConvertMesh( 
            /* [in] */ BSTR sourcePath,
            /* [in] */ BSTR targetPath) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPartDocumentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPartDocument * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPartDocument * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPartDocument * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPartDocument * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPartDocument * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPartDocument * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPartDocument * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IPartDocument * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IPartDocument * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullName )( 
            IPartDocument * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IPartDocument * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            IPartDocument * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Saved )( 
            IPartDocument * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IPartDocument * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IPartDocument * This,
            /* [in] */ VARIANT_BOOL saveChanges,
            /* [in] */ BSTR filename);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IPartDocument * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveAs )( 
            IPartDocument * This,
            /* [in] */ BSTR filename);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Part )( 
            IPartDocument * This,
            /* [retval][out] */ IPart **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            IPartDocument * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IPartDocument * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DoMeshGeneration )( 
            IPartDocument * This,
            double normalTolerance,
            double surfaceTolerance);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBBDiagonal )( 
            IPartDocument * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ImportFromCATIA )( 
            IPartDocument * This,
            /* [in] */ BSTR filePath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExportToCATIA )( 
            IPartDocument * This,
            /* [in] */ BSTR filePath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ImportFromUG )( 
            IPartDocument * This,
            /* [in] */ BSTR filePath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExportToUG )( 
            IPartDocument * This,
            /* [in] */ BSTR filePath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExportToMesh )( 
            IPartDocument * This,
            /* [in] */ BSTR filePath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExportToBrep )( 
            IPartDocument * This,
            /* [in] */ BSTR filePath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExportToXML )( 
            IPartDocument * This,
            /* [in] */ BSTR filePath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ImportFromXML )( 
            IPartDocument * This,
            /* [in] */ BSTR filePath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RunScriptInterface )( 
            IPartDocument * This,
            /* [in] */ BSTR command);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ImportFromBrep )( 
            IPartDocument * This,
            /* [in] */ BSTR filePath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ConvertMesh )( 
            IPartDocument * This,
            /* [in] */ BSTR sourcePath,
            /* [in] */ BSTR targetPath);
        
        END_INTERFACE
    } IPartDocumentVtbl;

    interface IPartDocument
    {
        CONST_VTBL struct IPartDocumentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPartDocument_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPartDocument_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPartDocument_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPartDocument_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPartDocument_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPartDocument_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPartDocument_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPartDocument_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IPartDocument_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IPartDocument_get_FullName(This,pVal)	\
    ( (This)->lpVtbl -> get_FullName(This,pVal) ) 

#define IPartDocument_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IPartDocument_get_Path(This,pVal)	\
    ( (This)->lpVtbl -> get_Path(This,pVal) ) 

#define IPartDocument_get_Saved(This,pVal)	\
    ( (This)->lpVtbl -> get_Saved(This,pVal) ) 

#define IPartDocument_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IPartDocument_Close(This,saveChanges,filename)	\
    ( (This)->lpVtbl -> Close(This,saveChanges,filename) ) 

#define IPartDocument_Save(This)	\
    ( (This)->lpVtbl -> Save(This) ) 

#define IPartDocument_SaveAs(This,filename)	\
    ( (This)->lpVtbl -> SaveAs(This,filename) ) 


#define IPartDocument_get_Part(This,pVal)	\
    ( (This)->lpVtbl -> get_Part(This,pVal) ) 

#define IPartDocument_Update(This)	\
    ( (This)->lpVtbl -> Update(This) ) 

#define IPartDocument_get_Title(This,pVal)	\
    ( (This)->lpVtbl -> get_Title(This,pVal) ) 

#define IPartDocument_DoMeshGeneration(This,normalTolerance,surfaceTolerance)	\
    ( (This)->lpVtbl -> DoMeshGeneration(This,normalTolerance,surfaceTolerance) ) 

#define IPartDocument_GetBBDiagonal(This)	\
    ( (This)->lpVtbl -> GetBBDiagonal(This) ) 

#define IPartDocument_ImportFromCATIA(This,filePath)	\
    ( (This)->lpVtbl -> ImportFromCATIA(This,filePath) ) 

#define IPartDocument_ExportToCATIA(This,filePath)	\
    ( (This)->lpVtbl -> ExportToCATIA(This,filePath) ) 

#define IPartDocument_ImportFromUG(This,filePath)	\
    ( (This)->lpVtbl -> ImportFromUG(This,filePath) ) 

#define IPartDocument_ExportToUG(This,filePath)	\
    ( (This)->lpVtbl -> ExportToUG(This,filePath) ) 

#define IPartDocument_ExportToMesh(This,filePath)	\
    ( (This)->lpVtbl -> ExportToMesh(This,filePath) ) 

#define IPartDocument_ExportToBrep(This,filePath)	\
    ( (This)->lpVtbl -> ExportToBrep(This,filePath) ) 

#define IPartDocument_ExportToXML(This,filePath)	\
    ( (This)->lpVtbl -> ExportToXML(This,filePath) ) 

#define IPartDocument_ImportFromXML(This,filePath)	\
    ( (This)->lpVtbl -> ImportFromXML(This,filePath) ) 

#define IPartDocument_RunScriptInterface(This,command)	\
    ( (This)->lpVtbl -> RunScriptInterface(This,command) ) 

#define IPartDocument_ImportFromBrep(This,filePath)	\
    ( (This)->lpVtbl -> ImportFromBrep(This,filePath) ) 

#define IPartDocument_ConvertMesh(This,sourcePath,targetPath)	\
    ( (This)->lpVtbl -> ConvertMesh(This,sourcePath,targetPath) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPartDocument_INTERFACE_DEFINED__ */


#ifndef __IPart_INTERFACE_DEFINED__
#define __IPart_INTERFACE_DEFINED__

/* interface IPart */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IPart;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("37EBFFCD-077E-4323-83E0-3A8255AFB845")
    IPart : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IApplication **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Features( 
            /* [retval][out] */ IFeatures **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateReferences( 
            /* [retval][out] */ IReferences **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SelectObjectByName( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SelectBrepByName( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SelectPlaneByAxis( 
            /* [in] */ double ox,
            /* [in] */ double oy,
            /* [in] */ double oz,
            /* [in] */ double xx,
            /* [in] */ double xy,
            /* [in] */ double xz,
            /* [in] */ double yx,
            /* [in] */ double yy,
            /* [in] */ double yz,
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SelectCurveBy3Points( 
            /* [in] */ double startx,
            /* [in] */ double starty,
            /* [in] */ double startz,
            /* [in] */ double endx,
            /* [in] */ double endy,
            /* [in] */ double endz,
            /* [in] */ double curvex,
            /* [in] */ double curvey,
            /* [in] */ double curvez,
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SelectFeatureByName( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SelectCurveByPoint( 
            /* [in] */ double curvex,
            /* [in] */ double curvey,
            /* [in] */ double curvez,
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE set_Name( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE set_ParentName( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE get_ParentName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadFromFile( 
            /* [in] */ BSTR name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsBrepPart( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SelectSketchSegmentByName( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Solid( 
            /* [retval][out] */ ISolid **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPartVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPart * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPart * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPart * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPart * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPart * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPart * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPart * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IPart * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IPart * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IPart * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Features )( 
            IPart * This,
            /* [retval][out] */ IFeatures **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateReferences )( 
            IPart * This,
            /* [retval][out] */ IReferences **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SelectObjectByName )( 
            IPart * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SelectBrepByName )( 
            IPart * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SelectPlaneByAxis )( 
            IPart * This,
            /* [in] */ double ox,
            /* [in] */ double oy,
            /* [in] */ double oz,
            /* [in] */ double xx,
            /* [in] */ double xy,
            /* [in] */ double xz,
            /* [in] */ double yx,
            /* [in] */ double yy,
            /* [in] */ double yz,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SelectCurveBy3Points )( 
            IPart * This,
            /* [in] */ double startx,
            /* [in] */ double starty,
            /* [in] */ double startz,
            /* [in] */ double endx,
            /* [in] */ double endy,
            /* [in] */ double endz,
            /* [in] */ double curvex,
            /* [in] */ double curvey,
            /* [in] */ double curvez,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SelectFeatureByName )( 
            IPart * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SelectCurveByPoint )( 
            IPart * This,
            /* [in] */ double curvex,
            /* [in] */ double curvey,
            /* [in] */ double curvez,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *set_Name )( 
            IPart * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *set_ParentName )( 
            IPart * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_ParentName )( 
            IPart * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadFromFile )( 
            IPart * This,
            /* [in] */ BSTR name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsBrepPart )( 
            IPart * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SelectSketchSegmentByName )( 
            IPart * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Solid )( 
            IPart * This,
            /* [retval][out] */ ISolid **ppVal);
        
        END_INTERFACE
    } IPartVtbl;

    interface IPart
    {
        CONST_VTBL struct IPartVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPart_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPart_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPart_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPart_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPart_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPart_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPart_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPart_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IPart_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IPart_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IPart_get_Features(This,ppVal)	\
    ( (This)->lpVtbl -> get_Features(This,ppVal) ) 

#define IPart_CreateReferences(This,ppVal)	\
    ( (This)->lpVtbl -> CreateReferences(This,ppVal) ) 

#define IPart_SelectObjectByName(This,name,ppVal)	\
    ( (This)->lpVtbl -> SelectObjectByName(This,name,ppVal) ) 

#define IPart_SelectBrepByName(This,name,ppVal)	\
    ( (This)->lpVtbl -> SelectBrepByName(This,name,ppVal) ) 

#define IPart_SelectPlaneByAxis(This,ox,oy,oz,xx,xy,xz,yx,yy,yz,ppVal)	\
    ( (This)->lpVtbl -> SelectPlaneByAxis(This,ox,oy,oz,xx,xy,xz,yx,yy,yz,ppVal) ) 

#define IPart_SelectCurveBy3Points(This,startx,starty,startz,endx,endy,endz,curvex,curvey,curvez,ppVal)	\
    ( (This)->lpVtbl -> SelectCurveBy3Points(This,startx,starty,startz,endx,endy,endz,curvex,curvey,curvez,ppVal) ) 

#define IPart_SelectFeatureByName(This,name,ppVal)	\
    ( (This)->lpVtbl -> SelectFeatureByName(This,name,ppVal) ) 

#define IPart_SelectCurveByPoint(This,curvex,curvey,curvez,ppVal)	\
    ( (This)->lpVtbl -> SelectCurveByPoint(This,curvex,curvey,curvez,ppVal) ) 

#define IPart_set_Name(This,pVal)	\
    ( (This)->lpVtbl -> set_Name(This,pVal) ) 

#define IPart_set_ParentName(This,pVal)	\
    ( (This)->lpVtbl -> set_ParentName(This,pVal) ) 

#define IPart_get_ParentName(This,pVal)	\
    ( (This)->lpVtbl -> get_ParentName(This,pVal) ) 

#define IPart_LoadFromFile(This,name)	\
    ( (This)->lpVtbl -> LoadFromFile(This,name) ) 

#define IPart_IsBrepPart(This,pVal)	\
    ( (This)->lpVtbl -> IsBrepPart(This,pVal) ) 

#define IPart_SelectSketchSegmentByName(This,name,ppVal)	\
    ( (This)->lpVtbl -> SelectSketchSegmentByName(This,name,ppVal) ) 

#define IPart_get_Solid(This,ppVal)	\
    ( (This)->lpVtbl -> get_Solid(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPart_INTERFACE_DEFINED__ */


#ifndef __IFeatures_INTERFACE_DEFINED__
#define __IFeatures_INTERFACE_DEFINED__

/* interface IFeatures */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IFeatures;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8084C085-5F3F-49F0-B82C-2276F12C88AB")
    IFeatures : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IApplication **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long index,
            /* [retval][out] */ IFeature **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewSketchFeature( 
            /* [in] */ BSTR name,
            /* [in] */ IReference *pSketchPlane,
            /* [retval][out] */ IStdSketchFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewSolidProtrusionExtrudeFeature( 
            /* [in] */ BSTR name,
            /* [in] */ IReference *pProfileSketch,
            /* [in] */ double startDepth,
            /* [in] */ StdExtrudeEndType startCondition,
            /* [in] */ double endDepth,
            /* [in] */ StdExtrudeEndType endCondition,
            /* [in] */ VARIANT_BOOL isFlip,
            /* [retval][out] */ IStdSolidProtrusionExtrudeFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewSolidCutExtrudeFeature( 
            /* [in] */ BSTR name,
            /* [in] */ IReference *pProfileSketch,
            /* [in] */ double startDepth,
            /* [in] */ StdExtrudeEndType startCondition,
            /* [in] */ double endDepth,
            /* [in] */ StdExtrudeEndType endCondition,
            /* [in] */ VARIANT_BOOL isFlip,
            /* [retval][out] */ IStdSolidCutExtrudeFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewSolidFilletConstantFeature( 
            /* [in] */ BSTR name,
            /* [in] */ IReferences *pfilletEdges,
            /* [in] */ double radius,
            /* [in] */ PropagationType propagation,
            /* [retval][out] */ IStdSolidFilletConstantFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewSolidChamferFeature( 
            /* [in] */ BSTR name,
            /* [in] */ IReferences *pSelectedEdges,
            /* [in] */ double length,
            /* [retval][out] */ IStdSolidChamferFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewSolidProtrusionSweepFeature( 
            /* [in] */ BSTR name,
            /* [in] */ IReference *pProfileSketch,
            /* [in] */ IReference *pGuideCurve,
            /* [retval][out] */ IStdSolidProtrusionSweepFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewSolidProtrusionRevolveFeature( 
            /* [in] */ BSTR name,
            /* [in] */ IReference *pProfileSketch,
            /* [in] */ double startAngle,
            /* [in] */ StdRevolveEndType startCondition,
            /* [in] */ double endAngle,
            /* [in] */ StdRevolveEndType endCondition,
            /* [in] */ VARIANT_BOOL isFlip,
            /* [retval][out] */ IStdSolidProtrusionRevolveFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewSolidCutRevolveFeature( 
            /* [in] */ BSTR name,
            /* [in] */ IReference *pProfileSketch,
            /* [in] */ double startAngle,
            /* [in] */ StdRevolveEndType startCondition,
            /* [in] */ double endAngle,
            /* [in] */ StdRevolveEndType endCondition,
            /* [in] */ VARIANT_BOOL isFlip,
            /* [retval][out] */ IStdSolidCutRevolveFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewSolidOperatePatternRectangularFeature( 
            /* [in] */ BSTR name,
            /* [in] */ IReferences *pTargetFeatures,
            /* [in] */ double columnSpacing,
            /* [in] */ double colDirX,
            /* [in] */ double colDirY,
            /* [in] */ double colDirZ,
            /* [in] */ int columnNumber,
            /* [in] */ double rowSpacing,
            /* [in] */ double rowDirX,
            /* [in] */ double rowDirY,
            /* [in] */ double rowDirZ,
            /* [in] */ int rowNumber,
            /* [retval][out] */ IStdSolidOperatePatternRectangularFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewSolidOperatePatternCircularFeature( 
            /* [in] */ BSTR name,
            /* [in] */ IReferences *pTargetFeatures,
            /* [in] */ double x1,
            /* [in] */ double y1,
            /* [in] */ double z1,
            /* [in] */ double x2,
            /* [in] */ double y2,
            /* [in] */ double z2,
            /* [in] */ int angleNumber,
            /* [in] */ double angleIncrement,
            /* [in] */ int radialNumber,
            /* [in] */ double radialSpacing,
            /* [in] */ VARIANT_BOOL radialAlignment,
            /* [retval][out] */ IStdSolidOperatePatternCircularFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewSolidHoleCounterboredFeature( 
            /* [in] */ BSTR name,
            /* [in] */ IReference *pTargetFace,
            /* [in] */ double cx,
            /* [in] */ double cy,
            /* [in] */ double cz,
            /* [in] */ double startRadius,
            /* [in] */ double startDepth,
            /* [in] */ double endRadius,
            /* [in] */ double endDepth,
            /* [in] */ double angle,
            /* [retval][out] */ IStdSolidHoleCounterboredFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewSolidHoleCountersunkFeature( 
            /* [in] */ BSTR name,
            /* [in] */ IReference *pTargetFace,
            /* [in] */ double cx,
            /* [in] */ double cy,
            /* [in] */ double cz,
            /* [in] */ double radius,
            /* [in] */ double depth,
            /* [in] */ double sinkRadius,
            /* [in] */ double sinkAngle,
            /* [in] */ double bottomAngle,
            /* [retval][out] */ IStdSolidHoleCountersunkFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewDatumPlaneOffsetFeature( 
            /* [in] */ BSTR name,
            /* [in] */ IReference *pSelectedPlane,
            /* [in] */ double distance,
            /* [in] */ VARIANT_BOOL isFlip,
            /* [retval][out] */ IStdDatumPlaneOffsetFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewDatumPlaneOffsetFeature2( 
            /* [in] */ BSTR name,
            /* [in] */ double ox,
            /* [in] */ double oy,
            /* [in] */ double oz,
            /* [in] */ double xx,
            /* [in] */ double xy,
            /* [in] */ double xz,
            /* [in] */ double yx,
            /* [in] */ double yy,
            /* [in] */ double yz,
            /* [in] */ VARIANT_BOOL isFlip,
            /* [retval][out] */ IStdDatumPlaneOffsetFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewSolidLoftFacesFeature( 
            /* [in] */ BSTR name,
            /* [in] */ IReference *pFace1,
            /* [in] */ double param1,
            /* [in] */ IReference *pFace2,
            /* [in] */ double param2,
            /* [retval][out] */ IStdSolidLoftFacesFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewSolidLoftSectionsFeature( 
            /* [in] */ BSTR name,
            /* [in] */ IReferences *pLoftSections,
            /* [in] */ VARIANT_BOOL isCut,
            /* [retval][out] */ IStdSolidLoftSectionsFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewSolidCutSweepFeature( 
            /* [in] */ BSTR name,
            /* [in] */ IReference *pProfileSketch,
            /* [in] */ IReference *pGuideCurve,
            /* [retval][out] */ IStdSolidCutSweepFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewSolidHoleSimpleFeature( 
            /* [in] */ BSTR name,
            /* [in] */ IReference *pTargetFace,
            /* [in] */ double cx,
            /* [in] */ double cy,
            /* [in] */ double cz,
            /* [in] */ double Radius,
            /* [in] */ double Depth,
            /* [retval][out] */ IStdSolidHoleSimpleFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewSolidShellFeature( 
            /* [in] */ BSTR name,
            /* [in] */ IReferences *pTargetFaces,
            /* [in] */ double innerThickness,
            /* [in] */ double outerThickness,
            /* [retval][out] */ IStdSolidShellFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewSolidRevolveWithExternalAxisFeature( 
            /* [in] */ BSTR name,
            /* [in] */ IReference *pProfileSketch,
            /* [in] */ double startAngle,
            /* [in] */ StdRevolveEndType startCondition,
            /* [in] */ double endAngle,
            /* [in] */ StdRevolveEndType endCondition,
            /* [in] */ double orgX,
            /* [in] */ double orgY,
            /* [in] */ double orgZ,
            /* [in] */ double dirX,
            /* [in] */ double dirY,
            /* [in] */ double dirZ,
            /* [in] */ VARIANT_BOOL isCut,
            /* [in] */ VARIANT_BOOL isFlip,
            /* [retval][out] */ IStdSolidRevolveWithExternalAxisFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( 
            /* [in] */ long index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteByName( 
            /* [in] */ BSTR name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewSolidDraftFeature( 
            /* [in] */ BSTR name,
            /* [in] */ IReferences *pTargetFaces,
            /* [in] */ double orgX,
            /* [in] */ double orgY,
            /* [in] */ double orgZ,
            /* [in] */ double dirX,
            /* [in] */ double dirY,
            /* [in] */ double dirZ,
            /* [in] */ double draftAngle,
            /* [retval][out] */ IStdSolidDraftFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewSolidOffsetFeature( 
            /* [in] */ BSTR name,
            /* [in] */ IReferences *pTargetFaces,
            /* [in] */ double offsetThickness,
            /* [retval][out] */ IStdSolidOffsetFeature **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewSolidImportedBrepFeature( 
            /* [in] */ BSTR name,
            /* [in] */ BSTR filePath,
            /* [retval][out] */ IStdSolidImportedBrepFeature **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFeaturesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFeatures * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFeatures * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFeatures * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFeatures * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFeatures * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFeatures * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFeatures * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IFeatures * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IFeatures * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IFeatures * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IFeatures * This,
            /* [in] */ long index,
            /* [retval][out] */ IFeature **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IFeatures * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewSketchFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ IReference *pSketchPlane,
            /* [retval][out] */ IStdSketchFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewSolidProtrusionExtrudeFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ IReference *pProfileSketch,
            /* [in] */ double startDepth,
            /* [in] */ StdExtrudeEndType startCondition,
            /* [in] */ double endDepth,
            /* [in] */ StdExtrudeEndType endCondition,
            /* [in] */ VARIANT_BOOL isFlip,
            /* [retval][out] */ IStdSolidProtrusionExtrudeFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewSolidCutExtrudeFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ IReference *pProfileSketch,
            /* [in] */ double startDepth,
            /* [in] */ StdExtrudeEndType startCondition,
            /* [in] */ double endDepth,
            /* [in] */ StdExtrudeEndType endCondition,
            /* [in] */ VARIANT_BOOL isFlip,
            /* [retval][out] */ IStdSolidCutExtrudeFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewSolidFilletConstantFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ IReferences *pfilletEdges,
            /* [in] */ double radius,
            /* [in] */ PropagationType propagation,
            /* [retval][out] */ IStdSolidFilletConstantFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewSolidChamferFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ IReferences *pSelectedEdges,
            /* [in] */ double length,
            /* [retval][out] */ IStdSolidChamferFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewSolidProtrusionSweepFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ IReference *pProfileSketch,
            /* [in] */ IReference *pGuideCurve,
            /* [retval][out] */ IStdSolidProtrusionSweepFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewSolidProtrusionRevolveFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ IReference *pProfileSketch,
            /* [in] */ double startAngle,
            /* [in] */ StdRevolveEndType startCondition,
            /* [in] */ double endAngle,
            /* [in] */ StdRevolveEndType endCondition,
            /* [in] */ VARIANT_BOOL isFlip,
            /* [retval][out] */ IStdSolidProtrusionRevolveFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewSolidCutRevolveFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ IReference *pProfileSketch,
            /* [in] */ double startAngle,
            /* [in] */ StdRevolveEndType startCondition,
            /* [in] */ double endAngle,
            /* [in] */ StdRevolveEndType endCondition,
            /* [in] */ VARIANT_BOOL isFlip,
            /* [retval][out] */ IStdSolidCutRevolveFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewSolidOperatePatternRectangularFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ IReferences *pTargetFeatures,
            /* [in] */ double columnSpacing,
            /* [in] */ double colDirX,
            /* [in] */ double colDirY,
            /* [in] */ double colDirZ,
            /* [in] */ int columnNumber,
            /* [in] */ double rowSpacing,
            /* [in] */ double rowDirX,
            /* [in] */ double rowDirY,
            /* [in] */ double rowDirZ,
            /* [in] */ int rowNumber,
            /* [retval][out] */ IStdSolidOperatePatternRectangularFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewSolidOperatePatternCircularFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ IReferences *pTargetFeatures,
            /* [in] */ double x1,
            /* [in] */ double y1,
            /* [in] */ double z1,
            /* [in] */ double x2,
            /* [in] */ double y2,
            /* [in] */ double z2,
            /* [in] */ int angleNumber,
            /* [in] */ double angleIncrement,
            /* [in] */ int radialNumber,
            /* [in] */ double radialSpacing,
            /* [in] */ VARIANT_BOOL radialAlignment,
            /* [retval][out] */ IStdSolidOperatePatternCircularFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewSolidHoleCounterboredFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ IReference *pTargetFace,
            /* [in] */ double cx,
            /* [in] */ double cy,
            /* [in] */ double cz,
            /* [in] */ double startRadius,
            /* [in] */ double startDepth,
            /* [in] */ double endRadius,
            /* [in] */ double endDepth,
            /* [in] */ double angle,
            /* [retval][out] */ IStdSolidHoleCounterboredFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewSolidHoleCountersunkFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ IReference *pTargetFace,
            /* [in] */ double cx,
            /* [in] */ double cy,
            /* [in] */ double cz,
            /* [in] */ double radius,
            /* [in] */ double depth,
            /* [in] */ double sinkRadius,
            /* [in] */ double sinkAngle,
            /* [in] */ double bottomAngle,
            /* [retval][out] */ IStdSolidHoleCountersunkFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewDatumPlaneOffsetFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ IReference *pSelectedPlane,
            /* [in] */ double distance,
            /* [in] */ VARIANT_BOOL isFlip,
            /* [retval][out] */ IStdDatumPlaneOffsetFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewDatumPlaneOffsetFeature2 )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ double ox,
            /* [in] */ double oy,
            /* [in] */ double oz,
            /* [in] */ double xx,
            /* [in] */ double xy,
            /* [in] */ double xz,
            /* [in] */ double yx,
            /* [in] */ double yy,
            /* [in] */ double yz,
            /* [in] */ VARIANT_BOOL isFlip,
            /* [retval][out] */ IStdDatumPlaneOffsetFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewSolidLoftFacesFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ IReference *pFace1,
            /* [in] */ double param1,
            /* [in] */ IReference *pFace2,
            /* [in] */ double param2,
            /* [retval][out] */ IStdSolidLoftFacesFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewSolidLoftSectionsFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ IReferences *pLoftSections,
            /* [in] */ VARIANT_BOOL isCut,
            /* [retval][out] */ IStdSolidLoftSectionsFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewSolidCutSweepFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ IReference *pProfileSketch,
            /* [in] */ IReference *pGuideCurve,
            /* [retval][out] */ IStdSolidCutSweepFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewSolidHoleSimpleFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ IReference *pTargetFace,
            /* [in] */ double cx,
            /* [in] */ double cy,
            /* [in] */ double cz,
            /* [in] */ double Radius,
            /* [in] */ double Depth,
            /* [retval][out] */ IStdSolidHoleSimpleFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewSolidShellFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ IReferences *pTargetFaces,
            /* [in] */ double innerThickness,
            /* [in] */ double outerThickness,
            /* [retval][out] */ IStdSolidShellFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewSolidRevolveWithExternalAxisFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ IReference *pProfileSketch,
            /* [in] */ double startAngle,
            /* [in] */ StdRevolveEndType startCondition,
            /* [in] */ double endAngle,
            /* [in] */ StdRevolveEndType endCondition,
            /* [in] */ double orgX,
            /* [in] */ double orgY,
            /* [in] */ double orgZ,
            /* [in] */ double dirX,
            /* [in] */ double dirY,
            /* [in] */ double dirZ,
            /* [in] */ VARIANT_BOOL isCut,
            /* [in] */ VARIANT_BOOL isFlip,
            /* [retval][out] */ IStdSolidRevolveWithExternalAxisFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IFeatures * This,
            /* [in] */ long index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteByName )( 
            IFeatures * This,
            /* [in] */ BSTR name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewSolidDraftFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ IReferences *pTargetFaces,
            /* [in] */ double orgX,
            /* [in] */ double orgY,
            /* [in] */ double orgZ,
            /* [in] */ double dirX,
            /* [in] */ double dirY,
            /* [in] */ double dirZ,
            /* [in] */ double draftAngle,
            /* [retval][out] */ IStdSolidDraftFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewSolidOffsetFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ IReferences *pTargetFaces,
            /* [in] */ double offsetThickness,
            /* [retval][out] */ IStdSolidOffsetFeature **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewSolidImportedBrepFeature )( 
            IFeatures * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR filePath,
            /* [retval][out] */ IStdSolidImportedBrepFeature **ppVal);
        
        END_INTERFACE
    } IFeaturesVtbl;

    interface IFeatures
    {
        CONST_VTBL struct IFeaturesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFeatures_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFeatures_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFeatures_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFeatures_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFeatures_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFeatures_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFeatures_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFeatures_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IFeatures_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IFeatures_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IFeatures_get_Item(This,index,ppVal)	\
    ( (This)->lpVtbl -> get_Item(This,index,ppVal) ) 

#define IFeatures_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#define IFeatures_AddNewSketchFeature(This,name,pSketchPlane,ppVal)	\
    ( (This)->lpVtbl -> AddNewSketchFeature(This,name,pSketchPlane,ppVal) ) 

#define IFeatures_AddNewSolidProtrusionExtrudeFeature(This,name,pProfileSketch,startDepth,startCondition,endDepth,endCondition,isFlip,ppVal)	\
    ( (This)->lpVtbl -> AddNewSolidProtrusionExtrudeFeature(This,name,pProfileSketch,startDepth,startCondition,endDepth,endCondition,isFlip,ppVal) ) 

#define IFeatures_AddNewSolidCutExtrudeFeature(This,name,pProfileSketch,startDepth,startCondition,endDepth,endCondition,isFlip,ppVal)	\
    ( (This)->lpVtbl -> AddNewSolidCutExtrudeFeature(This,name,pProfileSketch,startDepth,startCondition,endDepth,endCondition,isFlip,ppVal) ) 

#define IFeatures_AddNewSolidFilletConstantFeature(This,name,pfilletEdges,radius,propagation,ppVal)	\
    ( (This)->lpVtbl -> AddNewSolidFilletConstantFeature(This,name,pfilletEdges,radius,propagation,ppVal) ) 

#define IFeatures_AddNewSolidChamferFeature(This,name,pSelectedEdges,length,ppVal)	\
    ( (This)->lpVtbl -> AddNewSolidChamferFeature(This,name,pSelectedEdges,length,ppVal) ) 

#define IFeatures_AddNewSolidProtrusionSweepFeature(This,name,pProfileSketch,pGuideCurve,ppVal)	\
    ( (This)->lpVtbl -> AddNewSolidProtrusionSweepFeature(This,name,pProfileSketch,pGuideCurve,ppVal) ) 

#define IFeatures_AddNewSolidProtrusionRevolveFeature(This,name,pProfileSketch,startAngle,startCondition,endAngle,endCondition,isFlip,ppVal)	\
    ( (This)->lpVtbl -> AddNewSolidProtrusionRevolveFeature(This,name,pProfileSketch,startAngle,startCondition,endAngle,endCondition,isFlip,ppVal) ) 

#define IFeatures_AddNewSolidCutRevolveFeature(This,name,pProfileSketch,startAngle,startCondition,endAngle,endCondition,isFlip,ppVal)	\
    ( (This)->lpVtbl -> AddNewSolidCutRevolveFeature(This,name,pProfileSketch,startAngle,startCondition,endAngle,endCondition,isFlip,ppVal) ) 

#define IFeatures_AddNewSolidOperatePatternRectangularFeature(This,name,pTargetFeatures,columnSpacing,colDirX,colDirY,colDirZ,columnNumber,rowSpacing,rowDirX,rowDirY,rowDirZ,rowNumber,ppVal)	\
    ( (This)->lpVtbl -> AddNewSolidOperatePatternRectangularFeature(This,name,pTargetFeatures,columnSpacing,colDirX,colDirY,colDirZ,columnNumber,rowSpacing,rowDirX,rowDirY,rowDirZ,rowNumber,ppVal) ) 

#define IFeatures_AddNewSolidOperatePatternCircularFeature(This,name,pTargetFeatures,x1,y1,z1,x2,y2,z2,angleNumber,angleIncrement,radialNumber,radialSpacing,radialAlignment,ppVal)	\
    ( (This)->lpVtbl -> AddNewSolidOperatePatternCircularFeature(This,name,pTargetFeatures,x1,y1,z1,x2,y2,z2,angleNumber,angleIncrement,radialNumber,radialSpacing,radialAlignment,ppVal) ) 

#define IFeatures_AddNewSolidHoleCounterboredFeature(This,name,pTargetFace,cx,cy,cz,startRadius,startDepth,endRadius,endDepth,angle,ppVal)	\
    ( (This)->lpVtbl -> AddNewSolidHoleCounterboredFeature(This,name,pTargetFace,cx,cy,cz,startRadius,startDepth,endRadius,endDepth,angle,ppVal) ) 

#define IFeatures_AddNewSolidHoleCountersunkFeature(This,name,pTargetFace,cx,cy,cz,radius,depth,sinkRadius,sinkAngle,bottomAngle,ppVal)	\
    ( (This)->lpVtbl -> AddNewSolidHoleCountersunkFeature(This,name,pTargetFace,cx,cy,cz,radius,depth,sinkRadius,sinkAngle,bottomAngle,ppVal) ) 

#define IFeatures_AddNewDatumPlaneOffsetFeature(This,name,pSelectedPlane,distance,isFlip,ppVal)	\
    ( (This)->lpVtbl -> AddNewDatumPlaneOffsetFeature(This,name,pSelectedPlane,distance,isFlip,ppVal) ) 

#define IFeatures_AddNewDatumPlaneOffsetFeature2(This,name,ox,oy,oz,xx,xy,xz,yx,yy,yz,isFlip,ppVal)	\
    ( (This)->lpVtbl -> AddNewDatumPlaneOffsetFeature2(This,name,ox,oy,oz,xx,xy,xz,yx,yy,yz,isFlip,ppVal) ) 

#define IFeatures_AddNewSolidLoftFacesFeature(This,name,pFace1,param1,pFace2,param2,ppVal)	\
    ( (This)->lpVtbl -> AddNewSolidLoftFacesFeature(This,name,pFace1,param1,pFace2,param2,ppVal) ) 

#define IFeatures_AddNewSolidLoftSectionsFeature(This,name,pLoftSections,isCut,ppVal)	\
    ( (This)->lpVtbl -> AddNewSolidLoftSectionsFeature(This,name,pLoftSections,isCut,ppVal) ) 

#define IFeatures_AddNewSolidCutSweepFeature(This,name,pProfileSketch,pGuideCurve,ppVal)	\
    ( (This)->lpVtbl -> AddNewSolidCutSweepFeature(This,name,pProfileSketch,pGuideCurve,ppVal) ) 

#define IFeatures_AddNewSolidHoleSimpleFeature(This,name,pTargetFace,cx,cy,cz,Radius,Depth,ppVal)	\
    ( (This)->lpVtbl -> AddNewSolidHoleSimpleFeature(This,name,pTargetFace,cx,cy,cz,Radius,Depth,ppVal) ) 

#define IFeatures_AddNewSolidShellFeature(This,name,pTargetFaces,innerThickness,outerThickness,ppVal)	\
    ( (This)->lpVtbl -> AddNewSolidShellFeature(This,name,pTargetFaces,innerThickness,outerThickness,ppVal) ) 

#define IFeatures_AddNewSolidRevolveWithExternalAxisFeature(This,name,pProfileSketch,startAngle,startCondition,endAngle,endCondition,orgX,orgY,orgZ,dirX,dirY,dirZ,isCut,isFlip,ppVal)	\
    ( (This)->lpVtbl -> AddNewSolidRevolveWithExternalAxisFeature(This,name,pProfileSketch,startAngle,startCondition,endAngle,endCondition,orgX,orgY,orgZ,dirX,dirY,dirZ,isCut,isFlip,ppVal) ) 

#define IFeatures_Delete(This,index)	\
    ( (This)->lpVtbl -> Delete(This,index) ) 

#define IFeatures_DeleteByName(This,name)	\
    ( (This)->lpVtbl -> DeleteByName(This,name) ) 

#define IFeatures_AddNewSolidDraftFeature(This,name,pTargetFaces,orgX,orgY,orgZ,dirX,dirY,dirZ,draftAngle,ppVal)	\
    ( (This)->lpVtbl -> AddNewSolidDraftFeature(This,name,pTargetFaces,orgX,orgY,orgZ,dirX,dirY,dirZ,draftAngle,ppVal) ) 

#define IFeatures_AddNewSolidOffsetFeature(This,name,pTargetFaces,offsetThickness,ppVal)	\
    ( (This)->lpVtbl -> AddNewSolidOffsetFeature(This,name,pTargetFaces,offsetThickness,ppVal) ) 

#define IFeatures_AddNewSolidImportedBrepFeature(This,name,filePath,ppVal)	\
    ( (This)->lpVtbl -> AddNewSolidImportedBrepFeature(This,name,filePath,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFeatures_INTERFACE_DEFINED__ */


#ifndef __IFeature_INTERFACE_DEFINED__
#define __IFeature_INTERFACE_DEFINED__

/* interface IFeature */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F898093C-1B98-420d-B097-C2F1E88CA345")
    IFeature : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IApplication **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ FeatureType *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetName( 
            /* [in] */ BSTR pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IFeature * This,
            /* [in] */ BSTR pVal);
        
        END_INTERFACE
    } IFeatureVtbl;

    interface IFeature
    {
        CONST_VTBL struct IFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFeature_INTERFACE_DEFINED__ */


#ifndef __IStdDefaultDatumPlaneFeature_INTERFACE_DEFINED__
#define __IStdDefaultDatumPlaneFeature_INTERFACE_DEFINED__

/* interface IStdDefaultDatumPlaneFeature */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdDefaultDatumPlaneFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F91A93A8-65A9-48DC-A44F-BDD01CBEF588")
    IStdDefaultDatumPlaneFeature : public IFeature
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IStdDefaultDatumPlaneFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdDefaultDatumPlaneFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdDefaultDatumPlaneFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdDefaultDatumPlaneFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdDefaultDatumPlaneFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdDefaultDatumPlaneFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdDefaultDatumPlaneFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdDefaultDatumPlaneFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdDefaultDatumPlaneFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdDefaultDatumPlaneFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdDefaultDatumPlaneFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdDefaultDatumPlaneFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdDefaultDatumPlaneFeature * This,
            /* [in] */ BSTR pVal);
        
        END_INTERFACE
    } IStdDefaultDatumPlaneFeatureVtbl;

    interface IStdDefaultDatumPlaneFeature
    {
        CONST_VTBL struct IStdDefaultDatumPlaneFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdDefaultDatumPlaneFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdDefaultDatumPlaneFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdDefaultDatumPlaneFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdDefaultDatumPlaneFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdDefaultDatumPlaneFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdDefaultDatumPlaneFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdDefaultDatumPlaneFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdDefaultDatumPlaneFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdDefaultDatumPlaneFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdDefaultDatumPlaneFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdDefaultDatumPlaneFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdDefaultDatumPlaneFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdDefaultDatumPlaneFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSketchFeature_INTERFACE_DEFINED__
#define __IStdSketchFeature_INTERFACE_DEFINED__

/* interface IStdSketchFeature */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSketchFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("54A6F7F9-5C98-4C65-96D5-BD43D248B788")
    IStdSketchFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Origin( 
            /* [retval][out] */ IStdSketchOrigin **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HDirection( 
            /* [retval][out] */ IStdSketchHDirection **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VDirection( 
            /* [retval][out] */ IStdSketchVDirection **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Geometries( 
            /* [retval][out] */ IStdSketchGeometries **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Constraints( 
            /* [retval][out] */ IStdSketchConstraints **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Sketch( 
            /* [retval][out] */ ISketch **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SketchPlane( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsInversed( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenEditor( 
            /* [retval][out] */ ISketchEditor **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenEditorEx( 
            /* [in] */ VARIANT_BOOL activateDcm,
            /* [retval][out] */ ISketchEditor **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetCoordinateSystem( 
            /* [in] */ double ox,
            /* [in] */ double oy,
            /* [in] */ double oz,
            /* [in] */ double xx,
            /* [in] */ double xy,
            /* [in] */ double xz,
            /* [in] */ double yx,
            /* [in] */ double yy,
            /* [in] */ double yz) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCoordinateSystem( 
            /* [out] */ double *ox,
            /* [out] */ double *oy,
            /* [out] */ double *oz,
            /* [out] */ double *xx,
            /* [out] */ double *xy,
            /* [out] */ double *xz,
            /* [out] */ double *yx,
            /* [out] */ double *yy,
            /* [out] */ double *yz) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteByName( 
            /* [in] */ BSTR name) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSketchFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSketchFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSketchFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSketchFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSketchFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSketchFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSketchFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSketchFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSketchFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSketchFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSketchFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSketchFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdSketchFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Origin )( 
            IStdSketchFeature * This,
            /* [retval][out] */ IStdSketchOrigin **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HDirection )( 
            IStdSketchFeature * This,
            /* [retval][out] */ IStdSketchHDirection **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VDirection )( 
            IStdSketchFeature * This,
            /* [retval][out] */ IStdSketchVDirection **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Geometries )( 
            IStdSketchFeature * This,
            /* [retval][out] */ IStdSketchGeometries **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IStdSketchFeature * This,
            /* [retval][out] */ IStdSketchConstraints **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sketch )( 
            IStdSketchFeature * This,
            /* [retval][out] */ ISketch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SketchPlane )( 
            IStdSketchFeature * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsInversed )( 
            IStdSketchFeature * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenEditor )( 
            IStdSketchFeature * This,
            /* [retval][out] */ ISketchEditor **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenEditorEx )( 
            IStdSketchFeature * This,
            /* [in] */ VARIANT_BOOL activateDcm,
            /* [retval][out] */ ISketchEditor **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetCoordinateSystem )( 
            IStdSketchFeature * This,
            /* [in] */ double ox,
            /* [in] */ double oy,
            /* [in] */ double oz,
            /* [in] */ double xx,
            /* [in] */ double xy,
            /* [in] */ double xz,
            /* [in] */ double yx,
            /* [in] */ double yy,
            /* [in] */ double yz);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCoordinateSystem )( 
            IStdSketchFeature * This,
            /* [out] */ double *ox,
            /* [out] */ double *oy,
            /* [out] */ double *oz,
            /* [out] */ double *xx,
            /* [out] */ double *xy,
            /* [out] */ double *xz,
            /* [out] */ double *yx,
            /* [out] */ double *yy,
            /* [out] */ double *yz);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteByName )( 
            IStdSketchFeature * This,
            /* [in] */ BSTR name);
        
        END_INTERFACE
    } IStdSketchFeatureVtbl;

    interface IStdSketchFeature
    {
        CONST_VTBL struct IStdSketchFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSketchFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSketchFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSketchFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSketchFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSketchFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSketchFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSketchFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSketchFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSketchFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSketchFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSketchFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSketchFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdSketchFeature_get_Origin(This,ppVal)	\
    ( (This)->lpVtbl -> get_Origin(This,ppVal) ) 

#define IStdSketchFeature_get_HDirection(This,ppVal)	\
    ( (This)->lpVtbl -> get_HDirection(This,ppVal) ) 

#define IStdSketchFeature_get_VDirection(This,ppVal)	\
    ( (This)->lpVtbl -> get_VDirection(This,ppVal) ) 

#define IStdSketchFeature_get_Geometries(This,ppVal)	\
    ( (This)->lpVtbl -> get_Geometries(This,ppVal) ) 

#define IStdSketchFeature_get_Constraints(This,ppVal)	\
    ( (This)->lpVtbl -> get_Constraints(This,ppVal) ) 

#define IStdSketchFeature_get_Sketch(This,ppVal)	\
    ( (This)->lpVtbl -> get_Sketch(This,ppVal) ) 

#define IStdSketchFeature_get_SketchPlane(This,ppVal)	\
    ( (This)->lpVtbl -> get_SketchPlane(This,ppVal) ) 

#define IStdSketchFeature_get_IsInversed(This,pVal)	\
    ( (This)->lpVtbl -> get_IsInversed(This,pVal) ) 

#define IStdSketchFeature_OpenEditor(This,ppVal)	\
    ( (This)->lpVtbl -> OpenEditor(This,ppVal) ) 

#define IStdSketchFeature_OpenEditorEx(This,activateDcm,ppVal)	\
    ( (This)->lpVtbl -> OpenEditorEx(This,activateDcm,ppVal) ) 

#define IStdSketchFeature_SetCoordinateSystem(This,ox,oy,oz,xx,xy,xz,yx,yy,yz)	\
    ( (This)->lpVtbl -> SetCoordinateSystem(This,ox,oy,oz,xx,xy,xz,yx,yy,yz) ) 

#define IStdSketchFeature_GetCoordinateSystem(This,ox,oy,oz,xx,xy,xz,yx,yy,yz)	\
    ( (This)->lpVtbl -> GetCoordinateSystem(This,ox,oy,oz,xx,xy,xz,yx,yy,yz) ) 

#define IStdSketchFeature_DeleteByName(This,name)	\
    ( (This)->lpVtbl -> DeleteByName(This,name) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSketchFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSolidProtrusionExtrudeFeature_INTERFACE_DEFINED__
#define __IStdSolidProtrusionExtrudeFeature_INTERFACE_DEFINED__

/* interface IStdSolidProtrusionExtrudeFeature */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSolidProtrusionExtrudeFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("570069A3-AC18-40E5-9CD4-BE1ECF8318E2")
    IStdSolidProtrusionExtrudeFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProfileSketch( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ProfileSketch( 
            /* [in] */ IReference *ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFlip( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsFlip( 
            /* [in] */ VARIANT_BOOL pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartCondition( 
            /* [retval][out] */ StdExtrudeEndType *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StartCondition( 
            /* [in] */ StdExtrudeEndType pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartDepth( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StartDepth( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndCondition( 
            /* [retval][out] */ StdExtrudeEndType *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EndCondition( 
            /* [in] */ StdExtrudeEndType pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndDepth( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EndDepth( 
            /* [in] */ double pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSolidProtrusionExtrudeFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSolidProtrusionExtrudeFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSolidProtrusionExtrudeFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProfileSketch )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProfileSketch )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [in] */ IReference *ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFlip )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsFlip )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [in] */ VARIANT_BOOL pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartCondition )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [retval][out] */ StdExtrudeEndType *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartCondition )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [in] */ StdExtrudeEndType pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartDepth )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartDepth )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndCondition )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [retval][out] */ StdExtrudeEndType *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndCondition )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [in] */ StdExtrudeEndType pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndDepth )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndDepth )( 
            IStdSolidProtrusionExtrudeFeature * This,
            /* [in] */ double pVal);
        
        END_INTERFACE
    } IStdSolidProtrusionExtrudeFeatureVtbl;

    interface IStdSolidProtrusionExtrudeFeature
    {
        CONST_VTBL struct IStdSolidProtrusionExtrudeFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSolidProtrusionExtrudeFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSolidProtrusionExtrudeFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSolidProtrusionExtrudeFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSolidProtrusionExtrudeFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSolidProtrusionExtrudeFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSolidProtrusionExtrudeFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSolidProtrusionExtrudeFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSolidProtrusionExtrudeFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSolidProtrusionExtrudeFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSolidProtrusionExtrudeFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSolidProtrusionExtrudeFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSolidProtrusionExtrudeFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdSolidProtrusionExtrudeFeature_get_ProfileSketch(This,ppVal)	\
    ( (This)->lpVtbl -> get_ProfileSketch(This,ppVal) ) 

#define IStdSolidProtrusionExtrudeFeature_put_ProfileSketch(This,ppVal)	\
    ( (This)->lpVtbl -> put_ProfileSketch(This,ppVal) ) 

#define IStdSolidProtrusionExtrudeFeature_get_IsFlip(This,pVal)	\
    ( (This)->lpVtbl -> get_IsFlip(This,pVal) ) 

#define IStdSolidProtrusionExtrudeFeature_put_IsFlip(This,pVal)	\
    ( (This)->lpVtbl -> put_IsFlip(This,pVal) ) 

#define IStdSolidProtrusionExtrudeFeature_get_StartCondition(This,pVal)	\
    ( (This)->lpVtbl -> get_StartCondition(This,pVal) ) 

#define IStdSolidProtrusionExtrudeFeature_put_StartCondition(This,pVal)	\
    ( (This)->lpVtbl -> put_StartCondition(This,pVal) ) 

#define IStdSolidProtrusionExtrudeFeature_get_StartDepth(This,pVal)	\
    ( (This)->lpVtbl -> get_StartDepth(This,pVal) ) 

#define IStdSolidProtrusionExtrudeFeature_put_StartDepth(This,pVal)	\
    ( (This)->lpVtbl -> put_StartDepth(This,pVal) ) 

#define IStdSolidProtrusionExtrudeFeature_get_EndCondition(This,pVal)	\
    ( (This)->lpVtbl -> get_EndCondition(This,pVal) ) 

#define IStdSolidProtrusionExtrudeFeature_put_EndCondition(This,pVal)	\
    ( (This)->lpVtbl -> put_EndCondition(This,pVal) ) 

#define IStdSolidProtrusionExtrudeFeature_get_EndDepth(This,pVal)	\
    ( (This)->lpVtbl -> get_EndDepth(This,pVal) ) 

#define IStdSolidProtrusionExtrudeFeature_put_EndDepth(This,pVal)	\
    ( (This)->lpVtbl -> put_EndDepth(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSolidProtrusionExtrudeFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSolidCutExtrudeFeature_INTERFACE_DEFINED__
#define __IStdSolidCutExtrudeFeature_INTERFACE_DEFINED__

/* interface IStdSolidCutExtrudeFeature */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSolidCutExtrudeFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8645E5AD-94DF-48A8-AD8E-9ED717AC4691")
    IStdSolidCutExtrudeFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProfileSketch( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ProfileSketch( 
            /* [in] */ IReference *ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFlip( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsFlip( 
            /* [in] */ VARIANT_BOOL pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartCondition( 
            /* [retval][out] */ StdExtrudeEndType *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StartCondition( 
            /* [in] */ StdExtrudeEndType pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartDepth( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StartDepth( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndCondition( 
            /* [retval][out] */ StdExtrudeEndType *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EndCondition( 
            /* [in] */ StdExtrudeEndType pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndDepth( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EndDepth( 
            /* [in] */ double pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSolidCutExtrudeFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSolidCutExtrudeFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSolidCutExtrudeFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSolidCutExtrudeFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSolidCutExtrudeFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSolidCutExtrudeFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSolidCutExtrudeFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSolidCutExtrudeFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSolidCutExtrudeFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSolidCutExtrudeFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSolidCutExtrudeFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSolidCutExtrudeFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdSolidCutExtrudeFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProfileSketch )( 
            IStdSolidCutExtrudeFeature * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProfileSketch )( 
            IStdSolidCutExtrudeFeature * This,
            /* [in] */ IReference *ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFlip )( 
            IStdSolidCutExtrudeFeature * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsFlip )( 
            IStdSolidCutExtrudeFeature * This,
            /* [in] */ VARIANT_BOOL pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartCondition )( 
            IStdSolidCutExtrudeFeature * This,
            /* [retval][out] */ StdExtrudeEndType *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartCondition )( 
            IStdSolidCutExtrudeFeature * This,
            /* [in] */ StdExtrudeEndType pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartDepth )( 
            IStdSolidCutExtrudeFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartDepth )( 
            IStdSolidCutExtrudeFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndCondition )( 
            IStdSolidCutExtrudeFeature * This,
            /* [retval][out] */ StdExtrudeEndType *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndCondition )( 
            IStdSolidCutExtrudeFeature * This,
            /* [in] */ StdExtrudeEndType pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndDepth )( 
            IStdSolidCutExtrudeFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndDepth )( 
            IStdSolidCutExtrudeFeature * This,
            /* [in] */ double pVal);
        
        END_INTERFACE
    } IStdSolidCutExtrudeFeatureVtbl;

    interface IStdSolidCutExtrudeFeature
    {
        CONST_VTBL struct IStdSolidCutExtrudeFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSolidCutExtrudeFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSolidCutExtrudeFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSolidCutExtrudeFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSolidCutExtrudeFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSolidCutExtrudeFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSolidCutExtrudeFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSolidCutExtrudeFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSolidCutExtrudeFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSolidCutExtrudeFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSolidCutExtrudeFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSolidCutExtrudeFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSolidCutExtrudeFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdSolidCutExtrudeFeature_get_ProfileSketch(This,ppVal)	\
    ( (This)->lpVtbl -> get_ProfileSketch(This,ppVal) ) 

#define IStdSolidCutExtrudeFeature_put_ProfileSketch(This,ppVal)	\
    ( (This)->lpVtbl -> put_ProfileSketch(This,ppVal) ) 

#define IStdSolidCutExtrudeFeature_get_IsFlip(This,pVal)	\
    ( (This)->lpVtbl -> get_IsFlip(This,pVal) ) 

#define IStdSolidCutExtrudeFeature_put_IsFlip(This,pVal)	\
    ( (This)->lpVtbl -> put_IsFlip(This,pVal) ) 

#define IStdSolidCutExtrudeFeature_get_StartCondition(This,pVal)	\
    ( (This)->lpVtbl -> get_StartCondition(This,pVal) ) 

#define IStdSolidCutExtrudeFeature_put_StartCondition(This,pVal)	\
    ( (This)->lpVtbl -> put_StartCondition(This,pVal) ) 

#define IStdSolidCutExtrudeFeature_get_StartDepth(This,pVal)	\
    ( (This)->lpVtbl -> get_StartDepth(This,pVal) ) 

#define IStdSolidCutExtrudeFeature_put_StartDepth(This,pVal)	\
    ( (This)->lpVtbl -> put_StartDepth(This,pVal) ) 

#define IStdSolidCutExtrudeFeature_get_EndCondition(This,pVal)	\
    ( (This)->lpVtbl -> get_EndCondition(This,pVal) ) 

#define IStdSolidCutExtrudeFeature_put_EndCondition(This,pVal)	\
    ( (This)->lpVtbl -> put_EndCondition(This,pVal) ) 

#define IStdSolidCutExtrudeFeature_get_EndDepth(This,pVal)	\
    ( (This)->lpVtbl -> get_EndDepth(This,pVal) ) 

#define IStdSolidCutExtrudeFeature_put_EndDepth(This,pVal)	\
    ( (This)->lpVtbl -> put_EndDepth(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSolidCutExtrudeFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSolidFilletConstantFeature_INTERFACE_DEFINED__
#define __IStdSolidFilletConstantFeature_INTERFACE_DEFINED__

/* interface IStdSolidFilletConstantFeature */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSolidFilletConstantFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7813D4F8-1398-4A75-8FEA-AF3A262A9898")
    IStdSolidFilletConstantFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FilletEdges( 
            /* [retval][out] */ IReferences **ppVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FilletEdges( 
            /* [in] */ IReferences *ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Radius( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Radius( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Propagation( 
            /* [retval][out] */ PropagationType *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Propagation( 
            /* [in] */ PropagationType pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPosX( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPosY( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPosZ( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPosX( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPosY( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPosZ( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPosXAt( 
            /* [in] */ int index,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPosYAt( 
            /* [in] */ int index,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPosZAt( 
            /* [in] */ int index,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPosXAt( 
            /* [in] */ int index,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPosYAt( 
            /* [in] */ int index,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPosZAt( 
            /* [in] */ int index,
            /* [retval][out] */ double *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSolidFilletConstantFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSolidFilletConstantFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSolidFilletConstantFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSolidFilletConstantFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSolidFilletConstantFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSolidFilletConstantFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSolidFilletConstantFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSolidFilletConstantFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSolidFilletConstantFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSolidFilletConstantFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSolidFilletConstantFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSolidFilletConstantFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdSolidFilletConstantFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FilletEdges )( 
            IStdSolidFilletConstantFeature * This,
            /* [retval][out] */ IReferences **ppVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FilletEdges )( 
            IStdSolidFilletConstantFeature * This,
            /* [in] */ IReferences *ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Radius )( 
            IStdSolidFilletConstantFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Radius )( 
            IStdSolidFilletConstantFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Propagation )( 
            IStdSolidFilletConstantFeature * This,
            /* [retval][out] */ PropagationType *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Propagation )( 
            IStdSolidFilletConstantFeature * This,
            /* [in] */ PropagationType pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPosX )( 
            IStdSolidFilletConstantFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPosY )( 
            IStdSolidFilletConstantFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPosZ )( 
            IStdSolidFilletConstantFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPosX )( 
            IStdSolidFilletConstantFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPosY )( 
            IStdSolidFilletConstantFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPosZ )( 
            IStdSolidFilletConstantFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPosXAt )( 
            IStdSolidFilletConstantFeature * This,
            /* [in] */ int index,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPosYAt )( 
            IStdSolidFilletConstantFeature * This,
            /* [in] */ int index,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPosZAt )( 
            IStdSolidFilletConstantFeature * This,
            /* [in] */ int index,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPosXAt )( 
            IStdSolidFilletConstantFeature * This,
            /* [in] */ int index,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPosYAt )( 
            IStdSolidFilletConstantFeature * This,
            /* [in] */ int index,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPosZAt )( 
            IStdSolidFilletConstantFeature * This,
            /* [in] */ int index,
            /* [retval][out] */ double *pVal);
        
        END_INTERFACE
    } IStdSolidFilletConstantFeatureVtbl;

    interface IStdSolidFilletConstantFeature
    {
        CONST_VTBL struct IStdSolidFilletConstantFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSolidFilletConstantFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSolidFilletConstantFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSolidFilletConstantFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSolidFilletConstantFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSolidFilletConstantFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSolidFilletConstantFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSolidFilletConstantFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSolidFilletConstantFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSolidFilletConstantFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSolidFilletConstantFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSolidFilletConstantFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSolidFilletConstantFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdSolidFilletConstantFeature_get_FilletEdges(This,ppVal)	\
    ( (This)->lpVtbl -> get_FilletEdges(This,ppVal) ) 

#define IStdSolidFilletConstantFeature_put_FilletEdges(This,ppVal)	\
    ( (This)->lpVtbl -> put_FilletEdges(This,ppVal) ) 

#define IStdSolidFilletConstantFeature_get_Radius(This,pVal)	\
    ( (This)->lpVtbl -> get_Radius(This,pVal) ) 

#define IStdSolidFilletConstantFeature_put_Radius(This,pVal)	\
    ( (This)->lpVtbl -> put_Radius(This,pVal) ) 

#define IStdSolidFilletConstantFeature_get_Propagation(This,pVal)	\
    ( (This)->lpVtbl -> get_Propagation(This,pVal) ) 

#define IStdSolidFilletConstantFeature_put_Propagation(This,pVal)	\
    ( (This)->lpVtbl -> put_Propagation(This,pVal) ) 

#define IStdSolidFilletConstantFeature_get_StartPosX(This,pVal)	\
    ( (This)->lpVtbl -> get_StartPosX(This,pVal) ) 

#define IStdSolidFilletConstantFeature_get_StartPosY(This,pVal)	\
    ( (This)->lpVtbl -> get_StartPosY(This,pVal) ) 

#define IStdSolidFilletConstantFeature_get_StartPosZ(This,pVal)	\
    ( (This)->lpVtbl -> get_StartPosZ(This,pVal) ) 

#define IStdSolidFilletConstantFeature_get_EndPosX(This,pVal)	\
    ( (This)->lpVtbl -> get_EndPosX(This,pVal) ) 

#define IStdSolidFilletConstantFeature_get_EndPosY(This,pVal)	\
    ( (This)->lpVtbl -> get_EndPosY(This,pVal) ) 

#define IStdSolidFilletConstantFeature_get_EndPosZ(This,pVal)	\
    ( (This)->lpVtbl -> get_EndPosZ(This,pVal) ) 

#define IStdSolidFilletConstantFeature_get_StartPosXAt(This,index,pVal)	\
    ( (This)->lpVtbl -> get_StartPosXAt(This,index,pVal) ) 

#define IStdSolidFilletConstantFeature_get_StartPosYAt(This,index,pVal)	\
    ( (This)->lpVtbl -> get_StartPosYAt(This,index,pVal) ) 

#define IStdSolidFilletConstantFeature_get_StartPosZAt(This,index,pVal)	\
    ( (This)->lpVtbl -> get_StartPosZAt(This,index,pVal) ) 

#define IStdSolidFilletConstantFeature_get_EndPosXAt(This,index,pVal)	\
    ( (This)->lpVtbl -> get_EndPosXAt(This,index,pVal) ) 

#define IStdSolidFilletConstantFeature_get_EndPosYAt(This,index,pVal)	\
    ( (This)->lpVtbl -> get_EndPosYAt(This,index,pVal) ) 

#define IStdSolidFilletConstantFeature_get_EndPosZAt(This,index,pVal)	\
    ( (This)->lpVtbl -> get_EndPosZAt(This,index,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSolidFilletConstantFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSketchOrigin_INTERFACE_DEFINED__
#define __IStdSketchOrigin_INTERFACE_DEFINED__

/* interface IStdSketchOrigin */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSketchOrigin;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1804C402-FBAF-438F-B849-AB6940606E6D")
    IStdSketchOrigin : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IApplication **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SketchFeature( 
            /* [retval][out] */ IStdSketchFeature **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSketchOriginVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSketchOrigin * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSketchOrigin * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSketchOrigin * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSketchOrigin * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSketchOrigin * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSketchOrigin * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSketchOrigin * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSketchOrigin * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSketchOrigin * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSketchOrigin * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SketchFeature )( 
            IStdSketchOrigin * This,
            /* [retval][out] */ IStdSketchFeature **ppVal);
        
        END_INTERFACE
    } IStdSketchOriginVtbl;

    interface IStdSketchOrigin
    {
        CONST_VTBL struct IStdSketchOriginVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSketchOrigin_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSketchOrigin_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSketchOrigin_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSketchOrigin_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSketchOrigin_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSketchOrigin_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSketchOrigin_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSketchOrigin_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSketchOrigin_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSketchOrigin_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSketchOrigin_get_SketchFeature(This,ppVal)	\
    ( (This)->lpVtbl -> get_SketchFeature(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSketchOrigin_INTERFACE_DEFINED__ */


#ifndef __IStdSketchVDirection_INTERFACE_DEFINED__
#define __IStdSketchVDirection_INTERFACE_DEFINED__

/* interface IStdSketchVDirection */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSketchVDirection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1C5FDD6C-3075-4A54-9E08-D959769C24C6")
    IStdSketchVDirection : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IApplication **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SketchFeature( 
            /* [retval][out] */ IStdSketchFeature **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSketchVDirectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSketchVDirection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSketchVDirection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSketchVDirection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSketchVDirection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSketchVDirection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSketchVDirection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSketchVDirection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSketchVDirection * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSketchVDirection * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSketchVDirection * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SketchFeature )( 
            IStdSketchVDirection * This,
            /* [retval][out] */ IStdSketchFeature **ppVal);
        
        END_INTERFACE
    } IStdSketchVDirectionVtbl;

    interface IStdSketchVDirection
    {
        CONST_VTBL struct IStdSketchVDirectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSketchVDirection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSketchVDirection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSketchVDirection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSketchVDirection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSketchVDirection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSketchVDirection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSketchVDirection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSketchVDirection_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSketchVDirection_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSketchVDirection_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSketchVDirection_get_SketchFeature(This,ppVal)	\
    ( (This)->lpVtbl -> get_SketchFeature(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSketchVDirection_INTERFACE_DEFINED__ */


#ifndef __IStdSketchHDirection_INTERFACE_DEFINED__
#define __IStdSketchHDirection_INTERFACE_DEFINED__

/* interface IStdSketchHDirection */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSketchHDirection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5A732443-2A35-4519-9C1A-5C9E25342D22")
    IStdSketchHDirection : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IApplication **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SketchFeature( 
            /* [retval][out] */ IStdSketchFeature **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSketchHDirectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSketchHDirection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSketchHDirection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSketchHDirection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSketchHDirection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSketchHDirection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSketchHDirection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSketchHDirection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSketchHDirection * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSketchHDirection * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSketchHDirection * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SketchFeature )( 
            IStdSketchHDirection * This,
            /* [retval][out] */ IStdSketchFeature **ppVal);
        
        END_INTERFACE
    } IStdSketchHDirectionVtbl;

    interface IStdSketchHDirection
    {
        CONST_VTBL struct IStdSketchHDirectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSketchHDirection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSketchHDirection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSketchHDirection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSketchHDirection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSketchHDirection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSketchHDirection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSketchHDirection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSketchHDirection_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSketchHDirection_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSketchHDirection_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSketchHDirection_get_SketchFeature(This,ppVal)	\
    ( (This)->lpVtbl -> get_SketchFeature(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSketchHDirection_INTERFACE_DEFINED__ */


#ifndef __IStdSketchGeometries_INTERFACE_DEFINED__
#define __IStdSketchGeometries_INTERFACE_DEFINED__

/* interface IStdSketchGeometries */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSketchGeometries;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7FFE9084-7C7B-4E75-ABF6-C21A1281E279")
    IStdSketchGeometries : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IApplication **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long index,
            /* [retval][out] */ IStdSketchGeometry **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FindByName( 
            /* [retval][out] */ IStdSketchGeometry **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSketchGeometriesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSketchGeometries * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSketchGeometries * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSketchGeometries * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSketchGeometries * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSketchGeometries * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSketchGeometries * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSketchGeometries * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSketchGeometries * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSketchGeometries * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IStdSketchGeometries * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IStdSketchGeometries * This,
            /* [in] */ long index,
            /* [retval][out] */ IStdSketchGeometry **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IStdSketchGeometries * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FindByName )( 
            IStdSketchGeometries * This,
            /* [retval][out] */ IStdSketchGeometry **ppVal);
        
        END_INTERFACE
    } IStdSketchGeometriesVtbl;

    interface IStdSketchGeometries
    {
        CONST_VTBL struct IStdSketchGeometriesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSketchGeometries_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSketchGeometries_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSketchGeometries_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSketchGeometries_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSketchGeometries_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSketchGeometries_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSketchGeometries_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSketchGeometries_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSketchGeometries_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSketchGeometries_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IStdSketchGeometries_get_Item(This,index,ppVal)	\
    ( (This)->lpVtbl -> get_Item(This,index,ppVal) ) 

#define IStdSketchGeometries_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#define IStdSketchGeometries_get_FindByName(This,ppVal)	\
    ( (This)->lpVtbl -> get_FindByName(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSketchGeometries_INTERFACE_DEFINED__ */


#ifndef __IStdSketchConstraints_INTERFACE_DEFINED__
#define __IStdSketchConstraints_INTERFACE_DEFINED__

/* interface IStdSketchConstraints */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSketchConstraints;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("82DD5568-C7F7-4647-B815-66D4E72D5738")
    IStdSketchConstraints : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IApplication **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long index,
            /* [retval][out] */ IStdSketchConstraint **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FindByName( 
            /* [retval][out] */ IStdSketchConstraint **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSketchConstraintsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSketchConstraints * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSketchConstraints * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSketchConstraints * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSketchConstraints * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSketchConstraints * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSketchConstraints * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSketchConstraints * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSketchConstraints * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSketchConstraints * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IStdSketchConstraints * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IStdSketchConstraints * This,
            /* [in] */ long index,
            /* [retval][out] */ IStdSketchConstraint **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IStdSketchConstraints * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FindByName )( 
            IStdSketchConstraints * This,
            /* [retval][out] */ IStdSketchConstraint **ppVal);
        
        END_INTERFACE
    } IStdSketchConstraintsVtbl;

    interface IStdSketchConstraints
    {
        CONST_VTBL struct IStdSketchConstraintsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSketchConstraints_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSketchConstraints_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSketchConstraints_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSketchConstraints_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSketchConstraints_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSketchConstraints_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSketchConstraints_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSketchConstraints_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSketchConstraints_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSketchConstraints_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IStdSketchConstraints_get_Item(This,index,ppVal)	\
    ( (This)->lpVtbl -> get_Item(This,index,ppVal) ) 

#define IStdSketchConstraints_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#define IStdSketchConstraints_get_FindByName(This,ppVal)	\
    ( (This)->lpVtbl -> get_FindByName(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSketchConstraints_INTERFACE_DEFINED__ */


#ifndef __IStdSketchGeometry_INTERFACE_DEFINED__
#define __IStdSketchGeometry_INTERFACE_DEFINED__

/* interface IStdSketchGeometry */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSketchGeometry;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("882DF9BC-FF59-4E65-8E7B-0BCAD3D4150F")
    IStdSketchGeometry : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IApplication **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ StdSketchGeometryType *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SketchFeature( 
            /* [retval][out] */ IStdSketchFeature **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSketchGeometryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSketchGeometry * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSketchGeometry * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSketchGeometry * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSketchGeometry * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSketchGeometry * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSketchGeometry * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSketchGeometry * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSketchGeometry * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSketchGeometry * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSketchGeometry * This,
            /* [retval][out] */ StdSketchGeometryType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSketchGeometry * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SketchFeature )( 
            IStdSketchGeometry * This,
            /* [retval][out] */ IStdSketchFeature **ppVal);
        
        END_INTERFACE
    } IStdSketchGeometryVtbl;

    interface IStdSketchGeometry
    {
        CONST_VTBL struct IStdSketchGeometryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSketchGeometry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSketchGeometry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSketchGeometry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSketchGeometry_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSketchGeometry_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSketchGeometry_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSketchGeometry_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSketchGeometry_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSketchGeometry_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSketchGeometry_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSketchGeometry_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSketchGeometry_get_SketchFeature(This,ppVal)	\
    ( (This)->lpVtbl -> get_SketchFeature(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSketchGeometry_INTERFACE_DEFINED__ */


#ifndef __IStdSketchConstraint_INTERFACE_DEFINED__
#define __IStdSketchConstraint_INTERFACE_DEFINED__

/* interface IStdSketchConstraint */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSketchConstraint;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("23057881-19B6-4395-9D39-B5B62F75B5EF")
    IStdSketchConstraint : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IApplication **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ StdSketchConstraintType *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SketchFeature( 
            /* [retval][out] */ IStdSketchFeature **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSketchConstraintVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSketchConstraint * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSketchConstraint * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSketchConstraint * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSketchConstraint * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSketchConstraint * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSketchConstraint * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSketchConstraint * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSketchConstraint * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSketchConstraint * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSketchConstraint * This,
            /* [retval][out] */ StdSketchConstraintType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSketchConstraint * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SketchFeature )( 
            IStdSketchConstraint * This,
            /* [retval][out] */ IStdSketchFeature **ppVal);
        
        END_INTERFACE
    } IStdSketchConstraintVtbl;

    interface IStdSketchConstraint
    {
        CONST_VTBL struct IStdSketchConstraintVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSketchConstraint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSketchConstraint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSketchConstraint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSketchConstraint_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSketchConstraint_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSketchConstraint_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSketchConstraint_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSketchConstraint_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSketchConstraint_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSketchConstraint_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSketchConstraint_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSketchConstraint_get_SketchFeature(This,ppVal)	\
    ( (This)->lpVtbl -> get_SketchFeature(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSketchConstraint_INTERFACE_DEFINED__ */


#ifndef __IStdSketchCircle_INTERFACE_DEFINED__
#define __IStdSketchCircle_INTERFACE_DEFINED__

/* interface IStdSketchCircle */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSketchCircle;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C10C6FDD-8B99-4449-82F1-EAE67407CE67")
    IStdSketchCircle : public IStdSketchGeometry
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CenterPoint( 
            /* [retval][out] */ IStdSketchControlPoint **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Radius( 
            /* [retval][out] */ double *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSketchCircleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSketchCircle * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSketchCircle * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSketchCircle * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSketchCircle * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSketchCircle * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSketchCircle * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSketchCircle * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSketchCircle * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSketchCircle * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSketchCircle * This,
            /* [retval][out] */ StdSketchGeometryType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSketchCircle * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SketchFeature )( 
            IStdSketchCircle * This,
            /* [retval][out] */ IStdSketchFeature **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CenterPoint )( 
            IStdSketchCircle * This,
            /* [retval][out] */ IStdSketchControlPoint **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Radius )( 
            IStdSketchCircle * This,
            /* [retval][out] */ double *pVal);
        
        END_INTERFACE
    } IStdSketchCircleVtbl;

    interface IStdSketchCircle
    {
        CONST_VTBL struct IStdSketchCircleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSketchCircle_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSketchCircle_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSketchCircle_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSketchCircle_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSketchCircle_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSketchCircle_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSketchCircle_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSketchCircle_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSketchCircle_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSketchCircle_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSketchCircle_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSketchCircle_get_SketchFeature(This,ppVal)	\
    ( (This)->lpVtbl -> get_SketchFeature(This,ppVal) ) 


#define IStdSketchCircle_get_CenterPoint(This,ppVal)	\
    ( (This)->lpVtbl -> get_CenterPoint(This,ppVal) ) 

#define IStdSketchCircle_get_Radius(This,pVal)	\
    ( (This)->lpVtbl -> get_Radius(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSketchCircle_INTERFACE_DEFINED__ */


#ifndef __IStdSketchCircularArc_INTERFACE_DEFINED__
#define __IStdSketchCircularArc_INTERFACE_DEFINED__

/* interface IStdSketchCircularArc */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSketchCircularArc;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EF6BF49C-742C-4C57-8A37-CECFE279DB97")
    IStdSketchCircularArc : public IStdSketchGeometry
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CenterPoint( 
            /* [retval][out] */ IStdSketchControlPoint **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPoint( 
            /* [retval][out] */ IStdSketchControlPoint **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPoint( 
            /* [retval][out] */ IStdSketchControlPoint **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Radius( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartAngle( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndAngle( 
            /* [retval][out] */ double *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSketchCircularArcVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSketchCircularArc * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSketchCircularArc * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSketchCircularArc * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSketchCircularArc * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSketchCircularArc * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSketchCircularArc * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSketchCircularArc * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSketchCircularArc * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSketchCircularArc * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSketchCircularArc * This,
            /* [retval][out] */ StdSketchGeometryType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSketchCircularArc * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SketchFeature )( 
            IStdSketchCircularArc * This,
            /* [retval][out] */ IStdSketchFeature **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CenterPoint )( 
            IStdSketchCircularArc * This,
            /* [retval][out] */ IStdSketchControlPoint **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPoint )( 
            IStdSketchCircularArc * This,
            /* [retval][out] */ IStdSketchControlPoint **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPoint )( 
            IStdSketchCircularArc * This,
            /* [retval][out] */ IStdSketchControlPoint **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Radius )( 
            IStdSketchCircularArc * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartAngle )( 
            IStdSketchCircularArc * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndAngle )( 
            IStdSketchCircularArc * This,
            /* [retval][out] */ double *pVal);
        
        END_INTERFACE
    } IStdSketchCircularArcVtbl;

    interface IStdSketchCircularArc
    {
        CONST_VTBL struct IStdSketchCircularArcVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSketchCircularArc_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSketchCircularArc_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSketchCircularArc_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSketchCircularArc_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSketchCircularArc_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSketchCircularArc_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSketchCircularArc_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSketchCircularArc_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSketchCircularArc_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSketchCircularArc_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSketchCircularArc_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSketchCircularArc_get_SketchFeature(This,ppVal)	\
    ( (This)->lpVtbl -> get_SketchFeature(This,ppVal) ) 


#define IStdSketchCircularArc_get_CenterPoint(This,ppVal)	\
    ( (This)->lpVtbl -> get_CenterPoint(This,ppVal) ) 

#define IStdSketchCircularArc_get_StartPoint(This,ppVal)	\
    ( (This)->lpVtbl -> get_StartPoint(This,ppVal) ) 

#define IStdSketchCircularArc_get_EndPoint(This,ppVal)	\
    ( (This)->lpVtbl -> get_EndPoint(This,ppVal) ) 

#define IStdSketchCircularArc_get_Radius(This,pVal)	\
    ( (This)->lpVtbl -> get_Radius(This,pVal) ) 

#define IStdSketchCircularArc_get_StartAngle(This,pVal)	\
    ( (This)->lpVtbl -> get_StartAngle(This,pVal) ) 

#define IStdSketchCircularArc_get_EndAngle(This,pVal)	\
    ( (This)->lpVtbl -> get_EndAngle(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSketchCircularArc_INTERFACE_DEFINED__ */


#ifndef __IStdSketchControlPoint_INTERFACE_DEFINED__
#define __IStdSketchControlPoint_INTERFACE_DEFINED__

/* interface IStdSketchControlPoint */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSketchControlPoint;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3966E6F5-EC21-413E-B0EA-AF5077205967")
    IStdSketchControlPoint : public IStdSketchGeometry
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y( 
            /* [retval][out] */ double *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSketchControlPointVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSketchControlPoint * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSketchControlPoint * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSketchControlPoint * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSketchControlPoint * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSketchControlPoint * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSketchControlPoint * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSketchControlPoint * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSketchControlPoint * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSketchControlPoint * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSketchControlPoint * This,
            /* [retval][out] */ StdSketchGeometryType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSketchControlPoint * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SketchFeature )( 
            IStdSketchControlPoint * This,
            /* [retval][out] */ IStdSketchFeature **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_X )( 
            IStdSketchControlPoint * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Y )( 
            IStdSketchControlPoint * This,
            /* [retval][out] */ double *pVal);
        
        END_INTERFACE
    } IStdSketchControlPointVtbl;

    interface IStdSketchControlPoint
    {
        CONST_VTBL struct IStdSketchControlPointVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSketchControlPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSketchControlPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSketchControlPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSketchControlPoint_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSketchControlPoint_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSketchControlPoint_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSketchControlPoint_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSketchControlPoint_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSketchControlPoint_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSketchControlPoint_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSketchControlPoint_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSketchControlPoint_get_SketchFeature(This,ppVal)	\
    ( (This)->lpVtbl -> get_SketchFeature(This,ppVal) ) 


#define IStdSketchControlPoint_get_X(This,pVal)	\
    ( (This)->lpVtbl -> get_X(This,pVal) ) 

#define IStdSketchControlPoint_get_Y(This,pVal)	\
    ( (This)->lpVtbl -> get_Y(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSketchControlPoint_INTERFACE_DEFINED__ */


#ifndef __IStdSketchLine_INTERFACE_DEFINED__
#define __IStdSketchLine_INTERFACE_DEFINED__

/* interface IStdSketchLine */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSketchLine;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EE1EB2EA-DFA3-42A5-A9CB-321FC40B04DC")
    IStdSketchLine : public IStdSketchGeometry
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPoint( 
            /* [retval][out] */ IStdSketchControlPoint **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPoint( 
            /* [retval][out] */ IStdSketchControlPoint **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSketchLineVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSketchLine * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSketchLine * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSketchLine * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSketchLine * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSketchLine * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSketchLine * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSketchLine * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSketchLine * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSketchLine * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSketchLine * This,
            /* [retval][out] */ StdSketchGeometryType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSketchLine * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SketchFeature )( 
            IStdSketchLine * This,
            /* [retval][out] */ IStdSketchFeature **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPoint )( 
            IStdSketchLine * This,
            /* [retval][out] */ IStdSketchControlPoint **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPoint )( 
            IStdSketchLine * This,
            /* [retval][out] */ IStdSketchControlPoint **ppVal);
        
        END_INTERFACE
    } IStdSketchLineVtbl;

    interface IStdSketchLine
    {
        CONST_VTBL struct IStdSketchLineVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSketchLine_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSketchLine_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSketchLine_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSketchLine_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSketchLine_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSketchLine_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSketchLine_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSketchLine_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSketchLine_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSketchLine_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSketchLine_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSketchLine_get_SketchFeature(This,ppVal)	\
    ( (This)->lpVtbl -> get_SketchFeature(This,ppVal) ) 


#define IStdSketchLine_get_StartPoint(This,ppVal)	\
    ( (This)->lpVtbl -> get_StartPoint(This,ppVal) ) 

#define IStdSketchLine_get_EndPoint(This,ppVal)	\
    ( (This)->lpVtbl -> get_EndPoint(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSketchLine_INTERFACE_DEFINED__ */


#ifndef __IReferences_INTERFACE_DEFINED__
#define __IReferences_INTERFACE_DEFINED__

/* interface IReferences */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IReferences;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A7E4FCC-4DF6-4E4F-81F8-80C048316156")
    IReferences : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long index,
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IReference *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IReferencesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IReferences * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IReferences * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IReferences * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IReferences * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IReferences * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IReferences * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IReferences * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IReferences * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IReferences * This,
            /* [in] */ long index,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IReferences * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IReferences * This,
            /* [in] */ IReference *pVal);
        
        END_INTERFACE
    } IReferencesVtbl;

    interface IReferences
    {
        CONST_VTBL struct IReferencesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReferences_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IReferences_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IReferences_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IReferences_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IReferences_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IReferences_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IReferences_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IReferences_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IReferences_get_Item(This,index,ppVal)	\
    ( (This)->lpVtbl -> get_Item(This,index,ppVal) ) 

#define IReferences_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#define IReferences_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IReferences_INTERFACE_DEFINED__ */


#ifndef __IReference_INTERFACE_DEFINED__
#define __IReference_INTERFACE_DEFINED__

/* interface IReference */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IReference;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A0CDFCD7-C97B-426F-8528-0AA0321EA0FA")
    IReference : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ ReferenceType *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceeName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IReferenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IReference * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IReference * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IReference * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IReference * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IReference * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IReference * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IReference * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IReference * This,
            /* [retval][out] */ ReferenceType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IReference * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceeName )( 
            IReference * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IReferenceVtbl;

    interface IReference
    {
        CONST_VTBL struct IReferenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IReference_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IReference_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IReference_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IReference_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IReference_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IReference_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IReference_get_ReferenceeName(This,pVal)	\
    ( (This)->lpVtbl -> get_ReferenceeName(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IReference_INTERFACE_DEFINED__ */


#ifndef __IExplicitModelObject_INTERFACE_DEFINED__
#define __IExplicitModelObject_INTERFACE_DEFINED__

/* interface IExplicitModelObject */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IExplicitModelObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("86E4FF07-1F31-42AD-A922-315C8DD57943")
    IExplicitModelObject : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IApplication **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ ExplicitModelObjectType *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Creator( 
            /* [retval][out] */ IFeature **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IExplicitModelObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExplicitModelObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExplicitModelObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExplicitModelObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IExplicitModelObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IExplicitModelObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IExplicitModelObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IExplicitModelObject * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IExplicitModelObject * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IExplicitModelObject * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IExplicitModelObject * This,
            /* [retval][out] */ ExplicitModelObjectType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Creator )( 
            IExplicitModelObject * This,
            /* [retval][out] */ IFeature **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IExplicitModelObject * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IExplicitModelObjectVtbl;

    interface IExplicitModelObject
    {
        CONST_VTBL struct IExplicitModelObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExplicitModelObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExplicitModelObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExplicitModelObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExplicitModelObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IExplicitModelObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IExplicitModelObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IExplicitModelObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IExplicitModelObject_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IExplicitModelObject_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IExplicitModelObject_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IExplicitModelObject_get_Creator(This,ppVal)	\
    ( (This)->lpVtbl -> get_Creator(This,ppVal) ) 

#define IExplicitModelObject_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExplicitModelObject_INTERFACE_DEFINED__ */


#ifndef __ISketch_INTERFACE_DEFINED__
#define __ISketch_INTERFACE_DEFINED__

/* interface ISketch */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISketch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0235D6AB-E6F9-4665-98AF-75B7D56A0129")
    ISketch : public IExplicitModelObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ISketchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISketch * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISketch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISketch * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISketch * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISketch * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISketch * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISketch * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ISketch * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ISketch * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ISketch * This,
            /* [retval][out] */ ExplicitModelObjectType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Creator )( 
            ISketch * This,
            /* [retval][out] */ IFeature **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISketch * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ISketchVtbl;

    interface ISketch
    {
        CONST_VTBL struct ISketchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISketch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISketch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISketch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISketch_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISketch_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISketch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISketch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISketch_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define ISketch_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define ISketch_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define ISketch_get_Creator(This,ppVal)	\
    ( (This)->lpVtbl -> get_Creator(This,ppVal) ) 

#define ISketch_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISketch_INTERFACE_DEFINED__ */


#ifndef __ISketchEditor_INTERFACE_DEFINED__
#define __ISketchEditor_INTERFACE_DEFINED__

/* interface ISketchEditor */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISketchEditor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("57FAE9E3-F8D4-49B2-AB0A-B88F640B7CF2")
    ISketchEditor : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Create2DLine2Points( 
            /* [in] */ BSTR name,
            /* [in] */ double startX,
            /* [in] */ double startY,
            /* [in] */ double endX,
            /* [in] */ double endY,
            /* [retval][out] */ IStdSketchLine **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Create2DCircleCenterPoint( 
            /* [in] */ BSTR name,
            /* [in] */ double centerX,
            /* [in] */ double centerY,
            /* [in] */ double radius,
            /* [retval][out] */ IStdSketchCircle **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Create2DArc( 
            /* [in] */ BSTR name,
            /* [in] */ double centerX,
            /* [in] */ double centerY,
            /* [in] */ double radius,
            /* [in] */ double startAngle,
            /* [in] */ double endAngle,
            /* [retval][out] */ IStdSketchCircularArc **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Create2DArcCenterStartEnd( 
            /* [in] */ BSTR name,
            /* [in] */ double centerX,
            /* [in] */ double centerY,
            /* [in] */ double startX,
            /* [in] */ double startY,
            /* [in] */ double endX,
            /* [in] */ double endY,
            /* [retval][out] */ IStdSketchCircularArc **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Create2DArc3Points( 
            /* [in] */ BSTR name,
            /* [in] */ double startX,
            /* [in] */ double startY,
            /* [in] */ double intermediateX,
            /* [in] */ double intermediateY,
            /* [in] */ double endX,
            /* [in] */ double endY,
            /* [retval][out] */ IStdSketchCircularArc **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Create2DCenterline2Points( 
            /* [in] */ BSTR name,
            /* [in] */ double startX,
            /* [in] */ double startY,
            /* [in] */ double endX,
            /* [in] */ double endY,
            /* [retval][out] */ IStdSketchLine **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateCoincidentSamePoints( 
            /* [in] */ BSTR name,
            /* [in] */ IReference *pFirstObject,
            /* [in] */ StdCoincidentSamePointsType firstType,
            /* [in] */ IReference *pSecondObject,
            /* [in] */ StdCoincidentSamePointsType secondType,
            /* [retval][out] */ IStdSketchCoincidentSamePoints **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreatePerpendicular( 
            /* [in] */ BSTR name,
            /* [in] */ IReference *pReferenceEdit,
            /* [in] */ IReference *pTarget,
            /* [retval][out] */ IStdSketchPerpendicular **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateParallel( 
            /* [in] */ BSTR name,
            /* [in] */ IReference *pReferenceEdit,
            /* [in] */ IReference *pTarget,
            /* [retval][out] */ IStdSketchParallel **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateHorizontal( 
            /* [in] */ BSTR name,
            /* [in] */ IReference *pTarget,
            /* [retval][out] */ IStdSketchHorizontal **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateVertical( 
            /* [in] */ BSTR name,
            /* [in] */ IReference *pTarget,
            /* [retval][out] */ IStdSketchVertical **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteByName( 
            /* [in] */ BSTR name) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISketchEditorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISketchEditor * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISketchEditor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISketchEditor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISketchEditor * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISketchEditor * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISketchEditor * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISketchEditor * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            ISketchEditor * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Create2DLine2Points )( 
            ISketchEditor * This,
            /* [in] */ BSTR name,
            /* [in] */ double startX,
            /* [in] */ double startY,
            /* [in] */ double endX,
            /* [in] */ double endY,
            /* [retval][out] */ IStdSketchLine **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Create2DCircleCenterPoint )( 
            ISketchEditor * This,
            /* [in] */ BSTR name,
            /* [in] */ double centerX,
            /* [in] */ double centerY,
            /* [in] */ double radius,
            /* [retval][out] */ IStdSketchCircle **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Create2DArc )( 
            ISketchEditor * This,
            /* [in] */ BSTR name,
            /* [in] */ double centerX,
            /* [in] */ double centerY,
            /* [in] */ double radius,
            /* [in] */ double startAngle,
            /* [in] */ double endAngle,
            /* [retval][out] */ IStdSketchCircularArc **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Create2DArcCenterStartEnd )( 
            ISketchEditor * This,
            /* [in] */ BSTR name,
            /* [in] */ double centerX,
            /* [in] */ double centerY,
            /* [in] */ double startX,
            /* [in] */ double startY,
            /* [in] */ double endX,
            /* [in] */ double endY,
            /* [retval][out] */ IStdSketchCircularArc **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Create2DArc3Points )( 
            ISketchEditor * This,
            /* [in] */ BSTR name,
            /* [in] */ double startX,
            /* [in] */ double startY,
            /* [in] */ double intermediateX,
            /* [in] */ double intermediateY,
            /* [in] */ double endX,
            /* [in] */ double endY,
            /* [retval][out] */ IStdSketchCircularArc **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Create2DCenterline2Points )( 
            ISketchEditor * This,
            /* [in] */ BSTR name,
            /* [in] */ double startX,
            /* [in] */ double startY,
            /* [in] */ double endX,
            /* [in] */ double endY,
            /* [retval][out] */ IStdSketchLine **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateCoincidentSamePoints )( 
            ISketchEditor * This,
            /* [in] */ BSTR name,
            /* [in] */ IReference *pFirstObject,
            /* [in] */ StdCoincidentSamePointsType firstType,
            /* [in] */ IReference *pSecondObject,
            /* [in] */ StdCoincidentSamePointsType secondType,
            /* [retval][out] */ IStdSketchCoincidentSamePoints **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreatePerpendicular )( 
            ISketchEditor * This,
            /* [in] */ BSTR name,
            /* [in] */ IReference *pReferenceEdit,
            /* [in] */ IReference *pTarget,
            /* [retval][out] */ IStdSketchPerpendicular **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateParallel )( 
            ISketchEditor * This,
            /* [in] */ BSTR name,
            /* [in] */ IReference *pReferenceEdit,
            /* [in] */ IReference *pTarget,
            /* [retval][out] */ IStdSketchParallel **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateHorizontal )( 
            ISketchEditor * This,
            /* [in] */ BSTR name,
            /* [in] */ IReference *pTarget,
            /* [retval][out] */ IStdSketchHorizontal **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateVertical )( 
            ISketchEditor * This,
            /* [in] */ BSTR name,
            /* [in] */ IReference *pTarget,
            /* [retval][out] */ IStdSketchVertical **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteByName )( 
            ISketchEditor * This,
            /* [in] */ BSTR name);
        
        END_INTERFACE
    } ISketchEditorVtbl;

    interface ISketchEditor
    {
        CONST_VTBL struct ISketchEditorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISketchEditor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISketchEditor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISketchEditor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISketchEditor_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISketchEditor_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISketchEditor_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISketchEditor_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISketchEditor_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define ISketchEditor_Create2DLine2Points(This,name,startX,startY,endX,endY,ppVal)	\
    ( (This)->lpVtbl -> Create2DLine2Points(This,name,startX,startY,endX,endY,ppVal) ) 

#define ISketchEditor_Create2DCircleCenterPoint(This,name,centerX,centerY,radius,ppVal)	\
    ( (This)->lpVtbl -> Create2DCircleCenterPoint(This,name,centerX,centerY,radius,ppVal) ) 

#define ISketchEditor_Create2DArc(This,name,centerX,centerY,radius,startAngle,endAngle,ppVal)	\
    ( (This)->lpVtbl -> Create2DArc(This,name,centerX,centerY,radius,startAngle,endAngle,ppVal) ) 

#define ISketchEditor_Create2DArcCenterStartEnd(This,name,centerX,centerY,startX,startY,endX,endY,ppVal)	\
    ( (This)->lpVtbl -> Create2DArcCenterStartEnd(This,name,centerX,centerY,startX,startY,endX,endY,ppVal) ) 

#define ISketchEditor_Create2DArc3Points(This,name,startX,startY,intermediateX,intermediateY,endX,endY,ppVal)	\
    ( (This)->lpVtbl -> Create2DArc3Points(This,name,startX,startY,intermediateX,intermediateY,endX,endY,ppVal) ) 

#define ISketchEditor_Create2DCenterline2Points(This,name,startX,startY,endX,endY,ppVal)	\
    ( (This)->lpVtbl -> Create2DCenterline2Points(This,name,startX,startY,endX,endY,ppVal) ) 

#define ISketchEditor_CreateCoincidentSamePoints(This,name,pFirstObject,firstType,pSecondObject,secondType,ppVal)	\
    ( (This)->lpVtbl -> CreateCoincidentSamePoints(This,name,pFirstObject,firstType,pSecondObject,secondType,ppVal) ) 

#define ISketchEditor_CreatePerpendicular(This,name,pReferenceEdit,pTarget,ppVal)	\
    ( (This)->lpVtbl -> CreatePerpendicular(This,name,pReferenceEdit,pTarget,ppVal) ) 

#define ISketchEditor_CreateParallel(This,name,pReferenceEdit,pTarget,ppVal)	\
    ( (This)->lpVtbl -> CreateParallel(This,name,pReferenceEdit,pTarget,ppVal) ) 

#define ISketchEditor_CreateHorizontal(This,name,pTarget,ppVal)	\
    ( (This)->lpVtbl -> CreateHorizontal(This,name,pTarget,ppVal) ) 

#define ISketchEditor_CreateVertical(This,name,pTarget,ppVal)	\
    ( (This)->lpVtbl -> CreateVertical(This,name,pTarget,ppVal) ) 

#define ISketchEditor_DeleteByName(This,name)	\
    ( (This)->lpVtbl -> DeleteByName(This,name) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISketchEditor_INTERFACE_DEFINED__ */


#ifndef __IStdSolidProtrusionSweepFeature_INTERFACE_DEFINED__
#define __IStdSolidProtrusionSweepFeature_INTERFACE_DEFINED__

/* interface IStdSolidProtrusionSweepFeature */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSolidProtrusionSweepFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("62F39890-0584-4142-A8DE-E419F9BF7301")
    IStdSolidProtrusionSweepFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProfileSketch( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ProfileSketch( 
            /* [in] */ IReference *ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GuideCurve( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GuideCurve( 
            /* [in] */ IReference *ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSolidProtrusionSweepFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSolidProtrusionSweepFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSolidProtrusionSweepFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSolidProtrusionSweepFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSolidProtrusionSweepFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSolidProtrusionSweepFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSolidProtrusionSweepFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSolidProtrusionSweepFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSolidProtrusionSweepFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSolidProtrusionSweepFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSolidProtrusionSweepFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSolidProtrusionSweepFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdSolidProtrusionSweepFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProfileSketch )( 
            IStdSolidProtrusionSweepFeature * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProfileSketch )( 
            IStdSolidProtrusionSweepFeature * This,
            /* [in] */ IReference *ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GuideCurve )( 
            IStdSolidProtrusionSweepFeature * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GuideCurve )( 
            IStdSolidProtrusionSweepFeature * This,
            /* [in] */ IReference *ppVal);
        
        END_INTERFACE
    } IStdSolidProtrusionSweepFeatureVtbl;

    interface IStdSolidProtrusionSweepFeature
    {
        CONST_VTBL struct IStdSolidProtrusionSweepFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSolidProtrusionSweepFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSolidProtrusionSweepFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSolidProtrusionSweepFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSolidProtrusionSweepFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSolidProtrusionSweepFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSolidProtrusionSweepFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSolidProtrusionSweepFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSolidProtrusionSweepFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSolidProtrusionSweepFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSolidProtrusionSweepFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSolidProtrusionSweepFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSolidProtrusionSweepFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdSolidProtrusionSweepFeature_get_ProfileSketch(This,ppVal)	\
    ( (This)->lpVtbl -> get_ProfileSketch(This,ppVal) ) 

#define IStdSolidProtrusionSweepFeature_put_ProfileSketch(This,ppVal)	\
    ( (This)->lpVtbl -> put_ProfileSketch(This,ppVal) ) 

#define IStdSolidProtrusionSweepFeature_get_GuideCurve(This,ppVal)	\
    ( (This)->lpVtbl -> get_GuideCurve(This,ppVal) ) 

#define IStdSolidProtrusionSweepFeature_put_GuideCurve(This,ppVal)	\
    ( (This)->lpVtbl -> put_GuideCurve(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSolidProtrusionSweepFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSolidProtrusionRevolveFeature_INTERFACE_DEFINED__
#define __IStdSolidProtrusionRevolveFeature_INTERFACE_DEFINED__

/* interface IStdSolidProtrusionRevolveFeature */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSolidProtrusionRevolveFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B8AAC9D3-8453-48C9-AC93-A116E891101E")
    IStdSolidProtrusionRevolveFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProfileSketch( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ProfileSketch( 
            /* [in] */ IReference *ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFlip( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsFlip( 
            /* [in] */ VARIANT_BOOL pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartCondition( 
            /* [retval][out] */ StdRevolveEndType *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartAngle( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StartAngle( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndCondition( 
            /* [retval][out] */ StdRevolveEndType *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndAngle( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EndAngle( 
            /* [in] */ double pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSolidProtrusionRevolveFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSolidProtrusionRevolveFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSolidProtrusionRevolveFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSolidProtrusionRevolveFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSolidProtrusionRevolveFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSolidProtrusionRevolveFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSolidProtrusionRevolveFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSolidProtrusionRevolveFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSolidProtrusionRevolveFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSolidProtrusionRevolveFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSolidProtrusionRevolveFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSolidProtrusionRevolveFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdSolidProtrusionRevolveFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProfileSketch )( 
            IStdSolidProtrusionRevolveFeature * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProfileSketch )( 
            IStdSolidProtrusionRevolveFeature * This,
            /* [in] */ IReference *ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFlip )( 
            IStdSolidProtrusionRevolveFeature * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsFlip )( 
            IStdSolidProtrusionRevolveFeature * This,
            /* [in] */ VARIANT_BOOL pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartCondition )( 
            IStdSolidProtrusionRevolveFeature * This,
            /* [retval][out] */ StdRevolveEndType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartAngle )( 
            IStdSolidProtrusionRevolveFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartAngle )( 
            IStdSolidProtrusionRevolveFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndCondition )( 
            IStdSolidProtrusionRevolveFeature * This,
            /* [retval][out] */ StdRevolveEndType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndAngle )( 
            IStdSolidProtrusionRevolveFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndAngle )( 
            IStdSolidProtrusionRevolveFeature * This,
            /* [in] */ double pVal);
        
        END_INTERFACE
    } IStdSolidProtrusionRevolveFeatureVtbl;

    interface IStdSolidProtrusionRevolveFeature
    {
        CONST_VTBL struct IStdSolidProtrusionRevolveFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSolidProtrusionRevolveFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSolidProtrusionRevolveFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSolidProtrusionRevolveFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSolidProtrusionRevolveFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSolidProtrusionRevolveFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSolidProtrusionRevolveFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSolidProtrusionRevolveFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSolidProtrusionRevolveFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSolidProtrusionRevolveFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSolidProtrusionRevolveFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSolidProtrusionRevolveFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSolidProtrusionRevolveFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdSolidProtrusionRevolveFeature_get_ProfileSketch(This,ppVal)	\
    ( (This)->lpVtbl -> get_ProfileSketch(This,ppVal) ) 

#define IStdSolidProtrusionRevolveFeature_put_ProfileSketch(This,ppVal)	\
    ( (This)->lpVtbl -> put_ProfileSketch(This,ppVal) ) 

#define IStdSolidProtrusionRevolveFeature_get_IsFlip(This,pVal)	\
    ( (This)->lpVtbl -> get_IsFlip(This,pVal) ) 

#define IStdSolidProtrusionRevolveFeature_put_IsFlip(This,pVal)	\
    ( (This)->lpVtbl -> put_IsFlip(This,pVal) ) 

#define IStdSolidProtrusionRevolveFeature_get_StartCondition(This,pVal)	\
    ( (This)->lpVtbl -> get_StartCondition(This,pVal) ) 

#define IStdSolidProtrusionRevolveFeature_get_StartAngle(This,pVal)	\
    ( (This)->lpVtbl -> get_StartAngle(This,pVal) ) 

#define IStdSolidProtrusionRevolveFeature_put_StartAngle(This,pVal)	\
    ( (This)->lpVtbl -> put_StartAngle(This,pVal) ) 

#define IStdSolidProtrusionRevolveFeature_get_EndCondition(This,pVal)	\
    ( (This)->lpVtbl -> get_EndCondition(This,pVal) ) 

#define IStdSolidProtrusionRevolveFeature_get_EndAngle(This,pVal)	\
    ( (This)->lpVtbl -> get_EndAngle(This,pVal) ) 

#define IStdSolidProtrusionRevolveFeature_put_EndAngle(This,pVal)	\
    ( (This)->lpVtbl -> put_EndAngle(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSolidProtrusionRevolveFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSketchCenterline_INTERFACE_DEFINED__
#define __IStdSketchCenterline_INTERFACE_DEFINED__

/* interface IStdSketchCenterline */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSketchCenterline;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2600ED0F-883F-478A-AFDA-A7743A1ADF3A")
    IStdSketchCenterline : public IStdSketchGeometry
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPoint( 
            /* [retval][out] */ IStdSketchControlPoint **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPoint( 
            /* [retval][out] */ IStdSketchControlPoint **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSketchCenterlineVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSketchCenterline * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSketchCenterline * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSketchCenterline * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSketchCenterline * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSketchCenterline * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSketchCenterline * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSketchCenterline * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSketchCenterline * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSketchCenterline * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSketchCenterline * This,
            /* [retval][out] */ StdSketchGeometryType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSketchCenterline * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SketchFeature )( 
            IStdSketchCenterline * This,
            /* [retval][out] */ IStdSketchFeature **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPoint )( 
            IStdSketchCenterline * This,
            /* [retval][out] */ IStdSketchControlPoint **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPoint )( 
            IStdSketchCenterline * This,
            /* [retval][out] */ IStdSketchControlPoint **ppVal);
        
        END_INTERFACE
    } IStdSketchCenterlineVtbl;

    interface IStdSketchCenterline
    {
        CONST_VTBL struct IStdSketchCenterlineVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSketchCenterline_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSketchCenterline_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSketchCenterline_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSketchCenterline_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSketchCenterline_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSketchCenterline_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSketchCenterline_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSketchCenterline_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSketchCenterline_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSketchCenterline_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSketchCenterline_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSketchCenterline_get_SketchFeature(This,ppVal)	\
    ( (This)->lpVtbl -> get_SketchFeature(This,ppVal) ) 


#define IStdSketchCenterline_get_StartPoint(This,ppVal)	\
    ( (This)->lpVtbl -> get_StartPoint(This,ppVal) ) 

#define IStdSketchCenterline_get_EndPoint(This,ppVal)	\
    ( (This)->lpVtbl -> get_EndPoint(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSketchCenterline_INTERFACE_DEFINED__ */


#ifndef __IStdSolidOperatePatternRectangularFeature_INTERFACE_DEFINED__
#define __IStdSolidOperatePatternRectangularFeature_INTERFACE_DEFINED__

/* interface IStdSolidOperatePatternRectangularFeature */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSolidOperatePatternRectangularFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("929007FB-0FF4-477A-BC6B-9DB63B4F6407")
    IStdSolidOperatePatternRectangularFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TargetFeatures( 
            /* [retval][out] */ IReferences **ppVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TargetFeatures( 
            /* [in] */ IReferences *ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ColumnSpacing( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ColumnSpacing( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ColumnDirection( 
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ColumnNumber( 
            /* [retval][out] */ int *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ColumnNumber( 
            /* [in] */ int pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RowSpacing( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RowSpacing( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RowDirection( 
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RowNumber( 
            /* [retval][out] */ int *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RowNumber( 
            /* [in] */ int pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PutColumnDirection( 
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PutRowDirection( 
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSolidOperatePatternRectangularFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSolidOperatePatternRectangularFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSolidOperatePatternRectangularFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetFeatures )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [retval][out] */ IReferences **ppVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetFeatures )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [in] */ IReferences *ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColumnSpacing )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColumnSpacing )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColumnDirection )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColumnNumber )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [retval][out] */ int *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColumnNumber )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [in] */ int pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RowSpacing )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RowSpacing )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RowDirection )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RowNumber )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [retval][out] */ int *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RowNumber )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [in] */ int pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PutColumnDirection )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PutRowDirection )( 
            IStdSolidOperatePatternRectangularFeature * This,
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z);
        
        END_INTERFACE
    } IStdSolidOperatePatternRectangularFeatureVtbl;

    interface IStdSolidOperatePatternRectangularFeature
    {
        CONST_VTBL struct IStdSolidOperatePatternRectangularFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSolidOperatePatternRectangularFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSolidOperatePatternRectangularFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSolidOperatePatternRectangularFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSolidOperatePatternRectangularFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSolidOperatePatternRectangularFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSolidOperatePatternRectangularFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSolidOperatePatternRectangularFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSolidOperatePatternRectangularFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSolidOperatePatternRectangularFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSolidOperatePatternRectangularFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSolidOperatePatternRectangularFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSolidOperatePatternRectangularFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdSolidOperatePatternRectangularFeature_get_TargetFeatures(This,ppVal)	\
    ( (This)->lpVtbl -> get_TargetFeatures(This,ppVal) ) 

#define IStdSolidOperatePatternRectangularFeature_put_TargetFeatures(This,ppVal)	\
    ( (This)->lpVtbl -> put_TargetFeatures(This,ppVal) ) 

#define IStdSolidOperatePatternRectangularFeature_get_ColumnSpacing(This,pVal)	\
    ( (This)->lpVtbl -> get_ColumnSpacing(This,pVal) ) 

#define IStdSolidOperatePatternRectangularFeature_put_ColumnSpacing(This,pVal)	\
    ( (This)->lpVtbl -> put_ColumnSpacing(This,pVal) ) 

#define IStdSolidOperatePatternRectangularFeature_get_ColumnDirection(This,x,y,z)	\
    ( (This)->lpVtbl -> get_ColumnDirection(This,x,y,z) ) 

#define IStdSolidOperatePatternRectangularFeature_get_ColumnNumber(This,pVal)	\
    ( (This)->lpVtbl -> get_ColumnNumber(This,pVal) ) 

#define IStdSolidOperatePatternRectangularFeature_put_ColumnNumber(This,pVal)	\
    ( (This)->lpVtbl -> put_ColumnNumber(This,pVal) ) 

#define IStdSolidOperatePatternRectangularFeature_get_RowSpacing(This,pVal)	\
    ( (This)->lpVtbl -> get_RowSpacing(This,pVal) ) 

#define IStdSolidOperatePatternRectangularFeature_put_RowSpacing(This,pVal)	\
    ( (This)->lpVtbl -> put_RowSpacing(This,pVal) ) 

#define IStdSolidOperatePatternRectangularFeature_get_RowDirection(This,x,y,z)	\
    ( (This)->lpVtbl -> get_RowDirection(This,x,y,z) ) 

#define IStdSolidOperatePatternRectangularFeature_get_RowNumber(This,pVal)	\
    ( (This)->lpVtbl -> get_RowNumber(This,pVal) ) 

#define IStdSolidOperatePatternRectangularFeature_put_RowNumber(This,pVal)	\
    ( (This)->lpVtbl -> put_RowNumber(This,pVal) ) 

#define IStdSolidOperatePatternRectangularFeature_PutColumnDirection(This,x,y,z)	\
    ( (This)->lpVtbl -> PutColumnDirection(This,x,y,z) ) 

#define IStdSolidOperatePatternRectangularFeature_PutRowDirection(This,x,y,z)	\
    ( (This)->lpVtbl -> PutRowDirection(This,x,y,z) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSolidOperatePatternRectangularFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSolidChamferFeature_INTERFACE_DEFINED__
#define __IStdSolidChamferFeature_INTERFACE_DEFINED__

/* interface IStdSolidChamferFeature */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSolidChamferFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7397F21A-E19F-4EDA-B89F-E18405BD3760")
    IStdSolidChamferFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ChamferType( 
            /* [retval][out] */ ChamferType *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedEdges( 
            /* [retval][out] */ IReferences **ppVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SelectedEdges( 
            /* [in] */ IReferences *ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedFace( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Length( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPosX( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPosY( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPosZ( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPosX( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPosY( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPosZ( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPosXAt( 
            /* [in] */ int index,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPosYAt( 
            /* [in] */ int index,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPosZAt( 
            /* [in] */ int index,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPosXAt( 
            /* [in] */ int index,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPosYAt( 
            /* [in] */ int index,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPosZAt( 
            /* [in] */ int index,
            /* [retval][out] */ double *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSolidChamferFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSolidChamferFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSolidChamferFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSolidChamferFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSolidChamferFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSolidChamferFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSolidChamferFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSolidChamferFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSolidChamferFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSolidChamferFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSolidChamferFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSolidChamferFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdSolidChamferFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChamferType )( 
            IStdSolidChamferFeature * This,
            /* [retval][out] */ ChamferType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedEdges )( 
            IStdSolidChamferFeature * This,
            /* [retval][out] */ IReferences **ppVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SelectedEdges )( 
            IStdSolidChamferFeature * This,
            /* [in] */ IReferences *ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedFace )( 
            IStdSolidChamferFeature * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            IStdSolidChamferFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Length )( 
            IStdSolidChamferFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IStdSolidChamferFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPosX )( 
            IStdSolidChamferFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPosY )( 
            IStdSolidChamferFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPosZ )( 
            IStdSolidChamferFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPosX )( 
            IStdSolidChamferFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPosY )( 
            IStdSolidChamferFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPosZ )( 
            IStdSolidChamferFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPosXAt )( 
            IStdSolidChamferFeature * This,
            /* [in] */ int index,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPosYAt )( 
            IStdSolidChamferFeature * This,
            /* [in] */ int index,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPosZAt )( 
            IStdSolidChamferFeature * This,
            /* [in] */ int index,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPosXAt )( 
            IStdSolidChamferFeature * This,
            /* [in] */ int index,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPosYAt )( 
            IStdSolidChamferFeature * This,
            /* [in] */ int index,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPosZAt )( 
            IStdSolidChamferFeature * This,
            /* [in] */ int index,
            /* [retval][out] */ double *pVal);
        
        END_INTERFACE
    } IStdSolidChamferFeatureVtbl;

    interface IStdSolidChamferFeature
    {
        CONST_VTBL struct IStdSolidChamferFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSolidChamferFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSolidChamferFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSolidChamferFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSolidChamferFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSolidChamferFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSolidChamferFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSolidChamferFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSolidChamferFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSolidChamferFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSolidChamferFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSolidChamferFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSolidChamferFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdSolidChamferFeature_get_ChamferType(This,pVal)	\
    ( (This)->lpVtbl -> get_ChamferType(This,pVal) ) 

#define IStdSolidChamferFeature_get_SelectedEdges(This,ppVal)	\
    ( (This)->lpVtbl -> get_SelectedEdges(This,ppVal) ) 

#define IStdSolidChamferFeature_put_SelectedEdges(This,ppVal)	\
    ( (This)->lpVtbl -> put_SelectedEdges(This,ppVal) ) 

#define IStdSolidChamferFeature_get_SelectedFace(This,ppVal)	\
    ( (This)->lpVtbl -> get_SelectedFace(This,ppVal) ) 

#define IStdSolidChamferFeature_get_Length(This,pVal)	\
    ( (This)->lpVtbl -> get_Length(This,pVal) ) 

#define IStdSolidChamferFeature_put_Length(This,pVal)	\
    ( (This)->lpVtbl -> put_Length(This,pVal) ) 

#define IStdSolidChamferFeature_get_Value(This,pVal)	\
    ( (This)->lpVtbl -> get_Value(This,pVal) ) 

#define IStdSolidChamferFeature_get_StartPosX(This,pVal)	\
    ( (This)->lpVtbl -> get_StartPosX(This,pVal) ) 

#define IStdSolidChamferFeature_get_StartPosY(This,pVal)	\
    ( (This)->lpVtbl -> get_StartPosY(This,pVal) ) 

#define IStdSolidChamferFeature_get_StartPosZ(This,pVal)	\
    ( (This)->lpVtbl -> get_StartPosZ(This,pVal) ) 

#define IStdSolidChamferFeature_get_EndPosX(This,pVal)	\
    ( (This)->lpVtbl -> get_EndPosX(This,pVal) ) 

#define IStdSolidChamferFeature_get_EndPosY(This,pVal)	\
    ( (This)->lpVtbl -> get_EndPosY(This,pVal) ) 

#define IStdSolidChamferFeature_get_EndPosZ(This,pVal)	\
    ( (This)->lpVtbl -> get_EndPosZ(This,pVal) ) 

#define IStdSolidChamferFeature_get_StartPosXAt(This,index,pVal)	\
    ( (This)->lpVtbl -> get_StartPosXAt(This,index,pVal) ) 

#define IStdSolidChamferFeature_get_StartPosYAt(This,index,pVal)	\
    ( (This)->lpVtbl -> get_StartPosYAt(This,index,pVal) ) 

#define IStdSolidChamferFeature_get_StartPosZAt(This,index,pVal)	\
    ( (This)->lpVtbl -> get_StartPosZAt(This,index,pVal) ) 

#define IStdSolidChamferFeature_get_EndPosXAt(This,index,pVal)	\
    ( (This)->lpVtbl -> get_EndPosXAt(This,index,pVal) ) 

#define IStdSolidChamferFeature_get_EndPosYAt(This,index,pVal)	\
    ( (This)->lpVtbl -> get_EndPosYAt(This,index,pVal) ) 

#define IStdSolidChamferFeature_get_EndPosZAt(This,index,pVal)	\
    ( (This)->lpVtbl -> get_EndPosZAt(This,index,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSolidChamferFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSolidCutRevolveFeature_INTERFACE_DEFINED__
#define __IStdSolidCutRevolveFeature_INTERFACE_DEFINED__

/* interface IStdSolidCutRevolveFeature */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSolidCutRevolveFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1B8E8E40-7D68-4387-A13F-D8E204212607")
    IStdSolidCutRevolveFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProfileSketch( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ProfileSketch( 
            /* [in] */ IReference *ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFlip( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsFlip( 
            /* [in] */ VARIANT_BOOL pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartCondition( 
            /* [retval][out] */ StdRevolveEndType *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartAngle( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StartAngle( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndCondition( 
            /* [retval][out] */ StdRevolveEndType *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndAngle( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EndAngle( 
            /* [in] */ double pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSolidCutRevolveFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSolidCutRevolveFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSolidCutRevolveFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSolidCutRevolveFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSolidCutRevolveFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSolidCutRevolveFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSolidCutRevolveFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSolidCutRevolveFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSolidCutRevolveFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSolidCutRevolveFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSolidCutRevolveFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSolidCutRevolveFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdSolidCutRevolveFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProfileSketch )( 
            IStdSolidCutRevolveFeature * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProfileSketch )( 
            IStdSolidCutRevolveFeature * This,
            /* [in] */ IReference *ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFlip )( 
            IStdSolidCutRevolveFeature * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsFlip )( 
            IStdSolidCutRevolveFeature * This,
            /* [in] */ VARIANT_BOOL pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartCondition )( 
            IStdSolidCutRevolveFeature * This,
            /* [retval][out] */ StdRevolveEndType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartAngle )( 
            IStdSolidCutRevolveFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartAngle )( 
            IStdSolidCutRevolveFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndCondition )( 
            IStdSolidCutRevolveFeature * This,
            /* [retval][out] */ StdRevolveEndType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndAngle )( 
            IStdSolidCutRevolveFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndAngle )( 
            IStdSolidCutRevolveFeature * This,
            /* [in] */ double pVal);
        
        END_INTERFACE
    } IStdSolidCutRevolveFeatureVtbl;

    interface IStdSolidCutRevolveFeature
    {
        CONST_VTBL struct IStdSolidCutRevolveFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSolidCutRevolveFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSolidCutRevolveFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSolidCutRevolveFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSolidCutRevolveFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSolidCutRevolveFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSolidCutRevolveFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSolidCutRevolveFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSolidCutRevolveFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSolidCutRevolveFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSolidCutRevolveFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSolidCutRevolveFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSolidCutRevolveFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdSolidCutRevolveFeature_get_ProfileSketch(This,ppVal)	\
    ( (This)->lpVtbl -> get_ProfileSketch(This,ppVal) ) 

#define IStdSolidCutRevolveFeature_put_ProfileSketch(This,ppVal)	\
    ( (This)->lpVtbl -> put_ProfileSketch(This,ppVal) ) 

#define IStdSolidCutRevolveFeature_get_IsFlip(This,pVal)	\
    ( (This)->lpVtbl -> get_IsFlip(This,pVal) ) 

#define IStdSolidCutRevolveFeature_put_IsFlip(This,pVal)	\
    ( (This)->lpVtbl -> put_IsFlip(This,pVal) ) 

#define IStdSolidCutRevolveFeature_get_StartCondition(This,pVal)	\
    ( (This)->lpVtbl -> get_StartCondition(This,pVal) ) 

#define IStdSolidCutRevolveFeature_get_StartAngle(This,pVal)	\
    ( (This)->lpVtbl -> get_StartAngle(This,pVal) ) 

#define IStdSolidCutRevolveFeature_put_StartAngle(This,pVal)	\
    ( (This)->lpVtbl -> put_StartAngle(This,pVal) ) 

#define IStdSolidCutRevolveFeature_get_EndCondition(This,pVal)	\
    ( (This)->lpVtbl -> get_EndCondition(This,pVal) ) 

#define IStdSolidCutRevolveFeature_get_EndAngle(This,pVal)	\
    ( (This)->lpVtbl -> get_EndAngle(This,pVal) ) 

#define IStdSolidCutRevolveFeature_put_EndAngle(This,pVal)	\
    ( (This)->lpVtbl -> put_EndAngle(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSolidCutRevolveFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSolidOperatePatternCircularFeature_INTERFACE_DEFINED__
#define __IStdSolidOperatePatternCircularFeature_INTERFACE_DEFINED__

/* interface IStdSolidOperatePatternCircularFeature */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSolidOperatePatternCircularFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1B44E76F-21AD-482B-A2D4-950375EC2D61")
    IStdSolidOperatePatternCircularFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TargetFeatures( 
            /* [retval][out] */ IReferences **ppVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TargetFeatures( 
            /* [in] */ IReferences *ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CenterAxis( 
            /* [out] */ double *x1,
            /* [out] */ double *y1,
            /* [out] */ double *z1,
            /* [out] */ double *x2,
            /* [out] */ double *y2,
            /* [out] */ double *z2) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AngleNumber( 
            /* [retval][out] */ int *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AngleNumber( 
            /* [in] */ int pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AngleIncrement( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AngleIncrement( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RadialNumber( 
            /* [retval][out] */ int *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RadialNumber( 
            /* [in] */ int pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RadialSpacing( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RadialSpacing( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsRadialAnignment( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsRadialAnignment( 
            /* [in] */ VARIANT_BOOL pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PutCenterAxis( 
            /* [in] */ double x1,
            /* [in] */ double y1,
            /* [in] */ double z1,
            /* [in] */ double x2,
            /* [in] */ double y2,
            /* [in] */ double z2) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSolidOperatePatternCircularFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSolidOperatePatternCircularFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSolidOperatePatternCircularFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetFeatures )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [retval][out] */ IReferences **ppVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetFeatures )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [in] */ IReferences *ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CenterAxis )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [out] */ double *x1,
            /* [out] */ double *y1,
            /* [out] */ double *z1,
            /* [out] */ double *x2,
            /* [out] */ double *y2,
            /* [out] */ double *z2);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AngleNumber )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [retval][out] */ int *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AngleNumber )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [in] */ int pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AngleIncrement )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AngleIncrement )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RadialNumber )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [retval][out] */ int *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RadialNumber )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [in] */ int pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RadialSpacing )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RadialSpacing )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsRadialAnignment )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsRadialAnignment )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [in] */ VARIANT_BOOL pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PutCenterAxis )( 
            IStdSolidOperatePatternCircularFeature * This,
            /* [in] */ double x1,
            /* [in] */ double y1,
            /* [in] */ double z1,
            /* [in] */ double x2,
            /* [in] */ double y2,
            /* [in] */ double z2);
        
        END_INTERFACE
    } IStdSolidOperatePatternCircularFeatureVtbl;

    interface IStdSolidOperatePatternCircularFeature
    {
        CONST_VTBL struct IStdSolidOperatePatternCircularFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSolidOperatePatternCircularFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSolidOperatePatternCircularFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSolidOperatePatternCircularFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSolidOperatePatternCircularFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSolidOperatePatternCircularFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSolidOperatePatternCircularFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSolidOperatePatternCircularFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSolidOperatePatternCircularFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSolidOperatePatternCircularFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSolidOperatePatternCircularFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSolidOperatePatternCircularFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSolidOperatePatternCircularFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdSolidOperatePatternCircularFeature_get_TargetFeatures(This,ppVal)	\
    ( (This)->lpVtbl -> get_TargetFeatures(This,ppVal) ) 

#define IStdSolidOperatePatternCircularFeature_put_TargetFeatures(This,ppVal)	\
    ( (This)->lpVtbl -> put_TargetFeatures(This,ppVal) ) 

#define IStdSolidOperatePatternCircularFeature_get_CenterAxis(This,x1,y1,z1,x2,y2,z2)	\
    ( (This)->lpVtbl -> get_CenterAxis(This,x1,y1,z1,x2,y2,z2) ) 

#define IStdSolidOperatePatternCircularFeature_get_AngleNumber(This,pVal)	\
    ( (This)->lpVtbl -> get_AngleNumber(This,pVal) ) 

#define IStdSolidOperatePatternCircularFeature_put_AngleNumber(This,pVal)	\
    ( (This)->lpVtbl -> put_AngleNumber(This,pVal) ) 

#define IStdSolidOperatePatternCircularFeature_get_AngleIncrement(This,pVal)	\
    ( (This)->lpVtbl -> get_AngleIncrement(This,pVal) ) 

#define IStdSolidOperatePatternCircularFeature_put_AngleIncrement(This,pVal)	\
    ( (This)->lpVtbl -> put_AngleIncrement(This,pVal) ) 

#define IStdSolidOperatePatternCircularFeature_get_RadialNumber(This,pVal)	\
    ( (This)->lpVtbl -> get_RadialNumber(This,pVal) ) 

#define IStdSolidOperatePatternCircularFeature_put_RadialNumber(This,pVal)	\
    ( (This)->lpVtbl -> put_RadialNumber(This,pVal) ) 

#define IStdSolidOperatePatternCircularFeature_get_RadialSpacing(This,pVal)	\
    ( (This)->lpVtbl -> get_RadialSpacing(This,pVal) ) 

#define IStdSolidOperatePatternCircularFeature_put_RadialSpacing(This,pVal)	\
    ( (This)->lpVtbl -> put_RadialSpacing(This,pVal) ) 

#define IStdSolidOperatePatternCircularFeature_get_IsRadialAnignment(This,pVal)	\
    ( (This)->lpVtbl -> get_IsRadialAnignment(This,pVal) ) 

#define IStdSolidOperatePatternCircularFeature_put_IsRadialAnignment(This,pVal)	\
    ( (This)->lpVtbl -> put_IsRadialAnignment(This,pVal) ) 

#define IStdSolidOperatePatternCircularFeature_PutCenterAxis(This,x1,y1,z1,x2,y2,z2)	\
    ( (This)->lpVtbl -> PutCenterAxis(This,x1,y1,z1,x2,y2,z2) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSolidOperatePatternCircularFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSolidHoleCounterboredFeature_INTERFACE_DEFINED__
#define __IStdSolidHoleCounterboredFeature_INTERFACE_DEFINED__

/* interface IStdSolidHoleCounterboredFeature */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSolidHoleCounterboredFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5089AE2E-41C5-4DD3-BFFA-6B5ECFF99141")
    IStdSolidHoleCounterboredFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TargetFace( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TargetFace( 
            /* [in] */ IReference *ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CenterPoint( 
            /* [out] */ double *cx,
            /* [out] */ double *cy,
            /* [out] */ double *cz) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartRadius( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StartRadius( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartDepth( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StartDepth( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndRadius( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EndRadius( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndDepth( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EndDepth( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Angle( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Angle( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PutCenterPoint( 
            /* [in] */ double cx,
            /* [in] */ double cy,
            /* [in] */ double cz) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSolidHoleCounterboredFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSolidHoleCounterboredFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSolidHoleCounterboredFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetFace )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetFace )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [in] */ IReference *ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CenterPoint )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [out] */ double *cx,
            /* [out] */ double *cy,
            /* [out] */ double *cz);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartRadius )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartRadius )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartDepth )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartDepth )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndRadius )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndRadius )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndDepth )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndDepth )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Angle )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Angle )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PutCenterPoint )( 
            IStdSolidHoleCounterboredFeature * This,
            /* [in] */ double cx,
            /* [in] */ double cy,
            /* [in] */ double cz);
        
        END_INTERFACE
    } IStdSolidHoleCounterboredFeatureVtbl;

    interface IStdSolidHoleCounterboredFeature
    {
        CONST_VTBL struct IStdSolidHoleCounterboredFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSolidHoleCounterboredFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSolidHoleCounterboredFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSolidHoleCounterboredFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSolidHoleCounterboredFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSolidHoleCounterboredFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSolidHoleCounterboredFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSolidHoleCounterboredFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSolidHoleCounterboredFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSolidHoleCounterboredFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSolidHoleCounterboredFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSolidHoleCounterboredFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSolidHoleCounterboredFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdSolidHoleCounterboredFeature_get_TargetFace(This,ppVal)	\
    ( (This)->lpVtbl -> get_TargetFace(This,ppVal) ) 

#define IStdSolidHoleCounterboredFeature_put_TargetFace(This,ppVal)	\
    ( (This)->lpVtbl -> put_TargetFace(This,ppVal) ) 

#define IStdSolidHoleCounterboredFeature_get_CenterPoint(This,cx,cy,cz)	\
    ( (This)->lpVtbl -> get_CenterPoint(This,cx,cy,cz) ) 

#define IStdSolidHoleCounterboredFeature_get_StartRadius(This,pVal)	\
    ( (This)->lpVtbl -> get_StartRadius(This,pVal) ) 

#define IStdSolidHoleCounterboredFeature_put_StartRadius(This,pVal)	\
    ( (This)->lpVtbl -> put_StartRadius(This,pVal) ) 

#define IStdSolidHoleCounterboredFeature_get_StartDepth(This,pVal)	\
    ( (This)->lpVtbl -> get_StartDepth(This,pVal) ) 

#define IStdSolidHoleCounterboredFeature_put_StartDepth(This,pVal)	\
    ( (This)->lpVtbl -> put_StartDepth(This,pVal) ) 

#define IStdSolidHoleCounterboredFeature_get_EndRadius(This,pVal)	\
    ( (This)->lpVtbl -> get_EndRadius(This,pVal) ) 

#define IStdSolidHoleCounterboredFeature_put_EndRadius(This,pVal)	\
    ( (This)->lpVtbl -> put_EndRadius(This,pVal) ) 

#define IStdSolidHoleCounterboredFeature_get_EndDepth(This,pVal)	\
    ( (This)->lpVtbl -> get_EndDepth(This,pVal) ) 

#define IStdSolidHoleCounterboredFeature_put_EndDepth(This,pVal)	\
    ( (This)->lpVtbl -> put_EndDepth(This,pVal) ) 

#define IStdSolidHoleCounterboredFeature_get_Angle(This,pVal)	\
    ( (This)->lpVtbl -> get_Angle(This,pVal) ) 

#define IStdSolidHoleCounterboredFeature_put_Angle(This,pVal)	\
    ( (This)->lpVtbl -> put_Angle(This,pVal) ) 

#define IStdSolidHoleCounterboredFeature_PutCenterPoint(This,cx,cy,cz)	\
    ( (This)->lpVtbl -> PutCenterPoint(This,cx,cy,cz) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSolidHoleCounterboredFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSolidHoleCountersunkFeature_INTERFACE_DEFINED__
#define __IStdSolidHoleCountersunkFeature_INTERFACE_DEFINED__

/* interface IStdSolidHoleCountersunkFeature */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSolidHoleCountersunkFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9980B5BE-2421-46DC-9425-84588082DD28")
    IStdSolidHoleCountersunkFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TargetFace( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TargetFace( 
            /* [in] */ IReference *ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CenterPoint( 
            /* [out] */ double *cx,
            /* [out] */ double *cy,
            /* [out] */ double *cz) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Radius( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Radius( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Depth( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Depth( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SinkRadius( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SinkRadius( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SinkAngle( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SinkAngle( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BottomAngle( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BottomAngle( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PutCenterPoint( 
            /* [in] */ double cx,
            /* [in] */ double cy,
            /* [in] */ double cz) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSolidHoleCountersunkFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSolidHoleCountersunkFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSolidHoleCountersunkFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetFace )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetFace )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [in] */ IReference *ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CenterPoint )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [out] */ double *cx,
            /* [out] */ double *cy,
            /* [out] */ double *cz);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Radius )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Radius )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Depth )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Depth )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SinkRadius )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SinkRadius )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SinkAngle )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SinkAngle )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BottomAngle )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BottomAngle )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PutCenterPoint )( 
            IStdSolidHoleCountersunkFeature * This,
            /* [in] */ double cx,
            /* [in] */ double cy,
            /* [in] */ double cz);
        
        END_INTERFACE
    } IStdSolidHoleCountersunkFeatureVtbl;

    interface IStdSolidHoleCountersunkFeature
    {
        CONST_VTBL struct IStdSolidHoleCountersunkFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSolidHoleCountersunkFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSolidHoleCountersunkFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSolidHoleCountersunkFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSolidHoleCountersunkFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSolidHoleCountersunkFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSolidHoleCountersunkFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSolidHoleCountersunkFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSolidHoleCountersunkFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSolidHoleCountersunkFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSolidHoleCountersunkFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSolidHoleCountersunkFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSolidHoleCountersunkFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdSolidHoleCountersunkFeature_get_TargetFace(This,ppVal)	\
    ( (This)->lpVtbl -> get_TargetFace(This,ppVal) ) 

#define IStdSolidHoleCountersunkFeature_put_TargetFace(This,ppVal)	\
    ( (This)->lpVtbl -> put_TargetFace(This,ppVal) ) 

#define IStdSolidHoleCountersunkFeature_get_CenterPoint(This,cx,cy,cz)	\
    ( (This)->lpVtbl -> get_CenterPoint(This,cx,cy,cz) ) 

#define IStdSolidHoleCountersunkFeature_get_Radius(This,pVal)	\
    ( (This)->lpVtbl -> get_Radius(This,pVal) ) 

#define IStdSolidHoleCountersunkFeature_put_Radius(This,pVal)	\
    ( (This)->lpVtbl -> put_Radius(This,pVal) ) 

#define IStdSolidHoleCountersunkFeature_get_Depth(This,pVal)	\
    ( (This)->lpVtbl -> get_Depth(This,pVal) ) 

#define IStdSolidHoleCountersunkFeature_put_Depth(This,pVal)	\
    ( (This)->lpVtbl -> put_Depth(This,pVal) ) 

#define IStdSolidHoleCountersunkFeature_get_SinkRadius(This,pVal)	\
    ( (This)->lpVtbl -> get_SinkRadius(This,pVal) ) 

#define IStdSolidHoleCountersunkFeature_put_SinkRadius(This,pVal)	\
    ( (This)->lpVtbl -> put_SinkRadius(This,pVal) ) 

#define IStdSolidHoleCountersunkFeature_get_SinkAngle(This,pVal)	\
    ( (This)->lpVtbl -> get_SinkAngle(This,pVal) ) 

#define IStdSolidHoleCountersunkFeature_put_SinkAngle(This,pVal)	\
    ( (This)->lpVtbl -> put_SinkAngle(This,pVal) ) 

#define IStdSolidHoleCountersunkFeature_get_BottomAngle(This,pVal)	\
    ( (This)->lpVtbl -> get_BottomAngle(This,pVal) ) 

#define IStdSolidHoleCountersunkFeature_put_BottomAngle(This,pVal)	\
    ( (This)->lpVtbl -> put_BottomAngle(This,pVal) ) 

#define IStdSolidHoleCountersunkFeature_PutCenterPoint(This,cx,cy,cz)	\
    ( (This)->lpVtbl -> PutCenterPoint(This,cx,cy,cz) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSolidHoleCountersunkFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSketchCoincidentSamePoints_INTERFACE_DEFINED__
#define __IStdSketchCoincidentSamePoints_INTERFACE_DEFINED__

/* interface IStdSketchCoincidentSamePoints */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSketchCoincidentSamePoints;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("16103C6E-B6D1-4F7C-BDA8-E6CF5112ACCD")
    IStdSketchCoincidentSamePoints : public IStdSketchConstraint
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FirstObject( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FirstType( 
            /* [retval][out] */ StdCoincidentSamePointsType *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SecondObject( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SecondType( 
            /* [retval][out] */ StdCoincidentSamePointsType *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSketchCoincidentSamePointsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSketchCoincidentSamePoints * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSketchCoincidentSamePoints * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSketchCoincidentSamePoints * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSketchCoincidentSamePoints * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSketchCoincidentSamePoints * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSketchCoincidentSamePoints * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSketchCoincidentSamePoints * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSketchCoincidentSamePoints * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSketchCoincidentSamePoints * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSketchCoincidentSamePoints * This,
            /* [retval][out] */ StdSketchConstraintType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSketchCoincidentSamePoints * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SketchFeature )( 
            IStdSketchCoincidentSamePoints * This,
            /* [retval][out] */ IStdSketchFeature **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FirstObject )( 
            IStdSketchCoincidentSamePoints * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FirstType )( 
            IStdSketchCoincidentSamePoints * This,
            /* [retval][out] */ StdCoincidentSamePointsType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecondObject )( 
            IStdSketchCoincidentSamePoints * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecondType )( 
            IStdSketchCoincidentSamePoints * This,
            /* [retval][out] */ StdCoincidentSamePointsType *pVal);
        
        END_INTERFACE
    } IStdSketchCoincidentSamePointsVtbl;

    interface IStdSketchCoincidentSamePoints
    {
        CONST_VTBL struct IStdSketchCoincidentSamePointsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSketchCoincidentSamePoints_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSketchCoincidentSamePoints_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSketchCoincidentSamePoints_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSketchCoincidentSamePoints_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSketchCoincidentSamePoints_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSketchCoincidentSamePoints_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSketchCoincidentSamePoints_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSketchCoincidentSamePoints_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSketchCoincidentSamePoints_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSketchCoincidentSamePoints_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSketchCoincidentSamePoints_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSketchCoincidentSamePoints_get_SketchFeature(This,ppVal)	\
    ( (This)->lpVtbl -> get_SketchFeature(This,ppVal) ) 


#define IStdSketchCoincidentSamePoints_get_FirstObject(This,ppVal)	\
    ( (This)->lpVtbl -> get_FirstObject(This,ppVal) ) 

#define IStdSketchCoincidentSamePoints_get_FirstType(This,pVal)	\
    ( (This)->lpVtbl -> get_FirstType(This,pVal) ) 

#define IStdSketchCoincidentSamePoints_get_SecondObject(This,ppVal)	\
    ( (This)->lpVtbl -> get_SecondObject(This,ppVal) ) 

#define IStdSketchCoincidentSamePoints_get_SecondType(This,pVal)	\
    ( (This)->lpVtbl -> get_SecondType(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSketchCoincidentSamePoints_INTERFACE_DEFINED__ */


#ifndef __IStdSketchParallel_INTERFACE_DEFINED__
#define __IStdSketchParallel_INTERFACE_DEFINED__

/* interface IStdSketchParallel */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSketchParallel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ABA27711-124A-47C3-BB88-3D2703F87984")
    IStdSketchParallel : public IStdSketchConstraint
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceEdit( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Target( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSketchParallelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSketchParallel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSketchParallel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSketchParallel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSketchParallel * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSketchParallel * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSketchParallel * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSketchParallel * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSketchParallel * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSketchParallel * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSketchParallel * This,
            /* [retval][out] */ StdSketchConstraintType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSketchParallel * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SketchFeature )( 
            IStdSketchParallel * This,
            /* [retval][out] */ IStdSketchFeature **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceEdit )( 
            IStdSketchParallel * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Target )( 
            IStdSketchParallel * This,
            /* [retval][out] */ IReference **ppVal);
        
        END_INTERFACE
    } IStdSketchParallelVtbl;

    interface IStdSketchParallel
    {
        CONST_VTBL struct IStdSketchParallelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSketchParallel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSketchParallel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSketchParallel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSketchParallel_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSketchParallel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSketchParallel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSketchParallel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSketchParallel_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSketchParallel_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSketchParallel_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSketchParallel_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSketchParallel_get_SketchFeature(This,ppVal)	\
    ( (This)->lpVtbl -> get_SketchFeature(This,ppVal) ) 


#define IStdSketchParallel_get_ReferenceEdit(This,ppVal)	\
    ( (This)->lpVtbl -> get_ReferenceEdit(This,ppVal) ) 

#define IStdSketchParallel_get_Target(This,ppVal)	\
    ( (This)->lpVtbl -> get_Target(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSketchParallel_INTERFACE_DEFINED__ */


#ifndef __IStdSketchPerpendicular_INTERFACE_DEFINED__
#define __IStdSketchPerpendicular_INTERFACE_DEFINED__

/* interface IStdSketchPerpendicular */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSketchPerpendicular;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FF3A0BDD-1AA5-48FA-9F40-228A00C64A47")
    IStdSketchPerpendicular : public IStdSketchConstraint
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceEdit( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Target( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSketchPerpendicularVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSketchPerpendicular * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSketchPerpendicular * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSketchPerpendicular * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSketchPerpendicular * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSketchPerpendicular * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSketchPerpendicular * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSketchPerpendicular * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSketchPerpendicular * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSketchPerpendicular * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSketchPerpendicular * This,
            /* [retval][out] */ StdSketchConstraintType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSketchPerpendicular * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SketchFeature )( 
            IStdSketchPerpendicular * This,
            /* [retval][out] */ IStdSketchFeature **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceEdit )( 
            IStdSketchPerpendicular * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Target )( 
            IStdSketchPerpendicular * This,
            /* [retval][out] */ IReference **ppVal);
        
        END_INTERFACE
    } IStdSketchPerpendicularVtbl;

    interface IStdSketchPerpendicular
    {
        CONST_VTBL struct IStdSketchPerpendicularVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSketchPerpendicular_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSketchPerpendicular_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSketchPerpendicular_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSketchPerpendicular_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSketchPerpendicular_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSketchPerpendicular_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSketchPerpendicular_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSketchPerpendicular_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSketchPerpendicular_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSketchPerpendicular_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSketchPerpendicular_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSketchPerpendicular_get_SketchFeature(This,ppVal)	\
    ( (This)->lpVtbl -> get_SketchFeature(This,ppVal) ) 


#define IStdSketchPerpendicular_get_ReferenceEdit(This,ppVal)	\
    ( (This)->lpVtbl -> get_ReferenceEdit(This,ppVal) ) 

#define IStdSketchPerpendicular_get_Target(This,ppVal)	\
    ( (This)->lpVtbl -> get_Target(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSketchPerpendicular_INTERFACE_DEFINED__ */


#ifndef __IStdSketchHorizontal_INTERFACE_DEFINED__
#define __IStdSketchHorizontal_INTERFACE_DEFINED__

/* interface IStdSketchHorizontal */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSketchHorizontal;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3C500269-634E-4018-9598-916C7035CCAA")
    IStdSketchHorizontal : public IStdSketchConstraint
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Target( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSketchHorizontalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSketchHorizontal * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSketchHorizontal * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSketchHorizontal * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSketchHorizontal * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSketchHorizontal * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSketchHorizontal * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSketchHorizontal * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSketchHorizontal * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSketchHorizontal * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSketchHorizontal * This,
            /* [retval][out] */ StdSketchConstraintType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSketchHorizontal * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SketchFeature )( 
            IStdSketchHorizontal * This,
            /* [retval][out] */ IStdSketchFeature **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Target )( 
            IStdSketchHorizontal * This,
            /* [retval][out] */ IReference **ppVal);
        
        END_INTERFACE
    } IStdSketchHorizontalVtbl;

    interface IStdSketchHorizontal
    {
        CONST_VTBL struct IStdSketchHorizontalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSketchHorizontal_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSketchHorizontal_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSketchHorizontal_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSketchHorizontal_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSketchHorizontal_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSketchHorizontal_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSketchHorizontal_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSketchHorizontal_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSketchHorizontal_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSketchHorizontal_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSketchHorizontal_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSketchHorizontal_get_SketchFeature(This,ppVal)	\
    ( (This)->lpVtbl -> get_SketchFeature(This,ppVal) ) 


#define IStdSketchHorizontal_get_Target(This,ppVal)	\
    ( (This)->lpVtbl -> get_Target(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSketchHorizontal_INTERFACE_DEFINED__ */


#ifndef __IStdSketchVertical_INTERFACE_DEFINED__
#define __IStdSketchVertical_INTERFACE_DEFINED__

/* interface IStdSketchVertical */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSketchVertical;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("07F4BA82-AA63-4C00-B640-0D00044FB2DC")
    IStdSketchVertical : public IStdSketchConstraint
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Target( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSketchVerticalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSketchVertical * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSketchVertical * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSketchVertical * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSketchVertical * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSketchVertical * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSketchVertical * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSketchVertical * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSketchVertical * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSketchVertical * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSketchVertical * This,
            /* [retval][out] */ StdSketchConstraintType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSketchVertical * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SketchFeature )( 
            IStdSketchVertical * This,
            /* [retval][out] */ IStdSketchFeature **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Target )( 
            IStdSketchVertical * This,
            /* [retval][out] */ IReference **ppVal);
        
        END_INTERFACE
    } IStdSketchVerticalVtbl;

    interface IStdSketchVertical
    {
        CONST_VTBL struct IStdSketchVerticalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSketchVertical_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSketchVertical_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSketchVertical_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSketchVertical_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSketchVertical_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSketchVertical_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSketchVertical_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSketchVertical_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSketchVertical_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSketchVertical_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSketchVertical_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSketchVertical_get_SketchFeature(This,ppVal)	\
    ( (This)->lpVtbl -> get_SketchFeature(This,ppVal) ) 


#define IStdSketchVertical_get_Target(This,ppVal)	\
    ( (This)->lpVtbl -> get_Target(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSketchVertical_INTERFACE_DEFINED__ */


#ifndef __IStdDatumPlaneOffsetFeature_INTERFACE_DEFINED__
#define __IStdDatumPlaneOffsetFeature_INTERFACE_DEFINED__

/* interface IStdDatumPlaneOffsetFeature */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdDatumPlaneOffsetFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5A9FB9F5-92A5-4E46-B5A5-D9C163A1FD8C")
    IStdDatumPlaneOffsetFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedPlane( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SelectedPlane( 
            /* [in] */ IReference *ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFlip( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsFlip( 
            /* [in] */ VARIANT_BOOL pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Distance( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Distance( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFree( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Origin( 
            /* [out] */ double *ox,
            /* [out] */ double *oy,
            /* [out] */ double *oz) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_XDirection( 
            /* [out] */ double *xx,
            /* [out] */ double *xy,
            /* [out] */ double *xz) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_YDirection( 
            /* [out] */ double *yx,
            /* [out] */ double *yy,
            /* [out] */ double *yz) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PutOrigin( 
            /* [in] */ double ox,
            /* [in] */ double oy,
            /* [in] */ double oz) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PutXDirection( 
            /* [in] */ double xx,
            /* [in] */ double xy,
            /* [in] */ double xz) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PutYDirection( 
            /* [in] */ double yx,
            /* [in] */ double yy,
            /* [in] */ double yz) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdDatumPlaneOffsetFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdDatumPlaneOffsetFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdDatumPlaneOffsetFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedPlane )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SelectedPlane )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [in] */ IReference *ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFlip )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsFlip )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [in] */ VARIANT_BOOL pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Distance )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Distance )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFree )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Origin )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [out] */ double *ox,
            /* [out] */ double *oy,
            /* [out] */ double *oz);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XDirection )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [out] */ double *xx,
            /* [out] */ double *xy,
            /* [out] */ double *xz);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YDirection )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [out] */ double *yx,
            /* [out] */ double *yy,
            /* [out] */ double *yz);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PutOrigin )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [in] */ double ox,
            /* [in] */ double oy,
            /* [in] */ double oz);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PutXDirection )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [in] */ double xx,
            /* [in] */ double xy,
            /* [in] */ double xz);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PutYDirection )( 
            IStdDatumPlaneOffsetFeature * This,
            /* [in] */ double yx,
            /* [in] */ double yy,
            /* [in] */ double yz);
        
        END_INTERFACE
    } IStdDatumPlaneOffsetFeatureVtbl;

    interface IStdDatumPlaneOffsetFeature
    {
        CONST_VTBL struct IStdDatumPlaneOffsetFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdDatumPlaneOffsetFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdDatumPlaneOffsetFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdDatumPlaneOffsetFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdDatumPlaneOffsetFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdDatumPlaneOffsetFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdDatumPlaneOffsetFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdDatumPlaneOffsetFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdDatumPlaneOffsetFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdDatumPlaneOffsetFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdDatumPlaneOffsetFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdDatumPlaneOffsetFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdDatumPlaneOffsetFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdDatumPlaneOffsetFeature_get_SelectedPlane(This,ppVal)	\
    ( (This)->lpVtbl -> get_SelectedPlane(This,ppVal) ) 

#define IStdDatumPlaneOffsetFeature_put_SelectedPlane(This,ppVal)	\
    ( (This)->lpVtbl -> put_SelectedPlane(This,ppVal) ) 

#define IStdDatumPlaneOffsetFeature_get_IsFlip(This,pVal)	\
    ( (This)->lpVtbl -> get_IsFlip(This,pVal) ) 

#define IStdDatumPlaneOffsetFeature_put_IsFlip(This,pVal)	\
    ( (This)->lpVtbl -> put_IsFlip(This,pVal) ) 

#define IStdDatumPlaneOffsetFeature_get_Distance(This,pVal)	\
    ( (This)->lpVtbl -> get_Distance(This,pVal) ) 

#define IStdDatumPlaneOffsetFeature_put_Distance(This,pVal)	\
    ( (This)->lpVtbl -> put_Distance(This,pVal) ) 

#define IStdDatumPlaneOffsetFeature_get_IsFree(This,pVal)	\
    ( (This)->lpVtbl -> get_IsFree(This,pVal) ) 

#define IStdDatumPlaneOffsetFeature_get_Origin(This,ox,oy,oz)	\
    ( (This)->lpVtbl -> get_Origin(This,ox,oy,oz) ) 

#define IStdDatumPlaneOffsetFeature_get_XDirection(This,xx,xy,xz)	\
    ( (This)->lpVtbl -> get_XDirection(This,xx,xy,xz) ) 

#define IStdDatumPlaneOffsetFeature_get_YDirection(This,yx,yy,yz)	\
    ( (This)->lpVtbl -> get_YDirection(This,yx,yy,yz) ) 

#define IStdDatumPlaneOffsetFeature_PutOrigin(This,ox,oy,oz)	\
    ( (This)->lpVtbl -> PutOrigin(This,ox,oy,oz) ) 

#define IStdDatumPlaneOffsetFeature_PutXDirection(This,xx,xy,xz)	\
    ( (This)->lpVtbl -> PutXDirection(This,xx,xy,xz) ) 

#define IStdDatumPlaneOffsetFeature_PutYDirection(This,yx,yy,yz)	\
    ( (This)->lpVtbl -> PutYDirection(This,yx,yy,yz) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdDatumPlaneOffsetFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSolidLoftFacesFeature_INTERFACE_DEFINED__
#define __IStdSolidLoftFacesFeature_INTERFACE_DEFINED__

/* interface IStdSolidLoftFacesFeature */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSolidLoftFacesFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B1A7FE7F-54BF-4CE5-8947-831358C38D56")
    IStdSolidLoftFacesFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Face1( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Param1( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Face2( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Param2( 
            /* [retval][out] */ double *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSolidLoftFacesFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSolidLoftFacesFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSolidLoftFacesFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSolidLoftFacesFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSolidLoftFacesFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSolidLoftFacesFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSolidLoftFacesFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSolidLoftFacesFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSolidLoftFacesFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSolidLoftFacesFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSolidLoftFacesFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSolidLoftFacesFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdSolidLoftFacesFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Face1 )( 
            IStdSolidLoftFacesFeature * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Param1 )( 
            IStdSolidLoftFacesFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Face2 )( 
            IStdSolidLoftFacesFeature * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Param2 )( 
            IStdSolidLoftFacesFeature * This,
            /* [retval][out] */ double *pVal);
        
        END_INTERFACE
    } IStdSolidLoftFacesFeatureVtbl;

    interface IStdSolidLoftFacesFeature
    {
        CONST_VTBL struct IStdSolidLoftFacesFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSolidLoftFacesFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSolidLoftFacesFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSolidLoftFacesFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSolidLoftFacesFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSolidLoftFacesFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSolidLoftFacesFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSolidLoftFacesFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSolidLoftFacesFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSolidLoftFacesFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSolidLoftFacesFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSolidLoftFacesFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSolidLoftFacesFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdSolidLoftFacesFeature_get_Face1(This,ppVal)	\
    ( (This)->lpVtbl -> get_Face1(This,ppVal) ) 

#define IStdSolidLoftFacesFeature_get_Param1(This,pVal)	\
    ( (This)->lpVtbl -> get_Param1(This,pVal) ) 

#define IStdSolidLoftFacesFeature_get_Face2(This,ppVal)	\
    ( (This)->lpVtbl -> get_Face2(This,ppVal) ) 

#define IStdSolidLoftFacesFeature_get_Param2(This,pVal)	\
    ( (This)->lpVtbl -> get_Param2(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSolidLoftFacesFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSolidLoftSectionsFeature_INTERFACE_DEFINED__
#define __IStdSolidLoftSectionsFeature_INTERFACE_DEFINED__

/* interface IStdSolidLoftSectionsFeature */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSolidLoftSectionsFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("09BE8C17-DB20-4474-8BE9-F4D94E27261A")
    IStdSolidLoftSectionsFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_References( 
            /* [retval][out] */ IReferences **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsCut( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSolidLoftSectionsFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSolidLoftSectionsFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSolidLoftSectionsFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSolidLoftSectionsFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSolidLoftSectionsFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSolidLoftSectionsFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSolidLoftSectionsFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSolidLoftSectionsFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSolidLoftSectionsFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSolidLoftSectionsFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSolidLoftSectionsFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSolidLoftSectionsFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdSolidLoftSectionsFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_References )( 
            IStdSolidLoftSectionsFeature * This,
            /* [retval][out] */ IReferences **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsCut )( 
            IStdSolidLoftSectionsFeature * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        END_INTERFACE
    } IStdSolidLoftSectionsFeatureVtbl;

    interface IStdSolidLoftSectionsFeature
    {
        CONST_VTBL struct IStdSolidLoftSectionsFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSolidLoftSectionsFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSolidLoftSectionsFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSolidLoftSectionsFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSolidLoftSectionsFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSolidLoftSectionsFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSolidLoftSectionsFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSolidLoftSectionsFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSolidLoftSectionsFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSolidLoftSectionsFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSolidLoftSectionsFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSolidLoftSectionsFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSolidLoftSectionsFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdSolidLoftSectionsFeature_get_References(This,ppVal)	\
    ( (This)->lpVtbl -> get_References(This,ppVal) ) 

#define IStdSolidLoftSectionsFeature_get_IsCut(This,pVal)	\
    ( (This)->lpVtbl -> get_IsCut(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSolidLoftSectionsFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSolidCutSweepFeature_INTERFACE_DEFINED__
#define __IStdSolidCutSweepFeature_INTERFACE_DEFINED__

/* interface IStdSolidCutSweepFeature */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSolidCutSweepFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CF090569-05D8-44A0-8656-82BDFE1B79A6")
    IStdSolidCutSweepFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProfileSketch( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ProfileSketch( 
            /* [in] */ IReference *ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GuideCurve( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GuideCurve( 
            /* [in] */ IReference *ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSolidCutSweepFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSolidCutSweepFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSolidCutSweepFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSolidCutSweepFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSolidCutSweepFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSolidCutSweepFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSolidCutSweepFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSolidCutSweepFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSolidCutSweepFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSolidCutSweepFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSolidCutSweepFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSolidCutSweepFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdSolidCutSweepFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProfileSketch )( 
            IStdSolidCutSweepFeature * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProfileSketch )( 
            IStdSolidCutSweepFeature * This,
            /* [in] */ IReference *ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GuideCurve )( 
            IStdSolidCutSweepFeature * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GuideCurve )( 
            IStdSolidCutSweepFeature * This,
            /* [in] */ IReference *ppVal);
        
        END_INTERFACE
    } IStdSolidCutSweepFeatureVtbl;

    interface IStdSolidCutSweepFeature
    {
        CONST_VTBL struct IStdSolidCutSweepFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSolidCutSweepFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSolidCutSweepFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSolidCutSweepFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSolidCutSweepFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSolidCutSweepFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSolidCutSweepFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSolidCutSweepFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSolidCutSweepFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSolidCutSweepFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSolidCutSweepFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSolidCutSweepFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSolidCutSweepFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdSolidCutSweepFeature_get_ProfileSketch(This,ppVal)	\
    ( (This)->lpVtbl -> get_ProfileSketch(This,ppVal) ) 

#define IStdSolidCutSweepFeature_put_ProfileSketch(This,ppVal)	\
    ( (This)->lpVtbl -> put_ProfileSketch(This,ppVal) ) 

#define IStdSolidCutSweepFeature_get_GuideCurve(This,ppVal)	\
    ( (This)->lpVtbl -> get_GuideCurve(This,ppVal) ) 

#define IStdSolidCutSweepFeature_put_GuideCurve(This,ppVal)	\
    ( (This)->lpVtbl -> put_GuideCurve(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSolidCutSweepFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSolidHoleSimpleFeature_INTERFACE_DEFINED__
#define __IStdSolidHoleSimpleFeature_INTERFACE_DEFINED__

/* interface IStdSolidHoleSimpleFeature */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSolidHoleSimpleFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FCCF7496-9645-4B6D-9C4D-067D3D1D60AF")
    IStdSolidHoleSimpleFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TargetFace( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TargetFace( 
            /* [in] */ IReference *ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CenterPoint( 
            /* [out] */ double *cx,
            /* [out] */ double *cy,
            /* [out] */ double *cz) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Radius( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Radius( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Depth( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Depth( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PutCenterPoint( 
            /* [in] */ double cx,
            /* [in] */ double cy,
            /* [in] */ double cz) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSolidHoleSimpleFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSolidHoleSimpleFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSolidHoleSimpleFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSolidHoleSimpleFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSolidHoleSimpleFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSolidHoleSimpleFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSolidHoleSimpleFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSolidHoleSimpleFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSolidHoleSimpleFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSolidHoleSimpleFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSolidHoleSimpleFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSolidHoleSimpleFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdSolidHoleSimpleFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetFace )( 
            IStdSolidHoleSimpleFeature * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetFace )( 
            IStdSolidHoleSimpleFeature * This,
            /* [in] */ IReference *ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CenterPoint )( 
            IStdSolidHoleSimpleFeature * This,
            /* [out] */ double *cx,
            /* [out] */ double *cy,
            /* [out] */ double *cz);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Radius )( 
            IStdSolidHoleSimpleFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Radius )( 
            IStdSolidHoleSimpleFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Depth )( 
            IStdSolidHoleSimpleFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Depth )( 
            IStdSolidHoleSimpleFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PutCenterPoint )( 
            IStdSolidHoleSimpleFeature * This,
            /* [in] */ double cx,
            /* [in] */ double cy,
            /* [in] */ double cz);
        
        END_INTERFACE
    } IStdSolidHoleSimpleFeatureVtbl;

    interface IStdSolidHoleSimpleFeature
    {
        CONST_VTBL struct IStdSolidHoleSimpleFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSolidHoleSimpleFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSolidHoleSimpleFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSolidHoleSimpleFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSolidHoleSimpleFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSolidHoleSimpleFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSolidHoleSimpleFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSolidHoleSimpleFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSolidHoleSimpleFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSolidHoleSimpleFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSolidHoleSimpleFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSolidHoleSimpleFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSolidHoleSimpleFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdSolidHoleSimpleFeature_get_TargetFace(This,ppVal)	\
    ( (This)->lpVtbl -> get_TargetFace(This,ppVal) ) 

#define IStdSolidHoleSimpleFeature_put_TargetFace(This,ppVal)	\
    ( (This)->lpVtbl -> put_TargetFace(This,ppVal) ) 

#define IStdSolidHoleSimpleFeature_get_CenterPoint(This,cx,cy,cz)	\
    ( (This)->lpVtbl -> get_CenterPoint(This,cx,cy,cz) ) 

#define IStdSolidHoleSimpleFeature_get_Radius(This,pVal)	\
    ( (This)->lpVtbl -> get_Radius(This,pVal) ) 

#define IStdSolidHoleSimpleFeature_put_Radius(This,pVal)	\
    ( (This)->lpVtbl -> put_Radius(This,pVal) ) 

#define IStdSolidHoleSimpleFeature_get_Depth(This,pVal)	\
    ( (This)->lpVtbl -> get_Depth(This,pVal) ) 

#define IStdSolidHoleSimpleFeature_put_Depth(This,pVal)	\
    ( (This)->lpVtbl -> put_Depth(This,pVal) ) 

#define IStdSolidHoleSimpleFeature_PutCenterPoint(This,cx,cy,cz)	\
    ( (This)->lpVtbl -> PutCenterPoint(This,cx,cy,cz) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSolidHoleSimpleFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSolidShellFeature_INTERFACE_DEFINED__
#define __IStdSolidShellFeature_INTERFACE_DEFINED__

/* interface IStdSolidShellFeature */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSolidShellFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("66548701-6ACC-4271-98A8-D7666930FF05")
    IStdSolidShellFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TargetFaces( 
            /* [retval][out] */ IReferences **ppVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TargetFaces( 
            /* [in] */ IReferences *ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InnerThickness( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_InnerThickness( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OuterThickness( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OuterThickness( 
            /* [in] */ double pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSolidShellFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSolidShellFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSolidShellFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSolidShellFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSolidShellFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSolidShellFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSolidShellFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSolidShellFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSolidShellFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSolidShellFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSolidShellFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSolidShellFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdSolidShellFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetFaces )( 
            IStdSolidShellFeature * This,
            /* [retval][out] */ IReferences **ppVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetFaces )( 
            IStdSolidShellFeature * This,
            /* [in] */ IReferences *ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InnerThickness )( 
            IStdSolidShellFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InnerThickness )( 
            IStdSolidShellFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OuterThickness )( 
            IStdSolidShellFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OuterThickness )( 
            IStdSolidShellFeature * This,
            /* [in] */ double pVal);
        
        END_INTERFACE
    } IStdSolidShellFeatureVtbl;

    interface IStdSolidShellFeature
    {
        CONST_VTBL struct IStdSolidShellFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSolidShellFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSolidShellFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSolidShellFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSolidShellFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSolidShellFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSolidShellFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSolidShellFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSolidShellFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSolidShellFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSolidShellFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSolidShellFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSolidShellFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdSolidShellFeature_get_TargetFaces(This,ppVal)	\
    ( (This)->lpVtbl -> get_TargetFaces(This,ppVal) ) 

#define IStdSolidShellFeature_put_TargetFaces(This,ppVal)	\
    ( (This)->lpVtbl -> put_TargetFaces(This,ppVal) ) 

#define IStdSolidShellFeature_get_InnerThickness(This,pVal)	\
    ( (This)->lpVtbl -> get_InnerThickness(This,pVal) ) 

#define IStdSolidShellFeature_put_InnerThickness(This,pVal)	\
    ( (This)->lpVtbl -> put_InnerThickness(This,pVal) ) 

#define IStdSolidShellFeature_get_OuterThickness(This,pVal)	\
    ( (This)->lpVtbl -> get_OuterThickness(This,pVal) ) 

#define IStdSolidShellFeature_put_OuterThickness(This,pVal)	\
    ( (This)->lpVtbl -> put_OuterThickness(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSolidShellFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSolidRevolveWithExternalAxisFeature_INTERFACE_DEFINED__
#define __IStdSolidRevolveWithExternalAxisFeature_INTERFACE_DEFINED__

/* interface IStdSolidRevolveWithExternalAxisFeature */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSolidRevolveWithExternalAxisFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EA1585E2-4E46-44E1-808B-4432B9896E2D")
    IStdSolidRevolveWithExternalAxisFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProfileSketch( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ProfileSketch( 
            /* [in] */ IReference *ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartAngle( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StartAngle( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartCondition( 
            /* [retval][out] */ StdRevolveEndType *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndAngle( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EndAngle( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndCondition( 
            /* [retval][out] */ StdRevolveEndType *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFlip( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsFlip( 
            /* [in] */ VARIANT_BOOL pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsCut( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsCut( 
            /* [in] */ VARIANT_BOOL pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RevolveAxis( 
            /* [out] */ double *orgX,
            /* [out] */ double *orgY,
            /* [out] */ double *orgZ,
            /* [out] */ double *dirX,
            /* [out] */ double *dirY,
            /* [out] */ double *dirZ) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PutRevolveAxis( 
            /* [in] */ double orgX,
            /* [in] */ double orgY,
            /* [in] */ double orgZ,
            /* [in] */ double dirX,
            /* [in] */ double dirY,
            /* [in] */ double dirZ) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSolidRevolveWithExternalAxisFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSolidRevolveWithExternalAxisFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSolidRevolveWithExternalAxisFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProfileSketch )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProfileSketch )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [in] */ IReference *ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartAngle )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartAngle )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartCondition )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [retval][out] */ StdRevolveEndType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndAngle )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndAngle )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndCondition )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [retval][out] */ StdRevolveEndType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFlip )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsFlip )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [in] */ VARIANT_BOOL pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsCut )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsCut )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [in] */ VARIANT_BOOL pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RevolveAxis )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [out] */ double *orgX,
            /* [out] */ double *orgY,
            /* [out] */ double *orgZ,
            /* [out] */ double *dirX,
            /* [out] */ double *dirY,
            /* [out] */ double *dirZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PutRevolveAxis )( 
            IStdSolidRevolveWithExternalAxisFeature * This,
            /* [in] */ double orgX,
            /* [in] */ double orgY,
            /* [in] */ double orgZ,
            /* [in] */ double dirX,
            /* [in] */ double dirY,
            /* [in] */ double dirZ);
        
        END_INTERFACE
    } IStdSolidRevolveWithExternalAxisFeatureVtbl;

    interface IStdSolidRevolveWithExternalAxisFeature
    {
        CONST_VTBL struct IStdSolidRevolveWithExternalAxisFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSolidRevolveWithExternalAxisFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSolidRevolveWithExternalAxisFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSolidRevolveWithExternalAxisFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSolidRevolveWithExternalAxisFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSolidRevolveWithExternalAxisFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSolidRevolveWithExternalAxisFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSolidRevolveWithExternalAxisFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSolidRevolveWithExternalAxisFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSolidRevolveWithExternalAxisFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSolidRevolveWithExternalAxisFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSolidRevolveWithExternalAxisFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSolidRevolveWithExternalAxisFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdSolidRevolveWithExternalAxisFeature_get_ProfileSketch(This,ppVal)	\
    ( (This)->lpVtbl -> get_ProfileSketch(This,ppVal) ) 

#define IStdSolidRevolveWithExternalAxisFeature_put_ProfileSketch(This,ppVal)	\
    ( (This)->lpVtbl -> put_ProfileSketch(This,ppVal) ) 

#define IStdSolidRevolveWithExternalAxisFeature_get_StartAngle(This,pVal)	\
    ( (This)->lpVtbl -> get_StartAngle(This,pVal) ) 

#define IStdSolidRevolveWithExternalAxisFeature_put_StartAngle(This,pVal)	\
    ( (This)->lpVtbl -> put_StartAngle(This,pVal) ) 

#define IStdSolidRevolveWithExternalAxisFeature_get_StartCondition(This,pVal)	\
    ( (This)->lpVtbl -> get_StartCondition(This,pVal) ) 

#define IStdSolidRevolveWithExternalAxisFeature_get_EndAngle(This,pVal)	\
    ( (This)->lpVtbl -> get_EndAngle(This,pVal) ) 

#define IStdSolidRevolveWithExternalAxisFeature_put_EndAngle(This,pVal)	\
    ( (This)->lpVtbl -> put_EndAngle(This,pVal) ) 

#define IStdSolidRevolveWithExternalAxisFeature_get_EndCondition(This,pVal)	\
    ( (This)->lpVtbl -> get_EndCondition(This,pVal) ) 

#define IStdSolidRevolveWithExternalAxisFeature_get_IsFlip(This,pVal)	\
    ( (This)->lpVtbl -> get_IsFlip(This,pVal) ) 

#define IStdSolidRevolveWithExternalAxisFeature_put_IsFlip(This,pVal)	\
    ( (This)->lpVtbl -> put_IsFlip(This,pVal) ) 

#define IStdSolidRevolveWithExternalAxisFeature_get_IsCut(This,pVal)	\
    ( (This)->lpVtbl -> get_IsCut(This,pVal) ) 

#define IStdSolidRevolveWithExternalAxisFeature_put_IsCut(This,pVal)	\
    ( (This)->lpVtbl -> put_IsCut(This,pVal) ) 

#define IStdSolidRevolveWithExternalAxisFeature_get_RevolveAxis(This,orgX,orgY,orgZ,dirX,dirY,dirZ)	\
    ( (This)->lpVtbl -> get_RevolveAxis(This,orgX,orgY,orgZ,dirX,dirY,dirZ) ) 

#define IStdSolidRevolveWithExternalAxisFeature_PutRevolveAxis(This,orgX,orgY,orgZ,dirX,dirY,dirZ)	\
    ( (This)->lpVtbl -> PutRevolveAxis(This,orgX,orgY,orgZ,dirX,dirY,dirZ) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSolidRevolveWithExternalAxisFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSolidDraftFeature_INTERFACE_DEFINED__
#define __IStdSolidDraftFeature_INTERFACE_DEFINED__

/* interface IStdSolidDraftFeature */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSolidDraftFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2AC4B8DA-F372-4214-89F7-AB6231E94691")
    IStdSolidDraftFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TargetFaces( 
            /* [retval][out] */ IReferences **ppVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TargetFaces( 
            /* [in] */ IReferences *ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DraftAngle( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DraftAngle( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PullingDirection( 
            /* [out] */ double *orgX,
            /* [out] */ double *orgY,
            /* [out] */ double *orgZ,
            /* [out] */ double *dirX,
            /* [out] */ double *dirY,
            /* [out] */ double *dirZ) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PutPullingDirection( 
            /* [in] */ double orgX,
            /* [in] */ double orgY,
            /* [in] */ double orgZ,
            /* [in] */ double dirX,
            /* [in] */ double dirY,
            /* [in] */ double dirZ) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSolidDraftFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSolidDraftFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSolidDraftFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSolidDraftFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSolidDraftFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSolidDraftFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSolidDraftFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSolidDraftFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSolidDraftFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSolidDraftFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSolidDraftFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSolidDraftFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdSolidDraftFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetFaces )( 
            IStdSolidDraftFeature * This,
            /* [retval][out] */ IReferences **ppVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetFaces )( 
            IStdSolidDraftFeature * This,
            /* [in] */ IReferences *ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DraftAngle )( 
            IStdSolidDraftFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DraftAngle )( 
            IStdSolidDraftFeature * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PullingDirection )( 
            IStdSolidDraftFeature * This,
            /* [out] */ double *orgX,
            /* [out] */ double *orgY,
            /* [out] */ double *orgZ,
            /* [out] */ double *dirX,
            /* [out] */ double *dirY,
            /* [out] */ double *dirZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PutPullingDirection )( 
            IStdSolidDraftFeature * This,
            /* [in] */ double orgX,
            /* [in] */ double orgY,
            /* [in] */ double orgZ,
            /* [in] */ double dirX,
            /* [in] */ double dirY,
            /* [in] */ double dirZ);
        
        END_INTERFACE
    } IStdSolidDraftFeatureVtbl;

    interface IStdSolidDraftFeature
    {
        CONST_VTBL struct IStdSolidDraftFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSolidDraftFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSolidDraftFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSolidDraftFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSolidDraftFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSolidDraftFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSolidDraftFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSolidDraftFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSolidDraftFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSolidDraftFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSolidDraftFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSolidDraftFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSolidDraftFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdSolidDraftFeature_get_TargetFaces(This,ppVal)	\
    ( (This)->lpVtbl -> get_TargetFaces(This,ppVal) ) 

#define IStdSolidDraftFeature_put_TargetFaces(This,ppVal)	\
    ( (This)->lpVtbl -> put_TargetFaces(This,ppVal) ) 

#define IStdSolidDraftFeature_get_DraftAngle(This,pVal)	\
    ( (This)->lpVtbl -> get_DraftAngle(This,pVal) ) 

#define IStdSolidDraftFeature_put_DraftAngle(This,pVal)	\
    ( (This)->lpVtbl -> put_DraftAngle(This,pVal) ) 

#define IStdSolidDraftFeature_get_PullingDirection(This,orgX,orgY,orgZ,dirX,dirY,dirZ)	\
    ( (This)->lpVtbl -> get_PullingDirection(This,orgX,orgY,orgZ,dirX,dirY,dirZ) ) 

#define IStdSolidDraftFeature_PutPullingDirection(This,orgX,orgY,orgZ,dirX,dirY,dirZ)	\
    ( (This)->lpVtbl -> PutPullingDirection(This,orgX,orgY,orgZ,dirX,dirY,dirZ) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSolidDraftFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSolidOffsetFeature_INTERFACE_DEFINED__
#define __IStdSolidOffsetFeature_INTERFACE_DEFINED__

/* interface IStdSolidOffsetFeature */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSolidOffsetFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B7A36313-CA66-4A4B-83BE-B797FB0DE80A")
    IStdSolidOffsetFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TargetFaces( 
            /* [retval][out] */ IReferences **ppVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TargetFaces( 
            /* [in] */ IReferences *ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OffsetThickness( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OffsetThickness( 
            /* [in] */ double pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSolidOffsetFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSolidOffsetFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSolidOffsetFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSolidOffsetFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSolidOffsetFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSolidOffsetFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSolidOffsetFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSolidOffsetFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSolidOffsetFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSolidOffsetFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSolidOffsetFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSolidOffsetFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdSolidOffsetFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetFaces )( 
            IStdSolidOffsetFeature * This,
            /* [retval][out] */ IReferences **ppVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetFaces )( 
            IStdSolidOffsetFeature * This,
            /* [in] */ IReferences *ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OffsetThickness )( 
            IStdSolidOffsetFeature * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OffsetThickness )( 
            IStdSolidOffsetFeature * This,
            /* [in] */ double pVal);
        
        END_INTERFACE
    } IStdSolidOffsetFeatureVtbl;

    interface IStdSolidOffsetFeature
    {
        CONST_VTBL struct IStdSolidOffsetFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSolidOffsetFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSolidOffsetFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSolidOffsetFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSolidOffsetFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSolidOffsetFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSolidOffsetFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSolidOffsetFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSolidOffsetFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSolidOffsetFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSolidOffsetFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSolidOffsetFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSolidOffsetFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdSolidOffsetFeature_get_TargetFaces(This,ppVal)	\
    ( (This)->lpVtbl -> get_TargetFaces(This,ppVal) ) 

#define IStdSolidOffsetFeature_put_TargetFaces(This,ppVal)	\
    ( (This)->lpVtbl -> put_TargetFaces(This,ppVal) ) 

#define IStdSolidOffsetFeature_get_OffsetThickness(This,pVal)	\
    ( (This)->lpVtbl -> get_OffsetThickness(This,pVal) ) 

#define IStdSolidOffsetFeature_put_OffsetThickness(This,pVal)	\
    ( (This)->lpVtbl -> put_OffsetThickness(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSolidOffsetFeature_INTERFACE_DEFINED__ */


#ifndef __IStdSolidImportedBrepFeature_INTERFACE_DEFINED__
#define __IStdSolidImportedBrepFeature_INTERFACE_DEFINED__

/* interface IStdSolidImportedBrepFeature */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdSolidImportedBrepFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("378EBA37-1568-40E9-BD72-EA48ED471EDC")
    IStdSolidImportedBrepFeature : public IFeature
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FilePath( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdSolidImportedBrepFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdSolidImportedBrepFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdSolidImportedBrepFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdSolidImportedBrepFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdSolidImportedBrepFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdSolidImportedBrepFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdSolidImportedBrepFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdSolidImportedBrepFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdSolidImportedBrepFeature * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdSolidImportedBrepFeature * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdSolidImportedBrepFeature * This,
            /* [retval][out] */ FeatureType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdSolidImportedBrepFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdSolidImportedBrepFeature * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FilePath )( 
            IStdSolidImportedBrepFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IStdSolidImportedBrepFeatureVtbl;

    interface IStdSolidImportedBrepFeature
    {
        CONST_VTBL struct IStdSolidImportedBrepFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdSolidImportedBrepFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdSolidImportedBrepFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdSolidImportedBrepFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdSolidImportedBrepFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdSolidImportedBrepFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdSolidImportedBrepFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdSolidImportedBrepFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdSolidImportedBrepFeature_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdSolidImportedBrepFeature_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdSolidImportedBrepFeature_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdSolidImportedBrepFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdSolidImportedBrepFeature_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdSolidImportedBrepFeature_get_FilePath(This,pVal)	\
    ( (This)->lpVtbl -> get_FilePath(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdSolidImportedBrepFeature_INTERFACE_DEFINED__ */


#ifndef __ISolid_INTERFACE_DEFINED__
#define __ISolid_INTERFACE_DEFINED__

/* interface ISolid */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISolid;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("280DF2D0-BE2A-448C-BBCE-11814636C4C8")
    ISolid : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Faces( 
            /* [retval][out] */ IFaces **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Edges( 
            /* [retval][out] */ IEdges **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Vertices( 
            /* [retval][out] */ IVertices **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISolidVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISolid * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISolid * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISolid * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISolid * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISolid * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISolid * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISolid * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Faces )( 
            ISolid * This,
            /* [retval][out] */ IFaces **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Edges )( 
            ISolid * This,
            /* [retval][out] */ IEdges **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Vertices )( 
            ISolid * This,
            /* [retval][out] */ IVertices **ppVal);
        
        END_INTERFACE
    } ISolidVtbl;

    interface ISolid
    {
        CONST_VTBL struct ISolidVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISolid_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISolid_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISolid_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISolid_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISolid_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISolid_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISolid_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISolid_get_Faces(This,ppVal)	\
    ( (This)->lpVtbl -> get_Faces(This,ppVal) ) 

#define ISolid_get_Edges(This,ppVal)	\
    ( (This)->lpVtbl -> get_Edges(This,ppVal) ) 

#define ISolid_get_Vertices(This,ppVal)	\
    ( (This)->lpVtbl -> get_Vertices(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISolid_INTERFACE_DEFINED__ */


#ifndef __IFaces_INTERFACE_DEFINED__
#define __IFaces_INTERFACE_DEFINED__

/* interface IFaces */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IFaces;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3C5C1AB1-AFE7-43B3-874B-D76D77909018")
    IFaces : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long index,
            /* [retval][out] */ IFace **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFacesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFaces * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFaces * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFaces * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFaces * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFaces * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFaces * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFaces * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IFaces * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IFaces * This,
            /* [in] */ long index,
            /* [retval][out] */ IFace **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IFaces * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        END_INTERFACE
    } IFacesVtbl;

    interface IFaces
    {
        CONST_VTBL struct IFacesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFaces_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFaces_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFaces_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFaces_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFaces_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFaces_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFaces_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFaces_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IFaces_get_Item(This,index,ppVal)	\
    ( (This)->lpVtbl -> get_Item(This,index,ppVal) ) 

#define IFaces_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFaces_INTERFACE_DEFINED__ */


#ifndef __IEdges_INTERFACE_DEFINED__
#define __IEdges_INTERFACE_DEFINED__

/* interface IEdges */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IEdges;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9E0256D6-3731-41C9-997B-245FF562E829")
    IEdges : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long index,
            /* [retval][out] */ IEdge **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEdgesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEdges * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEdges * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEdges * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEdges * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEdges * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEdges * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEdges * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IEdges * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IEdges * This,
            /* [in] */ long index,
            /* [retval][out] */ IEdge **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IEdges * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        END_INTERFACE
    } IEdgesVtbl;

    interface IEdges
    {
        CONST_VTBL struct IEdgesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEdges_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEdges_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEdges_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEdges_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEdges_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEdges_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEdges_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEdges_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IEdges_get_Item(This,index,ppVal)	\
    ( (This)->lpVtbl -> get_Item(This,index,ppVal) ) 

#define IEdges_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEdges_INTERFACE_DEFINED__ */


#ifndef __IFace_INTERFACE_DEFINED__
#define __IFace_INTERFACE_DEFINED__

/* interface IFace */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IFace;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2439D908-0C5B-47E0-890E-46C20B9F1897")
    IFace : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ FaceType *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Edges( 
            /* [retval][out] */ IEdges **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Vertices( 
            /* [retval][out] */ IVertices **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Centroid( 
            /* [out] */ double *cx,
            /* [out] */ double *cy,
            /* [out] */ double *cz) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_XDirection( 
            /* [out] */ double *xx,
            /* [out] */ double *xy,
            /* [out] */ double *xz) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_YDirection( 
            /* [out] */ double *yx,
            /* [out] */ double *yy,
            /* [out] */ double *yz) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZDirection( 
            /* [out] */ double *zx,
            /* [out] */ double *zy,
            /* [out] */ double *zz) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Area( 
            /* [retval][out] */ double *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFaceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFace * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFace * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFace * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFace * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFace * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFace * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFace * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IFace * This,
            /* [retval][out] */ FaceType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IFace * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Edges )( 
            IFace * This,
            /* [retval][out] */ IEdges **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Vertices )( 
            IFace * This,
            /* [retval][out] */ IVertices **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Centroid )( 
            IFace * This,
            /* [out] */ double *cx,
            /* [out] */ double *cy,
            /* [out] */ double *cz);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XDirection )( 
            IFace * This,
            /* [out] */ double *xx,
            /* [out] */ double *xy,
            /* [out] */ double *xz);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YDirection )( 
            IFace * This,
            /* [out] */ double *yx,
            /* [out] */ double *yy,
            /* [out] */ double *yz);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZDirection )( 
            IFace * This,
            /* [out] */ double *zx,
            /* [out] */ double *zy,
            /* [out] */ double *zz);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Area )( 
            IFace * This,
            /* [retval][out] */ double *pVal);
        
        END_INTERFACE
    } IFaceVtbl;

    interface IFace
    {
        CONST_VTBL struct IFaceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFace_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFace_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFace_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFace_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFace_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFace_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFace_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFace_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IFace_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IFace_get_Edges(This,ppVal)	\
    ( (This)->lpVtbl -> get_Edges(This,ppVal) ) 

#define IFace_get_Vertices(This,ppVal)	\
    ( (This)->lpVtbl -> get_Vertices(This,ppVal) ) 

#define IFace_get_Centroid(This,cx,cy,cz)	\
    ( (This)->lpVtbl -> get_Centroid(This,cx,cy,cz) ) 

#define IFace_get_XDirection(This,xx,xy,xz)	\
    ( (This)->lpVtbl -> get_XDirection(This,xx,xy,xz) ) 

#define IFace_get_YDirection(This,yx,yy,yz)	\
    ( (This)->lpVtbl -> get_YDirection(This,yx,yy,yz) ) 

#define IFace_get_ZDirection(This,zx,zy,zz)	\
    ( (This)->lpVtbl -> get_ZDirection(This,zx,zy,zz) ) 

#define IFace_get_Area(This,pVal)	\
    ( (This)->lpVtbl -> get_Area(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFace_INTERFACE_DEFINED__ */


#ifndef __IEdge_INTERFACE_DEFINED__
#define __IEdge_INTERFACE_DEFINED__

/* interface IEdge */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IEdge;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D54BD7B3-4AE1-4B8E-8925-A92A223EF614")
    IEdge : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ EdgeType *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPoint( 
            /* [retval][out] */ IVertex **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPoint( 
            /* [retval][out] */ IVertex **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEdgeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEdge * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEdge * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEdge * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEdge * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEdge * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEdge * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEdge * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IEdge * This,
            /* [retval][out] */ EdgeType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IEdge * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPoint )( 
            IEdge * This,
            /* [retval][out] */ IVertex **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPoint )( 
            IEdge * This,
            /* [retval][out] */ IVertex **ppVal);
        
        END_INTERFACE
    } IEdgeVtbl;

    interface IEdge
    {
        CONST_VTBL struct IEdgeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEdge_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEdge_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEdge_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEdge_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEdge_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEdge_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEdge_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEdge_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IEdge_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IEdge_get_StartPoint(This,ppVal)	\
    ( (This)->lpVtbl -> get_StartPoint(This,ppVal) ) 

#define IEdge_get_EndPoint(This,ppVal)	\
    ( (This)->lpVtbl -> get_EndPoint(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEdge_INTERFACE_DEFINED__ */


#ifndef __IVertices_INTERFACE_DEFINED__
#define __IVertices_INTERFACE_DEFINED__

/* interface IVertices */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IVertices;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AC5C4DC7-E3A7-4978-97E0-E4F2DB1226EF")
    IVertices : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long index,
            /* [retval][out] */ IVertex **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVerticesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVertices * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVertices * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVertices * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVertices * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVertices * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVertices * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVertices * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IVertices * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IVertices * This,
            /* [in] */ long index,
            /* [retval][out] */ IVertex **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IVertices * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        END_INTERFACE
    } IVerticesVtbl;

    interface IVertices
    {
        CONST_VTBL struct IVerticesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVertices_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVertices_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVertices_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVertices_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVertices_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVertices_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVertices_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVertices_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IVertices_get_Item(This,index,ppVal)	\
    ( (This)->lpVtbl -> get_Item(This,index,ppVal) ) 

#define IVertices_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVertices_INTERFACE_DEFINED__ */


#ifndef __IVertex_INTERFACE_DEFINED__
#define __IVertex_INTERFACE_DEFINED__

/* interface IVertex */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IVertex;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0EA073CC-3C4A-48EA-9799-3C818D8107A6")
    IVertex : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Coordinates( 
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X( 
            /* [retval][out] */ double *x) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y( 
            /* [retval][out] */ double *y) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Z( 
            /* [retval][out] */ double *z) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVertexVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVertex * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVertex * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVertex * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVertex * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVertex * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVertex * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVertex * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IVertex * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Coordinates )( 
            IVertex * This,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_X )( 
            IVertex * This,
            /* [retval][out] */ double *x);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Y )( 
            IVertex * This,
            /* [retval][out] */ double *y);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Z )( 
            IVertex * This,
            /* [retval][out] */ double *z);
        
        END_INTERFACE
    } IVertexVtbl;

    interface IVertex
    {
        CONST_VTBL struct IVertexVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVertex_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVertex_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVertex_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVertex_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVertex_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVertex_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVertex_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVertex_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IVertex_get_Coordinates(This,x,y,z)	\
    ( (This)->lpVtbl -> get_Coordinates(This,x,y,z) ) 

#define IVertex_get_X(This,x)	\
    ( (This)->lpVtbl -> get_X(This,x) ) 

#define IVertex_get_Y(This,y)	\
    ( (This)->lpVtbl -> get_Y(This,y) ) 

#define IVertex_get_Z(This,z)	\
    ( (This)->lpVtbl -> get_Z(This,z) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVertex_INTERFACE_DEFINED__ */


#ifndef __IPoint3D_INTERFACE_DEFINED__
#define __IPoint3D_INTERFACE_DEFINED__

/* interface IPoint3D */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IPoint3D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("381B3303-9EEA-482A-A184-F404C85AB87D")
    IPoint3D : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_X( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Y( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Z( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Z( 
            /* [in] */ double pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPoint3DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPoint3D * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPoint3D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPoint3D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPoint3D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPoint3D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPoint3D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPoint3D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_X )( 
            IPoint3D * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_X )( 
            IPoint3D * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Y )( 
            IPoint3D * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Y )( 
            IPoint3D * This,
            /* [in] */ double pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Z )( 
            IPoint3D * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Z )( 
            IPoint3D * This,
            /* [in] */ double pVal);
        
        END_INTERFACE
    } IPoint3DVtbl;

    interface IPoint3D
    {
        CONST_VTBL struct IPoint3DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPoint3D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPoint3D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPoint3D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPoint3D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPoint3D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPoint3D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPoint3D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPoint3D_get_X(This,pVal)	\
    ( (This)->lpVtbl -> get_X(This,pVal) ) 

#define IPoint3D_put_X(This,pVal)	\
    ( (This)->lpVtbl -> put_X(This,pVal) ) 

#define IPoint3D_get_Y(This,pVal)	\
    ( (This)->lpVtbl -> get_Y(This,pVal) ) 

#define IPoint3D_put_Y(This,pVal)	\
    ( (This)->lpVtbl -> put_Y(This,pVal) ) 

#define IPoint3D_get_Z(This,pVal)	\
    ( (This)->lpVtbl -> get_Z(This,pVal) ) 

#define IPoint3D_put_Z(This,pVal)	\
    ( (This)->lpVtbl -> put_Z(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPoint3D_INTERFACE_DEFINED__ */


#ifndef __IAxis1_INTERFACE_DEFINED__
#define __IAxis1_INTERFACE_DEFINED__

/* interface IAxis1 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IAxis1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F30AD8B9-836E-4869-B5A2-CD7682555719")
    IAxis1 : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Location( 
            /* [retval][out] */ IPoint3D **pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Location( 
            /* [in] */ IPoint3D *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Direction( 
            /* [retval][out] */ IPoint3D **pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Direction( 
            /* [in] */ IPoint3D *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAxis1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAxis1 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAxis1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAxis1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAxis1 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAxis1 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAxis1 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAxis1 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IAxis1 * This,
            /* [retval][out] */ IPoint3D **pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Location )( 
            IAxis1 * This,
            /* [in] */ IPoint3D *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Direction )( 
            IAxis1 * This,
            /* [retval][out] */ IPoint3D **pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Direction )( 
            IAxis1 * This,
            /* [in] */ IPoint3D *pVal);
        
        END_INTERFACE
    } IAxis1Vtbl;

    interface IAxis1
    {
        CONST_VTBL struct IAxis1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAxis1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAxis1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAxis1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAxis1_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAxis1_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAxis1_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAxis1_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAxis1_get_Location(This,pVal)	\
    ( (This)->lpVtbl -> get_Location(This,pVal) ) 

#define IAxis1_put_Location(This,pVal)	\
    ( (This)->lpVtbl -> put_Location(This,pVal) ) 

#define IAxis1_get_Direction(This,pVal)	\
    ( (This)->lpVtbl -> get_Direction(This,pVal) ) 

#define IAxis1_put_Direction(This,pVal)	\
    ( (This)->lpVtbl -> put_Direction(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAxis1_INTERFACE_DEFINED__ */


#ifndef __IAssemDocument_INTERFACE_DEFINED__
#define __IAssemDocument_INTERFACE_DEFINED__

/* interface IAssemDocument */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IAssemDocument;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1EE2B408-02CE-4E5F-BFFC-B793BAC322C1")
    IAssemDocument : public IDoc
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Assem( 
            /* [retval][out] */ IAssem **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Update( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE test( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAssemDocumentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAssemDocument * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAssemDocument * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAssemDocument * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAssemDocument * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAssemDocument * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAssemDocument * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAssemDocument * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IAssemDocument * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IAssemDocument * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullName )( 
            IAssemDocument * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAssemDocument * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            IAssemDocument * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Saved )( 
            IAssemDocument * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IAssemDocument * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IAssemDocument * This,
            /* [in] */ VARIANT_BOOL saveChanges,
            /* [in] */ BSTR filename);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAssemDocument * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveAs )( 
            IAssemDocument * This,
            /* [in] */ BSTR filename);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Assem )( 
            IAssemDocument * This,
            /* [retval][out] */ IAssem **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            IAssemDocument * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *test )( 
            IAssemDocument * This);
        
        END_INTERFACE
    } IAssemDocumentVtbl;

    interface IAssemDocument
    {
        CONST_VTBL struct IAssemDocumentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAssemDocument_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAssemDocument_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAssemDocument_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAssemDocument_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAssemDocument_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAssemDocument_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAssemDocument_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAssemDocument_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IAssemDocument_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IAssemDocument_get_FullName(This,pVal)	\
    ( (This)->lpVtbl -> get_FullName(This,pVal) ) 

#define IAssemDocument_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IAssemDocument_get_Path(This,pVal)	\
    ( (This)->lpVtbl -> get_Path(This,pVal) ) 

#define IAssemDocument_get_Saved(This,pVal)	\
    ( (This)->lpVtbl -> get_Saved(This,pVal) ) 

#define IAssemDocument_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IAssemDocument_Close(This,saveChanges,filename)	\
    ( (This)->lpVtbl -> Close(This,saveChanges,filename) ) 

#define IAssemDocument_Save(This)	\
    ( (This)->lpVtbl -> Save(This) ) 

#define IAssemDocument_SaveAs(This,filename)	\
    ( (This)->lpVtbl -> SaveAs(This,filename) ) 


#define IAssemDocument_get_Assem(This,pVal)	\
    ( (This)->lpVtbl -> get_Assem(This,pVal) ) 

#define IAssemDocument_Update(This)	\
    ( (This)->lpVtbl -> Update(This) ) 

#define IAssemDocument_test(This)	\
    ( (This)->lpVtbl -> test(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAssemDocument_INTERFACE_DEFINED__ */


#ifndef __IComp_INTERFACE_DEFINED__
#define __IComp_INTERFACE_DEFINED__

/* interface IComp */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IComp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47B8D6AB-475C-4102-AF1A-6962A7796C3A")
    IComp : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE set_Name( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE set_ParentName( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE get_ParentName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPart( 
            /* [in] */ int i,
            /* [retval][out] */ IPart **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetComponent( 
            /* [in] */ int i,
            /* [retval][out] */ IComp **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsComponent( 
            /* [in] */ int i,
            VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsPart( 
            /* [in] */ int i,
            VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddPart( 
            /* [in] */ IPart *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddComponent( 
            /* [in] */ IComp *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSize( 
            /* [retval][out] */ int *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPlacement( 
            /* [out] */ double *ox,
            /* [out] */ double *oy,
            /* [out] */ double *oz,
            /* [out] */ double *xx,
            /* [out] */ double *xy,
            /* [out] */ double *xz,
            /* [out] */ double *yx,
            /* [out] */ double *yy,
            /* [out] */ double *yz) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPlacement( 
            /* [in] */ double ox,
            /* [in] */ double oy,
            /* [in] */ double oz,
            /* [in] */ double zx,
            /* [in] */ double zy,
            /* [in] */ double zz,
            /* [in] */ double xx,
            /* [in] */ double xy,
            /* [in] */ double xz) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveAsMesh( 
            /* [in] */ int i,
            /* [in] */ BSTR name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreatePart( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IPart **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportPartFromXML( 
            /* [in] */ BSTR path,
            /* [in] */ IPart *pVal,
            /* [retval][out] */ IPart **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPartPlacement( 
            /* [in] */ IPart *pVal,
            /* [in] */ double ox,
            /* [in] */ double oy,
            /* [in] */ double oz,
            /* [in] */ double zx,
            /* [in] */ double zy,
            /* [in] */ double zz,
            /* [in] */ double xx,
            /* [in] */ double xy,
            /* [in] */ double xz) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICompVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IComp * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IComp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IComp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IComp * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IComp * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IComp * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IComp * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *set_Name )( 
            IComp * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *set_ParentName )( 
            IComp * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IComp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_ParentName )( 
            IComp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPart )( 
            IComp * This,
            /* [in] */ int i,
            /* [retval][out] */ IPart **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComponent )( 
            IComp * This,
            /* [in] */ int i,
            /* [retval][out] */ IComp **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsComponent )( 
            IComp * This,
            /* [in] */ int i,
            VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsPart )( 
            IComp * This,
            /* [in] */ int i,
            VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddPart )( 
            IComp * This,
            /* [in] */ IPart *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddComponent )( 
            IComp * This,
            /* [in] */ IComp *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IComp * This,
            /* [retval][out] */ int *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPlacement )( 
            IComp * This,
            /* [out] */ double *ox,
            /* [out] */ double *oy,
            /* [out] */ double *oz,
            /* [out] */ double *xx,
            /* [out] */ double *xy,
            /* [out] */ double *xz,
            /* [out] */ double *yx,
            /* [out] */ double *yy,
            /* [out] */ double *yz);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPlacement )( 
            IComp * This,
            /* [in] */ double ox,
            /* [in] */ double oy,
            /* [in] */ double oz,
            /* [in] */ double zx,
            /* [in] */ double zy,
            /* [in] */ double zz,
            /* [in] */ double xx,
            /* [in] */ double xy,
            /* [in] */ double xz);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveAsMesh )( 
            IComp * This,
            /* [in] */ int i,
            /* [in] */ BSTR name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreatePart )( 
            IComp * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IPart **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ImportPartFromXML )( 
            IComp * This,
            /* [in] */ BSTR path,
            /* [in] */ IPart *pVal,
            /* [retval][out] */ IPart **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPartPlacement )( 
            IComp * This,
            /* [in] */ IPart *pVal,
            /* [in] */ double ox,
            /* [in] */ double oy,
            /* [in] */ double oz,
            /* [in] */ double zx,
            /* [in] */ double zy,
            /* [in] */ double zz,
            /* [in] */ double xx,
            /* [in] */ double xy,
            /* [in] */ double xz);
        
        END_INTERFACE
    } ICompVtbl;

    interface IComp
    {
        CONST_VTBL struct ICompVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IComp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IComp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IComp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IComp_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IComp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IComp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IComp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IComp_set_Name(This,pVal)	\
    ( (This)->lpVtbl -> set_Name(This,pVal) ) 

#define IComp_set_ParentName(This,pVal)	\
    ( (This)->lpVtbl -> set_ParentName(This,pVal) ) 

#define IComp_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IComp_get_ParentName(This,pVal)	\
    ( (This)->lpVtbl -> get_ParentName(This,pVal) ) 

#define IComp_GetPart(This,i,ppVal)	\
    ( (This)->lpVtbl -> GetPart(This,i,ppVal) ) 

#define IComp_GetComponent(This,i,ppVal)	\
    ( (This)->lpVtbl -> GetComponent(This,i,ppVal) ) 

#define IComp_IsComponent(This,i,pVal)	\
    ( (This)->lpVtbl -> IsComponent(This,i,pVal) ) 

#define IComp_IsPart(This,i,pVal)	\
    ( (This)->lpVtbl -> IsPart(This,i,pVal) ) 

#define IComp_AddPart(This,pVal)	\
    ( (This)->lpVtbl -> AddPart(This,pVal) ) 

#define IComp_AddComponent(This,pVal)	\
    ( (This)->lpVtbl -> AddComponent(This,pVal) ) 

#define IComp_GetSize(This,pVal)	\
    ( (This)->lpVtbl -> GetSize(This,pVal) ) 

#define IComp_GetPlacement(This,ox,oy,oz,xx,xy,xz,yx,yy,yz)	\
    ( (This)->lpVtbl -> GetPlacement(This,ox,oy,oz,xx,xy,xz,yx,yy,yz) ) 

#define IComp_SetPlacement(This,ox,oy,oz,zx,zy,zz,xx,xy,xz)	\
    ( (This)->lpVtbl -> SetPlacement(This,ox,oy,oz,zx,zy,zz,xx,xy,xz) ) 

#define IComp_SaveAsMesh(This,i,name)	\
    ( (This)->lpVtbl -> SaveAsMesh(This,i,name) ) 

#define IComp_CreatePart(This,name,ppVal)	\
    ( (This)->lpVtbl -> CreatePart(This,name,ppVal) ) 

#define IComp_ImportPartFromXML(This,path,pVal,ppVal)	\
    ( (This)->lpVtbl -> ImportPartFromXML(This,path,pVal,ppVal) ) 

#define IComp_SetPartPlacement(This,pVal,ox,oy,oz,zx,zy,zz,xx,xy,xz)	\
    ( (This)->lpVtbl -> SetPartPlacement(This,pVal,ox,oy,oz,zx,zy,zz,xx,xy,xz) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IComp_INTERFACE_DEFINED__ */


#ifndef __IAssem_INTERFACE_DEFINED__
#define __IAssem_INTERFACE_DEFINED__

/* interface IAssem */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IAssem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AD55F898-5CF6-4D13-97DB-FEAB1156626F")
    IAssem : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreatePart( 
            /* [retval][out] */ IPart **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateComponent( 
            /* [retval][out] */ IComp **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddComponent( 
            /* [in] */ IComp *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetComponent( 
            /* [in] */ int index,
            /* [retval][out] */ IComp **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSize( 
            /* [retval][out] */ int *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Constraints( 
            /* [retval][out] */ IStdAssemConstraints **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAssemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAssem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAssem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAssem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAssem * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAssem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAssem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAssem * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreatePart )( 
            IAssem * This,
            /* [retval][out] */ IPart **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateComponent )( 
            IAssem * This,
            /* [retval][out] */ IComp **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddComponent )( 
            IAssem * This,
            /* [in] */ IComp *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComponent )( 
            IAssem * This,
            /* [in] */ int index,
            /* [retval][out] */ IComp **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IAssem * This,
            /* [retval][out] */ int *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAssem * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IAssem * This,
            /* [retval][out] */ IStdAssemConstraints **ppVal);
        
        END_INTERFACE
    } IAssemVtbl;

    interface IAssem
    {
        CONST_VTBL struct IAssemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAssem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAssem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAssem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAssem_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAssem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAssem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAssem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAssem_CreatePart(This,ppVal)	\
    ( (This)->lpVtbl -> CreatePart(This,ppVal) ) 

#define IAssem_CreateComponent(This,ppVal)	\
    ( (This)->lpVtbl -> CreateComponent(This,ppVal) ) 

#define IAssem_AddComponent(This,pVal)	\
    ( (This)->lpVtbl -> AddComponent(This,pVal) ) 

#define IAssem_GetComponent(This,index,ppVal)	\
    ( (This)->lpVtbl -> GetComponent(This,index,ppVal) ) 

#define IAssem_GetSize(This,pVal)	\
    ( (This)->lpVtbl -> GetSize(This,pVal) ) 

#define IAssem_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IAssem_get_Constraints(This,ppVal)	\
    ( (This)->lpVtbl -> get_Constraints(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAssem_INTERFACE_DEFINED__ */


#ifndef __IStdAssemConstraints_INTERFACE_DEFINED__
#define __IStdAssemConstraints_INTERFACE_DEFINED__

/* interface IStdAssemConstraints */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdAssemConstraints;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4AB8ED74-3B2F-47AB-B081-D676C2C45AE8")
    IStdAssemConstraints : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long index,
            /* [retval][out] */ IStdAssemConstraint **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetConstraint( 
            /* [in] */ long index,
            /* [retval][out] */ IStdAssemConstraint **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewAssemblyCoaxialConstraint( 
            /* [in] */ BSTR name,
            /* [in] */ IPart *pConstrainedPart,
            /* [in] */ IReference *pConstrainedGeometry,
            /* [in] */ IPart *pReferencePart,
            /* [in] */ IReference *pReferenceGeometry,
            /* [retval][out] */ IStdAssemConstraintCoaxial **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewAssemblyIncidenceConstraint( 
            /* [in] */ BSTR name,
            /* [in] */ IPart *pConstrainedPart,
            /* [in] */ IReference *pConstrainedGeometry,
            /* [in] */ IPart *pReferencePart,
            /* [in] */ IReference *pReferenceGeometry,
            /* [in] */ StdAssemblyIncidenceType incidenceType,
            /* [retval][out] */ IStdAssemConstraintIncidence **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdAssemConstraintsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdAssemConstraints * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdAssemConstraints * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdAssemConstraints * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdAssemConstraints * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdAssemConstraints * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdAssemConstraints * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdAssemConstraints * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IStdAssemConstraints * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IStdAssemConstraints * This,
            /* [in] */ long index,
            /* [retval][out] */ IStdAssemConstraint **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetConstraint )( 
            IStdAssemConstraints * This,
            /* [in] */ long index,
            /* [retval][out] */ IStdAssemConstraint **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewAssemblyCoaxialConstraint )( 
            IStdAssemConstraints * This,
            /* [in] */ BSTR name,
            /* [in] */ IPart *pConstrainedPart,
            /* [in] */ IReference *pConstrainedGeometry,
            /* [in] */ IPart *pReferencePart,
            /* [in] */ IReference *pReferenceGeometry,
            /* [retval][out] */ IStdAssemConstraintCoaxial **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewAssemblyIncidenceConstraint )( 
            IStdAssemConstraints * This,
            /* [in] */ BSTR name,
            /* [in] */ IPart *pConstrainedPart,
            /* [in] */ IReference *pConstrainedGeometry,
            /* [in] */ IPart *pReferencePart,
            /* [in] */ IReference *pReferenceGeometry,
            /* [in] */ StdAssemblyIncidenceType incidenceType,
            /* [retval][out] */ IStdAssemConstraintIncidence **ppVal);
        
        END_INTERFACE
    } IStdAssemConstraintsVtbl;

    interface IStdAssemConstraints
    {
        CONST_VTBL struct IStdAssemConstraintsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdAssemConstraints_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdAssemConstraints_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdAssemConstraints_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdAssemConstraints_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdAssemConstraints_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdAssemConstraints_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdAssemConstraints_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdAssemConstraints_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IStdAssemConstraints_get_Item(This,index,ppVal)	\
    ( (This)->lpVtbl -> get_Item(This,index,ppVal) ) 

#define IStdAssemConstraints_GetConstraint(This,index,ppVal)	\
    ( (This)->lpVtbl -> GetConstraint(This,index,ppVal) ) 

#define IStdAssemConstraints_AddNewAssemblyCoaxialConstraint(This,name,pConstrainedPart,pConstrainedGeometry,pReferencePart,pReferenceGeometry,ppVal)	\
    ( (This)->lpVtbl -> AddNewAssemblyCoaxialConstraint(This,name,pConstrainedPart,pConstrainedGeometry,pReferencePart,pReferenceGeometry,ppVal) ) 

#define IStdAssemConstraints_AddNewAssemblyIncidenceConstraint(This,name,pConstrainedPart,pConstrainedGeometry,pReferencePart,pReferenceGeometry,incidenceType,ppVal)	\
    ( (This)->lpVtbl -> AddNewAssemblyIncidenceConstraint(This,name,pConstrainedPart,pConstrainedGeometry,pReferencePart,pReferenceGeometry,incidenceType,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdAssemConstraints_INTERFACE_DEFINED__ */


#ifndef __IStdAssemConstraint_INTERFACE_DEFINED__
#define __IStdAssemConstraint_INTERFACE_DEFINED__

/* interface IStdAssemConstraint */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdAssemConstraint;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0861DBF0-310A-4F63-BB23-DC9C37341155")
    IStdAssemConstraint : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IApplication **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ StdAssemblyConstraintType *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetName( 
            /* [in] */ BSTR pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdAssemConstraintVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdAssemConstraint * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdAssemConstraint * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdAssemConstraint * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdAssemConstraint * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdAssemConstraint * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdAssemConstraint * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdAssemConstraint * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdAssemConstraint * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdAssemConstraint * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdAssemConstraint * This,
            /* [retval][out] */ StdAssemblyConstraintType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdAssemConstraint * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdAssemConstraint * This,
            /* [in] */ BSTR pVal);
        
        END_INTERFACE
    } IStdAssemConstraintVtbl;

    interface IStdAssemConstraint
    {
        CONST_VTBL struct IStdAssemConstraintVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdAssemConstraint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdAssemConstraint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdAssemConstraint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdAssemConstraint_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdAssemConstraint_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdAssemConstraint_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdAssemConstraint_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdAssemConstraint_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdAssemConstraint_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdAssemConstraint_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdAssemConstraint_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdAssemConstraint_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdAssemConstraint_INTERFACE_DEFINED__ */


#ifndef __IStdAssemConstraintCoaxial_INTERFACE_DEFINED__
#define __IStdAssemConstraintCoaxial_INTERFACE_DEFINED__

/* interface IStdAssemConstraintCoaxial */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdAssemConstraintCoaxial;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F5074BA1-513A-4F33-9091-CC8CF56DAAB1")
    IStdAssemConstraintCoaxial : public IStdAssemConstraint
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ConstrainedPart( 
            /* [retval][out] */ IPart **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ConstrainedGeometry( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReferencePart( 
            /* [retval][out] */ IPart **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceGeometry( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdAssemConstraintCoaxialVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdAssemConstraintCoaxial * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdAssemConstraintCoaxial * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdAssemConstraintCoaxial * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdAssemConstraintCoaxial * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdAssemConstraintCoaxial * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdAssemConstraintCoaxial * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdAssemConstraintCoaxial * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdAssemConstraintCoaxial * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdAssemConstraintCoaxial * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdAssemConstraintCoaxial * This,
            /* [retval][out] */ StdAssemblyConstraintType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdAssemConstraintCoaxial * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdAssemConstraintCoaxial * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConstrainedPart )( 
            IStdAssemConstraintCoaxial * This,
            /* [retval][out] */ IPart **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConstrainedGeometry )( 
            IStdAssemConstraintCoaxial * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferencePart )( 
            IStdAssemConstraintCoaxial * This,
            /* [retval][out] */ IPart **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceGeometry )( 
            IStdAssemConstraintCoaxial * This,
            /* [retval][out] */ IReference **ppVal);
        
        END_INTERFACE
    } IStdAssemConstraintCoaxialVtbl;

    interface IStdAssemConstraintCoaxial
    {
        CONST_VTBL struct IStdAssemConstraintCoaxialVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdAssemConstraintCoaxial_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdAssemConstraintCoaxial_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdAssemConstraintCoaxial_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdAssemConstraintCoaxial_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdAssemConstraintCoaxial_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdAssemConstraintCoaxial_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdAssemConstraintCoaxial_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdAssemConstraintCoaxial_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdAssemConstraintCoaxial_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdAssemConstraintCoaxial_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdAssemConstraintCoaxial_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdAssemConstraintCoaxial_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdAssemConstraintCoaxial_get_ConstrainedPart(This,ppVal)	\
    ( (This)->lpVtbl -> get_ConstrainedPart(This,ppVal) ) 

#define IStdAssemConstraintCoaxial_get_ConstrainedGeometry(This,ppVal)	\
    ( (This)->lpVtbl -> get_ConstrainedGeometry(This,ppVal) ) 

#define IStdAssemConstraintCoaxial_get_ReferencePart(This,ppVal)	\
    ( (This)->lpVtbl -> get_ReferencePart(This,ppVal) ) 

#define IStdAssemConstraintCoaxial_get_ReferenceGeometry(This,ppVal)	\
    ( (This)->lpVtbl -> get_ReferenceGeometry(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdAssemConstraintCoaxial_INTERFACE_DEFINED__ */


#ifndef __IStdAssemConstraintIncidence_INTERFACE_DEFINED__
#define __IStdAssemConstraintIncidence_INTERFACE_DEFINED__

/* interface IStdAssemConstraintIncidence */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStdAssemConstraintIncidence;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("449F2C9C-FA8E-43A1-B332-AFAD30360C60")
    IStdAssemConstraintIncidence : public IStdAssemConstraint
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ConstrainedPart( 
            /* [retval][out] */ IPart **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ConstrainedGeometry( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReferencePart( 
            /* [retval][out] */ IPart **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceGeometry( 
            /* [retval][out] */ IReference **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStdAssemConstraintIncidenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStdAssemConstraintIncidence * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStdAssemConstraintIncidence * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStdAssemConstraintIncidence * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStdAssemConstraintIncidence * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStdAssemConstraintIncidence * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStdAssemConstraintIncidence * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStdAssemConstraintIncidence * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStdAssemConstraintIncidence * This,
            /* [retval][out] */ IApplication **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IStdAssemConstraintIncidence * This,
            /* [retval][out] */ IDispatch **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IStdAssemConstraintIncidence * This,
            /* [retval][out] */ StdAssemblyConstraintType *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStdAssemConstraintIncidence * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IStdAssemConstraintIncidence * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConstrainedPart )( 
            IStdAssemConstraintIncidence * This,
            /* [retval][out] */ IPart **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConstrainedGeometry )( 
            IStdAssemConstraintIncidence * This,
            /* [retval][out] */ IReference **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferencePart )( 
            IStdAssemConstraintIncidence * This,
            /* [retval][out] */ IPart **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceGeometry )( 
            IStdAssemConstraintIncidence * This,
            /* [retval][out] */ IReference **ppVal);
        
        END_INTERFACE
    } IStdAssemConstraintIncidenceVtbl;

    interface IStdAssemConstraintIncidence
    {
        CONST_VTBL struct IStdAssemConstraintIncidenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStdAssemConstraintIncidence_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStdAssemConstraintIncidence_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStdAssemConstraintIncidence_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStdAssemConstraintIncidence_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStdAssemConstraintIncidence_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStdAssemConstraintIncidence_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStdAssemConstraintIncidence_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStdAssemConstraintIncidence_get_Application(This,ppVal)	\
    ( (This)->lpVtbl -> get_Application(This,ppVal) ) 

#define IStdAssemConstraintIncidence_get_Parent(This,ppVal)	\
    ( (This)->lpVtbl -> get_Parent(This,ppVal) ) 

#define IStdAssemConstraintIncidence_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IStdAssemConstraintIncidence_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStdAssemConstraintIncidence_SetName(This,pVal)	\
    ( (This)->lpVtbl -> SetName(This,pVal) ) 


#define IStdAssemConstraintIncidence_get_ConstrainedPart(This,ppVal)	\
    ( (This)->lpVtbl -> get_ConstrainedPart(This,ppVal) ) 

#define IStdAssemConstraintIncidence_get_ConstrainedGeometry(This,ppVal)	\
    ( (This)->lpVtbl -> get_ConstrainedGeometry(This,ppVal) ) 

#define IStdAssemConstraintIncidence_get_ReferencePart(This,ppVal)	\
    ( (This)->lpVtbl -> get_ReferencePart(This,ppVal) ) 

#define IStdAssemConstraintIncidence_get_ReferenceGeometry(This,ppVal)	\
    ( (This)->lpVtbl -> get_ReferenceGeometry(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStdAssemConstraintIncidence_INTERFACE_DEFINED__ */



#ifndef __TransCAD_LIBRARY_DEFINED__
#define __TransCAD_LIBRARY_DEFINED__

/* library TransCAD */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_TransCAD;

EXTERN_C const CLSID CLSID_Application;

#ifdef __cplusplus

class DECLSPEC_UUID("D83A9111-5458-42C6-B99D-836E42E21B45")
Application;
#endif

EXTERN_C const CLSID CLSID_Documents;

#ifdef __cplusplus

class DECLSPEC_UUID("AD3DDB7B-9F0E-4315-B922-79FC0C8EC2BA")
Documents;
#endif

EXTERN_C const CLSID CLSID_Document;

#ifdef __cplusplus

class DECLSPEC_UUID("986B706F-513A-45C5-A943-89A379553504")
Document;
#endif

EXTERN_C const CLSID CLSID_PartDocument;

#ifdef __cplusplus

class DECLSPEC_UUID("D16A646E-C4E2-43EB-888E-39CC59488B5A")
PartDocument;
#endif

EXTERN_C const CLSID CLSID_Part;

#ifdef __cplusplus

class DECLSPEC_UUID("DE2D5FCB-7160-44CE-A96D-AA43B6975106")
Part;
#endif

EXTERN_C const CLSID CLSID_Features;

#ifdef __cplusplus

class DECLSPEC_UUID("606DAAF6-D453-4015-845F-7EE235B68DCF")
Features;
#endif

EXTERN_C const CLSID CLSID_StdDefaultDatumPlaneFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("F931861E-5FAC-491F-9E55-2AA15343BEF5")
StdDefaultDatumPlaneFeature;
#endif

EXTERN_C const CLSID CLSID_StdSketchFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("FFAFC9A3-572B-4039-8F79-F012DDA8284C")
StdSketchFeature;
#endif

EXTERN_C const CLSID CLSID_StdSolidProtrusionExtrudeFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("48C7D279-76DC-4A8D-B538-E5DC0546A293")
StdSolidProtrusionExtrudeFeature;
#endif

EXTERN_C const CLSID CLSID_StdSolidCutExtrudeFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("F7E0B9E7-F1BD-45BF-9B91-9748A5CA0F3B")
StdSolidCutExtrudeFeature;
#endif

EXTERN_C const CLSID CLSID_StdSolidFilletConstantFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("A73A542C-CA02-49E8-A6A7-7DDDD05EA083")
StdSolidFilletConstantFeature;
#endif

EXTERN_C const CLSID CLSID_StdSketchOrigin;

#ifdef __cplusplus

class DECLSPEC_UUID("21EDA72E-5989-461A-9C82-1BBE68990A3D")
StdSketchOrigin;
#endif

EXTERN_C const CLSID CLSID_StdSketchVDirection;

#ifdef __cplusplus

class DECLSPEC_UUID("7A4A8E6C-34BC-40AC-AE41-4C72D87A1303")
StdSketchVDirection;
#endif

EXTERN_C const CLSID CLSID_StdSketchHDirection;

#ifdef __cplusplus

class DECLSPEC_UUID("09464CC6-18AC-439D-B619-30928FF81D95")
StdSketchHDirection;
#endif

EXTERN_C const CLSID CLSID_StdSketchGeometries;

#ifdef __cplusplus

class DECLSPEC_UUID("F8FEF672-2F3E-4891-B1C1-D0344659B1B8")
StdSketchGeometries;
#endif

EXTERN_C const CLSID CLSID_StdSketchConstraints;

#ifdef __cplusplus

class DECLSPEC_UUID("FE4F1E78-5869-496B-90A1-054A2C82D6B8")
StdSketchConstraints;
#endif

EXTERN_C const CLSID CLSID_StdSketchGeometry;

#ifdef __cplusplus

class DECLSPEC_UUID("C8CA998E-7106-4C71-B1EA-8550A478DC0C")
StdSketchGeometry;
#endif

EXTERN_C const CLSID CLSID_StdSketchConstraint;

#ifdef __cplusplus

class DECLSPEC_UUID("28C0967E-E8E0-4180-AE84-3AF9CF11EF49")
StdSketchConstraint;
#endif

EXTERN_C const CLSID CLSID_StdSketchCircle;

#ifdef __cplusplus

class DECLSPEC_UUID("F24E3B06-EB2A-4C6F-A2FB-D53BDDA85F4E")
StdSketchCircle;
#endif

EXTERN_C const CLSID CLSID_StdSketchCircularArc;

#ifdef __cplusplus

class DECLSPEC_UUID("6B2CAA3D-D1FF-4DA4-AC97-E18A7867DF64")
StdSketchCircularArc;
#endif

EXTERN_C const CLSID CLSID_StdSketchControlPoint;

#ifdef __cplusplus

class DECLSPEC_UUID("A02B8290-2B16-4E7A-A360-EEEC6DDC6700")
StdSketchControlPoint;
#endif

EXTERN_C const CLSID CLSID_StdSketchLine;

#ifdef __cplusplus

class DECLSPEC_UUID("9F8963EE-1DE4-485E-9B09-E5B376E7C869")
StdSketchLine;
#endif

EXTERN_C const CLSID CLSID_References;

#ifdef __cplusplus

class DECLSPEC_UUID("CB55CD74-F19E-4DB3-9FF5-BF66B8EEA916")
References;
#endif

EXTERN_C const CLSID CLSID_Reference;

#ifdef __cplusplus

class DECLSPEC_UUID("B305C600-A038-4F99-9081-18960E273016")
Reference;
#endif

EXTERN_C const CLSID CLSID_ExplicitModelObject;

#ifdef __cplusplus

class DECLSPEC_UUID("0C575300-D79F-4C2D-AE23-A7D1FD3A0421")
ExplicitModelObject;
#endif

EXTERN_C const CLSID CLSID_Sketch;

#ifdef __cplusplus

class DECLSPEC_UUID("78C8CF8F-48A1-41AD-B47E-AD802059344E")
Sketch;
#endif

EXTERN_C const CLSID CLSID_SketchEditor;

#ifdef __cplusplus

class DECLSPEC_UUID("2A4BB0D4-ED3E-43DE-BB11-DA0EC51AA1A1")
SketchEditor;
#endif

EXTERN_C const CLSID CLSID_StdSolidProtrusionSweepFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("55A4F80E-6504-47FA-A2C1-309CAF002353")
StdSolidProtrusionSweepFeature;
#endif

EXTERN_C const CLSID CLSID_StdSolidProtrusionRevolveFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("135BB7D6-4978-4580-981F-CBB43287DA55")
StdSolidProtrusionRevolveFeature;
#endif

EXTERN_C const CLSID CLSID_StdSketchCenterline;

#ifdef __cplusplus

class DECLSPEC_UUID("E0E00E33-5799-4E88-8F95-37E4CDF160A8")
StdSketchCenterline;
#endif

EXTERN_C const CLSID CLSID_StdSolidOperatePatternRectangularFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("AB178822-57C5-4580-BEC4-5A1D28D18A5A")
StdSolidOperatePatternRectangularFeature;
#endif

EXTERN_C const CLSID CLSID_StdSolidChamferFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("119291A7-495D-42BB-B26E-B16BB89C4513")
StdSolidChamferFeature;
#endif

EXTERN_C const CLSID CLSID_StdSolidCutRevolveFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("14AA1AEF-63F7-4729-9D0B-ED50AB1A9276")
StdSolidCutRevolveFeature;
#endif

EXTERN_C const CLSID CLSID_StdSolidOperatePatternCircularFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("9B1C1D69-F475-4E5E-AB2A-B461FB090351")
StdSolidOperatePatternCircularFeature;
#endif

EXTERN_C const CLSID CLSID_StdSolidHoleCounterboredFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("D1D97125-6F20-4315-8ED7-98B7CFEBEA19")
StdSolidHoleCounterboredFeature;
#endif

EXTERN_C const CLSID CLSID_StdSolidHoleCountersunkFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("76D732AF-F626-4165-94D6-28A108D5D1B0")
StdSolidHoleCountersunkFeature;
#endif

EXTERN_C const CLSID CLSID_StdSketchCoincidentSamePoints;

#ifdef __cplusplus

class DECLSPEC_UUID("8EF63188-27E0-426A-9706-FD528CAAEA19")
StdSketchCoincidentSamePoints;
#endif

EXTERN_C const CLSID CLSID_StdSketchParallel;

#ifdef __cplusplus

class DECLSPEC_UUID("CF544838-ADA6-46F6-A879-B07BA0CB2DA9")
StdSketchParallel;
#endif

EXTERN_C const CLSID CLSID_StdSketchPerpendicular;

#ifdef __cplusplus

class DECLSPEC_UUID("634CDB4B-31D1-4F62-B0A0-2ACCF5310BB5")
StdSketchPerpendicular;
#endif

EXTERN_C const CLSID CLSID_StdSketchHorizontal;

#ifdef __cplusplus

class DECLSPEC_UUID("2026F4D1-3C6D-46A1-B38D-90C3986BA5FA")
StdSketchHorizontal;
#endif

EXTERN_C const CLSID CLSID_StdSketchVertical;

#ifdef __cplusplus

class DECLSPEC_UUID("88BEB2B9-2537-4A26-BF31-F8A4CC8E4EEE")
StdSketchVertical;
#endif

EXTERN_C const CLSID CLSID_StdDatumPlaneOffsetFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("2411D4FB-2117-4141-BDBE-4A06AA3F474B")
StdDatumPlaneOffsetFeature;
#endif

EXTERN_C const CLSID CLSID_AssemDocument;

#ifdef __cplusplus

class DECLSPEC_UUID("7D2F6751-2F31-4A5A-8982-8CF15913B1B2")
AssemDocument;
#endif

EXTERN_C const CLSID CLSID_Assem;

#ifdef __cplusplus

class DECLSPEC_UUID("69C0835A-52B2-4D48-87D5-4DD526CAF20F")
Assem;
#endif

EXTERN_C const CLSID CLSID_StdSolidLoftFacesFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("A2B69C14-A3CB-4A24-8257-6AB09A3229C0")
StdSolidLoftFacesFeature;
#endif

EXTERN_C const CLSID CLSID_Component;

#ifdef __cplusplus

class DECLSPEC_UUID("C130D261-1349-498C-9BFE-BF50FB210DE5")
Component;
#endif

EXTERN_C const CLSID CLSID_StdSolidLoftSectionsFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("F6B91C04-FE7C-42F7-9EDA-EA422488435A")
StdSolidLoftSectionsFeature;
#endif

EXTERN_C const CLSID CLSID_StdSolidCutSweepFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("4355BB2C-26F5-4B54-9FD1-3BEC29A14E20")
StdSolidCutSweepFeature;
#endif

EXTERN_C const CLSID CLSID_StdSolidHoleSimpleFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("862655C6-A468-40EA-AE7F-E115DC173166")
StdSolidHoleSimpleFeature;
#endif

EXTERN_C const CLSID CLSID_StdSolidShellFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("DBCE6749-F171-4BFE-B16B-BB503388CCAD")
StdSolidShellFeature;
#endif

EXTERN_C const CLSID CLSID_StdSolidRevolveWithExternalAxisFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("9B592AE3-252B-4055-A929-40B61FD579B3")
StdSolidRevolveWithExternalAxisFeature;
#endif

EXTERN_C const CLSID CLSID_StdSolidDraftFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("EA4665A7-A1E0-4114-A9C4-B5CE51B7ED98")
StdSolidDraftFeature;
#endif

EXTERN_C const CLSID CLSID_StdSolidOffsetFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("D0E64BDD-DAE0-4A3B-B498-FFA4AA3965C6")
StdSolidOffsetFeature;
#endif

EXTERN_C const CLSID CLSID_StdSolidImportedBrepFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("0B1DA8B1-F07A-4992-9608-33DC223E7026")
StdSolidImportedBrepFeature;
#endif

EXTERN_C const CLSID CLSID_Solid;

#ifdef __cplusplus

class DECLSPEC_UUID("E43A5792-FAD8-4900-8ADA-6BC7AEF9F853")
Solid;
#endif

EXTERN_C const CLSID CLSID_Faces;

#ifdef __cplusplus

class DECLSPEC_UUID("286F04FF-35EE-4DE3-BA7C-CAF5DFEB299F")
Faces;
#endif

EXTERN_C const CLSID CLSID_Edges;

#ifdef __cplusplus

class DECLSPEC_UUID("D7FDB9A6-B050-459D-B151-67DFD75334B3")
Edges;
#endif

EXTERN_C const CLSID CLSID_Face;

#ifdef __cplusplus

class DECLSPEC_UUID("BE3EB3FD-27B1-4E8C-8E18-BBF82ED6E7FA")
Face;
#endif

EXTERN_C const CLSID CLSID_Edge;

#ifdef __cplusplus

class DECLSPEC_UUID("3D778A2F-4507-42F3-BADC-3491616FCAF0")
Edge;
#endif

EXTERN_C const CLSID CLSID_Vertices;

#ifdef __cplusplus

class DECLSPEC_UUID("C89024CE-BDC2-4B60-9151-73FC7E61AD96")
Vertices;
#endif

EXTERN_C const CLSID CLSID_Vertex;

#ifdef __cplusplus

class DECLSPEC_UUID("B6197B74-41DC-4BB5-B28A-3F730071A44C")
Vertex;
#endif

EXTERN_C const CLSID CLSID_Point3D;

#ifdef __cplusplus

class DECLSPEC_UUID("36D30594-7F32-4C2D-A839-C51C1F79C47B")
Point3D;
#endif

EXTERN_C const CLSID CLSID_Axis1;

#ifdef __cplusplus

class DECLSPEC_UUID("FFF99068-DDB2-419E-ACFD-283B1C946FBE")
Axis1;
#endif

EXTERN_C const CLSID CLSID_StdAssemConstraints;

#ifdef __cplusplus

class DECLSPEC_UUID("5CB7B87B-A240-4EAB-A450-1186189D841E")
StdAssemConstraints;
#endif

EXTERN_C const CLSID CLSID_StdAssemConstraintCoaxial;

#ifdef __cplusplus

class DECLSPEC_UUID("ACE6C03B-3878-46ED-B9DF-12858A904E5D")
StdAssemConstraintCoaxial;
#endif

EXTERN_C const CLSID CLSID_StdAssemConstraintIncidence;

#ifdef __cplusplus

class DECLSPEC_UUID("88630BBD-06D6-4E81-9552-D2F88D2E8CF5")
StdAssemConstraintIncidence;
#endif
#endif /* __TransCAD_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


