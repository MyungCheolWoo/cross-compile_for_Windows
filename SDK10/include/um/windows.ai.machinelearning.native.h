

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __windows2Eai2Emachinelearning2Enative_h__
#define __windows2Eai2Emachinelearning2Enative_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITensorNative_FWD_DEFINED__
#define __ITensorNative_FWD_DEFINED__
typedef interface ITensorNative ITensorNative;

#endif 	/* __ITensorNative_FWD_DEFINED__ */


#ifndef __ITensorStaticsNative_FWD_DEFINED__
#define __ITensorStaticsNative_FWD_DEFINED__
typedef interface ITensorStaticsNative ITensorStaticsNative;

#endif 	/* __ITensorStaticsNative_FWD_DEFINED__ */


#ifndef __ILearningModelDeviceFactoryNative_FWD_DEFINED__
#define __ILearningModelDeviceFactoryNative_FWD_DEFINED__
typedef interface ILearningModelDeviceFactoryNative ILearningModelDeviceFactoryNative;

#endif 	/* __ILearningModelDeviceFactoryNative_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "d3d12.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Eai2Emachinelearning2Enative_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
struct IMLOperatorRegistry; 
struct __declspec(uuid("1adaa23a-eb67-41f3-aad8-5d984e9bacd4")) __declspec(novtable) ILearningModelOperatorProviderNative : IUnknown  
{                                                                                                                                       
    STDMETHOD(GetRegistry)(IMLOperatorRegistry** ppOperatorRegistry) PURE;                                                              
};                                                                                                                                      


extern RPC_IF_HANDLE __MIDL_itf_windows2Eai2Emachinelearning2Enative_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eai2Emachinelearning2Enative_0000_0000_v0_0_s_ifspec;

#ifndef __ITensorNative_INTERFACE_DEFINED__
#define __ITensorNative_INTERFACE_DEFINED__

/* interface ITensorNative */
/* [local][object][uuid] */ 


EXTERN_C const IID IID_ITensorNative;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("52f547ef-5b03-49b5-82d6-565f1ee0dd49")
    ITensorNative : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetBuffer( 
            /* [size_is][size_is][out] */ BYTE **value,
            /* [out] */ UINT32 *capacity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetD3D12Resource( 
            /* [out] */ ID3D12Resource **result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITensorNativeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITensorNative * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITensorNative * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITensorNative * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )( 
            ITensorNative * This,
            /* [size_is][size_is][out] */ BYTE **value,
            /* [out] */ UINT32 *capacity);
        
        HRESULT ( STDMETHODCALLTYPE *GetD3D12Resource )( 
            ITensorNative * This,
            /* [out] */ ID3D12Resource **result);
        
        END_INTERFACE
    } ITensorNativeVtbl;

    interface ITensorNative
    {
        CONST_VTBL struct ITensorNativeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITensorNative_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITensorNative_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITensorNative_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITensorNative_GetBuffer(This,value,capacity)	\
    ( (This)->lpVtbl -> GetBuffer(This,value,capacity) ) 

#define ITensorNative_GetD3D12Resource(This,result)	\
    ( (This)->lpVtbl -> GetD3D12Resource(This,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITensorNative_INTERFACE_DEFINED__ */


#ifndef __ITensorStaticsNative_INTERFACE_DEFINED__
#define __ITensorStaticsNative_INTERFACE_DEFINED__

/* interface ITensorStaticsNative */
/* [local][object][uuid] */ 


EXTERN_C const IID IID_ITensorStaticsNative;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("39d055a4-66f6-4ebc-95d9-7a29ebe7690a")
    ITensorStaticsNative : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateFromD3D12Resource( 
            ID3D12Resource *value,
            /* [size_is] */ __int64 *shape,
            int shapeCount,
            /* [out] */ IUnknown **result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITensorStaticsNativeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITensorStaticsNative * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITensorStaticsNative * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITensorStaticsNative * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFromD3D12Resource )( 
            ITensorStaticsNative * This,
            ID3D12Resource *value,
            /* [size_is] */ __int64 *shape,
            int shapeCount,
            /* [out] */ IUnknown **result);
        
        END_INTERFACE
    } ITensorStaticsNativeVtbl;

    interface ITensorStaticsNative
    {
        CONST_VTBL struct ITensorStaticsNativeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITensorStaticsNative_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITensorStaticsNative_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITensorStaticsNative_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITensorStaticsNative_CreateFromD3D12Resource(This,value,shape,shapeCount,result)	\
    ( (This)->lpVtbl -> CreateFromD3D12Resource(This,value,shape,shapeCount,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITensorStaticsNative_INTERFACE_DEFINED__ */


#ifndef __ILearningModelDeviceFactoryNative_INTERFACE_DEFINED__
#define __ILearningModelDeviceFactoryNative_INTERFACE_DEFINED__

/* interface ILearningModelDeviceFactoryNative */
/* [local][object][uuid] */ 


EXTERN_C const IID IID_ILearningModelDeviceFactoryNative;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1e9b31a1-662e-4ae0-af67-f63bb337e634")
    ILearningModelDeviceFactoryNative : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateFromD3D12CommandQueue( 
            ID3D12CommandQueue *value,
            /* [out] */ IUnknown **result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILearningModelDeviceFactoryNativeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILearningModelDeviceFactoryNative * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILearningModelDeviceFactoryNative * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILearningModelDeviceFactoryNative * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFromD3D12CommandQueue )( 
            ILearningModelDeviceFactoryNative * This,
            ID3D12CommandQueue *value,
            /* [out] */ IUnknown **result);
        
        END_INTERFACE
    } ILearningModelDeviceFactoryNativeVtbl;

    interface ILearningModelDeviceFactoryNative
    {
        CONST_VTBL struct ILearningModelDeviceFactoryNativeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILearningModelDeviceFactoryNative_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILearningModelDeviceFactoryNative_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILearningModelDeviceFactoryNative_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILearningModelDeviceFactoryNative_CreateFromD3D12CommandQueue(This,value,result)	\
    ( (This)->lpVtbl -> CreateFromD3D12CommandQueue(This,value,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILearningModelDeviceFactoryNative_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eai2Emachinelearning2Enative_0000_0003 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */


extern RPC_IF_HANDLE __MIDL_itf_windows2Eai2Emachinelearning2Enative_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eai2Emachinelearning2Enative_0000_0003_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


