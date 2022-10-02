void RegisterAllStrippedInternalCalls()
{
	//Start Registrations for type : Unity.Collections.LowLevel.Unsafe.UnsafeUtility

		//System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility::IsBlittable(System.Type)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_IsBlittable();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_IsBlittable();

		//System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf(System.Type)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Free(System.Void*,Unity.Collections.Allocator)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_Free();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_Free();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpy();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpy();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpyReplicate(System.Void*,System.Void*,System.Int32,System.Int32)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpyReplicate();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpyReplicate();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpyStride(System.Void*,System.Int32,System.Void*,System.Int32,System.Int32,System.Int32)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpyStride();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpyStride();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemSet(System.Void*,System.Byte,System.Int64)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemSet();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemSet();

		//System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Malloc(System.Int64,System.Int32,Unity.Collections.Allocator)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_Malloc();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_Malloc();

	//End Registrations for type : Unity.Collections.LowLevel.Unsafe.UnsafeUtility

	//Start Registrations for type : Unity.Jobs.JobHandle

		//System.Boolean Unity.Jobs.JobHandle::ScheduleBatchedJobsAndIsCompleted(Unity.Jobs.JobHandle&)
		void Register_Unity_Jobs_JobHandle_ScheduleBatchedJobsAndIsCompleted();
		Register_Unity_Jobs_JobHandle_ScheduleBatchedJobsAndIsCompleted();

		//System.Void Unity.Jobs.JobHandle::ScheduleBatchedJobs()
		void Register_Unity_Jobs_JobHandle_ScheduleBatchedJobs();
		Register_Unity_Jobs_JobHandle_ScheduleBatchedJobs();

		//System.Void Unity.Jobs.JobHandle::ScheduleBatchedJobsAndComplete(Unity.Jobs.JobHandle&)
		void Register_Unity_Jobs_JobHandle_ScheduleBatchedJobsAndComplete();
		Register_Unity_Jobs_JobHandle_ScheduleBatchedJobsAndComplete();

		//System.Void Unity.Jobs.JobHandle::ScheduleBatchedJobsAndCompleteAll(System.Void*,System.Int32)
		void Register_Unity_Jobs_JobHandle_ScheduleBatchedJobsAndCompleteAll();
		Register_Unity_Jobs_JobHandle_ScheduleBatchedJobsAndCompleteAll();

	//End Registrations for type : Unity.Jobs.JobHandle

	//Start Registrations for type : Unity.Jobs.LowLevel.Unsafe.JobsUtility

		//System.Boolean Unity.Jobs.LowLevel.Unsafe.JobsUtility::GetWorkStealingRange(Unity.Jobs.LowLevel.Unsafe.JobRanges&,System.Int32,System.Int32&,System.Int32&)
		void Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_GetWorkStealingRange();
		Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_GetWorkStealingRange();

		//System.IntPtr Unity.Jobs.LowLevel.Unsafe.JobsUtility::CreateJobReflectionData(System.Type,System.Type,System.Object,System.Object,System.Object)
		void Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_CreateJobReflectionData();
		Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_CreateJobReflectionData();

		//System.Void Unity.Jobs.LowLevel.Unsafe.JobsUtility::ScheduleParallelFor_Injected(Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters&,System.Int32,System.Int32,Unity.Jobs.JobHandle&)
		void Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_ScheduleParallelFor_Injected();
		Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_ScheduleParallelFor_Injected();

		//System.Void Unity.Jobs.LowLevel.Unsafe.JobsUtility::Schedule_Injected(Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters&,Unity.Jobs.JobHandle&)
		void Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_Schedule_Injected();
		Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_Schedule_Injected();

	//End Registrations for type : Unity.Jobs.LowLevel.Unsafe.JobsUtility

	//Start Registrations for type : UnityEngine.AnimationCurve

		//System.Boolean UnityEngine.AnimationCurve::Internal_Equals(System.IntPtr)
		void Register_UnityEngine_AnimationCurve_Internal_Equals();
		Register_UnityEngine_AnimationCurve_Internal_Equals();

		//System.Int32 UnityEngine.AnimationCurve::AddKey(System.Single,System.Single)
		void Register_UnityEngine_AnimationCurve_AddKey();
		Register_UnityEngine_AnimationCurve_AddKey();

		//System.Int32 UnityEngine.AnimationCurve::AddKey_Internal_Injected(UnityEngine.Keyframe&)
		void Register_UnityEngine_AnimationCurve_AddKey_Internal_Injected();
		Register_UnityEngine_AnimationCurve_AddKey_Internal_Injected();

		//System.Int32 UnityEngine.AnimationCurve::MoveKey_Injected(System.Int32,UnityEngine.Keyframe&)
		void Register_UnityEngine_AnimationCurve_MoveKey_Injected();
		Register_UnityEngine_AnimationCurve_MoveKey_Injected();

		//System.Int32 UnityEngine.AnimationCurve::get_length()
		void Register_UnityEngine_AnimationCurve_get_length();
		Register_UnityEngine_AnimationCurve_get_length();

		//System.IntPtr UnityEngine.AnimationCurve::Internal_Create(UnityEngine.Keyframe[])
		void Register_UnityEngine_AnimationCurve_Internal_Create();
		Register_UnityEngine_AnimationCurve_Internal_Create();

		//System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
		void Register_UnityEngine_AnimationCurve_Evaluate();
		Register_UnityEngine_AnimationCurve_Evaluate();

		//System.Void UnityEngine.AnimationCurve::GetKey_Injected(System.Int32,UnityEngine.Keyframe&)
		void Register_UnityEngine_AnimationCurve_GetKey_Injected();
		Register_UnityEngine_AnimationCurve_GetKey_Injected();

		//System.Void UnityEngine.AnimationCurve::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_AnimationCurve_Internal_Destroy();
		Register_UnityEngine_AnimationCurve_Internal_Destroy();

		//System.Void UnityEngine.AnimationCurve::RemoveKey(System.Int32)
		void Register_UnityEngine_AnimationCurve_RemoveKey();
		Register_UnityEngine_AnimationCurve_RemoveKey();

		//System.Void UnityEngine.AnimationCurve::SetKeys(UnityEngine.Keyframe[])
		void Register_UnityEngine_AnimationCurve_SetKeys();
		Register_UnityEngine_AnimationCurve_SetKeys();

		//System.Void UnityEngine.AnimationCurve::SmoothTangents(System.Int32,System.Single)
		void Register_UnityEngine_AnimationCurve_SmoothTangents();
		Register_UnityEngine_AnimationCurve_SmoothTangents();

		//UnityEngine.Keyframe[] UnityEngine.AnimationCurve::GetKeys()
		void Register_UnityEngine_AnimationCurve_GetKeys();
		Register_UnityEngine_AnimationCurve_GetKeys();

	//End Registrations for type : UnityEngine.AnimationCurve

	//Start Registrations for type : UnityEngine.Animator

		//System.Boolean UnityEngine.Animator::get_hasBoundPlayables()
		void Register_UnityEngine_Animator_get_hasBoundPlayables();
		Register_UnityEngine_Animator_get_hasBoundPlayables();

		//System.Void UnityEngine.Animator::ResetTriggerString(System.String)
		void Register_UnityEngine_Animator_ResetTriggerString();
		Register_UnityEngine_Animator_ResetTriggerString();

		//System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
		void Register_UnityEngine_Animator_SetIntegerString();
		Register_UnityEngine_Animator_SetIntegerString();

		//System.Void UnityEngine.Animator::SetTriggerString(System.String)
		void Register_UnityEngine_Animator_SetTriggerString();
		Register_UnityEngine_Animator_SetTriggerString();

	//End Registrations for type : UnityEngine.Animator

	//Start Registrations for type : UnityEngine.Application

		//System.Boolean UnityEngine.Application::get_isBatchMode()
		void Register_UnityEngine_Application_get_isBatchMode();
		Register_UnityEngine_Application_get_isBatchMode();

		//System.Boolean UnityEngine.Application::get_isPlaying()
		void Register_UnityEngine_Application_get_isPlaying();
		Register_UnityEngine_Application_get_isPlaying();

		//System.Void UnityEngine.Application::Quit(System.Int32)
		void Register_UnityEngine_Application_Quit();
		Register_UnityEngine_Application_Quit();

		//System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
		void Register_UnityEngine_Application_set_targetFrameRate();
		Register_UnityEngine_Application_set_targetFrameRate();

		//UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
		void Register_UnityEngine_Application_get_platform();
		Register_UnityEngine_Application_get_platform();

	//End Registrations for type : UnityEngine.Application

	//Start Registrations for type : UnityEngine.AudioSettings

		//System.Boolean UnityEngine.AudioSettings::StartAudioOutput()
		void Register_UnityEngine_AudioSettings_StartAudioOutput();
		Register_UnityEngine_AudioSettings_StartAudioOutput();

		//System.Boolean UnityEngine.AudioSettings::StopAudioOutput()
		void Register_UnityEngine_AudioSettings_StopAudioOutput();
		Register_UnityEngine_AudioSettings_StopAudioOutput();

	//End Registrations for type : UnityEngine.AudioSettings

	//Start Registrations for type : UnityEngine.AudioSource

		//System.Void UnityEngine.AudioSource::Play(System.Double)
		void Register_UnityEngine_AudioSource_Play();
		Register_UnityEngine_AudioSource_Play();

	//End Registrations for type : UnityEngine.AudioSource

	//Start Registrations for type : UnityEngine.Behaviour

		//System.Boolean UnityEngine.Behaviour::get_enabled()
		void Register_UnityEngine_Behaviour_get_enabled();
		Register_UnityEngine_Behaviour_get_enabled();

		//System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
		void Register_UnityEngine_Behaviour_get_isActiveAndEnabled();
		Register_UnityEngine_Behaviour_get_isActiveAndEnabled();

		//System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
		void Register_UnityEngine_Behaviour_set_enabled();
		Register_UnityEngine_Behaviour_set_enabled();

	//End Registrations for type : UnityEngine.Behaviour

	//Start Registrations for type : UnityEngine.Camera

		//System.Boolean UnityEngine.Camera::GetCullingParameters_Internal(UnityEngine.Camera,System.Boolean,UnityEngine.Rendering.ScriptableCullingParameters&,System.Int32)
		void Register_UnityEngine_Camera_GetCullingParameters_Internal();
		Register_UnityEngine_Camera_GetCullingParameters_Internal();

		//System.Boolean UnityEngine.Camera::get_allowDynamicResolution()
		void Register_UnityEngine_Camera_get_allowDynamicResolution();
		Register_UnityEngine_Camera_get_allowDynamicResolution();

		//System.Boolean UnityEngine.Camera::get_allowHDR()
		void Register_UnityEngine_Camera_get_allowHDR();
		Register_UnityEngine_Camera_get_allowHDR();

		//System.Boolean UnityEngine.Camera::get_allowMSAA()
		void Register_UnityEngine_Camera_get_allowMSAA();
		Register_UnityEngine_Camera_get_allowMSAA();

		//System.Boolean UnityEngine.Camera::get_orthographic()
		void Register_UnityEngine_Camera_get_orthographic();
		Register_UnityEngine_Camera_get_orthographic();

		//System.Boolean UnityEngine.Camera::get_stereoEnabled()
		void Register_UnityEngine_Camera_get_stereoEnabled();
		Register_UnityEngine_Camera_get_stereoEnabled();

		//System.Boolean UnityEngine.Camera::get_usePhysicalProperties()
		void Register_UnityEngine_Camera_get_usePhysicalProperties();
		Register_UnityEngine_Camera_get_usePhysicalProperties();

		//System.Int32 UnityEngine.Camera::GetAllCamerasCount()
		void Register_UnityEngine_Camera_GetAllCamerasCount();
		Register_UnityEngine_Camera_GetAllCamerasCount();

		//System.Int32 UnityEngine.Camera::GetAllCamerasImpl(UnityEngine.Camera[])
		void Register_UnityEngine_Camera_GetAllCamerasImpl();
		Register_UnityEngine_Camera_GetAllCamerasImpl();

		//System.Int32 UnityEngine.Camera::get_cullingMask()
		void Register_UnityEngine_Camera_get_cullingMask();
		Register_UnityEngine_Camera_get_cullingMask();

		//System.Int32 UnityEngine.Camera::get_eventMask()
		void Register_UnityEngine_Camera_get_eventMask();
		Register_UnityEngine_Camera_get_eventMask();

		//System.Int32 UnityEngine.Camera::get_pixelHeight()
		void Register_UnityEngine_Camera_get_pixelHeight();
		Register_UnityEngine_Camera_get_pixelHeight();

		//System.Int32 UnityEngine.Camera::get_pixelWidth()
		void Register_UnityEngine_Camera_get_pixelWidth();
		Register_UnityEngine_Camera_get_pixelWidth();

		//System.Int32 UnityEngine.Camera::get_targetDisplay()
		void Register_UnityEngine_Camera_get_targetDisplay();
		Register_UnityEngine_Camera_get_targetDisplay();

		//System.Single UnityEngine.Camera::get_aspect()
		void Register_UnityEngine_Camera_get_aspect();
		Register_UnityEngine_Camera_get_aspect();

		//System.Single UnityEngine.Camera::get_depth()
		void Register_UnityEngine_Camera_get_depth();
		Register_UnityEngine_Camera_get_depth();

		//System.Single UnityEngine.Camera::get_farClipPlane()
		void Register_UnityEngine_Camera_get_farClipPlane();
		Register_UnityEngine_Camera_get_farClipPlane();

		//System.Single UnityEngine.Camera::get_fieldOfView()
		void Register_UnityEngine_Camera_get_fieldOfView();
		Register_UnityEngine_Camera_get_fieldOfView();

		//System.Single UnityEngine.Camera::get_nearClipPlane()
		void Register_UnityEngine_Camera_get_nearClipPlane();
		Register_UnityEngine_Camera_get_nearClipPlane();

		//System.Single UnityEngine.Camera::get_orthographicSize()
		void Register_UnityEngine_Camera_get_orthographicSize();
		Register_UnityEngine_Camera_get_orthographicSize();

		//System.Void UnityEngine.Camera::AddCommandBufferImpl(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
		void Register_UnityEngine_Camera_AddCommandBufferImpl();
		Register_UnityEngine_Camera_AddCommandBufferImpl();

		//System.Void UnityEngine.Camera::RemoveCommandBufferImpl(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
		void Register_UnityEngine_Camera_RemoveCommandBufferImpl();
		Register_UnityEngine_Camera_RemoveCommandBufferImpl();

		//System.Void UnityEngine.Camera::ResetProjectionMatrix()
		void Register_UnityEngine_Camera_ResetProjectionMatrix();
		Register_UnityEngine_Camera_ResetProjectionMatrix();

		//System.Void UnityEngine.Camera::ResetStereoProjectionMatrices()
		void Register_UnityEngine_Camera_ResetStereoProjectionMatrices();
		Register_UnityEngine_Camera_ResetStereoProjectionMatrices();

		//System.Void UnityEngine.Camera::ResetStereoViewMatrices()
		void Register_UnityEngine_Camera_ResetStereoViewMatrices();
		Register_UnityEngine_Camera_ResetStereoViewMatrices();

		//System.Void UnityEngine.Camera::ResetWorldToCameraMatrix()
		void Register_UnityEngine_Camera_ResetWorldToCameraMatrix();
		Register_UnityEngine_Camera_ResetWorldToCameraMatrix();

		//System.Void UnityEngine.Camera::ScreenPointToRay_Injected(UnityEngine.Vector2&,UnityEngine.Camera/MonoOrStereoscopicEye,UnityEngine.Ray&)
		void Register_UnityEngine_Camera_ScreenPointToRay_Injected();
		Register_UnityEngine_Camera_ScreenPointToRay_Injected();

		//System.Void UnityEngine.Camera::ScreenToViewportPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Camera_ScreenToViewportPoint_Injected();
		Register_UnityEngine_Camera_ScreenToViewportPoint_Injected();

		//System.Void UnityEngine.Camera::SetStereoProjectionMatrix_Injected(UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_SetStereoProjectionMatrix_Injected();
		Register_UnityEngine_Camera_SetStereoProjectionMatrix_Injected();

		//System.Void UnityEngine.Camera::SetStereoViewMatrix_Injected(UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_SetStereoViewMatrix_Injected();
		Register_UnityEngine_Camera_SetStereoViewMatrix_Injected();

		//System.Void UnityEngine.Camera::WorldToScreenPoint_Injected(UnityEngine.Vector3&,UnityEngine.Camera/MonoOrStereoscopicEye,UnityEngine.Vector3&)
		void Register_UnityEngine_Camera_WorldToScreenPoint_Injected();
		Register_UnityEngine_Camera_WorldToScreenPoint_Injected();

		//System.Void UnityEngine.Camera::get_backgroundColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_Camera_get_backgroundColor_Injected();
		Register_UnityEngine_Camera_get_backgroundColor_Injected();

		//System.Void UnityEngine.Camera::get_pixelRect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Camera_get_pixelRect_Injected();
		Register_UnityEngine_Camera_get_pixelRect_Injected();

		//System.Void UnityEngine.Camera::get_projectionMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_get_projectionMatrix_Injected();
		Register_UnityEngine_Camera_get_projectionMatrix_Injected();

		//System.Void UnityEngine.Camera::get_rect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Camera_get_rect_Injected();
		Register_UnityEngine_Camera_get_rect_Injected();

		//System.Void UnityEngine.Camera::get_worldToCameraMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_get_worldToCameraMatrix_Injected();
		Register_UnityEngine_Camera_get_worldToCameraMatrix_Injected();

		//System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
		void Register_UnityEngine_Camera_set_clearFlags();
		Register_UnityEngine_Camera_set_clearFlags();

		//System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
		void Register_UnityEngine_Camera_set_fieldOfView();
		Register_UnityEngine_Camera_set_fieldOfView();

		//System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
		void Register_UnityEngine_Camera_set_orthographicSize();
		Register_UnityEngine_Camera_set_orthographicSize();

		//System.Void UnityEngine.Camera::set_pixelRect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Camera_set_pixelRect_Injected();
		Register_UnityEngine_Camera_set_pixelRect_Injected();

		//System.Void UnityEngine.Camera::set_projectionMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_set_projectionMatrix_Injected();
		Register_UnityEngine_Camera_set_projectionMatrix_Injected();

		//System.Void UnityEngine.Camera::set_rect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Camera_set_rect_Injected();
		Register_UnityEngine_Camera_set_rect_Injected();

		//System.Void UnityEngine.Camera::set_worldToCameraMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_set_worldToCameraMatrix_Injected();
		Register_UnityEngine_Camera_set_worldToCameraMatrix_Injected();

		//UnityEngine.Camera UnityEngine.Camera::get_main()
		void Register_UnityEngine_Camera_get_main();
		Register_UnityEngine_Camera_get_main();

		//UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
		void Register_UnityEngine_Camera_get_clearFlags();
		Register_UnityEngine_Camera_get_clearFlags();

		//UnityEngine.CameraType UnityEngine.Camera::get_cameraType()
		void Register_UnityEngine_Camera_get_cameraType();
		Register_UnityEngine_Camera_get_cameraType();

		//UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
		void Register_UnityEngine_Camera_get_targetTexture();
		Register_UnityEngine_Camera_get_targetTexture();

		//UnityEngine.Rendering.OpaqueSortMode UnityEngine.Camera::get_opaqueSortMode()
		void Register_UnityEngine_Camera_get_opaqueSortMode();
		Register_UnityEngine_Camera_get_opaqueSortMode();

		//UnityEngine.StereoTargetEyeMask UnityEngine.Camera::get_stereoTargetEye()
		void Register_UnityEngine_Camera_get_stereoTargetEye();
		Register_UnityEngine_Camera_get_stereoTargetEye();

	//End Registrations for type : UnityEngine.Camera

	//Start Registrations for type : UnityEngine.CameraRaycastHelper

		//UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry2D_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
		void Register_UnityEngine_CameraRaycastHelper_RaycastTry2D_Injected();
		Register_UnityEngine_CameraRaycastHelper_RaycastTry2D_Injected();

		//UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
		void Register_UnityEngine_CameraRaycastHelper_RaycastTry_Injected();
		Register_UnityEngine_CameraRaycastHelper_RaycastTry_Injected();

	//End Registrations for type : UnityEngine.CameraRaycastHelper

	//Start Registrations for type : UnityEngine.Canvas

		//System.Boolean UnityEngine.Canvas::get_isRootCanvas()
		void Register_UnityEngine_Canvas_get_isRootCanvas();
		Register_UnityEngine_Canvas_get_isRootCanvas();

		//System.Boolean UnityEngine.Canvas::get_overrideSorting()
		void Register_UnityEngine_Canvas_get_overrideSorting();
		Register_UnityEngine_Canvas_get_overrideSorting();

		//System.Boolean UnityEngine.Canvas::get_pixelPerfect()
		void Register_UnityEngine_Canvas_get_pixelPerfect();
		Register_UnityEngine_Canvas_get_pixelPerfect();

		//System.Int32 UnityEngine.Canvas::get_renderOrder()
		void Register_UnityEngine_Canvas_get_renderOrder();
		Register_UnityEngine_Canvas_get_renderOrder();

		//System.Int32 UnityEngine.Canvas::get_sortingLayerID()
		void Register_UnityEngine_Canvas_get_sortingLayerID();
		Register_UnityEngine_Canvas_get_sortingLayerID();

		//System.Int32 UnityEngine.Canvas::get_sortingOrder()
		void Register_UnityEngine_Canvas_get_sortingOrder();
		Register_UnityEngine_Canvas_get_sortingOrder();

		//System.Int32 UnityEngine.Canvas::get_targetDisplay()
		void Register_UnityEngine_Canvas_get_targetDisplay();
		Register_UnityEngine_Canvas_get_targetDisplay();

		//System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
		void Register_UnityEngine_Canvas_get_referencePixelsPerUnit();
		Register_UnityEngine_Canvas_get_referencePixelsPerUnit();

		//System.Single UnityEngine.Canvas::get_scaleFactor()
		void Register_UnityEngine_Canvas_get_scaleFactor();
		Register_UnityEngine_Canvas_get_scaleFactor();

		//System.Void UnityEngine.Canvas::get_renderingDisplaySize_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Canvas_get_renderingDisplaySize_Injected();
		Register_UnityEngine_Canvas_get_renderingDisplaySize_Injected();

		//System.Void UnityEngine.Canvas::set_overrideSorting(System.Boolean)
		void Register_UnityEngine_Canvas_set_overrideSorting();
		Register_UnityEngine_Canvas_set_overrideSorting();

		//System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
		void Register_UnityEngine_Canvas_set_referencePixelsPerUnit();
		Register_UnityEngine_Canvas_set_referencePixelsPerUnit();

		//System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
		void Register_UnityEngine_Canvas_set_scaleFactor();
		Register_UnityEngine_Canvas_set_scaleFactor();

		//System.Void UnityEngine.Canvas::set_sortingLayerID(System.Int32)
		void Register_UnityEngine_Canvas_set_sortingLayerID();
		Register_UnityEngine_Canvas_set_sortingLayerID();

		//System.Void UnityEngine.Canvas::set_sortingOrder(System.Int32)
		void Register_UnityEngine_Canvas_set_sortingOrder();
		Register_UnityEngine_Canvas_set_sortingOrder();

		//UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
		void Register_UnityEngine_Canvas_get_worldCamera();
		Register_UnityEngine_Canvas_get_worldCamera();

		//UnityEngine.Canvas UnityEngine.Canvas::get_rootCanvas()
		void Register_UnityEngine_Canvas_get_rootCanvas();
		Register_UnityEngine_Canvas_get_rootCanvas();

		//UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
		void Register_UnityEngine_Canvas_GetDefaultCanvasMaterial();
		Register_UnityEngine_Canvas_GetDefaultCanvasMaterial();

		//UnityEngine.Material UnityEngine.Canvas::GetETC1SupportedCanvasMaterial()
		void Register_UnityEngine_Canvas_GetETC1SupportedCanvasMaterial();
		Register_UnityEngine_Canvas_GetETC1SupportedCanvasMaterial();

		//UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
		void Register_UnityEngine_Canvas_get_renderMode();
		Register_UnityEngine_Canvas_get_renderMode();

	//End Registrations for type : UnityEngine.Canvas

	//Start Registrations for type : UnityEngine.CanvasGroup

		//System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
		void Register_UnityEngine_CanvasGroup_get_blocksRaycasts();
		Register_UnityEngine_CanvasGroup_get_blocksRaycasts();

		//System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
		void Register_UnityEngine_CanvasGroup_get_ignoreParentGroups();
		Register_UnityEngine_CanvasGroup_get_ignoreParentGroups();

		//System.Boolean UnityEngine.CanvasGroup::get_interactable()
		void Register_UnityEngine_CanvasGroup_get_interactable();
		Register_UnityEngine_CanvasGroup_get_interactable();

		//System.Single UnityEngine.CanvasGroup::get_alpha()
		void Register_UnityEngine_CanvasGroup_get_alpha();
		Register_UnityEngine_CanvasGroup_get_alpha();

		//System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
		void Register_UnityEngine_CanvasGroup_set_alpha();
		Register_UnityEngine_CanvasGroup_set_alpha();

	//End Registrations for type : UnityEngine.CanvasGroup

	//Start Registrations for type : UnityEngine.CanvasRenderer

		//System.Boolean UnityEngine.CanvasRenderer::get_cull()
		void Register_UnityEngine_CanvasRenderer_get_cull();
		Register_UnityEngine_CanvasRenderer_get_cull();

		//System.Boolean UnityEngine.CanvasRenderer::get_hasMoved()
		void Register_UnityEngine_CanvasRenderer_get_hasMoved();
		Register_UnityEngine_CanvasRenderer_get_hasMoved();

		//System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
		void Register_UnityEngine_CanvasRenderer_get_absoluteDepth();
		Register_UnityEngine_CanvasRenderer_get_absoluteDepth();

		//System.Int32 UnityEngine.CanvasRenderer::get_materialCount()
		void Register_UnityEngine_CanvasRenderer_get_materialCount();
		Register_UnityEngine_CanvasRenderer_get_materialCount();

		//System.Void UnityEngine.CanvasRenderer::Clear()
		void Register_UnityEngine_CanvasRenderer_Clear();
		Register_UnityEngine_CanvasRenderer_Clear();

		//System.Void UnityEngine.CanvasRenderer::CreateUIVertexStreamInternal(System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object)
		void Register_UnityEngine_CanvasRenderer_CreateUIVertexStreamInternal();
		Register_UnityEngine_CanvasRenderer_CreateUIVertexStreamInternal();

		//System.Void UnityEngine.CanvasRenderer::DisableRectClipping()
		void Register_UnityEngine_CanvasRenderer_DisableRectClipping();
		Register_UnityEngine_CanvasRenderer_DisableRectClipping();

		//System.Void UnityEngine.CanvasRenderer::EnableRectClipping_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_CanvasRenderer_EnableRectClipping_Injected();
		Register_UnityEngine_CanvasRenderer_EnableRectClipping_Injected();

		//System.Void UnityEngine.CanvasRenderer::GetColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_CanvasRenderer_GetColor_Injected();
		Register_UnityEngine_CanvasRenderer_GetColor_Injected();

		//System.Void UnityEngine.CanvasRenderer::SetAlphaTexture(UnityEngine.Texture)
		void Register_UnityEngine_CanvasRenderer_SetAlphaTexture();
		Register_UnityEngine_CanvasRenderer_SetAlphaTexture();

		//System.Void UnityEngine.CanvasRenderer::SetColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_CanvasRenderer_SetColor_Injected();
		Register_UnityEngine_CanvasRenderer_SetColor_Injected();

		//System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,System.Int32)
		void Register_UnityEngine_CanvasRenderer_SetMaterial();
		Register_UnityEngine_CanvasRenderer_SetMaterial();

		//System.Void UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)
		void Register_UnityEngine_CanvasRenderer_SetMesh();
		Register_UnityEngine_CanvasRenderer_SetMesh();

		//System.Void UnityEngine.CanvasRenderer::SetPopMaterial(UnityEngine.Material,System.Int32)
		void Register_UnityEngine_CanvasRenderer_SetPopMaterial();
		Register_UnityEngine_CanvasRenderer_SetPopMaterial();

		//System.Void UnityEngine.CanvasRenderer::SetTexture(UnityEngine.Texture)
		void Register_UnityEngine_CanvasRenderer_SetTexture();
		Register_UnityEngine_CanvasRenderer_SetTexture();

		//System.Void UnityEngine.CanvasRenderer::SplitIndicesStreamsInternal(System.Object,System.Object)
		void Register_UnityEngine_CanvasRenderer_SplitIndicesStreamsInternal();
		Register_UnityEngine_CanvasRenderer_SplitIndicesStreamsInternal();

		//System.Void UnityEngine.CanvasRenderer::SplitUIVertexStreamsInternal(System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object)
		void Register_UnityEngine_CanvasRenderer_SplitUIVertexStreamsInternal();
		Register_UnityEngine_CanvasRenderer_SplitUIVertexStreamsInternal();

		//System.Void UnityEngine.CanvasRenderer::set_clippingSoftness_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_CanvasRenderer_set_clippingSoftness_Injected();
		Register_UnityEngine_CanvasRenderer_set_clippingSoftness_Injected();

		//System.Void UnityEngine.CanvasRenderer::set_cull(System.Boolean)
		void Register_UnityEngine_CanvasRenderer_set_cull();
		Register_UnityEngine_CanvasRenderer_set_cull();

		//System.Void UnityEngine.CanvasRenderer::set_hasPopInstruction(System.Boolean)
		void Register_UnityEngine_CanvasRenderer_set_hasPopInstruction();
		Register_UnityEngine_CanvasRenderer_set_hasPopInstruction();

		//System.Void UnityEngine.CanvasRenderer::set_materialCount(System.Int32)
		void Register_UnityEngine_CanvasRenderer_set_materialCount();
		Register_UnityEngine_CanvasRenderer_set_materialCount();

		//System.Void UnityEngine.CanvasRenderer::set_popMaterialCount(System.Int32)
		void Register_UnityEngine_CanvasRenderer_set_popMaterialCount();
		Register_UnityEngine_CanvasRenderer_set_popMaterialCount();

	//End Registrations for type : UnityEngine.CanvasRenderer

	//Start Registrations for type : UnityEngine.Collider

		//System.Boolean UnityEngine.Collider::get_enabled()
		void Register_UnityEngine_Collider_get_enabled();
		Register_UnityEngine_Collider_get_enabled();

		//System.Void UnityEngine.Collider::ClosestPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Collider_ClosestPoint_Injected();
		Register_UnityEngine_Collider_ClosestPoint_Injected();

		//System.Void UnityEngine.Collider::set_enabled(System.Boolean)
		void Register_UnityEngine_Collider_set_enabled();
		Register_UnityEngine_Collider_set_enabled();

	//End Registrations for type : UnityEngine.Collider

	//Start Registrations for type : UnityEngine.Collider2D

		//System.Void UnityEngine.Collider2D::get_bounds_Injected(UnityEngine.Bounds&)
		void Register_UnityEngine_Collider2D_get_bounds_Injected();
		Register_UnityEngine_Collider2D_get_bounds_Injected();

	//End Registrations for type : UnityEngine.Collider2D

	//Start Registrations for type : UnityEngine.Component

		//System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
		void Register_UnityEngine_Component_GetComponentFastPath();
		Register_UnityEngine_Component_GetComponentFastPath();

		//System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
		void Register_UnityEngine_Component_GetComponentsForListInternal();
		Register_UnityEngine_Component_GetComponentsForListInternal();

		//UnityEngine.GameObject UnityEngine.Component::get_gameObject()
		void Register_UnityEngine_Component_get_gameObject();
		Register_UnityEngine_Component_get_gameObject();

		//UnityEngine.Transform UnityEngine.Component::get_transform()
		void Register_UnityEngine_Component_get_transform();
		Register_UnityEngine_Component_get_transform();

	//End Registrations for type : UnityEngine.Component

	//Start Registrations for type : UnityEngine.ComputeBuffer

		//System.Int32 UnityEngine.ComputeBuffer::get_count()
		void Register_UnityEngine_ComputeBuffer_get_count();
		Register_UnityEngine_ComputeBuffer_get_count();

		//System.Int32 UnityEngine.ComputeBuffer::get_stride()
		void Register_UnityEngine_ComputeBuffer_get_stride();
		Register_UnityEngine_ComputeBuffer_get_stride();

		//System.IntPtr UnityEngine.ComputeBuffer::InitBuffer(System.Int32,System.Int32,UnityEngine.ComputeBufferType,UnityEngine.ComputeBufferMode)
		void Register_UnityEngine_ComputeBuffer_InitBuffer();
		Register_UnityEngine_ComputeBuffer_InitBuffer();

		//System.Void UnityEngine.ComputeBuffer::DestroyBuffer(UnityEngine.ComputeBuffer)
		void Register_UnityEngine_ComputeBuffer_DestroyBuffer();
		Register_UnityEngine_ComputeBuffer_DestroyBuffer();

		//System.Void UnityEngine.ComputeBuffer::InternalSetData(System.Array,System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_ComputeBuffer_InternalSetData();
		Register_UnityEngine_ComputeBuffer_InternalSetData();

		//System.Void UnityEngine.ComputeBuffer::InternalSetNativeData(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_ComputeBuffer_InternalSetNativeData();
		Register_UnityEngine_ComputeBuffer_InternalSetNativeData();

		//System.Void UnityEngine.ComputeBuffer::SetName(System.String)
		void Register_UnityEngine_ComputeBuffer_SetName();
		Register_UnityEngine_ComputeBuffer_SetName();

	//End Registrations for type : UnityEngine.ComputeBuffer

	//Start Registrations for type : UnityEngine.ComputeShader

		//System.Int32 UnityEngine.ComputeShader::FindKernel(System.String)
		void Register_UnityEngine_ComputeShader_FindKernel();
		Register_UnityEngine_ComputeShader_FindKernel();

		//System.Void UnityEngine.ComputeShader::DisableKeyword(System.String)
		void Register_UnityEngine_ComputeShader_DisableKeyword();
		Register_UnityEngine_ComputeShader_DisableKeyword();

		//System.Void UnityEngine.ComputeShader::EnableKeyword(System.String)
		void Register_UnityEngine_ComputeShader_EnableKeyword();
		Register_UnityEngine_ComputeShader_EnableKeyword();

	//End Registrations for type : UnityEngine.ComputeShader

	//Start Registrations for type : UnityEngine.ContactFilter2D

		//System.Void UnityEngine.ContactFilter2D::CheckConsistency_Injected(UnityEngine.ContactFilter2D&)
		void Register_UnityEngine_ContactFilter2D_CheckConsistency_Injected();
		Register_UnityEngine_ContactFilter2D_CheckConsistency_Injected();

	//End Registrations for type : UnityEngine.ContactFilter2D

	//Start Registrations for type : UnityEngine.Coroutine

		//System.Void UnityEngine.Coroutine::ReleaseCoroutine(System.IntPtr)
		void Register_UnityEngine_Coroutine_ReleaseCoroutine();
		Register_UnityEngine_Coroutine_ReleaseCoroutine();

	//End Registrations for type : UnityEngine.Coroutine

	//Start Registrations for type : UnityEngine.Cubemap

		//System.Boolean UnityEngine.Cubemap::Internal_CreateImpl(UnityEngine.Cubemap,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)
		void Register_UnityEngine_Cubemap_Internal_CreateImpl();
		Register_UnityEngine_Cubemap_Internal_CreateImpl();

		//System.Boolean UnityEngine.Cubemap::get_isReadable()
		void Register_UnityEngine_Cubemap_get_isReadable();
		Register_UnityEngine_Cubemap_get_isReadable();

		//System.Void UnityEngine.Cubemap::ApplyImpl(System.Boolean,System.Boolean)
		void Register_UnityEngine_Cubemap_ApplyImpl();
		Register_UnityEngine_Cubemap_ApplyImpl();

		//System.Void UnityEngine.Cubemap::SetPixelImpl_Injected(System.Int32,System.Int32,System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Cubemap_SetPixelImpl_Injected();
		Register_UnityEngine_Cubemap_SetPixelImpl_Injected();

		//System.Void UnityEngine.Cubemap::UpdateExternalTexture(System.IntPtr)
		void Register_UnityEngine_Cubemap_UpdateExternalTexture();
		Register_UnityEngine_Cubemap_UpdateExternalTexture();

	//End Registrations for type : UnityEngine.Cubemap

	//Start Registrations for type : UnityEngine.CubemapArray

		//System.Boolean UnityEngine.CubemapArray::Internal_CreateImpl(UnityEngine.CubemapArray,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
		void Register_UnityEngine_CubemapArray_Internal_CreateImpl();
		Register_UnityEngine_CubemapArray_Internal_CreateImpl();

		//System.Boolean UnityEngine.CubemapArray::get_isReadable()
		void Register_UnityEngine_CubemapArray_get_isReadable();
		Register_UnityEngine_CubemapArray_get_isReadable();

		//System.Void UnityEngine.CubemapArray::ApplyImpl(System.Boolean,System.Boolean)
		void Register_UnityEngine_CubemapArray_ApplyImpl();
		Register_UnityEngine_CubemapArray_ApplyImpl();

		//System.Void UnityEngine.CubemapArray::SetPixels(UnityEngine.Color[],UnityEngine.CubemapFace,System.Int32,System.Int32)
		void Register_UnityEngine_CubemapArray_SetPixels();
		Register_UnityEngine_CubemapArray_SetPixels();

	//End Registrations for type : UnityEngine.CubemapArray

	//Start Registrations for type : UnityEngine.Cursor

		//System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
		void Register_UnityEngine_Cursor_set_lockState();
		Register_UnityEngine_Cursor_set_lockState();

		//System.Void UnityEngine.Cursor::set_visible(System.Boolean)
		void Register_UnityEngine_Cursor_set_visible();
		Register_UnityEngine_Cursor_set_visible();

		//UnityEngine.CursorLockMode UnityEngine.Cursor::get_lockState()
		void Register_UnityEngine_Cursor_get_lockState();
		Register_UnityEngine_Cursor_get_lockState();

	//End Registrations for type : UnityEngine.Cursor

	//Start Registrations for type : UnityEngine.Debug

		//System.Boolean UnityEngine.Debug::get_isDebugBuild()
		void Register_UnityEngine_Debug_get_isDebugBuild();
		Register_UnityEngine_Debug_get_isDebugBuild();

		//System.Int32 UnityEngine.Debug::ExtractStackTraceNoAlloc(System.Byte*,System.Int32,System.String)
		void Register_UnityEngine_Debug_ExtractStackTraceNoAlloc();
		Register_UnityEngine_Debug_ExtractStackTraceNoAlloc();

	//End Registrations for type : UnityEngine.Debug

	//Start Registrations for type : UnityEngine.DebugLogHandler

		//System.Void UnityEngine.DebugLogHandler::Internal_Log(UnityEngine.LogType,UnityEngine.LogOption,System.String,UnityEngine.Object)
		void Register_UnityEngine_DebugLogHandler_Internal_Log();
		Register_UnityEngine_DebugLogHandler_Internal_Log();

		//System.Void UnityEngine.DebugLogHandler::Internal_LogException(System.Exception,UnityEngine.Object)
		void Register_UnityEngine_DebugLogHandler_Internal_LogException();
		Register_UnityEngine_DebugLogHandler_Internal_LogException();

	//End Registrations for type : UnityEngine.DebugLogHandler

	//Start Registrations for type : UnityEngine.Display

		//System.Boolean UnityEngine.Display::RequiresSrgbBlitToBackbufferImpl(System.IntPtr)
		void Register_UnityEngine_Display_RequiresSrgbBlitToBackbufferImpl();
		Register_UnityEngine_Display_RequiresSrgbBlitToBackbufferImpl();

		//System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
		void Register_UnityEngine_Display_RelativeMouseAtImpl();
		Register_UnityEngine_Display_RelativeMouseAtImpl();

		//System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
		void Register_UnityEngine_Display_GetRenderingExtImpl();
		Register_UnityEngine_Display_GetRenderingExtImpl();

		//System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
		void Register_UnityEngine_Display_GetSystemExtImpl();
		Register_UnityEngine_Display_GetSystemExtImpl();

	//End Registrations for type : UnityEngine.Display

	//Start Registrations for type : UnityEngine.Event

		//System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
		void Register_UnityEngine_Event_PopEvent();
		Register_UnityEngine_Event_PopEvent();

		//System.Char UnityEngine.Event::get_character()
		void Register_UnityEngine_Event_get_character();
		Register_UnityEngine_Event_get_character();

		//System.IntPtr UnityEngine.Event::Internal_Create(System.Int32)
		void Register_UnityEngine_Event_Internal_Create();
		Register_UnityEngine_Event_Internal_Create();

		//System.String UnityEngine.Event::get_commandName()
		void Register_UnityEngine_Event_get_commandName();
		Register_UnityEngine_Event_get_commandName();

		//System.Void UnityEngine.Event::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_Event_Internal_Destroy();
		Register_UnityEngine_Event_Internal_Destroy();

		//System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
		void Register_UnityEngine_Event_Internal_SetNativeEvent();
		Register_UnityEngine_Event_Internal_SetNativeEvent();

		//System.Void UnityEngine.Event::get_mousePosition_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Event_get_mousePosition_Injected();
		Register_UnityEngine_Event_get_mousePosition_Injected();

		//System.Void UnityEngine.Event::set_displayIndex(System.Int32)
		void Register_UnityEngine_Event_set_displayIndex();
		Register_UnityEngine_Event_set_displayIndex();

		//UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
		void Register_UnityEngine_Event_get_modifiers();
		Register_UnityEngine_Event_get_modifiers();

		//UnityEngine.EventType UnityEngine.Event::get_rawType()
		void Register_UnityEngine_Event_get_rawType();
		Register_UnityEngine_Event_get_rawType();

		//UnityEngine.EventType UnityEngine.Event::get_type()
		void Register_UnityEngine_Event_get_type();
		Register_UnityEngine_Event_get_type();

		//UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
		void Register_UnityEngine_Event_get_keyCode();
		Register_UnityEngine_Event_get_keyCode();

	//End Registrations for type : UnityEngine.Event

	//Start Registrations for type : UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem

		//System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()
		void Register_UnityEngine_Experimental_Rendering_BuiltinRuntimeReflectionSystem_BuiltinUpdate();
		Register_UnityEngine_Experimental_Rendering_BuiltinRuntimeReflectionSystem_BuiltinUpdate();

	//End Registrations for type : UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem

	//Start Registrations for type : UnityEngine.Experimental.Rendering.GraphicsFormatUtility

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,System.Boolean)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_CanDecompressFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_CanDecompressFormat();

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCompressedTextureFormat(UnityEngine.TextureFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsCompressedTextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsCompressedTextureFormat();

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsSRGBFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsSRGBFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsSRGBFormat();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetFormat(UnityEngine.Texture)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetFormat();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat,System.Boolean)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat();

		//UnityEngine.RenderTextureFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetRenderTextureFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetRenderTextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetRenderTextureFormat();

	//End Registrations for type : UnityEngine.Experimental.Rendering.GraphicsFormatUtility

	//Start Registrations for type : UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings

		//System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance()
		void Register_UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance();
		Register_UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance();

	//End Registrations for type : UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings

	//Start Registrations for type : UnityEngine.Font

		//System.Boolean UnityEngine.Font::HasCharacter(System.Int32)
		void Register_UnityEngine_Font_HasCharacter();
		Register_UnityEngine_Font_HasCharacter();

		//System.Boolean UnityEngine.Font::get_dynamic()
		void Register_UnityEngine_Font_get_dynamic();
		Register_UnityEngine_Font_get_dynamic();

		//System.Int32 UnityEngine.Font::get_fontSize()
		void Register_UnityEngine_Font_get_fontSize();
		Register_UnityEngine_Font_get_fontSize();

		//UnityEngine.Material UnityEngine.Font::get_material()
		void Register_UnityEngine_Font_get_material();
		Register_UnityEngine_Font_get_material();

	//End Registrations for type : UnityEngine.Font

	//Start Registrations for type : UnityEngine.GameObject

		//System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
		void Register_UnityEngine_GameObject_GetComponentsInternal();
		Register_UnityEngine_GameObject_GetComponentsInternal();

		//System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
		void Register_UnityEngine_GameObject_get_activeInHierarchy();
		Register_UnityEngine_GameObject_get_activeInHierarchy();

		//System.Boolean UnityEngine.GameObject::get_activeSelf()
		void Register_UnityEngine_GameObject_get_activeSelf();
		Register_UnityEngine_GameObject_get_activeSelf();

		//System.Int32 UnityEngine.GameObject::get_layer()
		void Register_UnityEngine_GameObject_get_layer();
		Register_UnityEngine_GameObject_get_layer();

		//System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
		void Register_UnityEngine_GameObject_GetComponentFastPath();
		Register_UnityEngine_GameObject_GetComponentFastPath();

		//System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
		void Register_UnityEngine_GameObject_Internal_CreateGameObject();
		Register_UnityEngine_GameObject_Internal_CreateGameObject();

		//System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
		void Register_UnityEngine_GameObject_SendMessage();
		Register_UnityEngine_GameObject_SendMessage();

		//System.Void UnityEngine.GameObject::SetActive(System.Boolean)
		void Register_UnityEngine_GameObject_SetActive();
		Register_UnityEngine_GameObject_SetActive();

		//System.Void UnityEngine.GameObject::TryGetComponentFastPath(System.Type,System.IntPtr)
		void Register_UnityEngine_GameObject_TryGetComponentFastPath();
		Register_UnityEngine_GameObject_TryGetComponentFastPath();

		//System.Void UnityEngine.GameObject::set_layer(System.Int32)
		void Register_UnityEngine_GameObject_set_layer();
		Register_UnityEngine_GameObject_set_layer();

		//UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
		void Register_UnityEngine_GameObject_GetComponent();
		Register_UnityEngine_GameObject_GetComponent();

		//UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type,System.Boolean)
		void Register_UnityEngine_GameObject_GetComponentInChildren();
		Register_UnityEngine_GameObject_GetComponentInChildren();

		//UnityEngine.Component UnityEngine.GameObject::GetComponentInParent(System.Type,System.Boolean)
		void Register_UnityEngine_GameObject_GetComponentInParent();
		Register_UnityEngine_GameObject_GetComponentInParent();

		//UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
		void Register_UnityEngine_GameObject_Internal_AddComponentWithType();
		Register_UnityEngine_GameObject_Internal_AddComponentWithType();

		//UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
		void Register_UnityEngine_GameObject_FindGameObjectWithTag();
		Register_UnityEngine_GameObject_FindGameObjectWithTag();

		//UnityEngine.Transform UnityEngine.GameObject::get_transform()
		void Register_UnityEngine_GameObject_get_transform();
		Register_UnityEngine_GameObject_get_transform();

	//End Registrations for type : UnityEngine.GameObject

	//Start Registrations for type : UnityEngine.Gizmos

		//System.Void UnityEngine.Gizmos::DrawCube_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Gizmos_DrawCube_Injected();
		Register_UnityEngine_Gizmos_DrawCube_Injected();

		//System.Void UnityEngine.Gizmos::DrawIcon_Injected(UnityEngine.Vector3&,System.String,System.Boolean,UnityEngine.Color&)
		void Register_UnityEngine_Gizmos_DrawIcon_Injected();
		Register_UnityEngine_Gizmos_DrawIcon_Injected();

		//System.Void UnityEngine.Gizmos::set_color_Injected(UnityEngine.Color&)
		void Register_UnityEngine_Gizmos_set_color_Injected();
		Register_UnityEngine_Gizmos_set_color_Injected();

		//System.Void UnityEngine.Gizmos::set_matrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Gizmos_set_matrix_Injected();
		Register_UnityEngine_Gizmos_set_matrix_Injected();

	//End Registrations for type : UnityEngine.Gizmos

	//Start Registrations for type : UnityEngine.GL

		//System.Boolean UnityEngine.GL::get_wireframe()
		void Register_UnityEngine_GL_get_wireframe();
		Register_UnityEngine_GL_get_wireframe();

		//System.Void UnityEngine.GL::GetGPUProjectionMatrix_Injected(UnityEngine.Matrix4x4&,System.Boolean,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_GL_GetGPUProjectionMatrix_Injected();
		Register_UnityEngine_GL_GetGPUProjectionMatrix_Injected();

	//End Registrations for type : UnityEngine.GL

	//Start Registrations for type : UnityEngine.Gradient

		//System.Boolean UnityEngine.Gradient::Internal_Equals(System.IntPtr)
		void Register_UnityEngine_Gradient_Internal_Equals();
		Register_UnityEngine_Gradient_Internal_Equals();

		//System.IntPtr UnityEngine.Gradient::Init()
		void Register_UnityEngine_Gradient_Init();
		Register_UnityEngine_Gradient_Init();

		//System.Void UnityEngine.Gradient::Cleanup()
		void Register_UnityEngine_Gradient_Cleanup();
		Register_UnityEngine_Gradient_Cleanup();

	//End Registrations for type : UnityEngine.Gradient

	//Start Registrations for type : UnityEngine.Graphics

		//System.Boolean UnityEngine.Graphics::GetPreserveFramebufferAlpha()
		void Register_UnityEngine_Graphics_GetPreserveFramebufferAlpha();
		Register_UnityEngine_Graphics_GetPreserveFramebufferAlpha();

		//System.Int32 UnityEngine.Graphics::Internal_GetMaxDrawMeshInstanceCount()
		void Register_UnityEngine_Graphics_Internal_GetMaxDrawMeshInstanceCount();
		Register_UnityEngine_Graphics_Internal_GetMaxDrawMeshInstanceCount();

		//System.Void UnityEngine.Graphics::CopyTexture_Slice(UnityEngine.Texture,System.Int32,System.Int32,UnityEngine.Texture,System.Int32,System.Int32)
		void Register_UnityEngine_Graphics_CopyTexture_Slice();
		Register_UnityEngine_Graphics_CopyTexture_Slice();

		//UnityEngine.Rendering.GraphicsTier UnityEngine.Graphics::get_activeTier()
		void Register_UnityEngine_Graphics_get_activeTier();
		Register_UnityEngine_Graphics_get_activeTier();

		//UnityEngine.Rendering.OpenGLESVersion UnityEngine.Graphics::GetMinOpenGLESVersion()
		void Register_UnityEngine_Graphics_GetMinOpenGLESVersion();
		Register_UnityEngine_Graphics_GetMinOpenGLESVersion();

	//End Registrations for type : UnityEngine.Graphics

	//Start Registrations for type : UnityEngine.GUI

		//System.Void UnityEngine.GUI::set_changed(System.Boolean)
		void Register_UnityEngine_GUI_set_changed();
		Register_UnityEngine_GUI_set_changed();

	//End Registrations for type : UnityEngine.GUI

	//Start Registrations for type : UnityEngine.GUILayoutUtility

		//System.Void UnityEngine.GUILayoutUtility::Internal_GetWindowRect_Injected(System.Int32,UnityEngine.Rect&)
		void Register_UnityEngine_GUILayoutUtility_Internal_GetWindowRect_Injected();
		Register_UnityEngine_GUILayoutUtility_Internal_GetWindowRect_Injected();

		//System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow_Injected(System.Int32,UnityEngine.Rect&)
		void Register_UnityEngine_GUILayoutUtility_Internal_MoveWindow_Injected();
		Register_UnityEngine_GUILayoutUtility_Internal_MoveWindow_Injected();

	//End Registrations for type : UnityEngine.GUILayoutUtility

	//Start Registrations for type : UnityEngine.GUIStyle

		//System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
		void Register_UnityEngine_GUIStyle_get_stretchHeight();
		Register_UnityEngine_GUIStyle_get_stretchHeight();

		//System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
		void Register_UnityEngine_GUIStyle_get_stretchWidth();
		Register_UnityEngine_GUIStyle_get_stretchWidth();

		//System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
		void Register_UnityEngine_GUIStyle_GetRectOffsetPtr();
		Register_UnityEngine_GUIStyle_GetRectOffsetPtr();

		//System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
		void Register_UnityEngine_GUIStyle_GetStyleStatePtr();
		Register_UnityEngine_GUIStyle_GetStyleStatePtr();

		//System.IntPtr UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)
		void Register_UnityEngine_GUIStyle_Internal_Create();
		Register_UnityEngine_GUIStyle_Internal_Create();

		//System.Single UnityEngine.GUIStyle::get_fixedHeight()
		void Register_UnityEngine_GUIStyle_get_fixedHeight();
		Register_UnityEngine_GUIStyle_get_fixedHeight();

		//System.Single UnityEngine.GUIStyle::get_fixedWidth()
		void Register_UnityEngine_GUIStyle_get_fixedWidth();
		Register_UnityEngine_GUIStyle_get_fixedWidth();

		//System.String UnityEngine.GUIStyle::get_rawName()
		void Register_UnityEngine_GUIStyle_get_rawName();
		Register_UnityEngine_GUIStyle_get_rawName();

		//System.Void UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_GUIStyle_Internal_Destroy();
		Register_UnityEngine_GUIStyle_Internal_Destroy();

		//System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
		void Register_UnityEngine_GUIStyle_SetDefaultFont();
		Register_UnityEngine_GUIStyle_SetDefaultFont();

		//System.Void UnityEngine.GUIStyle::set_rawName(System.String)
		void Register_UnityEngine_GUIStyle_set_rawName();
		Register_UnityEngine_GUIStyle_set_rawName();

		//System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
		void Register_UnityEngine_GUIStyle_set_stretchHeight();
		Register_UnityEngine_GUIStyle_set_stretchHeight();

	//End Registrations for type : UnityEngine.GUIStyle

	//Start Registrations for type : UnityEngine.GUIStyleState

		//System.IntPtr UnityEngine.GUIStyleState::Init()
		void Register_UnityEngine_GUIStyleState_Init();
		Register_UnityEngine_GUIStyleState_Init();

		//System.Void UnityEngine.GUIStyleState::Cleanup()
		void Register_UnityEngine_GUIStyleState_Cleanup();
		Register_UnityEngine_GUIStyleState_Cleanup();

		//System.Void UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_GUIStyleState_set_textColor_Injected();
		Register_UnityEngine_GUIStyleState_set_textColor_Injected();

	//End Registrations for type : UnityEngine.GUIStyleState

	//Start Registrations for type : UnityEngine.GUIUtility

		//System.Int32 UnityEngine.GUIUtility::get_guiDepth()
		void Register_UnityEngine_GUIUtility_get_guiDepth();
		Register_UnityEngine_GUIUtility_get_guiDepth();

		//System.Object UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
		void Register_UnityEngine_GUIUtility_Internal_GetDefaultSkin();
		Register_UnityEngine_GUIUtility_Internal_GetDefaultSkin();

		//System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
		void Register_UnityEngine_GUIUtility_get_pixelsPerPoint();
		Register_UnityEngine_GUIUtility_get_pixelsPerPoint();

		//System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
		void Register_UnityEngine_GUIUtility_get_systemCopyBuffer();
		Register_UnityEngine_GUIUtility_get_systemCopyBuffer();

		//System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
		void Register_UnityEngine_GUIUtility_Internal_ExitGUI();
		Register_UnityEngine_GUIUtility_Internal_ExitGUI();

		//System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
		void Register_UnityEngine_GUIUtility_set_systemCopyBuffer();
		Register_UnityEngine_GUIUtility_set_systemCopyBuffer();

	//End Registrations for type : UnityEngine.GUIUtility

	//Start Registrations for type : UnityEngine.Hash128

		//System.String UnityEngine.Hash128::Hash128ToStringImpl_Injected(UnityEngine.Hash128&)
		void Register_UnityEngine_Hash128_Hash128ToStringImpl_Injected();
		Register_UnityEngine_Hash128_Hash128ToStringImpl_Injected();

	//End Registrations for type : UnityEngine.Hash128

	//Start Registrations for type : UnityEngine.Input

		//System.Boolean UnityEngine.Input::GetButton(System.String)
		void Register_UnityEngine_Input_GetButton();
		Register_UnityEngine_Input_GetButton();

		//System.Boolean UnityEngine.Input::GetButtonDown(System.String)
		void Register_UnityEngine_Input_GetButtonDown();
		Register_UnityEngine_Input_GetButtonDown();

		//System.Boolean UnityEngine.Input::GetButtonUp(System.String)
		void Register_UnityEngine_Input_GetButtonUp();
		Register_UnityEngine_Input_GetButtonUp();

		//System.Boolean UnityEngine.Input::GetKeyInt(UnityEngine.KeyCode)
		void Register_UnityEngine_Input_GetKeyInt();
		Register_UnityEngine_Input_GetKeyInt();

		//System.Boolean UnityEngine.Input::GetKeyUpInt(UnityEngine.KeyCode)
		void Register_UnityEngine_Input_GetKeyUpInt();
		Register_UnityEngine_Input_GetKeyUpInt();

		//System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
		void Register_UnityEngine_Input_GetMouseButton();
		Register_UnityEngine_Input_GetMouseButton();

		//System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
		void Register_UnityEngine_Input_GetMouseButtonDown();
		Register_UnityEngine_Input_GetMouseButtonDown();

		//System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
		void Register_UnityEngine_Input_GetMouseButtonUp();
		Register_UnityEngine_Input_GetMouseButtonUp();

		//System.Boolean UnityEngine.Input::get_mousePresent()
		void Register_UnityEngine_Input_get_mousePresent();
		Register_UnityEngine_Input_get_mousePresent();

		//System.Boolean UnityEngine.Input::get_touchSupported()
		void Register_UnityEngine_Input_get_touchSupported();
		Register_UnityEngine_Input_get_touchSupported();

		//System.Int32 UnityEngine.Input::get_touchCount()
		void Register_UnityEngine_Input_get_touchCount();
		Register_UnityEngine_Input_get_touchCount();

		//System.Single UnityEngine.Input::GetAxis(System.String)
		void Register_UnityEngine_Input_GetAxis();
		Register_UnityEngine_Input_GetAxis();

		//System.Single UnityEngine.Input::GetAxisRaw(System.String)
		void Register_UnityEngine_Input_GetAxisRaw();
		Register_UnityEngine_Input_GetAxisRaw();

		//System.String UnityEngine.Input::get_compositionString()
		void Register_UnityEngine_Input_get_compositionString();
		Register_UnityEngine_Input_get_compositionString();

		//System.Void UnityEngine.Input::GetTouch_Injected(System.Int32,UnityEngine.Touch&)
		void Register_UnityEngine_Input_GetTouch_Injected();
		Register_UnityEngine_Input_GetTouch_Injected();

		//System.Void UnityEngine.Input::get_compositionCursorPos_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Input_get_compositionCursorPos_Injected();
		Register_UnityEngine_Input_get_compositionCursorPos_Injected();

		//System.Void UnityEngine.Input::get_mousePosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Input_get_mousePosition_Injected();
		Register_UnityEngine_Input_get_mousePosition_Injected();

		//System.Void UnityEngine.Input::get_mouseScrollDelta_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Input_get_mouseScrollDelta_Injected();
		Register_UnityEngine_Input_get_mouseScrollDelta_Injected();

		//System.Void UnityEngine.Input::set_compositionCursorPos_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Input_set_compositionCursorPos_Injected();
		Register_UnityEngine_Input_set_compositionCursorPos_Injected();

		//System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
		void Register_UnityEngine_Input_set_imeCompositionMode();
		Register_UnityEngine_Input_set_imeCompositionMode();

		//UnityEngine.IMECompositionMode UnityEngine.Input::get_imeCompositionMode()
		void Register_UnityEngine_Input_get_imeCompositionMode();
		Register_UnityEngine_Input_get_imeCompositionMode();

	//End Registrations for type : UnityEngine.Input

	//Start Registrations for type : UnityEngine.IntegratedSubsystem

		//System.Boolean UnityEngine.IntegratedSubsystem::IsRunning()
		void Register_UnityEngine_IntegratedSubsystem_IsRunning();
		Register_UnityEngine_IntegratedSubsystem_IsRunning();

		//System.Void UnityEngine.IntegratedSubsystem::SetHandle(UnityEngine.IntegratedSubsystem)
		void Register_UnityEngine_IntegratedSubsystem_SetHandle();
		Register_UnityEngine_IntegratedSubsystem_SetHandle();

		//System.Void UnityEngine.IntegratedSubsystem::Start()
		void Register_UnityEngine_IntegratedSubsystem_Start();
		Register_UnityEngine_IntegratedSubsystem_Start();

		//System.Void UnityEngine.IntegratedSubsystem::Stop()
		void Register_UnityEngine_IntegratedSubsystem_Stop();
		Register_UnityEngine_IntegratedSubsystem_Stop();

	//End Registrations for type : UnityEngine.IntegratedSubsystem

	//Start Registrations for type : UnityEngine.Light

		//System.Single UnityEngine.Light::get_bounceIntensity()
		void Register_UnityEngine_Light_get_bounceIntensity();
		Register_UnityEngine_Light_get_bounceIntensity();

		//System.Single UnityEngine.Light::get_cookieSize()
		void Register_UnityEngine_Light_get_cookieSize();
		Register_UnityEngine_Light_get_cookieSize();

		//System.Single UnityEngine.Light::get_innerSpotAngle()
		void Register_UnityEngine_Light_get_innerSpotAngle();
		Register_UnityEngine_Light_get_innerSpotAngle();

		//System.Single UnityEngine.Light::get_intensity()
		void Register_UnityEngine_Light_get_intensity();
		Register_UnityEngine_Light_get_intensity();

		//System.Single UnityEngine.Light::get_range()
		void Register_UnityEngine_Light_get_range();
		Register_UnityEngine_Light_get_range();

		//System.Single UnityEngine.Light::get_shadowBias()
		void Register_UnityEngine_Light_get_shadowBias();
		Register_UnityEngine_Light_get_shadowBias();

		//System.Single UnityEngine.Light::get_shadowNearPlane()
		void Register_UnityEngine_Light_get_shadowNearPlane();
		Register_UnityEngine_Light_get_shadowNearPlane();

		//System.Single UnityEngine.Light::get_shadowNormalBias()
		void Register_UnityEngine_Light_get_shadowNormalBias();
		Register_UnityEngine_Light_get_shadowNormalBias();

		//System.Single UnityEngine.Light::get_shadowStrength()
		void Register_UnityEngine_Light_get_shadowStrength();
		Register_UnityEngine_Light_get_shadowStrength();

		//System.Single UnityEngine.Light::get_spotAngle()
		void Register_UnityEngine_Light_get_spotAngle();
		Register_UnityEngine_Light_get_spotAngle();

		//System.Void UnityEngine.Light::get_bakingOutput_Injected(UnityEngine.LightBakingOutput&)
		void Register_UnityEngine_Light_get_bakingOutput_Injected();
		Register_UnityEngine_Light_get_bakingOutput_Injected();

		//System.Void UnityEngine.Light::get_color_Injected(UnityEngine.Color&)
		void Register_UnityEngine_Light_get_color_Injected();
		Register_UnityEngine_Light_get_color_Injected();

		//UnityEngine.LightShadows UnityEngine.Light::get_shadows()
		void Register_UnityEngine_Light_get_shadows();
		Register_UnityEngine_Light_get_shadows();

		//UnityEngine.LightType UnityEngine.Light::get_type()
		void Register_UnityEngine_Light_get_type();
		Register_UnityEngine_Light_get_type();

		//UnityEngine.Texture UnityEngine.Light::get_cookie()
		void Register_UnityEngine_Light_get_cookie();
		Register_UnityEngine_Light_get_cookie();

	//End Registrations for type : UnityEngine.Light

	//Start Registrations for type : UnityEngine.LineRenderer

		//System.Single UnityEngine.LineRenderer::get_widthMultiplier()
		void Register_UnityEngine_LineRenderer_get_widthMultiplier();
		Register_UnityEngine_LineRenderer_get_widthMultiplier();

		//System.Void UnityEngine.LineRenderer::SetPosition_Injected(System.Int32,UnityEngine.Vector3&)
		void Register_UnityEngine_LineRenderer_SetPosition_Injected();
		Register_UnityEngine_LineRenderer_SetPosition_Injected();

		//System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
		void Register_UnityEngine_LineRenderer_set_positionCount();
		Register_UnityEngine_LineRenderer_set_positionCount();

		//System.Void UnityEngine.LineRenderer::set_widthMultiplier(System.Single)
		void Register_UnityEngine_LineRenderer_set_widthMultiplier();
		Register_UnityEngine_LineRenderer_set_widthMultiplier();

	//End Registrations for type : UnityEngine.LineRenderer

	//Start Registrations for type : UnityEngine.Material

		//System.Boolean UnityEngine.Material::HasProperty(System.Int32)
		void Register_UnityEngine_Material_HasProperty();
		Register_UnityEngine_Material_HasProperty();

		//System.Boolean UnityEngine.Material::IsKeywordEnabled(System.String)
		void Register_UnityEngine_Material_IsKeywordEnabled();
		Register_UnityEngine_Material_IsKeywordEnabled();

		//System.Int32 UnityEngine.Material::GetFirstPropertyNameIdByAttribute(UnityEngine.Rendering.ShaderPropertyFlags)
		void Register_UnityEngine_Material_GetFirstPropertyNameIdByAttribute();
		Register_UnityEngine_Material_GetFirstPropertyNameIdByAttribute();

		//System.Void UnityEngine.Material::CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
		void Register_UnityEngine_Material_CreateWithMaterial();
		Register_UnityEngine_Material_CreateWithMaterial();

		//System.Void UnityEngine.Material::CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
		void Register_UnityEngine_Material_CreateWithShader();
		Register_UnityEngine_Material_CreateWithShader();

		//System.Void UnityEngine.Material::CreateWithString(UnityEngine.Material)
		void Register_UnityEngine_Material_CreateWithString();
		Register_UnityEngine_Material_CreateWithString();

		//System.Void UnityEngine.Material::DisableKeyword(System.String)
		void Register_UnityEngine_Material_DisableKeyword();
		Register_UnityEngine_Material_DisableKeyword();

		//System.Void UnityEngine.Material::EnableKeyword(System.String)
		void Register_UnityEngine_Material_EnableKeyword();
		Register_UnityEngine_Material_EnableKeyword();

		//System.Void UnityEngine.Material::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Material_SetColorImpl_Injected();
		Register_UnityEngine_Material_SetColorImpl_Injected();

		//System.Void UnityEngine.Material::SetConstantBufferImpl(System.Int32,UnityEngine.ComputeBuffer,System.Int32,System.Int32)
		void Register_UnityEngine_Material_SetConstantBufferImpl();
		Register_UnityEngine_Material_SetConstantBufferImpl();

		//System.Void UnityEngine.Material::SetFloatImpl(System.Int32,System.Single)
		void Register_UnityEngine_Material_SetFloatImpl();
		Register_UnityEngine_Material_SetFloatImpl();

		//System.Void UnityEngine.Material::SetMatrixArrayImpl(System.Int32,UnityEngine.Matrix4x4[],System.Int32)
		void Register_UnityEngine_Material_SetMatrixArrayImpl();
		Register_UnityEngine_Material_SetMatrixArrayImpl();

		//System.Void UnityEngine.Material::SetMatrixImpl_Injected(System.Int32,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Material_SetMatrixImpl_Injected();
		Register_UnityEngine_Material_SetMatrixImpl_Injected();

		//System.Void UnityEngine.Material::SetShaderKeywords(System.String[])
		void Register_UnityEngine_Material_SetShaderKeywords();
		Register_UnityEngine_Material_SetShaderKeywords();

		//System.Void UnityEngine.Material::SetTextureImpl(System.Int32,UnityEngine.Texture)
		void Register_UnityEngine_Material_SetTextureImpl();
		Register_UnityEngine_Material_SetTextureImpl();

		//UnityEngine.Texture UnityEngine.Material::GetTextureImpl(System.Int32)
		void Register_UnityEngine_Material_GetTextureImpl();
		Register_UnityEngine_Material_GetTextureImpl();

	//End Registrations for type : UnityEngine.Material

	//Start Registrations for type : UnityEngine.MaterialPropertyBlock

		//System.IntPtr UnityEngine.MaterialPropertyBlock::CreateImpl()
		void Register_UnityEngine_MaterialPropertyBlock_CreateImpl();
		Register_UnityEngine_MaterialPropertyBlock_CreateImpl();

		//System.Void UnityEngine.MaterialPropertyBlock::Clear(System.Boolean)
		void Register_UnityEngine_MaterialPropertyBlock_Clear();
		Register_UnityEngine_MaterialPropertyBlock_Clear();

		//System.Void UnityEngine.MaterialPropertyBlock::DestroyImpl(System.IntPtr)
		void Register_UnityEngine_MaterialPropertyBlock_DestroyImpl();
		Register_UnityEngine_MaterialPropertyBlock_DestroyImpl();

		//System.Void UnityEngine.MaterialPropertyBlock::SetFloatImpl(System.Int32,System.Single)
		void Register_UnityEngine_MaterialPropertyBlock_SetFloatImpl();
		Register_UnityEngine_MaterialPropertyBlock_SetFloatImpl();

		//System.Void UnityEngine.MaterialPropertyBlock::SetTextureImpl(System.Int32,UnityEngine.Texture)
		void Register_UnityEngine_MaterialPropertyBlock_SetTextureImpl();
		Register_UnityEngine_MaterialPropertyBlock_SetTextureImpl();

		//System.Void UnityEngine.MaterialPropertyBlock::SetVectorImpl_Injected(System.Int32,UnityEngine.Vector4&)
		void Register_UnityEngine_MaterialPropertyBlock_SetVectorImpl_Injected();
		Register_UnityEngine_MaterialPropertyBlock_SetVectorImpl_Injected();

	//End Registrations for type : UnityEngine.MaterialPropertyBlock

	//Start Registrations for type : UnityEngine.Mathf

		//System.Int32 UnityEngine.Mathf::NextPowerOfTwo(System.Int32)
		void Register_UnityEngine_Mathf_NextPowerOfTwo();
		Register_UnityEngine_Mathf_NextPowerOfTwo();

		//System.Single UnityEngine.Mathf::GammaToLinearSpace(System.Single)
		void Register_UnityEngine_Mathf_GammaToLinearSpace();
		Register_UnityEngine_Mathf_GammaToLinearSpace();

		//System.Single UnityEngine.Mathf::LinearToGammaSpace(System.Single)
		void Register_UnityEngine_Mathf_LinearToGammaSpace();
		Register_UnityEngine_Mathf_LinearToGammaSpace();

		//System.UInt16 UnityEngine.Mathf::FloatToHalf(System.Single)
		void Register_UnityEngine_Mathf_FloatToHalf();
		Register_UnityEngine_Mathf_FloatToHalf();

	//End Registrations for type : UnityEngine.Mathf

	//Start Registrations for type : UnityEngine.Matrix4x4

		//System.Void UnityEngine.Matrix4x4::DecomposeProjection_Injected(UnityEngine.Matrix4x4&,UnityEngine.FrustumPlanes&)
		void Register_UnityEngine_Matrix4x4_DecomposeProjection_Injected();
		Register_UnityEngine_Matrix4x4_DecomposeProjection_Injected();

		//System.Void UnityEngine.Matrix4x4::GetLossyScale_Injected(UnityEngine.Matrix4x4&,UnityEngine.Vector3&)
		void Register_UnityEngine_Matrix4x4_GetLossyScale_Injected();
		Register_UnityEngine_Matrix4x4_GetLossyScale_Injected();

		//System.Void UnityEngine.Matrix4x4::Inverse_Injected(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Matrix4x4_Inverse_Injected();
		Register_UnityEngine_Matrix4x4_Inverse_Injected();

		//System.Void UnityEngine.Matrix4x4::Ortho_Injected(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Matrix4x4_Ortho_Injected();
		Register_UnityEngine_Matrix4x4_Ortho_Injected();

		//System.Void UnityEngine.Matrix4x4::Perspective_Injected(System.Single,System.Single,System.Single,System.Single,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Matrix4x4_Perspective_Injected();
		Register_UnityEngine_Matrix4x4_Perspective_Injected();

		//System.Void UnityEngine.Matrix4x4::TRS_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Matrix4x4_TRS_Injected();
		Register_UnityEngine_Matrix4x4_TRS_Injected();

	//End Registrations for type : UnityEngine.Matrix4x4

	//Start Registrations for type : UnityEngine.Mesh

		//System.Array UnityEngine.Mesh::GetAllocArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
		void Register_UnityEngine_Mesh_GetAllocArrayFromChannelImpl();
		Register_UnityEngine_Mesh_GetAllocArrayFromChannelImpl();

		//System.Boolean UnityEngine.Mesh::HasVertexAttribute(UnityEngine.Rendering.VertexAttribute)
		void Register_UnityEngine_Mesh_HasVertexAttribute();
		Register_UnityEngine_Mesh_HasVertexAttribute();

		//System.Boolean UnityEngine.Mesh::get_canAccess()
		void Register_UnityEngine_Mesh_get_canAccess();
		Register_UnityEngine_Mesh_get_canAccess();

		//System.Int32 UnityEngine.Mesh::get_subMeshCount()
		void Register_UnityEngine_Mesh_get_subMeshCount();
		Register_UnityEngine_Mesh_get_subMeshCount();

		//System.Int32 UnityEngine.Mesh::get_vertexCount()
		void Register_UnityEngine_Mesh_get_vertexCount();
		Register_UnityEngine_Mesh_get_vertexCount();

		//System.Int32[] UnityEngine.Mesh::GetIndicesImpl(System.Int32,System.Boolean)
		void Register_UnityEngine_Mesh_GetIndicesImpl();
		Register_UnityEngine_Mesh_GetIndicesImpl();

		//System.UInt32 UnityEngine.Mesh::GetIndexCountImpl(System.Int32)
		void Register_UnityEngine_Mesh_GetIndexCountImpl();
		Register_UnityEngine_Mesh_GetIndexCountImpl();

		//System.Void UnityEngine.Mesh::ClearImpl(System.Boolean)
		void Register_UnityEngine_Mesh_ClearImpl();
		Register_UnityEngine_Mesh_ClearImpl();

		//System.Void UnityEngine.Mesh::GetArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Array)
		void Register_UnityEngine_Mesh_GetArrayFromChannelImpl();
		Register_UnityEngine_Mesh_GetArrayFromChannelImpl();

		//System.Void UnityEngine.Mesh::GetSubMesh_Injected(System.Int32,UnityEngine.Rendering.SubMeshDescriptor&)
		void Register_UnityEngine_Mesh_GetSubMesh_Injected();
		Register_UnityEngine_Mesh_GetSubMesh_Injected();

		//System.Void UnityEngine.Mesh::InternalSetVertexBufferData(System.Int32,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_InternalSetVertexBufferData();
		Register_UnityEngine_Mesh_InternalSetVertexBufferData();

		//System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
		void Register_UnityEngine_Mesh_Internal_Create();
		Register_UnityEngine_Mesh_Internal_Create();

		//System.Void UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute)
		void Register_UnityEngine_Mesh_PrintErrorCantAccessChannel();
		Register_UnityEngine_Mesh_PrintErrorCantAccessChannel();

		//System.Void UnityEngine.Mesh::RecalculateBoundsImpl(UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_RecalculateBoundsImpl();
		Register_UnityEngine_Mesh_RecalculateBoundsImpl();

		//System.Void UnityEngine.Mesh::RecalculateNormalsImpl(UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_RecalculateNormalsImpl();
		Register_UnityEngine_Mesh_RecalculateNormalsImpl();

		//System.Void UnityEngine.Mesh::SetArrayForChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Array,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_SetArrayForChannelImpl();
		Register_UnityEngine_Mesh_SetArrayForChannelImpl();

		//System.Void UnityEngine.Mesh::SetIndicesImpl(System.Int32,UnityEngine.MeshTopology,UnityEngine.Rendering.IndexFormat,System.Array,System.Int32,System.Int32,System.Boolean,System.Int32)
		void Register_UnityEngine_Mesh_SetIndicesImpl();
		Register_UnityEngine_Mesh_SetIndicesImpl();

		//System.Void UnityEngine.Mesh::SetIndicesNativeArrayImpl(System.Int32,UnityEngine.MeshTopology,UnityEngine.Rendering.IndexFormat,System.IntPtr,System.Int32,System.Int32,System.Boolean,System.Int32)
		void Register_UnityEngine_Mesh_SetIndicesNativeArrayImpl();
		Register_UnityEngine_Mesh_SetIndicesNativeArrayImpl();

		//System.Void UnityEngine.Mesh::SetNativeArrayForChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.IntPtr,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_SetNativeArrayForChannelImpl();
		Register_UnityEngine_Mesh_SetNativeArrayForChannelImpl();

		//System.Void UnityEngine.Mesh::SetVertexBufferParamsFromArray(System.Int32,UnityEngine.Rendering.VertexAttributeDescriptor[])
		void Register_UnityEngine_Mesh_SetVertexBufferParamsFromArray();
		Register_UnityEngine_Mesh_SetVertexBufferParamsFromArray();

		//System.Void UnityEngine.Mesh::UploadMeshDataImpl(System.Boolean)
		void Register_UnityEngine_Mesh_UploadMeshDataImpl();
		Register_UnityEngine_Mesh_UploadMeshDataImpl();

		//System.Void UnityEngine.Mesh::set_indexFormat(UnityEngine.Rendering.IndexFormat)
		void Register_UnityEngine_Mesh_set_indexFormat();
		Register_UnityEngine_Mesh_set_indexFormat();

	//End Registrations for type : UnityEngine.Mesh

	//Start Registrations for type : UnityEngine.MeshCollider

		//System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
		void Register_UnityEngine_MeshCollider_set_sharedMesh();
		Register_UnityEngine_MeshCollider_set_sharedMesh();

	//End Registrations for type : UnityEngine.MeshCollider

	//Start Registrations for type : UnityEngine.MeshFilter

		//System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
		void Register_UnityEngine_MeshFilter_set_sharedMesh();
		Register_UnityEngine_MeshFilter_set_sharedMesh();

		//UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
		void Register_UnityEngine_MeshFilter_get_mesh();
		Register_UnityEngine_MeshFilter_get_mesh();

		//UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
		void Register_UnityEngine_MeshFilter_get_sharedMesh();
		Register_UnityEngine_MeshFilter_get_sharedMesh();

	//End Registrations for type : UnityEngine.MeshFilter

	//Start Registrations for type : UnityEngine.MonoBehaviour

		//System.Boolean UnityEngine.MonoBehaviour::Internal_IsInvokingAll(UnityEngine.MonoBehaviour)
		void Register_UnityEngine_MonoBehaviour_Internal_IsInvokingAll();
		Register_UnityEngine_MonoBehaviour_Internal_IsInvokingAll();

		//System.Boolean UnityEngine.MonoBehaviour::IsInvoking(UnityEngine.MonoBehaviour,System.String)
		void Register_UnityEngine_MonoBehaviour_IsInvoking();
		Register_UnityEngine_MonoBehaviour_IsInvoking();

		//System.Boolean UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)
		void Register_UnityEngine_MonoBehaviour_IsObjectMonoBehaviour();
		Register_UnityEngine_MonoBehaviour_IsObjectMonoBehaviour();

		//System.Boolean UnityEngine.MonoBehaviour::get_useGUILayout()
		void Register_UnityEngine_MonoBehaviour_get_useGUILayout();
		Register_UnityEngine_MonoBehaviour_get_useGUILayout();

		//System.String UnityEngine.MonoBehaviour::GetScriptClassName()
		void Register_UnityEngine_MonoBehaviour_GetScriptClassName();
		Register_UnityEngine_MonoBehaviour_GetScriptClassName();

		//System.Void UnityEngine.MonoBehaviour::CancelInvoke(UnityEngine.MonoBehaviour,System.String)
		void Register_UnityEngine_MonoBehaviour_CancelInvoke();
		Register_UnityEngine_MonoBehaviour_CancelInvoke();

		//System.Void UnityEngine.MonoBehaviour::Internal_CancelInvokeAll(UnityEngine.MonoBehaviour)
		void Register_UnityEngine_MonoBehaviour_Internal_CancelInvokeAll();
		Register_UnityEngine_MonoBehaviour_Internal_CancelInvokeAll();

		//System.Void UnityEngine.MonoBehaviour::InvokeDelayed(UnityEngine.MonoBehaviour,System.String,System.Single,System.Single)
		void Register_UnityEngine_MonoBehaviour_InvokeDelayed();
		Register_UnityEngine_MonoBehaviour_InvokeDelayed();

		//System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
		void Register_UnityEngine_MonoBehaviour_StopAllCoroutines();
		Register_UnityEngine_MonoBehaviour_StopAllCoroutines();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
		void Register_UnityEngine_MonoBehaviour_StopCoroutine();
		Register_UnityEngine_MonoBehaviour_StopCoroutine();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutineFromEnumeratorManaged(System.Collections.IEnumerator)
		void Register_UnityEngine_MonoBehaviour_StopCoroutineFromEnumeratorManaged();
		Register_UnityEngine_MonoBehaviour_StopCoroutineFromEnumeratorManaged();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)
		void Register_UnityEngine_MonoBehaviour_StopCoroutineManaged();
		Register_UnityEngine_MonoBehaviour_StopCoroutineManaged();

		//System.Void UnityEngine.MonoBehaviour::set_useGUILayout(System.Boolean)
		void Register_UnityEngine_MonoBehaviour_set_useGUILayout();
		Register_UnityEngine_MonoBehaviour_set_useGUILayout();

		//UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutineManaged(System.String,System.Object)
		void Register_UnityEngine_MonoBehaviour_StartCoroutineManaged();
		Register_UnityEngine_MonoBehaviour_StartCoroutineManaged();

		//UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)
		void Register_UnityEngine_MonoBehaviour_StartCoroutineManaged2();
		Register_UnityEngine_MonoBehaviour_StartCoroutineManaged2();

	//End Registrations for type : UnityEngine.MonoBehaviour

	//Start Registrations for type : UnityEngine.NoAllocHelpers

		//System.Array UnityEngine.NoAllocHelpers::ExtractArrayFromList(System.Object)
		void Register_UnityEngine_NoAllocHelpers_ExtractArrayFromList();
		Register_UnityEngine_NoAllocHelpers_ExtractArrayFromList();

		//System.Void UnityEngine.NoAllocHelpers::Internal_ResizeList(System.Object,System.Int32)
		void Register_UnityEngine_NoAllocHelpers_Internal_ResizeList();
		Register_UnityEngine_NoAllocHelpers_Internal_ResizeList();

	//End Registrations for type : UnityEngine.NoAllocHelpers

	//Start Registrations for type : UnityEngine.Object

		//System.Int32 UnityEngine.Object::GetOffsetOfInstanceIDInCPlusPlusObject()
		void Register_UnityEngine_Object_GetOffsetOfInstanceIDInCPlusPlusObject();
		Register_UnityEngine_Object_GetOffsetOfInstanceIDInCPlusPlusObject();

		//System.String UnityEngine.Object::GetName(UnityEngine.Object)
		void Register_UnityEngine_Object_GetName();
		Register_UnityEngine_Object_GetName();

		//System.String UnityEngine.Object::ToString(UnityEngine.Object)
		void Register_UnityEngine_Object_ToString();
		Register_UnityEngine_Object_ToString();

		//System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
		void Register_UnityEngine_Object_Destroy();
		Register_UnityEngine_Object_Destroy();

		//System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
		void Register_UnityEngine_Object_DestroyImmediate();
		Register_UnityEngine_Object_DestroyImmediate();

		//System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
		void Register_UnityEngine_Object_DontDestroyOnLoad();
		Register_UnityEngine_Object_DontDestroyOnLoad();

		//System.Void UnityEngine.Object::SetName(UnityEngine.Object,System.String)
		void Register_UnityEngine_Object_SetName();
		Register_UnityEngine_Object_SetName();

		//System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
		void Register_UnityEngine_Object_set_hideFlags();
		Register_UnityEngine_Object_set_hideFlags();

		//UnityEngine.Object UnityEngine.Object::FindObjectFromInstanceID(System.Int32)
		void Register_UnityEngine_Object_FindObjectFromInstanceID();
		Register_UnityEngine_Object_FindObjectFromInstanceID();

		//UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
		void Register_UnityEngine_Object_Internal_CloneSingle();
		Register_UnityEngine_Object_Internal_CloneSingle();

		//UnityEngine.Object UnityEngine.Object::Internal_CloneSingleWithParent(UnityEngine.Object,UnityEngine.Transform,System.Boolean)
		void Register_UnityEngine_Object_Internal_CloneSingleWithParent();
		Register_UnityEngine_Object_Internal_CloneSingleWithParent();

		//UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle_Injected(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Object_Internal_InstantiateSingle_Injected();
		Register_UnityEngine_Object_Internal_InstantiateSingle_Injected();

		//UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type,System.Boolean)
		void Register_UnityEngine_Object_FindObjectsOfType();
		Register_UnityEngine_Object_FindObjectsOfType();

	//End Registrations for type : UnityEngine.Object

	//Start Registrations for type : UnityEngine.ParticleSystem

		//System.Void UnityEngine.ParticleSystem::EmitOld_Internal(UnityEngine.ParticleSystem/Particle&)
		void Register_UnityEngine_ParticleSystem_EmitOld_Internal();
		Register_UnityEngine_ParticleSystem_EmitOld_Internal();

		//System.Void UnityEngine.ParticleSystem::Emit_Injected(UnityEngine.ParticleSystem/EmitParams&,System.Int32)
		void Register_UnityEngine_ParticleSystem_Emit_Injected();
		Register_UnityEngine_ParticleSystem_Emit_Injected();

		//System.Void UnityEngine.ParticleSystem::Emit_Internal(System.Int32)
		void Register_UnityEngine_ParticleSystem_Emit_Internal();
		Register_UnityEngine_ParticleSystem_Emit_Internal();

		//System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32,System.Int32)
		void Register_UnityEngine_ParticleSystem_SetParticles();
		Register_UnityEngine_ParticleSystem_SetParticles();

	//End Registrations for type : UnityEngine.ParticleSystem

	//Start Registrations for type : UnityEngine.ParticleSystem/MainModule

		//System.Void UnityEngine.ParticleSystem/MainModule::get_startColor_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxGradient&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_startColor_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_startColor_Injected();

		//System.Void UnityEngine.ParticleSystem/MainModule::get_startSize_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_startSize_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_startSize_Injected();

	//End Registrations for type : UnityEngine.ParticleSystem/MainModule

	//Start Registrations for type : UnityEngine.ParticleSystemRenderer

		//System.Int32 UnityEngine.ParticleSystemRenderer::GetMeshes(UnityEngine.Mesh[])
		void Register_UnityEngine_ParticleSystemRenderer_GetMeshes();
		Register_UnityEngine_ParticleSystemRenderer_GetMeshes();

	//End Registrations for type : UnityEngine.ParticleSystemRenderer

	//Start Registrations for type : UnityEngine.Physics

		//System.Void UnityEngine.Physics::get_defaultPhysicsScene_Injected(UnityEngine.PhysicsScene&)
		void Register_UnityEngine_Physics_get_defaultPhysicsScene_Injected();
		Register_UnityEngine_Physics_get_defaultPhysicsScene_Injected();

		//UnityEngine.RaycastHit[] UnityEngine.Physics::Internal_RaycastAll_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_Physics_Internal_RaycastAll_Injected();
		Register_UnityEngine_Physics_Internal_RaycastAll_Injected();

	//End Registrations for type : UnityEngine.Physics

	//Start Registrations for type : UnityEngine.Physics2D

		//System.Boolean UnityEngine.Physics2D::get_queriesHitTriggers()
		void Register_UnityEngine_Physics2D_get_queriesHitTriggers();
		Register_UnityEngine_Physics2D_get_queriesHitTriggers();

		//UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
		void Register_UnityEngine_Physics2D_GetRayIntersectionAll_Internal_Injected();
		Register_UnityEngine_Physics2D_GetRayIntersectionAll_Internal_Injected();

	//End Registrations for type : UnityEngine.Physics2D

	//Start Registrations for type : UnityEngine.PhysicsScene

		//System.Boolean UnityEngine.PhysicsScene::Internal_RaycastTest_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_PhysicsScene_Internal_RaycastTest_Injected();
		Register_UnityEngine_PhysicsScene_Internal_RaycastTest_Injected();

		//System.Boolean UnityEngine.PhysicsScene::Internal_Raycast_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,System.Single,UnityEngine.RaycastHit&,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_PhysicsScene_Internal_Raycast_Injected();
		Register_UnityEngine_PhysicsScene_Internal_Raycast_Injected();

		//System.Int32 UnityEngine.PhysicsScene::Internal_RaycastNonAlloc_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_PhysicsScene_Internal_RaycastNonAlloc_Injected();
		Register_UnityEngine_PhysicsScene_Internal_RaycastNonAlloc_Injected();

	//End Registrations for type : UnityEngine.PhysicsScene

	//Start Registrations for type : UnityEngine.PhysicsScene2D

		//System.Int32 UnityEngine.PhysicsScene2D::GetRayIntersectionArray_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.RaycastHit2D[])
		void Register_UnityEngine_PhysicsScene2D_GetRayIntersectionArray_Internal_Injected();
		Register_UnityEngine_PhysicsScene2D_GetRayIntersectionArray_Internal_Injected();

		//System.Int32 UnityEngine.PhysicsScene2D::RaycastArray_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D[])
		void Register_UnityEngine_PhysicsScene2D_RaycastArray_Internal_Injected();
		Register_UnityEngine_PhysicsScene2D_RaycastArray_Internal_Injected();

		//System.Int32 UnityEngine.PhysicsScene2D::RaycastList_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>)
		void Register_UnityEngine_PhysicsScene2D_RaycastList_Internal_Injected();
		Register_UnityEngine_PhysicsScene2D_RaycastList_Internal_Injected();

		//System.Void UnityEngine.PhysicsScene2D::Raycast_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D&)
		void Register_UnityEngine_PhysicsScene2D_Raycast_Internal_Injected();
		Register_UnityEngine_PhysicsScene2D_Raycast_Internal_Injected();

	//End Registrations for type : UnityEngine.PhysicsScene2D

	//Start Registrations for type : UnityEngine.Playables.PlayableHandle

		//System.Boolean UnityEngine.Playables.PlayableHandle::IsValid_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_IsValid_Injected();
		Register_UnityEngine_Playables_PlayableHandle_IsValid_Injected();

		//System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_GetPlayableType_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetPlayableType_Injected();

	//End Registrations for type : UnityEngine.Playables.PlayableHandle

	//Start Registrations for type : UnityEngine.PlayerConnectionInternal

		//System.Boolean UnityEngine.PlayerConnectionInternal::IsConnected()
		void Register_UnityEngine_PlayerConnectionInternal_IsConnected();
		Register_UnityEngine_PlayerConnectionInternal_IsConnected();

		//System.Boolean UnityEngine.PlayerConnectionInternal::TrySendMessage(System.String,System.Byte[],System.Int32)
		void Register_UnityEngine_PlayerConnectionInternal_TrySendMessage();
		Register_UnityEngine_PlayerConnectionInternal_TrySendMessage();

		//System.Void UnityEngine.PlayerConnectionInternal::DisconnectAll()
		void Register_UnityEngine_PlayerConnectionInternal_DisconnectAll();
		Register_UnityEngine_PlayerConnectionInternal_DisconnectAll();

		//System.Void UnityEngine.PlayerConnectionInternal::Initialize()
		void Register_UnityEngine_PlayerConnectionInternal_Initialize();
		Register_UnityEngine_PlayerConnectionInternal_Initialize();

		//System.Void UnityEngine.PlayerConnectionInternal::PollInternal()
		void Register_UnityEngine_PlayerConnectionInternal_PollInternal();
		Register_UnityEngine_PlayerConnectionInternal_PollInternal();

		//System.Void UnityEngine.PlayerConnectionInternal::RegisterInternal(System.String)
		void Register_UnityEngine_PlayerConnectionInternal_RegisterInternal();
		Register_UnityEngine_PlayerConnectionInternal_RegisterInternal();

		//System.Void UnityEngine.PlayerConnectionInternal::SendMessage(System.String,System.Byte[],System.Int32)
		void Register_UnityEngine_PlayerConnectionInternal_SendMessage();
		Register_UnityEngine_PlayerConnectionInternal_SendMessage();

		//System.Void UnityEngine.PlayerConnectionInternal::UnregisterInternal(System.String)
		void Register_UnityEngine_PlayerConnectionInternal_UnregisterInternal();
		Register_UnityEngine_PlayerConnectionInternal_UnregisterInternal();

	//End Registrations for type : UnityEngine.PlayerConnectionInternal

	//Start Registrations for type : UnityEngine.Profiling.CustomSampler

		//System.IntPtr UnityEngine.Profiling.CustomSampler::CreateInternal(System.String,System.Boolean)
		void Register_UnityEngine_Profiling_CustomSampler_CreateInternal();
		Register_UnityEngine_Profiling_CustomSampler_CreateInternal();

	//End Registrations for type : UnityEngine.Profiling.CustomSampler

	//Start Registrations for type : UnityEngine.Profiling.Profiler

		//System.Int64 UnityEngine.Profiling.Profiler::GetRuntimeMemorySizeLong(UnityEngine.Object)
		void Register_UnityEngine_Profiling_Profiler_GetRuntimeMemorySizeLong();
		Register_UnityEngine_Profiling_Profiler_GetRuntimeMemorySizeLong();

	//End Registrations for type : UnityEngine.Profiling.Profiler

	//Start Registrations for type : UnityEngine.Profiling.Recorder

		//System.Boolean UnityEngine.Profiling.Recorder::IsEnabled()
		void Register_UnityEngine_Profiling_Recorder_IsEnabled();
		Register_UnityEngine_Profiling_Recorder_IsEnabled();

		//System.Int32 UnityEngine.Profiling.Recorder::GetGpuSampleBlockCount()
		void Register_UnityEngine_Profiling_Recorder_GetGpuSampleBlockCount();
		Register_UnityEngine_Profiling_Recorder_GetGpuSampleBlockCount();

		//System.Int32 UnityEngine.Profiling.Recorder::GetSampleBlockCount()
		void Register_UnityEngine_Profiling_Recorder_GetSampleBlockCount();
		Register_UnityEngine_Profiling_Recorder_GetSampleBlockCount();

		//System.Int64 UnityEngine.Profiling.Recorder::GetElapsedNanoseconds()
		void Register_UnityEngine_Profiling_Recorder_GetElapsedNanoseconds();
		Register_UnityEngine_Profiling_Recorder_GetElapsedNanoseconds();

		//System.Int64 UnityEngine.Profiling.Recorder::GetGpuElapsedNanoseconds()
		void Register_UnityEngine_Profiling_Recorder_GetGpuElapsedNanoseconds();
		Register_UnityEngine_Profiling_Recorder_GetGpuElapsedNanoseconds();

		//System.Void UnityEngine.Profiling.Recorder::DisposeNative(System.IntPtr)
		void Register_UnityEngine_Profiling_Recorder_DisposeNative();
		Register_UnityEngine_Profiling_Recorder_DisposeNative();

		//System.Void UnityEngine.Profiling.Recorder::SetEnabled(System.Boolean)
		void Register_UnityEngine_Profiling_Recorder_SetEnabled();
		Register_UnityEngine_Profiling_Recorder_SetEnabled();

	//End Registrations for type : UnityEngine.Profiling.Recorder

	//Start Registrations for type : UnityEngine.Profiling.Sampler

		//System.IntPtr UnityEngine.Profiling.Sampler::GetRecorderInternal(System.IntPtr)
		void Register_UnityEngine_Profiling_Sampler_GetRecorderInternal();
		Register_UnityEngine_Profiling_Sampler_GetRecorderInternal();

	//End Registrations for type : UnityEngine.Profiling.Sampler

	//Start Registrations for type : UnityEngine.QualitySettings

		//System.Int32 UnityEngine.QualitySettings::get_antiAliasing()
		void Register_UnityEngine_QualitySettings_get_antiAliasing();
		Register_UnityEngine_QualitySettings_get_antiAliasing();

		//System.Int32 UnityEngine.QualitySettings::get_maxQueuedFrames()
		void Register_UnityEngine_QualitySettings_get_maxQueuedFrames();
		Register_UnityEngine_QualitySettings_get_maxQueuedFrames();

		//System.Void UnityEngine.QualitySettings::set_antiAliasing(System.Int32)
		void Register_UnityEngine_QualitySettings_set_antiAliasing();
		Register_UnityEngine_QualitySettings_set_antiAliasing();

		//System.Void UnityEngine.QualitySettings::set_vSyncCount(System.Int32)
		void Register_UnityEngine_QualitySettings_set_vSyncCount();
		Register_UnityEngine_QualitySettings_set_vSyncCount();

		//UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
		void Register_UnityEngine_QualitySettings_get_activeColorSpace();
		Register_UnityEngine_QualitySettings_get_activeColorSpace();

		//UnityEngine.ShadowmaskMode UnityEngine.QualitySettings::get_shadowmaskMode()
		void Register_UnityEngine_QualitySettings_get_shadowmaskMode();
		Register_UnityEngine_QualitySettings_get_shadowmaskMode();

	//End Registrations for type : UnityEngine.QualitySettings

	//Start Registrations for type : UnityEngine.Quaternion

		//System.Void UnityEngine.Quaternion::Internal_FromEulerRad_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_Internal_FromEulerRad_Injected();
		Register_UnityEngine_Quaternion_Internal_FromEulerRad_Injected();

		//System.Void UnityEngine.Quaternion::Internal_ToEulerRad_Injected(UnityEngine.Quaternion&,UnityEngine.Vector3&)
		void Register_UnityEngine_Quaternion_Internal_ToEulerRad_Injected();
		Register_UnityEngine_Quaternion_Internal_ToEulerRad_Injected();

		//System.Void UnityEngine.Quaternion::Inverse_Injected(UnityEngine.Quaternion&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_Inverse_Injected();
		Register_UnityEngine_Quaternion_Inverse_Injected();

	//End Registrations for type : UnityEngine.Quaternion

	//Start Registrations for type : UnityEngine.Random

		//System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
		void Register_UnityEngine_Random_RandomRangeInt();
		Register_UnityEngine_Random_RandomRangeInt();

		//System.Single UnityEngine.Random::get_value()
		void Register_UnityEngine_Random_get_value();
		Register_UnityEngine_Random_get_value();

	//End Registrations for type : UnityEngine.Random

	//Start Registrations for type : UnityEngine.RectOffset

		//System.Int32 UnityEngine.RectOffset::get_bottom()
		void Register_UnityEngine_RectOffset_get_bottom();
		Register_UnityEngine_RectOffset_get_bottom();

		//System.Int32 UnityEngine.RectOffset::get_horizontal()
		void Register_UnityEngine_RectOffset_get_horizontal();
		Register_UnityEngine_RectOffset_get_horizontal();

		//System.Int32 UnityEngine.RectOffset::get_left()
		void Register_UnityEngine_RectOffset_get_left();
		Register_UnityEngine_RectOffset_get_left();

		//System.Int32 UnityEngine.RectOffset::get_right()
		void Register_UnityEngine_RectOffset_get_right();
		Register_UnityEngine_RectOffset_get_right();

		//System.Int32 UnityEngine.RectOffset::get_top()
		void Register_UnityEngine_RectOffset_get_top();
		Register_UnityEngine_RectOffset_get_top();

		//System.Int32 UnityEngine.RectOffset::get_vertical()
		void Register_UnityEngine_RectOffset_get_vertical();
		Register_UnityEngine_RectOffset_get_vertical();

		//System.IntPtr UnityEngine.RectOffset::InternalCreate()
		void Register_UnityEngine_RectOffset_InternalCreate();
		Register_UnityEngine_RectOffset_InternalCreate();

		//System.Void UnityEngine.RectOffset::InternalDestroy(System.IntPtr)
		void Register_UnityEngine_RectOffset_InternalDestroy();
		Register_UnityEngine_RectOffset_InternalDestroy();

	//End Registrations for type : UnityEngine.RectOffset

	//Start Registrations for type : UnityEngine.RectTransform

		//System.Void UnityEngine.RectTransform::get_anchorMax_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_get_anchorMax_Injected();
		Register_UnityEngine_RectTransform_get_anchorMax_Injected();

		//System.Void UnityEngine.RectTransform::get_anchorMin_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_get_anchorMin_Injected();
		Register_UnityEngine_RectTransform_get_anchorMin_Injected();

		//System.Void UnityEngine.RectTransform::get_anchoredPosition_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_get_anchoredPosition_Injected();
		Register_UnityEngine_RectTransform_get_anchoredPosition_Injected();

		//System.Void UnityEngine.RectTransform::get_pivot_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_get_pivot_Injected();
		Register_UnityEngine_RectTransform_get_pivot_Injected();

		//System.Void UnityEngine.RectTransform::get_rect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_RectTransform_get_rect_Injected();
		Register_UnityEngine_RectTransform_get_rect_Injected();

		//System.Void UnityEngine.RectTransform::get_sizeDelta_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_get_sizeDelta_Injected();
		Register_UnityEngine_RectTransform_get_sizeDelta_Injected();

		//System.Void UnityEngine.RectTransform::set_anchorMax_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_set_anchorMax_Injected();
		Register_UnityEngine_RectTransform_set_anchorMax_Injected();

		//System.Void UnityEngine.RectTransform::set_anchorMin_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_set_anchorMin_Injected();
		Register_UnityEngine_RectTransform_set_anchorMin_Injected();

		//System.Void UnityEngine.RectTransform::set_anchoredPosition_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_set_anchoredPosition_Injected();
		Register_UnityEngine_RectTransform_set_anchoredPosition_Injected();

		//System.Void UnityEngine.RectTransform::set_pivot_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_set_pivot_Injected();
		Register_UnityEngine_RectTransform_set_pivot_Injected();

		//System.Void UnityEngine.RectTransform::set_sizeDelta_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_set_sizeDelta_Injected();
		Register_UnityEngine_RectTransform_set_sizeDelta_Injected();

	//End Registrations for type : UnityEngine.RectTransform

	//Start Registrations for type : UnityEngine.RectTransformUtility

		//System.Boolean UnityEngine.RectTransformUtility::PointInRectangle_Injected(UnityEngine.Vector2&,UnityEngine.RectTransform,UnityEngine.Camera,UnityEngine.Vector4&)
		void Register_UnityEngine_RectTransformUtility_PointInRectangle_Injected();
		Register_UnityEngine_RectTransformUtility_PointInRectangle_Injected();

		//System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint_Injected(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransformUtility_PixelAdjustPoint_Injected();
		Register_UnityEngine_RectTransformUtility_PixelAdjustPoint_Injected();

		//System.Void UnityEngine.RectTransformUtility::PixelAdjustRect_Injected(UnityEngine.RectTransform,UnityEngine.Canvas,UnityEngine.Rect&)
		void Register_UnityEngine_RectTransformUtility_PixelAdjustRect_Injected();
		Register_UnityEngine_RectTransformUtility_PixelAdjustRect_Injected();

	//End Registrations for type : UnityEngine.RectTransformUtility

	//Start Registrations for type : UnityEngine.ReflectionProbe

		//System.Void UnityEngine.ReflectionProbe::get_size_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_ReflectionProbe_get_size_Injected();
		Register_UnityEngine_ReflectionProbe_get_size_Injected();

		//System.Void UnityEngine.ReflectionProbe::set_boxProjection(System.Boolean)
		void Register_UnityEngine_ReflectionProbe_set_boxProjection();
		Register_UnityEngine_ReflectionProbe_set_boxProjection();

		//System.Void UnityEngine.ReflectionProbe::set_center_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_ReflectionProbe_set_center_Injected();
		Register_UnityEngine_ReflectionProbe_set_center_Injected();

		//System.Void UnityEngine.ReflectionProbe::set_customBakedTexture(UnityEngine.Texture)
		void Register_UnityEngine_ReflectionProbe_set_customBakedTexture();
		Register_UnityEngine_ReflectionProbe_set_customBakedTexture();

		//System.Void UnityEngine.ReflectionProbe::set_mode(UnityEngine.Rendering.ReflectionProbeMode)
		void Register_UnityEngine_ReflectionProbe_set_mode();
		Register_UnityEngine_ReflectionProbe_set_mode();

		//System.Void UnityEngine.ReflectionProbe::set_size_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_ReflectionProbe_set_size_Injected();
		Register_UnityEngine_ReflectionProbe_set_size_Injected();

		//UnityEngine.Texture UnityEngine.ReflectionProbe::get_customBakedTexture()
		void Register_UnityEngine_ReflectionProbe_get_customBakedTexture();
		Register_UnityEngine_ReflectionProbe_get_customBakedTexture();

	//End Registrations for type : UnityEngine.ReflectionProbe

	//Start Registrations for type : UnityEngine.Renderer

		//System.Boolean UnityEngine.Renderer::get_enabled()
		void Register_UnityEngine_Renderer_get_enabled();
		Register_UnityEngine_Renderer_get_enabled();

		//System.Int32 UnityEngine.Renderer::get_sortingLayerID()
		void Register_UnityEngine_Renderer_get_sortingLayerID();
		Register_UnityEngine_Renderer_get_sortingLayerID();

		//System.Int32 UnityEngine.Renderer::get_sortingOrder()
		void Register_UnityEngine_Renderer_get_sortingOrder();
		Register_UnityEngine_Renderer_get_sortingOrder();

		//System.Void UnityEngine.Renderer::get_bounds_Injected(UnityEngine.Bounds&)
		void Register_UnityEngine_Renderer_get_bounds_Injected();
		Register_UnityEngine_Renderer_get_bounds_Injected();

		//System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
		void Register_UnityEngine_Renderer_set_enabled();
		Register_UnityEngine_Renderer_set_enabled();

	//End Registrations for type : UnityEngine.Renderer

	//Start Registrations for type : UnityEngine.Rendering.CommandBuffer

		//System.Boolean UnityEngine.Rendering.CommandBuffer::ValidateAgainstExecutionFlags(UnityEngine.Rendering.CommandBufferExecutionFlags,UnityEngine.Rendering.CommandBufferExecutionFlags)
		void Register_UnityEngine_Rendering_CommandBuffer_ValidateAgainstExecutionFlags();
		Register_UnityEngine_Rendering_CommandBuffer_ValidateAgainstExecutionFlags();

		//System.IntPtr UnityEngine.Rendering.CommandBuffer::CreateGPUFence_Internal(UnityEngine.Rendering.GraphicsFenceType,UnityEngine.Rendering.SynchronisationStageFlags)
		void Register_UnityEngine_Rendering_CommandBuffer_CreateGPUFence_Internal();
		Register_UnityEngine_Rendering_CommandBuffer_CreateGPUFence_Internal();

		//System.IntPtr UnityEngine.Rendering.CommandBuffer::InitBuffer()
		void Register_UnityEngine_Rendering_CommandBuffer_InitBuffer();
		Register_UnityEngine_Rendering_CommandBuffer_InitBuffer();

		//System.Void UnityEngine.Rendering.CommandBuffer::BeginSample(System.String)
		void Register_UnityEngine_Rendering_CommandBuffer_BeginSample();
		Register_UnityEngine_Rendering_CommandBuffer_BeginSample();

		//System.Void UnityEngine.Rendering.CommandBuffer::BeginSample_CustomSampler(UnityEngine.Profiling.CustomSampler)
		void Register_UnityEngine_Rendering_CommandBuffer_BeginSample_CustomSampler();
		Register_UnityEngine_Rendering_CommandBuffer_BeginSample_CustomSampler();

		//System.Void UnityEngine.Rendering.CommandBuffer::Blit_Identifier_Injected(UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Material,System.Int32,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Int32,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_Blit_Identifier_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_Blit_Identifier_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::Blit_Texture_Injected(UnityEngine.Texture,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Material,System.Int32,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Int32,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_Blit_Texture_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_Blit_Texture_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::Clear()
		void Register_UnityEngine_Rendering_CommandBuffer_Clear();
		Register_UnityEngine_Rendering_CommandBuffer_Clear();

		//System.Void UnityEngine.Rendering.CommandBuffer::ClearRenderTarget_Injected(System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)
		void Register_UnityEngine_Rendering_CommandBuffer_ClearRenderTarget_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_ClearRenderTarget_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::DisableScissorRect()
		void Register_UnityEngine_Rendering_CommandBuffer_DisableScissorRect();
		Register_UnityEngine_Rendering_CommandBuffer_DisableScissorRect();

		//System.Void UnityEngine.Rendering.CommandBuffer::DisableShaderKeyword(System.String)
		void Register_UnityEngine_Rendering_CommandBuffer_DisableShaderKeyword();
		Register_UnityEngine_Rendering_CommandBuffer_DisableShaderKeyword();

		//System.Void UnityEngine.Rendering.CommandBuffer::EnableScissorRect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Rendering_CommandBuffer_EnableScissorRect_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_EnableScissorRect_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::EnableShaderKeyword(System.String)
		void Register_UnityEngine_Rendering_CommandBuffer_EnableShaderKeyword();
		Register_UnityEngine_Rendering_CommandBuffer_EnableShaderKeyword();

		//System.Void UnityEngine.Rendering.CommandBuffer::EndSample(System.String)
		void Register_UnityEngine_Rendering_CommandBuffer_EndSample();
		Register_UnityEngine_Rendering_CommandBuffer_EndSample();

		//System.Void UnityEngine.Rendering.CommandBuffer::EndSample_CustomSampler(UnityEngine.Profiling.CustomSampler)
		void Register_UnityEngine_Rendering_CommandBuffer_EndSample_CustomSampler();
		Register_UnityEngine_Rendering_CommandBuffer_EndSample_CustomSampler();

		//System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRTWithDescriptor_Injected(System.Int32,UnityEngine.RenderTextureDescriptor&,UnityEngine.FilterMode)
		void Register_UnityEngine_Rendering_CommandBuffer_GetTemporaryRTWithDescriptor_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_GetTemporaryRTWithDescriptor_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::InternalSetComputeBufferData(UnityEngine.ComputeBuffer,System.Array,System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_InternalSetComputeBufferData();
		Register_UnityEngine_Rendering_CommandBuffer_InternalSetComputeBufferData();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_DispatchCompute(UnityEngine.ComputeShader,System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_DispatchCompute();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_DispatchCompute();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_DrawMesh_Injected(UnityEngine.Mesh,UnityEngine.Matrix4x4&,UnityEngine.Material,System.Int32,System.Int32,UnityEngine.MaterialPropertyBlock)
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_DrawMesh_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_DrawMesh_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_DrawOcclusionMesh_Injected(UnityEngine.RectInt&)
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_DrawOcclusionMesh_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_DrawOcclusionMesh_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_DrawProcedural_Injected(UnityEngine.Matrix4x4&,UnityEngine.Material,System.Int32,UnityEngine.MeshTopology,System.Int32,System.Int32,UnityEngine.MaterialPropertyBlock)
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_DrawProcedural_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_DrawProcedural_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_DrawRenderer(UnityEngine.Renderer,UnityEngine.Material,System.Int32,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_DrawRenderer();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_DrawRenderer();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_SetComputeConstantComputeBufferParam(UnityEngine.ComputeShader,System.Int32,UnityEngine.ComputeBuffer,System.Int32,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_SetComputeConstantComputeBufferParam();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_SetComputeConstantComputeBufferParam();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_SetComputeTextureParam(UnityEngine.ComputeShader,System.Int32,System.Int32,UnityEngine.Rendering.RenderTargetIdentifier&,System.Int32,UnityEngine.Rendering.RenderTextureSubElement)
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_SetComputeTextureParam();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_SetComputeTextureParam();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_SetSinglePassStereo(UnityEngine.Rendering.SinglePassStereoMode)
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_SetSinglePassStereo();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_SetSinglePassStereo();

		//System.Void UnityEngine.Rendering.CommandBuffer::IssuePluginEventInternal(System.IntPtr,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_IssuePluginEventInternal();
		Register_UnityEngine_Rendering_CommandBuffer_IssuePluginEventInternal();

		//System.Void UnityEngine.Rendering.CommandBuffer::MarkLateLatchMatrixShaderPropertyID(UnityEngine.Rendering.CameraLateLatchMatrixType,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_MarkLateLatchMatrixShaderPropertyID();
		Register_UnityEngine_Rendering_CommandBuffer_MarkLateLatchMatrixShaderPropertyID();

		//System.Void UnityEngine.Rendering.CommandBuffer::ReleaseBuffer()
		void Register_UnityEngine_Rendering_CommandBuffer_ReleaseBuffer();
		Register_UnityEngine_Rendering_CommandBuffer_ReleaseBuffer();

		//System.Void UnityEngine.Rendering.CommandBuffer::ReleaseTemporaryRT(System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_ReleaseTemporaryRT();
		Register_UnityEngine_Rendering_CommandBuffer_ReleaseTemporaryRT();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetExecutionFlags(UnityEngine.Rendering.CommandBufferExecutionFlags)
		void Register_UnityEngine_Rendering_CommandBuffer_SetExecutionFlags();
		Register_UnityEngine_Rendering_CommandBuffer_SetExecutionFlags();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalBufferInternal(System.Int32,UnityEngine.ComputeBuffer)
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalBufferInternal();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalBufferInternal();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalColor_Injected(System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalColor_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalColor_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalConstantBufferInternal(UnityEngine.ComputeBuffer,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalConstantBufferInternal();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalConstantBufferInternal();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalFloat(System.Int32,System.Single)
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalFloat();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalFloat();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalInt(System.Int32,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalInt();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalInt();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalMatrixArray(System.Int32,UnityEngine.Matrix4x4[])
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalMatrixArray();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalMatrixArray();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalMatrix_Injected(System.Int32,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalMatrix_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalMatrix_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalTexture_Impl(System.Int32,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderTextureSubElement)
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalTexture_Impl();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalTexture_Impl();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalVectorArray(System.Int32,UnityEngine.Vector4[])
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalVectorArray();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalVectorArray();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalVector_Injected(System.Int32,UnityEngine.Vector4&)
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalVector_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalVector_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetInstanceMultiplier(System.UInt32)
		void Register_UnityEngine_Rendering_CommandBuffer_SetInstanceMultiplier();
		Register_UnityEngine_Rendering_CommandBuffer_SetInstanceMultiplier();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetInvertCulling(System.Boolean)
		void Register_UnityEngine_Rendering_CommandBuffer_SetInvertCulling();
		Register_UnityEngine_Rendering_CommandBuffer_SetInvertCulling();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetLateLatchProjectionMatrices(UnityEngine.Matrix4x4[])
		void Register_UnityEngine_Rendering_CommandBuffer_SetLateLatchProjectionMatrices();
		Register_UnityEngine_Rendering_CommandBuffer_SetLateLatchProjectionMatrices();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTargetColorDepth_Internal_Injected(UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction,UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction,UnityEngine.Rendering.RenderTargetFlags)
		void Register_UnityEngine_Rendering_CommandBuffer_SetRenderTargetColorDepth_Internal_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetRenderTargetColorDepth_Internal_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTargetMultiSubtarget_Injected(UnityEngine.Rendering.RenderTargetIdentifier[],UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderBufferLoadAction[],UnityEngine.Rendering.RenderBufferStoreAction[],UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction,System.Int32,UnityEngine.CubemapFace,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_SetRenderTargetMultiSubtarget_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetRenderTargetMultiSubtarget_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTargetSingle_Internal_Injected(UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction,UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction)
		void Register_UnityEngine_Rendering_CommandBuffer_SetRenderTargetSingle_Internal_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetRenderTargetSingle_Internal_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetViewProjectionMatrices_Injected(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Rendering_CommandBuffer_SetViewProjectionMatrices_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetViewProjectionMatrices_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetViewport_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Rendering_CommandBuffer_SetViewport_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetViewport_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::UnmarkLateLatchMatrix(UnityEngine.Rendering.CameraLateLatchMatrixType)
		void Register_UnityEngine_Rendering_CommandBuffer_UnmarkLateLatchMatrix();
		Register_UnityEngine_Rendering_CommandBuffer_UnmarkLateLatchMatrix();

		//System.Void UnityEngine.Rendering.CommandBuffer::WaitOnGPUFence_Internal(System.IntPtr,UnityEngine.Rendering.SynchronisationStageFlags)
		void Register_UnityEngine_Rendering_CommandBuffer_WaitOnGPUFence_Internal();
		Register_UnityEngine_Rendering_CommandBuffer_WaitOnGPUFence_Internal();

		//System.Void UnityEngine.Rendering.CommandBuffer::set_name(System.String)
		void Register_UnityEngine_Rendering_CommandBuffer_set_name();
		Register_UnityEngine_Rendering_CommandBuffer_set_name();

	//End Registrations for type : UnityEngine.Rendering.CommandBuffer

	//Start Registrations for type : UnityEngine.Rendering.CommandBufferExtensions

		//System.Void UnityEngine.Rendering.CommandBufferExtensions::Internal_SwitchIntoFastMemory(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.FastMemoryFlags,System.Single,System.Boolean)
		void Register_UnityEngine_Rendering_CommandBufferExtensions_Internal_SwitchIntoFastMemory();
		Register_UnityEngine_Rendering_CommandBufferExtensions_Internal_SwitchIntoFastMemory();

		//System.Void UnityEngine.Rendering.CommandBufferExtensions::Internal_SwitchOutOfFastMemory(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier&,System.Boolean)
		void Register_UnityEngine_Rendering_CommandBufferExtensions_Internal_SwitchOutOfFastMemory();
		Register_UnityEngine_Rendering_CommandBufferExtensions_Internal_SwitchOutOfFastMemory();

	//End Registrations for type : UnityEngine.Rendering.CommandBufferExtensions

	//Start Registrations for type : UnityEngine.Rendering.CullingResults

		//System.Boolean UnityEngine.Rendering.CullingResults::ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected(System.IntPtr,System.Int32,System.Int32,System.Int32,UnityEngine.Vector3&,System.Int32,System.Single,UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&,UnityEngine.Rendering.ShadowSplitData&)
		void Register_UnityEngine_Rendering_CullingResults_ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected();
		Register_UnityEngine_Rendering_CullingResults_ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected();

		//System.Boolean UnityEngine.Rendering.CullingResults::ComputeSpotShadowMatricesAndCullingPrimitives(System.IntPtr,System.Int32,UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&,UnityEngine.Rendering.ShadowSplitData&)
		void Register_UnityEngine_Rendering_CullingResults_ComputeSpotShadowMatricesAndCullingPrimitives();
		Register_UnityEngine_Rendering_CullingResults_ComputeSpotShadowMatricesAndCullingPrimitives();

		//System.Boolean UnityEngine.Rendering.CullingResults::GetShadowCasterBounds(System.IntPtr,System.Int32,UnityEngine.Bounds&)
		void Register_UnityEngine_Rendering_CullingResults_GetShadowCasterBounds();
		Register_UnityEngine_Rendering_CullingResults_GetShadowCasterBounds();

		//System.Int32 UnityEngine.Rendering.CullingResults::GetLightIndexCount(System.IntPtr)
		void Register_UnityEngine_Rendering_CullingResults_GetLightIndexCount();
		Register_UnityEngine_Rendering_CullingResults_GetLightIndexCount();

		//System.Int32 UnityEngine.Rendering.CullingResults::GetLightIndexMapSize(System.IntPtr)
		void Register_UnityEngine_Rendering_CullingResults_GetLightIndexMapSize();
		Register_UnityEngine_Rendering_CullingResults_GetLightIndexMapSize();

		//System.Int32 UnityEngine.Rendering.CullingResults::GetReflectionProbeIndexCount(System.IntPtr)
		void Register_UnityEngine_Rendering_CullingResults_GetReflectionProbeIndexCount();
		Register_UnityEngine_Rendering_CullingResults_GetReflectionProbeIndexCount();

		//System.Void UnityEngine.Rendering.CullingResults::FillLightAndReflectionProbeIndices(System.IntPtr,UnityEngine.ComputeBuffer)
		void Register_UnityEngine_Rendering_CullingResults_FillLightAndReflectionProbeIndices();
		Register_UnityEngine_Rendering_CullingResults_FillLightAndReflectionProbeIndices();

		//System.Void UnityEngine.Rendering.CullingResults::FillLightIndexMap(System.IntPtr,System.IntPtr,System.Int32)
		void Register_UnityEngine_Rendering_CullingResults_FillLightIndexMap();
		Register_UnityEngine_Rendering_CullingResults_FillLightIndexMap();

		//System.Void UnityEngine.Rendering.CullingResults::SetLightIndexMap(System.IntPtr,System.IntPtr,System.Int32)
		void Register_UnityEngine_Rendering_CullingResults_SetLightIndexMap();
		Register_UnityEngine_Rendering_CullingResults_SetLightIndexMap();

	//End Registrations for type : UnityEngine.Rendering.CullingResults

	//Start Registrations for type : UnityEngine.Rendering.GraphicsFence

		//System.Int32 UnityEngine.Rendering.GraphicsFence::GetVersionNumber(System.IntPtr)
		void Register_UnityEngine_Rendering_GraphicsFence_GetVersionNumber();
		Register_UnityEngine_Rendering_GraphicsFence_GetVersionNumber();

	//End Registrations for type : UnityEngine.Rendering.GraphicsFence

	//Start Registrations for type : UnityEngine.Rendering.GraphicsSettings

		//System.Boolean UnityEngine.Rendering.GraphicsSettings::HasShaderDefine(UnityEngine.Rendering.GraphicsTier,UnityEngine.Rendering.BuiltinShaderDefine)
		void Register_UnityEngine_Rendering_GraphicsSettings_HasShaderDefine();
		Register_UnityEngine_Rendering_GraphicsSettings_HasShaderDefine();

		//System.Boolean UnityEngine.Rendering.GraphicsSettings::get_lightsUseLinearIntensity()
		void Register_UnityEngine_Rendering_GraphicsSettings_get_lightsUseLinearIntensity();
		Register_UnityEngine_Rendering_GraphicsSettings_get_lightsUseLinearIntensity();

		//System.Void UnityEngine.Rendering.GraphicsSettings::set_INTERNAL_defaultRenderPipeline(UnityEngine.ScriptableObject)
		void Register_UnityEngine_Rendering_GraphicsSettings_set_INTERNAL_defaultRenderPipeline();
		Register_UnityEngine_Rendering_GraphicsSettings_set_INTERNAL_defaultRenderPipeline();

		//System.Void UnityEngine.Rendering.GraphicsSettings::set_lightsUseLinearIntensity(System.Boolean)
		void Register_UnityEngine_Rendering_GraphicsSettings_set_lightsUseLinearIntensity();
		Register_UnityEngine_Rendering_GraphicsSettings_set_lightsUseLinearIntensity();

		//System.Void UnityEngine.Rendering.GraphicsSettings::set_useScriptableRenderPipelineBatching(System.Boolean)
		void Register_UnityEngine_Rendering_GraphicsSettings_set_useScriptableRenderPipelineBatching();
		Register_UnityEngine_Rendering_GraphicsSettings_set_useScriptableRenderPipelineBatching();

		//UnityEngine.ScriptableObject UnityEngine.Rendering.GraphicsSettings::get_INTERNAL_currentRenderPipeline()
		void Register_UnityEngine_Rendering_GraphicsSettings_get_INTERNAL_currentRenderPipeline();
		Register_UnityEngine_Rendering_GraphicsSettings_get_INTERNAL_currentRenderPipeline();

		//UnityEngine.ScriptableObject UnityEngine.Rendering.GraphicsSettings::get_INTERNAL_defaultRenderPipeline()
		void Register_UnityEngine_Rendering_GraphicsSettings_get_INTERNAL_defaultRenderPipeline();
		Register_UnityEngine_Rendering_GraphicsSettings_get_INTERNAL_defaultRenderPipeline();

	//End Registrations for type : UnityEngine.Rendering.GraphicsSettings

	//Start Registrations for type : UnityEngine.Rendering.ScriptableRenderContext

		//System.Int32 UnityEngine.Rendering.ScriptableRenderContext::GetNumberOfCameras_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_GetNumberOfCameras_Internal_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_GetNumberOfCameras_Internal_Injected();

		//System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawRenderers_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.IntPtr,UnityEngine.Rendering.DrawingSettings&,UnityEngine.Rendering.FilteringSettings&,UnityEngine.Rendering.ShaderTagId&,System.Boolean,System.IntPtr,System.IntPtr,System.Int32)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_DrawRenderers_Internal_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_DrawRenderers_Internal_Injected();

		//System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawShadows_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.IntPtr)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_DrawShadows_Internal_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_DrawShadows_Internal_Injected();

		//System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawSkybox_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Camera)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_DrawSkybox_Internal_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_DrawSkybox_Internal_Injected();

		//System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawWireOverlay_Impl_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Camera)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_DrawWireOverlay_Impl_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_DrawWireOverlay_Impl_Injected();

		//System.Void UnityEngine.Rendering.ScriptableRenderContext::ExecuteCommandBufferAsync_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.ComputeQueueType)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_ExecuteCommandBufferAsync_Internal_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_ExecuteCommandBufferAsync_Internal_Injected();

		//System.Void UnityEngine.Rendering.ScriptableRenderContext::ExecuteCommandBuffer_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Rendering.CommandBuffer)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_ExecuteCommandBuffer_Internal_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_ExecuteCommandBuffer_Internal_Injected();

		//System.Void UnityEngine.Rendering.ScriptableRenderContext::InitializeSortSettings(UnityEngine.Camera,UnityEngine.Rendering.SortingSettings&)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_InitializeSortSettings();
		Register_UnityEngine_Rendering_ScriptableRenderContext_InitializeSortSettings();

		//System.Void UnityEngine.Rendering.ScriptableRenderContext::Internal_Cull_Injected(UnityEngine.Rendering.ScriptableCullingParameters&,UnityEngine.Rendering.ScriptableRenderContext&,System.IntPtr)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_Internal_Cull_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_Internal_Cull_Injected();

		//System.Void UnityEngine.Rendering.ScriptableRenderContext::InvokeOnRenderObjectCallback_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_InvokeOnRenderObjectCallback_Internal_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_InvokeOnRenderObjectCallback_Internal_Injected();

		//System.Void UnityEngine.Rendering.ScriptableRenderContext::SetupCameraProperties_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Camera,System.Boolean,System.Int32)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_SetupCameraProperties_Internal_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_SetupCameraProperties_Internal_Injected();

		//System.Void UnityEngine.Rendering.ScriptableRenderContext::Submit_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_Submit_Internal_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_Submit_Internal_Injected();

		//UnityEngine.Camera UnityEngine.Rendering.ScriptableRenderContext::GetCamera_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Int32)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_GetCamera_Internal_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_GetCamera_Internal_Injected();

	//End Registrations for type : UnityEngine.Rendering.ScriptableRenderContext

	//Start Registrations for type : UnityEngine.Rendering.ShaderKeyword

		//System.Int32 UnityEngine.Rendering.ShaderKeyword::GetGlobalKeywordIndex(System.String)
		void Register_UnityEngine_Rendering_ShaderKeyword_GetGlobalKeywordIndex();
		Register_UnityEngine_Rendering_ShaderKeyword_GetGlobalKeywordIndex();

	//End Registrations for type : UnityEngine.Rendering.ShaderKeyword

	//Start Registrations for type : UnityEngine.RenderSettings

		//System.Boolean UnityEngine.RenderSettings::get_fog()
		void Register_UnityEngine_RenderSettings_get_fog();
		Register_UnityEngine_RenderSettings_get_fog();

		//System.Single UnityEngine.RenderSettings::get_reflectionIntensity()
		void Register_UnityEngine_RenderSettings_get_reflectionIntensity();
		Register_UnityEngine_RenderSettings_get_reflectionIntensity();

		//System.Void UnityEngine.RenderSettings::get_ambientEquatorColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_RenderSettings_get_ambientEquatorColor_Injected();
		Register_UnityEngine_RenderSettings_get_ambientEquatorColor_Injected();

		//System.Void UnityEngine.RenderSettings::get_ambientGroundColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_RenderSettings_get_ambientGroundColor_Injected();
		Register_UnityEngine_RenderSettings_get_ambientGroundColor_Injected();

		//System.Void UnityEngine.RenderSettings::get_ambientProbe_Injected(UnityEngine.Rendering.SphericalHarmonicsL2&)
		void Register_UnityEngine_RenderSettings_get_ambientProbe_Injected();
		Register_UnityEngine_RenderSettings_get_ambientProbe_Injected();

		//System.Void UnityEngine.RenderSettings::get_ambientSkyColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_RenderSettings_get_ambientSkyColor_Injected();
		Register_UnityEngine_RenderSettings_get_ambientSkyColor_Injected();

		//System.Void UnityEngine.RenderSettings::get_subtractiveShadowColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_RenderSettings_get_subtractiveShadowColor_Injected();
		Register_UnityEngine_RenderSettings_get_subtractiveShadowColor_Injected();

		//UnityEngine.Light UnityEngine.RenderSettings::get_sun()
		void Register_UnityEngine_RenderSettings_get_sun();
		Register_UnityEngine_RenderSettings_get_sun();

		//UnityEngine.Material UnityEngine.RenderSettings::get_skybox()
		void Register_UnityEngine_RenderSettings_get_skybox();
		Register_UnityEngine_RenderSettings_get_skybox();

	//End Registrations for type : UnityEngine.RenderSettings

	//Start Registrations for type : UnityEngine.RenderTexture

		//System.Boolean UnityEngine.RenderTexture::Create()
		void Register_UnityEngine_RenderTexture_Create();
		Register_UnityEngine_RenderTexture_Create();

		//System.Boolean UnityEngine.RenderTexture::get_sRGB()
		void Register_UnityEngine_RenderTexture_get_sRGB();
		Register_UnityEngine_RenderTexture_get_sRGB();

		//System.Boolean UnityEngine.RenderTexture::get_useDynamicScale()
		void Register_UnityEngine_RenderTexture_get_useDynamicScale();
		Register_UnityEngine_RenderTexture_get_useDynamicScale();

		//System.Boolean UnityEngine.RenderTexture::get_useMipMap()
		void Register_UnityEngine_RenderTexture_get_useMipMap();
		Register_UnityEngine_RenderTexture_get_useMipMap();

		//System.Int32 UnityEngine.RenderTexture::get_antiAliasing()
		void Register_UnityEngine_RenderTexture_get_antiAliasing();
		Register_UnityEngine_RenderTexture_get_antiAliasing();

		//System.Int32 UnityEngine.RenderTexture::get_height()
		void Register_UnityEngine_RenderTexture_get_height();
		Register_UnityEngine_RenderTexture_get_height();

		//System.Int32 UnityEngine.RenderTexture::get_volumeDepth()
		void Register_UnityEngine_RenderTexture_get_volumeDepth();
		Register_UnityEngine_RenderTexture_get_volumeDepth();

		//System.Int32 UnityEngine.RenderTexture::get_width()
		void Register_UnityEngine_RenderTexture_get_width();
		Register_UnityEngine_RenderTexture_get_width();

		//System.Void UnityEngine.RenderTexture::GetDescriptor_Injected(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_RenderTexture_GetDescriptor_Injected();
		Register_UnityEngine_RenderTexture_GetDescriptor_Injected();

		//System.Void UnityEngine.RenderTexture::Internal_Create(UnityEngine.RenderTexture)
		void Register_UnityEngine_RenderTexture_Internal_Create();
		Register_UnityEngine_RenderTexture_Internal_Create();

		//System.Void UnityEngine.RenderTexture::Release()
		void Register_UnityEngine_RenderTexture_Release();
		Register_UnityEngine_RenderTexture_Release();

		//System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
		void Register_UnityEngine_RenderTexture_ReleaseTemporary();
		Register_UnityEngine_RenderTexture_ReleaseTemporary();

		//System.Void UnityEngine.RenderTexture::SetRenderTextureDescriptor_Injected(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_RenderTexture_SetRenderTextureDescriptor_Injected();
		Register_UnityEngine_RenderTexture_SetRenderTextureDescriptor_Injected();

		//System.Void UnityEngine.RenderTexture::SetSRGBReadWrite(System.Boolean)
		void Register_UnityEngine_RenderTexture_SetSRGBReadWrite();
		Register_UnityEngine_RenderTexture_SetSRGBReadWrite();

		//System.Void UnityEngine.RenderTexture::set_antiAliasing(System.Int32)
		void Register_UnityEngine_RenderTexture_set_antiAliasing();
		Register_UnityEngine_RenderTexture_set_antiAliasing();

		//System.Void UnityEngine.RenderTexture::set_autoGenerateMips(System.Boolean)
		void Register_UnityEngine_RenderTexture_set_autoGenerateMips();
		Register_UnityEngine_RenderTexture_set_autoGenerateMips();

		//System.Void UnityEngine.RenderTexture::set_bindTextureMS(System.Boolean)
		void Register_UnityEngine_RenderTexture_set_bindTextureMS();
		Register_UnityEngine_RenderTexture_set_bindTextureMS();

		//System.Void UnityEngine.RenderTexture::set_depth(System.Int32)
		void Register_UnityEngine_RenderTexture_set_depth();
		Register_UnityEngine_RenderTexture_set_depth();

		//System.Void UnityEngine.RenderTexture::set_dimension(UnityEngine.Rendering.TextureDimension)
		void Register_UnityEngine_RenderTexture_set_dimension();
		Register_UnityEngine_RenderTexture_set_dimension();

		//System.Void UnityEngine.RenderTexture::set_enableRandomWrite(System.Boolean)
		void Register_UnityEngine_RenderTexture_set_enableRandomWrite();
		Register_UnityEngine_RenderTexture_set_enableRandomWrite();

		//System.Void UnityEngine.RenderTexture::set_graphicsFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_RenderTexture_set_graphicsFormat();
		Register_UnityEngine_RenderTexture_set_graphicsFormat();

		//System.Void UnityEngine.RenderTexture::set_height(System.Int32)
		void Register_UnityEngine_RenderTexture_set_height();
		Register_UnityEngine_RenderTexture_set_height();

		//System.Void UnityEngine.RenderTexture::set_memorylessMode(UnityEngine.RenderTextureMemoryless)
		void Register_UnityEngine_RenderTexture_set_memorylessMode();
		Register_UnityEngine_RenderTexture_set_memorylessMode();

		//System.Void UnityEngine.RenderTexture::set_stencilFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_RenderTexture_set_stencilFormat();
		Register_UnityEngine_RenderTexture_set_stencilFormat();

		//System.Void UnityEngine.RenderTexture::set_useDynamicScale(System.Boolean)
		void Register_UnityEngine_RenderTexture_set_useDynamicScale();
		Register_UnityEngine_RenderTexture_set_useDynamicScale();

		//System.Void UnityEngine.RenderTexture::set_useMipMap(System.Boolean)
		void Register_UnityEngine_RenderTexture_set_useMipMap();
		Register_UnityEngine_RenderTexture_set_useMipMap();

		//System.Void UnityEngine.RenderTexture::set_volumeDepth(System.Int32)
		void Register_UnityEngine_RenderTexture_set_volumeDepth();
		Register_UnityEngine_RenderTexture_set_volumeDepth();

		//System.Void UnityEngine.RenderTexture::set_width(System.Int32)
		void Register_UnityEngine_RenderTexture_set_width();
		Register_UnityEngine_RenderTexture_set_width();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTexture::get_graphicsFormat()
		void Register_UnityEngine_RenderTexture_get_graphicsFormat();
		Register_UnityEngine_RenderTexture_get_graphicsFormat();

		//UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary_Internal_Injected(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_RenderTexture_GetTemporary_Internal_Injected();
		Register_UnityEngine_RenderTexture_GetTemporary_Internal_Injected();

		//UnityEngine.Rendering.TextureDimension UnityEngine.RenderTexture::get_dimension()
		void Register_UnityEngine_RenderTexture_get_dimension();
		Register_UnityEngine_RenderTexture_get_dimension();

	//End Registrations for type : UnityEngine.RenderTexture

	//Start Registrations for type : UnityEngine.Resources

		//UnityEngine.Object UnityEngine.Resources::GetBuiltinResource(System.Type,System.String)
		void Register_UnityEngine_Resources_GetBuiltinResource();
		Register_UnityEngine_Resources_GetBuiltinResource();

	//End Registrations for type : UnityEngine.Resources

	//Start Registrations for type : UnityEngine.ResourcesAPIInternal

		//UnityEngine.Object UnityEngine.ResourcesAPIInternal::Load(System.String,System.Type)
		void Register_UnityEngine_ResourcesAPIInternal_Load();
		Register_UnityEngine_ResourcesAPIInternal_Load();

		//UnityEngine.Shader UnityEngine.ResourcesAPIInternal::FindShaderByName(System.String)
		void Register_UnityEngine_ResourcesAPIInternal_FindShaderByName();
		Register_UnityEngine_ResourcesAPIInternal_FindShaderByName();

	//End Registrations for type : UnityEngine.ResourcesAPIInternal

	//Start Registrations for type : UnityEngine.ScalableBufferManager

		//System.Single UnityEngine.ScalableBufferManager::get_heightScaleFactor()
		void Register_UnityEngine_ScalableBufferManager_get_heightScaleFactor();
		Register_UnityEngine_ScalableBufferManager_get_heightScaleFactor();

		//System.Single UnityEngine.ScalableBufferManager::get_widthScaleFactor()
		void Register_UnityEngine_ScalableBufferManager_get_widthScaleFactor();
		Register_UnityEngine_ScalableBufferManager_get_widthScaleFactor();

		//System.Void UnityEngine.ScalableBufferManager::ResizeBuffers(System.Single,System.Single)
		void Register_UnityEngine_ScalableBufferManager_ResizeBuffers();
		Register_UnityEngine_ScalableBufferManager_ResizeBuffers();

	//End Registrations for type : UnityEngine.ScalableBufferManager

	//Start Registrations for type : UnityEngine.Screen

		//System.Int32 UnityEngine.Screen::get_height()
		void Register_UnityEngine_Screen_get_height();
		Register_UnityEngine_Screen_get_height();

		//System.Int32 UnityEngine.Screen::get_width()
		void Register_UnityEngine_Screen_get_width();
		Register_UnityEngine_Screen_get_width();

		//System.Single UnityEngine.Screen::get_dpi()
		void Register_UnityEngine_Screen_get_dpi();
		Register_UnityEngine_Screen_get_dpi();

		//UnityEngine.FullScreenMode UnityEngine.Screen::get_fullScreenMode()
		void Register_UnityEngine_Screen_get_fullScreenMode();
		Register_UnityEngine_Screen_get_fullScreenMode();

		//UnityEngine.ScreenOrientation UnityEngine.Screen::GetScreenOrientation()
		void Register_UnityEngine_Screen_GetScreenOrientation();
		Register_UnityEngine_Screen_GetScreenOrientation();

	//End Registrations for type : UnityEngine.Screen

	//Start Registrations for type : UnityEngine.ScriptableObject

		//System.Void UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)
		void Register_UnityEngine_ScriptableObject_CreateScriptableObject();
		Register_UnityEngine_ScriptableObject_CreateScriptableObject();

		//UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateScriptableObjectInstanceFromType(System.Type,System.Boolean)
		void Register_UnityEngine_ScriptableObject_CreateScriptableObjectInstanceFromType();
		Register_UnityEngine_ScriptableObject_CreateScriptableObjectInstanceFromType();

	//End Registrations for type : UnityEngine.ScriptableObject

	//Start Registrations for type : UnityEngine.Shader

		//System.Boolean UnityEngine.Shader::get_isSupported()
		void Register_UnityEngine_Shader_get_isSupported();
		Register_UnityEngine_Shader_get_isSupported();

		//System.Int32 UnityEngine.Shader::PropertyToID(System.String)
		void Register_UnityEngine_Shader_PropertyToID();
		Register_UnityEngine_Shader_PropertyToID();

		//System.Int32 UnityEngine.Shader::TagToID(System.String)
		void Register_UnityEngine_Shader_TagToID();
		Register_UnityEngine_Shader_TagToID();

		//System.Void UnityEngine.Shader::DisableKeyword(System.String)
		void Register_UnityEngine_Shader_DisableKeyword();
		Register_UnityEngine_Shader_DisableKeyword();

		//System.Void UnityEngine.Shader::EnableKeyword(System.String)
		void Register_UnityEngine_Shader_EnableKeyword();
		Register_UnityEngine_Shader_EnableKeyword();

		//System.Void UnityEngine.Shader::SetGlobalConstantBufferImpl(System.Int32,UnityEngine.ComputeBuffer,System.Int32,System.Int32)
		void Register_UnityEngine_Shader_SetGlobalConstantBufferImpl();
		Register_UnityEngine_Shader_SetGlobalConstantBufferImpl();

		//System.Void UnityEngine.Shader::SetGlobalTextureImpl(System.Int32,UnityEngine.Texture)
		void Register_UnityEngine_Shader_SetGlobalTextureImpl();
		Register_UnityEngine_Shader_SetGlobalTextureImpl();

		//System.Void UnityEngine.Shader::SetGlobalVectorImpl_Injected(System.Int32,UnityEngine.Vector4&)
		void Register_UnityEngine_Shader_SetGlobalVectorImpl_Injected();
		Register_UnityEngine_Shader_SetGlobalVectorImpl_Injected();

		//System.Void UnityEngine.Shader::set_globalRenderPipeline(System.String)
		void Register_UnityEngine_Shader_set_globalRenderPipeline();
		Register_UnityEngine_Shader_set_globalRenderPipeline();

	//End Registrations for type : UnityEngine.Shader

	//Start Registrations for type : UnityEngine.Skybox

		//UnityEngine.Material UnityEngine.Skybox::get_material()
		void Register_UnityEngine_Skybox_get_material();
		Register_UnityEngine_Skybox_get_material();

	//End Registrations for type : UnityEngine.Skybox

	//Start Registrations for type : UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform

		//System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetAuthenticated()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetAuthenticated();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetAuthenticated();

		//System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetIsUnderage()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetIsUnderage();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetIsUnderage();

		//System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LegacyUserID()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_LegacyUserID();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_LegacyUserID();

		//System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserGameID()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserGameID();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserGameID();

		//System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserID();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserID();

		//System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserName();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserName();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Authenticate()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Authenticate();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Authenticate();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievementDescriptions(System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadAchievementDescriptions();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadAchievementDescriptions();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievements(System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadAchievements();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadAchievements();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadScores(System.String,System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadScores();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadScores();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportProgress(System.String,System.Double,System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalReportProgress();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalReportProgress();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportScore(System.Int64,System.String,System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalReportScore();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalReportScore();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[],System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_LoadUsers();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_LoadUsers();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_ShowAchievementsUI();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_ShowAchievementsUI();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_ShowLeaderboardUI();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_ShowLeaderboardUI();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadFriends(System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_LoadFriends();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_LoadFriends();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ResetAllAchievements();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ResetAllAchievements();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementBanner(System.Boolean)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ShowDefaultAchievementBanner();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ShowDefaultAchievementBanner();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowSpecificLeaderboardUI(System.String,System.Int32)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ShowSpecificLeaderboardUI();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ShowSpecificLeaderboardUI();

		//UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetUserImage()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetUserImage();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetUserImage();

	//End Registrations for type : UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform

	//Start Registrations for type : UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard

		//System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Loading(System.IntPtr)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_Loading();
		Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_Loading();

		//System.IntPtr UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_LoadScores(System.Object,System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_LoadScores();
		Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_LoadScores();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Dispose(System.IntPtr)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_Dispose();
		Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_Dispose();

	//End Registrations for type : UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard

	//Start Registrations for type : UnityEngine.SortingLayer

		//System.Int32 UnityEngine.SortingLayer::GetLayerValueFromID(System.Int32)
		void Register_UnityEngine_SortingLayer_GetLayerValueFromID();
		Register_UnityEngine_SortingLayer_GetLayerValueFromID();

		//System.Int32[] UnityEngine.SortingLayer::GetSortingLayerIDsInternal()
		void Register_UnityEngine_SortingLayer_GetSortingLayerIDsInternal();
		Register_UnityEngine_SortingLayer_GetSortingLayerIDsInternal();

		//System.String UnityEngine.SortingLayer::IDToName(System.Int32)
		void Register_UnityEngine_SortingLayer_IDToName();
		Register_UnityEngine_SortingLayer_IDToName();

	//End Registrations for type : UnityEngine.SortingLayer

	//Start Registrations for type : UnityEngine.Sprite

		//System.Boolean UnityEngine.Sprite::get_isUsingPlaceholder()
		void Register_UnityEngine_Sprite_get_isUsingPlaceholder();
		Register_UnityEngine_Sprite_get_isUsingPlaceholder();

		//System.Int32 UnityEngine.Sprite::GetPacked()
		void Register_UnityEngine_Sprite_GetPacked();
		Register_UnityEngine_Sprite_GetPacked();

		//System.Int32 UnityEngine.Sprite::GetPackingMode()
		void Register_UnityEngine_Sprite_GetPackingMode();
		Register_UnityEngine_Sprite_GetPackingMode();

		//System.Single UnityEngine.Sprite::get_pixelsPerUnit()
		void Register_UnityEngine_Sprite_get_pixelsPerUnit();
		Register_UnityEngine_Sprite_get_pixelsPerUnit();

		//System.UInt16[] UnityEngine.Sprite::get_triangles()
		void Register_UnityEngine_Sprite_get_triangles();
		Register_UnityEngine_Sprite_get_triangles();

		//System.Void UnityEngine.Sprite::GetInnerUVs_Injected(UnityEngine.Vector4&)
		void Register_UnityEngine_Sprite_GetInnerUVs_Injected();
		Register_UnityEngine_Sprite_GetInnerUVs_Injected();

		//System.Void UnityEngine.Sprite::GetOuterUVs_Injected(UnityEngine.Vector4&)
		void Register_UnityEngine_Sprite_GetOuterUVs_Injected();
		Register_UnityEngine_Sprite_GetOuterUVs_Injected();

		//System.Void UnityEngine.Sprite::GetPadding_Injected(UnityEngine.Vector4&)
		void Register_UnityEngine_Sprite_GetPadding_Injected();
		Register_UnityEngine_Sprite_GetPadding_Injected();

		//System.Void UnityEngine.Sprite::GetTextureRect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Sprite_GetTextureRect_Injected();
		Register_UnityEngine_Sprite_GetTextureRect_Injected();

		//System.Void UnityEngine.Sprite::get_border_Injected(UnityEngine.Vector4&)
		void Register_UnityEngine_Sprite_get_border_Injected();
		Register_UnityEngine_Sprite_get_border_Injected();

		//System.Void UnityEngine.Sprite::get_bounds_Injected(UnityEngine.Bounds&)
		void Register_UnityEngine_Sprite_get_bounds_Injected();
		Register_UnityEngine_Sprite_get_bounds_Injected();

		//System.Void UnityEngine.Sprite::get_pivot_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Sprite_get_pivot_Injected();
		Register_UnityEngine_Sprite_get_pivot_Injected();

		//System.Void UnityEngine.Sprite::get_rect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Sprite_get_rect_Injected();
		Register_UnityEngine_Sprite_get_rect_Injected();

		//UnityEngine.Sprite UnityEngine.Sprite::CreateSprite_Injected(UnityEngine.Texture2D,UnityEngine.Rect&,UnityEngine.Vector2&,System.Single,System.UInt32,UnityEngine.SpriteMeshType,UnityEngine.Vector4&,System.Boolean)
		void Register_UnityEngine_Sprite_CreateSprite_Injected();
		Register_UnityEngine_Sprite_CreateSprite_Injected();

		//UnityEngine.Texture2D UnityEngine.Sprite::get_associatedAlphaSplitTexture()
		void Register_UnityEngine_Sprite_get_associatedAlphaSplitTexture();
		Register_UnityEngine_Sprite_get_associatedAlphaSplitTexture();

		//UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
		void Register_UnityEngine_Sprite_get_texture();
		Register_UnityEngine_Sprite_get_texture();

		//UnityEngine.Vector2[] UnityEngine.Sprite::get_uv()
		void Register_UnityEngine_Sprite_get_uv();
		Register_UnityEngine_Sprite_get_uv();

		//UnityEngine.Vector2[] UnityEngine.Sprite::get_vertices()
		void Register_UnityEngine_Sprite_get_vertices();
		Register_UnityEngine_Sprite_get_vertices();

	//End Registrations for type : UnityEngine.Sprite

	//Start Registrations for type : UnityEngine.SubsystemBindings

		//System.Void UnityEngine.SubsystemBindings::DestroySubsystem(System.IntPtr)
		void Register_UnityEngine_SubsystemBindings_DestroySubsystem();
		Register_UnityEngine_SubsystemBindings_DestroySubsystem();

	//End Registrations for type : UnityEngine.SubsystemBindings

	//Start Registrations for type : UnityEngine.SubsystemDescriptorBindings

		//System.IntPtr UnityEngine.SubsystemDescriptorBindings::Create(System.IntPtr)
		void Register_UnityEngine_SubsystemDescriptorBindings_Create();
		Register_UnityEngine_SubsystemDescriptorBindings_Create();

		//System.String UnityEngine.SubsystemDescriptorBindings::GetId(System.IntPtr)
		void Register_UnityEngine_SubsystemDescriptorBindings_GetId();
		Register_UnityEngine_SubsystemDescriptorBindings_GetId();

	//End Registrations for type : UnityEngine.SubsystemDescriptorBindings

	//Start Registrations for type : UnityEngine.SubsystemManager

		//System.Void UnityEngine.SubsystemManager::StaticConstructScriptingClassMap()
		void Register_UnityEngine_SubsystemManager_StaticConstructScriptingClassMap();
		Register_UnityEngine_SubsystemManager_StaticConstructScriptingClassMap();

	//End Registrations for type : UnityEngine.SubsystemManager

	//Start Registrations for type : UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore

		//System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::ReportSingleSubsystemAnalytics(System.String)
		void Register_UnityEngine_SubsystemsImplementation_SubsystemDescriptorStore_ReportSingleSubsystemAnalytics();
		Register_UnityEngine_SubsystemsImplementation_SubsystemDescriptorStore_ReportSingleSubsystemAnalytics();

	//End Registrations for type : UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore

	//Start Registrations for type : UnityEngine.SystemInfo

		//System.Boolean UnityEngine.SystemInfo::GetGraphicsUVStartsAtTop()
		void Register_UnityEngine_SystemInfo_GetGraphicsUVStartsAtTop();
		Register_UnityEngine_SystemInfo_GetGraphicsUVStartsAtTop();

		//System.Boolean UnityEngine.SystemInfo::HasHiddenSurfaceRemovalOnGPU()
		void Register_UnityEngine_SystemInfo_HasHiddenSurfaceRemovalOnGPU();
		Register_UnityEngine_SystemInfo_HasHiddenSurfaceRemovalOnGPU();

		//System.Boolean UnityEngine.SystemInfo::HasRenderTextureNative(UnityEngine.RenderTextureFormat)
		void Register_UnityEngine_SystemInfo_HasRenderTextureNative();
		Register_UnityEngine_SystemInfo_HasRenderTextureNative();

		//System.Boolean UnityEngine.SystemInfo::IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
		void Register_UnityEngine_SystemInfo_IsFormatSupported();
		Register_UnityEngine_SystemInfo_IsFormatSupported();

		//System.Boolean UnityEngine.SystemInfo::SupportsGPUFence()
		void Register_UnityEngine_SystemInfo_SupportsGPUFence();
		Register_UnityEngine_SystemInfo_SupportsGPUFence();

		//System.Boolean UnityEngine.SystemInfo::SupportsMultisampleAutoResolve()
		void Register_UnityEngine_SystemInfo_SupportsMultisampleAutoResolve();
		Register_UnityEngine_SystemInfo_SupportsMultisampleAutoResolve();

		//System.Boolean UnityEngine.SystemInfo::SupportsMultiview()
		void Register_UnityEngine_SystemInfo_SupportsMultiview();
		Register_UnityEngine_SystemInfo_SupportsMultiview();

		//System.Boolean UnityEngine.SystemInfo::SupportsRenderTargetArrayIndexFromVertexShader()
		void Register_UnityEngine_SystemInfo_SupportsRenderTargetArrayIndexFromVertexShader();
		Register_UnityEngine_SystemInfo_SupportsRenderTargetArrayIndexFromVertexShader();

		//System.Boolean UnityEngine.SystemInfo::SupportsShadows()
		void Register_UnityEngine_SystemInfo_SupportsShadows();
		Register_UnityEngine_SystemInfo_SupportsShadows();

		//System.Boolean UnityEngine.SystemInfo::SupportsStoreAndResolveAction()
		void Register_UnityEngine_SystemInfo_SupportsStoreAndResolveAction();
		Register_UnityEngine_SystemInfo_SupportsStoreAndResolveAction();

		//System.Boolean UnityEngine.SystemInfo::SupportsTextureFormatNative(UnityEngine.TextureFormat)
		void Register_UnityEngine_SystemInfo_SupportsTextureFormatNative();
		Register_UnityEngine_SystemInfo_SupportsTextureFormatNative();

		//System.Boolean UnityEngine.SystemInfo::UsesReversedZBuffer()
		void Register_UnityEngine_SystemInfo_UsesReversedZBuffer();
		Register_UnityEngine_SystemInfo_UsesReversedZBuffer();

		//System.Int32 UnityEngine.SystemInfo::GetGraphicsShaderLevel()
		void Register_UnityEngine_SystemInfo_GetGraphicsShaderLevel();
		Register_UnityEngine_SystemInfo_GetGraphicsShaderLevel();

		//System.Int32 UnityEngine.SystemInfo::GetRenderTextureSupportedMSAASampleCount_Injected(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_SystemInfo_GetRenderTextureSupportedMSAASampleCount_Injected();
		Register_UnityEngine_SystemInfo_GetRenderTextureSupportedMSAASampleCount_Injected();

		//System.Int32 UnityEngine.SystemInfo::SupportedRenderTargetCount()
		void Register_UnityEngine_SystemInfo_SupportedRenderTargetCount();
		Register_UnityEngine_SystemInfo_SupportedRenderTargetCount();

		//System.Int32 UnityEngine.SystemInfo::SupportsMultisampledTextures()
		void Register_UnityEngine_SystemInfo_SupportsMultisampledTextures();
		Register_UnityEngine_SystemInfo_SupportsMultisampledTextures();

		//System.String UnityEngine.SystemInfo::GetGraphicsDeviceVendor()
		void Register_UnityEngine_SystemInfo_GetGraphicsDeviceVendor();
		Register_UnityEngine_SystemInfo_GetGraphicsDeviceVendor();

		//System.String UnityEngine.SystemInfo::GetProcessorType()
		void Register_UnityEngine_SystemInfo_GetProcessorType();
		Register_UnityEngine_SystemInfo_GetProcessorType();

		//UnityEngine.DeviceType UnityEngine.SystemInfo::GetDeviceType()
		void Register_UnityEngine_SystemInfo_GetDeviceType();
		Register_UnityEngine_SystemInfo_GetDeviceType();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.SystemInfo::GetCompatibleFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
		void Register_UnityEngine_SystemInfo_GetCompatibleFormat();
		Register_UnityEngine_SystemInfo_GetCompatibleFormat();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.SystemInfo::GetGraphicsFormat(UnityEngine.Experimental.Rendering.DefaultFormat)
		void Register_UnityEngine_SystemInfo_GetGraphicsFormat();
		Register_UnityEngine_SystemInfo_GetGraphicsFormat();

		//UnityEngine.OperatingSystemFamily UnityEngine.SystemInfo::GetOperatingSystemFamily()
		void Register_UnityEngine_SystemInfo_GetOperatingSystemFamily();
		Register_UnityEngine_SystemInfo_GetOperatingSystemFamily();

		//UnityEngine.Rendering.CopyTextureSupport UnityEngine.SystemInfo::GetCopyTextureSupport()
		void Register_UnityEngine_SystemInfo_GetCopyTextureSupport();
		Register_UnityEngine_SystemInfo_GetCopyTextureSupport();

		//UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::GetGraphicsDeviceType()
		void Register_UnityEngine_SystemInfo_GetGraphicsDeviceType();
		Register_UnityEngine_SystemInfo_GetGraphicsDeviceType();

	//End Registrations for type : UnityEngine.SystemInfo

	//Start Registrations for type : UnityEngine.TextAsset

		//System.Byte[] UnityEngine.TextAsset::get_bytes()
		void Register_UnityEngine_TextAsset_get_bytes();
		Register_UnityEngine_TextAsset_get_bytes();

	//End Registrations for type : UnityEngine.TextAsset

	//Start Registrations for type : UnityEngine.TextGenerator

		//System.Boolean UnityEngine.TextGenerator::Populate_Internal_Injected(System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean,System.Boolean,System.UInt32&)
		void Register_UnityEngine_TextGenerator_Populate_Internal_Injected();
		Register_UnityEngine_TextGenerator_Populate_Internal_Injected();

		//System.Int32 UnityEngine.TextGenerator::get_characterCount()
		void Register_UnityEngine_TextGenerator_get_characterCount();
		Register_UnityEngine_TextGenerator_get_characterCount();

		//System.Int32 UnityEngine.TextGenerator::get_lineCount()
		void Register_UnityEngine_TextGenerator_get_lineCount();
		Register_UnityEngine_TextGenerator_get_lineCount();

		//System.IntPtr UnityEngine.TextGenerator::Internal_Create()
		void Register_UnityEngine_TextGenerator_Internal_Create();
		Register_UnityEngine_TextGenerator_Internal_Create();

		//System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
		void Register_UnityEngine_TextGenerator_GetCharactersInternal();
		Register_UnityEngine_TextGenerator_GetCharactersInternal();

		//System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
		void Register_UnityEngine_TextGenerator_GetLinesInternal();
		Register_UnityEngine_TextGenerator_GetLinesInternal();

		//System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
		void Register_UnityEngine_TextGenerator_GetVerticesInternal();
		Register_UnityEngine_TextGenerator_GetVerticesInternal();

		//System.Void UnityEngine.TextGenerator::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_TextGenerator_Internal_Destroy();
		Register_UnityEngine_TextGenerator_Internal_Destroy();

		//System.Void UnityEngine.TextGenerator::get_rectExtents_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_TextGenerator_get_rectExtents_Injected();
		Register_UnityEngine_TextGenerator_get_rectExtents_Injected();

	//End Registrations for type : UnityEngine.TextGenerator

	//Start Registrations for type : UnityEngine.Texture

		//System.Boolean UnityEngine.Texture::get_isReadable()
		void Register_UnityEngine_Texture_get_isReadable();
		Register_UnityEngine_Texture_get_isReadable();

		//System.Int32 UnityEngine.Texture::GetScriptHeight()
		void Register_UnityEngine_Texture_GetScriptHeight();
		Register_UnityEngine_Texture_GetScriptHeight();

		//System.Int32 UnityEngine.Texture::GetScriptWidth()
		void Register_UnityEngine_Texture_GetScriptWidth();
		Register_UnityEngine_Texture_GetScriptWidth();

		//System.Void UnityEngine.Texture::get_texelSize_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Texture_get_texelSize_Injected();
		Register_UnityEngine_Texture_get_texelSize_Injected();

		//System.Void UnityEngine.Texture::set_anisoLevel(System.Int32)
		void Register_UnityEngine_Texture_set_anisoLevel();
		Register_UnityEngine_Texture_set_anisoLevel();

		//System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
		void Register_UnityEngine_Texture_set_filterMode();
		Register_UnityEngine_Texture_set_filterMode();

		//System.Void UnityEngine.Texture::set_mipMapBias(System.Single)
		void Register_UnityEngine_Texture_set_mipMapBias();
		Register_UnityEngine_Texture_set_mipMapBias();

		//System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
		void Register_UnityEngine_Texture_set_wrapMode();
		Register_UnityEngine_Texture_set_wrapMode();

		//UnityEngine.Rendering.TextureDimension UnityEngine.Texture::GetDimension()
		void Register_UnityEngine_Texture_GetDimension();
		Register_UnityEngine_Texture_GetDimension();

		//UnityEngine.TextureWrapMode UnityEngine.Texture::get_wrapMode()
		void Register_UnityEngine_Texture_get_wrapMode();
		Register_UnityEngine_Texture_get_wrapMode();

	//End Registrations for type : UnityEngine.Texture

	//Start Registrations for type : UnityEngine.Texture2D

		//System.Boolean UnityEngine.Texture2D::Internal_CreateImpl(UnityEngine.Texture2D,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)
		void Register_UnityEngine_Texture2D_Internal_CreateImpl();
		Register_UnityEngine_Texture2D_Internal_CreateImpl();

		//System.Boolean UnityEngine.Texture2D::get_isReadable()
		void Register_UnityEngine_Texture2D_get_isReadable();
		Register_UnityEngine_Texture2D_get_isReadable();

		//System.Int64 UnityEngine.Texture2D::GetRawImageDataSize()
		void Register_UnityEngine_Texture2D_GetRawImageDataSize();
		Register_UnityEngine_Texture2D_GetRawImageDataSize();

		//System.IntPtr UnityEngine.Texture2D::GetWritableImageData(System.Int32)
		void Register_UnityEngine_Texture2D_GetWritableImageData();
		Register_UnityEngine_Texture2D_GetWritableImageData();

		//System.Void UnityEngine.Texture2D::ApplyImpl(System.Boolean,System.Boolean)
		void Register_UnityEngine_Texture2D_ApplyImpl();
		Register_UnityEngine_Texture2D_ApplyImpl();

		//System.Void UnityEngine.Texture2D::GetPixelBilinearImpl_Injected(System.Int32,System.Single,System.Single,UnityEngine.Color&)
		void Register_UnityEngine_Texture2D_GetPixelBilinearImpl_Injected();
		Register_UnityEngine_Texture2D_GetPixelBilinearImpl_Injected();

		//System.Void UnityEngine.Texture2D::SetPixelImpl_Injected(System.Int32,System.Int32,System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Texture2D_SetPixelImpl_Injected();
		Register_UnityEngine_Texture2D_SetPixelImpl_Injected();

		//System.Void UnityEngine.Texture2D::SetPixelsImpl(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color[],System.Int32,System.Int32)
		void Register_UnityEngine_Texture2D_SetPixelsImpl();
		Register_UnityEngine_Texture2D_SetPixelsImpl();

		//System.Void UnityEngine.Texture2D::UpdateExternalTexture(System.IntPtr)
		void Register_UnityEngine_Texture2D_UpdateExternalTexture();
		Register_UnityEngine_Texture2D_UpdateExternalTexture();

		//UnityEngine.Texture2D UnityEngine.Texture2D::get_blackTexture()
		void Register_UnityEngine_Texture2D_get_blackTexture();
		Register_UnityEngine_Texture2D_get_blackTexture();

		//UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
		void Register_UnityEngine_Texture2D_get_whiteTexture();
		Register_UnityEngine_Texture2D_get_whiteTexture();

		//UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
		void Register_UnityEngine_Texture2D_get_format();
		Register_UnityEngine_Texture2D_get_format();

	//End Registrations for type : UnityEngine.Texture2D

	//Start Registrations for type : UnityEngine.Texture2DArray

		//System.Boolean UnityEngine.Texture2DArray::Internal_CreateImpl(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
		void Register_UnityEngine_Texture2DArray_Internal_CreateImpl();
		Register_UnityEngine_Texture2DArray_Internal_CreateImpl();

		//System.Boolean UnityEngine.Texture2DArray::get_isReadable()
		void Register_UnityEngine_Texture2DArray_get_isReadable();
		Register_UnityEngine_Texture2DArray_get_isReadable();

		//System.Int32 UnityEngine.Texture2DArray::get_allSlices()
		void Register_UnityEngine_Texture2DArray_get_allSlices();
		Register_UnityEngine_Texture2DArray_get_allSlices();

	//End Registrations for type : UnityEngine.Texture2DArray

	//Start Registrations for type : UnityEngine.Texture3D

		//System.Boolean UnityEngine.Texture3D::Internal_CreateImpl(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)
		void Register_UnityEngine_Texture3D_Internal_CreateImpl();
		Register_UnityEngine_Texture3D_Internal_CreateImpl();

		//System.Boolean UnityEngine.Texture3D::get_isReadable()
		void Register_UnityEngine_Texture3D_get_isReadable();
		Register_UnityEngine_Texture3D_get_isReadable();

		//System.Void UnityEngine.Texture3D::ApplyImpl(System.Boolean,System.Boolean)
		void Register_UnityEngine_Texture3D_ApplyImpl();
		Register_UnityEngine_Texture3D_ApplyImpl();

		//System.Void UnityEngine.Texture3D::SetPixelImpl_Injected(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Texture3D_SetPixelImpl_Injected();
		Register_UnityEngine_Texture3D_SetPixelImpl_Injected();

		//System.Void UnityEngine.Texture3D::SetPixels(UnityEngine.Color[],System.Int32)
		void Register_UnityEngine_Texture3D_SetPixels();
		Register_UnityEngine_Texture3D_SetPixels();

		//System.Void UnityEngine.Texture3D::UpdateExternalTexture(System.IntPtr)
		void Register_UnityEngine_Texture3D_UpdateExternalTexture();
		Register_UnityEngine_Texture3D_UpdateExternalTexture();

	//End Registrations for type : UnityEngine.Texture3D

	//Start Registrations for type : UnityEngine.Time

		//System.Single UnityEngine.Time::get_deltaTime()
		void Register_UnityEngine_Time_get_deltaTime();
		Register_UnityEngine_Time_get_deltaTime();

		//System.Single UnityEngine.Time::get_realtimeSinceStartup()
		void Register_UnityEngine_Time_get_realtimeSinceStartup();
		Register_UnityEngine_Time_get_realtimeSinceStartup();

		//System.Single UnityEngine.Time::get_smoothDeltaTime()
		void Register_UnityEngine_Time_get_smoothDeltaTime();
		Register_UnityEngine_Time_get_smoothDeltaTime();

		//System.Single UnityEngine.Time::get_time()
		void Register_UnityEngine_Time_get_time();
		Register_UnityEngine_Time_get_time();

		//System.Single UnityEngine.Time::get_unscaledDeltaTime()
		void Register_UnityEngine_Time_get_unscaledDeltaTime();
		Register_UnityEngine_Time_get_unscaledDeltaTime();

		//System.Single UnityEngine.Time::get_unscaledTime()
		void Register_UnityEngine_Time_get_unscaledTime();
		Register_UnityEngine_Time_get_unscaledTime();

	//End Registrations for type : UnityEngine.Time

	//Start Registrations for type : UnityEngine.TouchScreenKeyboard

		//System.Boolean UnityEngine.TouchScreenKeyboard::get_active()
		void Register_UnityEngine_TouchScreenKeyboard_get_active();
		Register_UnityEngine_TouchScreenKeyboard_get_active();

		//System.Boolean UnityEngine.TouchScreenKeyboard::get_canGetSelection()
		void Register_UnityEngine_TouchScreenKeyboard_get_canGetSelection();
		Register_UnityEngine_TouchScreenKeyboard_get_canGetSelection();

		//System.Boolean UnityEngine.TouchScreenKeyboard::get_canSetSelection()
		void Register_UnityEngine_TouchScreenKeyboard_get_canSetSelection();
		Register_UnityEngine_TouchScreenKeyboard_get_canSetSelection();

		//System.IntPtr UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)
		void Register_UnityEngine_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper();
		Register_UnityEngine_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper();

		//System.String UnityEngine.TouchScreenKeyboard::get_text()
		void Register_UnityEngine_TouchScreenKeyboard_get_text();
		Register_UnityEngine_TouchScreenKeyboard_get_text();

		//System.Void UnityEngine.TouchScreenKeyboard::GetSelection(System.Int32&,System.Int32&)
		void Register_UnityEngine_TouchScreenKeyboard_GetSelection();
		Register_UnityEngine_TouchScreenKeyboard_GetSelection();

		//System.Void UnityEngine.TouchScreenKeyboard::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_TouchScreenKeyboard_Internal_Destroy();
		Register_UnityEngine_TouchScreenKeyboard_Internal_Destroy();

		//System.Void UnityEngine.TouchScreenKeyboard::SetSelection(System.Int32,System.Int32)
		void Register_UnityEngine_TouchScreenKeyboard_SetSelection();
		Register_UnityEngine_TouchScreenKeyboard_SetSelection();

		//System.Void UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)
		void Register_UnityEngine_TouchScreenKeyboard_set_active();
		Register_UnityEngine_TouchScreenKeyboard_set_active();

		//System.Void UnityEngine.TouchScreenKeyboard::set_characterLimit(System.Int32)
		void Register_UnityEngine_TouchScreenKeyboard_set_characterLimit();
		Register_UnityEngine_TouchScreenKeyboard_set_characterLimit();

		//System.Void UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)
		void Register_UnityEngine_TouchScreenKeyboard_set_hideInput();
		Register_UnityEngine_TouchScreenKeyboard_set_hideInput();

		//System.Void UnityEngine.TouchScreenKeyboard::set_text(System.String)
		void Register_UnityEngine_TouchScreenKeyboard_set_text();
		Register_UnityEngine_TouchScreenKeyboard_set_text();

		//UnityEngine.TouchScreenKeyboard/Status UnityEngine.TouchScreenKeyboard::get_status()
		void Register_UnityEngine_TouchScreenKeyboard_get_status();
		Register_UnityEngine_TouchScreenKeyboard_get_status();

	//End Registrations for type : UnityEngine.TouchScreenKeyboard

	//Start Registrations for type : UnityEngine.Transform

		//System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
		void Register_UnityEngine_Transform_IsChildOf();
		Register_UnityEngine_Transform_IsChildOf();

		//System.Boolean UnityEngine.Transform::get_hasChanged()
		void Register_UnityEngine_Transform_get_hasChanged();
		Register_UnityEngine_Transform_get_hasChanged();

		//System.Int32 UnityEngine.Transform::get_childCount()
		void Register_UnityEngine_Transform_get_childCount();
		Register_UnityEngine_Transform_get_childCount();

		//System.Void UnityEngine.Transform::InverseTransformDirection_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_InverseTransformDirection_Injected();
		Register_UnityEngine_Transform_InverseTransformDirection_Injected();

		//System.Void UnityEngine.Transform::InverseTransformPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_InverseTransformPoint_Injected();
		Register_UnityEngine_Transform_InverseTransformPoint_Injected();

		//System.Void UnityEngine.Transform::SetAsFirstSibling()
		void Register_UnityEngine_Transform_SetAsFirstSibling();
		Register_UnityEngine_Transform_SetAsFirstSibling();

		//System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
		void Register_UnityEngine_Transform_SetParent();
		Register_UnityEngine_Transform_SetParent();

		//System.Void UnityEngine.Transform::SetPositionAndRotation_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_SetPositionAndRotation_Injected();
		Register_UnityEngine_Transform_SetPositionAndRotation_Injected();

		//System.Void UnityEngine.Transform::TransformDirection_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_TransformDirection_Injected();
		Register_UnityEngine_Transform_TransformDirection_Injected();

		//System.Void UnityEngine.Transform::TransformPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_TransformPoint_Injected();
		Register_UnityEngine_Transform_TransformPoint_Injected();

		//System.Void UnityEngine.Transform::get_localPosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_localPosition_Injected();
		Register_UnityEngine_Transform_get_localPosition_Injected();

		//System.Void UnityEngine.Transform::get_localRotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_get_localRotation_Injected();
		Register_UnityEngine_Transform_get_localRotation_Injected();

		//System.Void UnityEngine.Transform::get_localScale_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_localScale_Injected();
		Register_UnityEngine_Transform_get_localScale_Injected();

		//System.Void UnityEngine.Transform::get_localToWorldMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Transform_get_localToWorldMatrix_Injected();
		Register_UnityEngine_Transform_get_localToWorldMatrix_Injected();

		//System.Void UnityEngine.Transform::get_lossyScale_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_lossyScale_Injected();
		Register_UnityEngine_Transform_get_lossyScale_Injected();

		//System.Void UnityEngine.Transform::get_position_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_position_Injected();
		Register_UnityEngine_Transform_get_position_Injected();

		//System.Void UnityEngine.Transform::get_rotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_get_rotation_Injected();
		Register_UnityEngine_Transform_get_rotation_Injected();

		//System.Void UnityEngine.Transform::get_worldToLocalMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Transform_get_worldToLocalMatrix_Injected();
		Register_UnityEngine_Transform_get_worldToLocalMatrix_Injected();

		//System.Void UnityEngine.Transform::set_hasChanged(System.Boolean)
		void Register_UnityEngine_Transform_set_hasChanged();
		Register_UnityEngine_Transform_set_hasChanged();

		//System.Void UnityEngine.Transform::set_localPosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_set_localPosition_Injected();
		Register_UnityEngine_Transform_set_localPosition_Injected();

		//System.Void UnityEngine.Transform::set_localRotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_set_localRotation_Injected();
		Register_UnityEngine_Transform_set_localRotation_Injected();

		//System.Void UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_set_localScale_Injected();
		Register_UnityEngine_Transform_set_localScale_Injected();

		//System.Void UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_set_position_Injected();
		Register_UnityEngine_Transform_set_position_Injected();

		//System.Void UnityEngine.Transform::set_rotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_set_rotation_Injected();
		Register_UnityEngine_Transform_set_rotation_Injected();

		//UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
		void Register_UnityEngine_Transform_GetChild();
		Register_UnityEngine_Transform_GetChild();

		//UnityEngine.Transform UnityEngine.Transform::GetParent()
		void Register_UnityEngine_Transform_GetParent();
		Register_UnityEngine_Transform_GetParent();

	//End Registrations for type : UnityEngine.Transform

	//Start Registrations for type : UnityEngine.U2D.PixelPerfectRendering

		//System.Void UnityEngine.U2D.PixelPerfectRendering::set_pixelSnapSpacing(System.Single)
		void Register_UnityEngine_U2D_PixelPerfectRendering_set_pixelSnapSpacing();
		Register_UnityEngine_U2D_PixelPerfectRendering_set_pixelSnapSpacing();

	//End Registrations for type : UnityEngine.U2D.PixelPerfectRendering

	//Start Registrations for type : UnityEngine.U2D.SpriteAtlas

		//System.Boolean UnityEngine.U2D.SpriteAtlas::CanBindTo(UnityEngine.Sprite)
		void Register_UnityEngine_U2D_SpriteAtlas_CanBindTo();
		Register_UnityEngine_U2D_SpriteAtlas_CanBindTo();

		//System.Boolean UnityEngine.U2D.SpriteAtlas::IsPlaceholder()
		void Register_UnityEngine_U2D_SpriteAtlas_IsPlaceholder();
		Register_UnityEngine_U2D_SpriteAtlas_IsPlaceholder();

	//End Registrations for type : UnityEngine.U2D.SpriteAtlas

	//Start Registrations for type : UnityEngine.U2D.SpriteAtlasManager

		//System.Void UnityEngine.U2D.SpriteAtlasManager::Register(UnityEngine.U2D.SpriteAtlas)
		void Register_UnityEngine_U2D_SpriteAtlasManager_Register();
		Register_UnityEngine_U2D_SpriteAtlasManager_Register();

	//End Registrations for type : UnityEngine.U2D.SpriteAtlasManager

	//Start Registrations for type : UnityEngine.U2D.SpriteDataAccessExtensions

		//System.Void UnityEngine.U2D.SpriteDataAccessExtensions::GetChannelInfo_Injected(UnityEngine.Sprite,UnityEngine.Rendering.VertexAttribute,UnityEngine.U2D.SpriteChannelInfo&)
		void Register_UnityEngine_U2D_SpriteDataAccessExtensions_GetChannelInfo_Injected();
		Register_UnityEngine_U2D_SpriteDataAccessExtensions_GetChannelInfo_Injected();

		//System.Void UnityEngine.U2D.SpriteDataAccessExtensions::GetIndicesInfo_Injected(UnityEngine.Sprite,UnityEngine.U2D.SpriteChannelInfo&)
		void Register_UnityEngine_U2D_SpriteDataAccessExtensions_GetIndicesInfo_Injected();
		Register_UnityEngine_U2D_SpriteDataAccessExtensions_GetIndicesInfo_Injected();

	//End Registrations for type : UnityEngine.U2D.SpriteDataAccessExtensions

	//Start Registrations for type : UnityEngine.UISystemProfilerApi

		//System.Void UnityEngine.UISystemProfilerApi::AddMarker(System.String,UnityEngine.Object)
		void Register_UnityEngine_UISystemProfilerApi_AddMarker();
		Register_UnityEngine_UISystemProfilerApi_AddMarker();

		//System.Void UnityEngine.UISystemProfilerApi::BeginSample(UnityEngine.UISystemProfilerApi/SampleType)
		void Register_UnityEngine_UISystemProfilerApi_BeginSample();
		Register_UnityEngine_UISystemProfilerApi_BeginSample();

		//System.Void UnityEngine.UISystemProfilerApi::EndSample(UnityEngine.UISystemProfilerApi/SampleType)
		void Register_UnityEngine_UISystemProfilerApi_EndSample();
		Register_UnityEngine_UISystemProfilerApi_EndSample();

	//End Registrations for type : UnityEngine.UISystemProfilerApi

	//Start Registrations for type : UnityEngine.UnhandledExceptionHandler

		//System.Void UnityEngine.UnhandledExceptionHandler::iOSNativeUnhandledExceptionHandler(System.String,System.String,System.String)
		void Register_UnityEngine_UnhandledExceptionHandler_iOSNativeUnhandledExceptionHandler();
		Register_UnityEngine_UnhandledExceptionHandler_iOSNativeUnhandledExceptionHandler();

	//End Registrations for type : UnityEngine.UnhandledExceptionHandler

	//Start Registrations for type : UnityEngine.UnityLogWriter

		//System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLogImpl(System.String)
		void Register_UnityEngine_UnityLogWriter_WriteStringToUnityLogImpl();
		Register_UnityEngine_UnityLogWriter_WriteStringToUnityLogImpl();

	//End Registrations for type : UnityEngine.UnityLogWriter

	//Start Registrations for type : UnityEngine.XR.InputDevices

		//System.Boolean UnityEngine.XR.InputDevices::TryGetFeatureValue_Quaternionf(System.UInt64,System.String,UnityEngine.Quaternion&)
		void Register_UnityEngine_XR_InputDevices_TryGetFeatureValue_Quaternionf();
		Register_UnityEngine_XR_InputDevices_TryGetFeatureValue_Quaternionf();

		//System.Boolean UnityEngine.XR.InputDevices::TryGetFeatureValue_Vector3f(System.UInt64,System.String,UnityEngine.Vector3&)
		void Register_UnityEngine_XR_InputDevices_TryGetFeatureValue_Vector3f();
		Register_UnityEngine_XR_InputDevices_TryGetFeatureValue_Vector3f();

		//System.String UnityEngine.XR.InputDevices::GetDeviceName(System.UInt64)
		void Register_UnityEngine_XR_InputDevices_GetDeviceName();
		Register_UnityEngine_XR_InputDevices_GetDeviceName();

		//System.Void UnityEngine.XR.InputDevices::GetDevices_Internal(System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
		void Register_UnityEngine_XR_InputDevices_GetDevices_Internal();
		Register_UnityEngine_XR_InputDevices_GetDevices_Internal();

		//UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevices::GetDeviceCharacteristics(System.UInt64)
		void Register_UnityEngine_XR_InputDevices_GetDeviceCharacteristics();
		Register_UnityEngine_XR_InputDevices_GetDeviceCharacteristics();

	//End Registrations for type : UnityEngine.XR.InputDevices

	//Start Registrations for type : UnityEngine.XR.InputTracking

		//System.Void UnityEngine.XR.InputTracking::GetNodeStates_Internal(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>)
		void Register_UnityEngine_XR_InputTracking_GetNodeStates_Internal();
		Register_UnityEngine_XR_InputTracking_GetNodeStates_Internal();

	//End Registrations for type : UnityEngine.XR.InputTracking

	//Start Registrations for type : UnityEngine.XR.Tango.TangoInputTracking

		//System.Boolean UnityEngine.XR.Tango.TangoInputTracking::Internal_TryGetPoseAtTime(UnityEngine.XR.Tango.PoseData&)
		void Register_UnityEngine_XR_Tango_TangoInputTracking_Internal_TryGetPoseAtTime();
		Register_UnityEngine_XR_Tango_TangoInputTracking_Internal_TryGetPoseAtTime();

	//End Registrations for type : UnityEngine.XR.Tango.TangoInputTracking

	//Start Registrations for type : UnityEngine.XR.XRDisplaySubsystem

		//System.Boolean UnityEngine.XR.XRDisplaySubsystem::AddGraphicsThreadMirrorViewBlit(UnityEngine.Rendering.CommandBuffer,System.Boolean,System.Int32)
		void Register_UnityEngine_XR_XRDisplaySubsystem_AddGraphicsThreadMirrorViewBlit();
		Register_UnityEngine_XR_XRDisplaySubsystem_AddGraphicsThreadMirrorViewBlit();

		//System.Boolean UnityEngine.XR.XRDisplaySubsystem::GetMirrorViewBlitDesc(UnityEngine.RenderTexture,UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc&,System.Int32)
		void Register_UnityEngine_XR_XRDisplaySubsystem_GetMirrorViewBlitDesc();
		Register_UnityEngine_XR_XRDisplaySubsystem_GetMirrorViewBlitDesc();

		//System.Boolean UnityEngine.XR.XRDisplaySubsystem::Internal_TryBeginRecordingIfLateLatched(UnityEngine.Camera)
		void Register_UnityEngine_XR_XRDisplaySubsystem_Internal_TryBeginRecordingIfLateLatched();
		Register_UnityEngine_XR_XRDisplaySubsystem_Internal_TryBeginRecordingIfLateLatched();

		//System.Boolean UnityEngine.XR.XRDisplaySubsystem::Internal_TryEndRecordingIfLateLatched(UnityEngine.Camera)
		void Register_UnityEngine_XR_XRDisplaySubsystem_Internal_TryEndRecordingIfLateLatched();
		Register_UnityEngine_XR_XRDisplaySubsystem_Internal_TryEndRecordingIfLateLatched();

		//System.Boolean UnityEngine.XR.XRDisplaySubsystem::Internal_TryGetCullingParams(UnityEngine.Camera,System.Int32,UnityEngine.Rendering.ScriptableCullingParameters&)
		void Register_UnityEngine_XR_XRDisplaySubsystem_Internal_TryGetCullingParams();
		Register_UnityEngine_XR_XRDisplaySubsystem_Internal_TryGetCullingParams();

		//System.Boolean UnityEngine.XR.XRDisplaySubsystem::Internal_TryGetRenderPass(System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRRenderPass&)
		void Register_UnityEngine_XR_XRDisplaySubsystem_Internal_TryGetRenderPass();
		Register_UnityEngine_XR_XRDisplaySubsystem_Internal_TryGetRenderPass();

		//System.Int32 UnityEngine.XR.XRDisplaySubsystem::GetPreferredMirrorBlitMode()
		void Register_UnityEngine_XR_XRDisplaySubsystem_GetPreferredMirrorBlitMode();
		Register_UnityEngine_XR_XRDisplaySubsystem_GetPreferredMirrorBlitMode();

		//System.Int32 UnityEngine.XR.XRDisplaySubsystem::GetRenderPassCount()
		void Register_UnityEngine_XR_XRDisplaySubsystem_GetRenderPassCount();
		Register_UnityEngine_XR_XRDisplaySubsystem_GetRenderPassCount();

		//System.Void UnityEngine.XR.XRDisplaySubsystem::SetMSAALevel(System.Int32)
		void Register_UnityEngine_XR_XRDisplaySubsystem_SetMSAALevel();
		Register_UnityEngine_XR_XRDisplaySubsystem_SetMSAALevel();

		//System.Void UnityEngine.XR.XRDisplaySubsystem::set_disableLegacyRenderer(System.Boolean)
		void Register_UnityEngine_XR_XRDisplaySubsystem_set_disableLegacyRenderer();
		Register_UnityEngine_XR_XRDisplaySubsystem_set_disableLegacyRenderer();

		//System.Void UnityEngine.XR.XRDisplaySubsystem::set_sRGB(System.Boolean)
		void Register_UnityEngine_XR_XRDisplaySubsystem_set_sRGB();
		Register_UnityEngine_XR_XRDisplaySubsystem_set_sRGB();

		//System.Void UnityEngine.XR.XRDisplaySubsystem::set_scaleOfAllRenderTargets(System.Single)
		void Register_UnityEngine_XR_XRDisplaySubsystem_set_scaleOfAllRenderTargets();
		Register_UnityEngine_XR_XRDisplaySubsystem_set_scaleOfAllRenderTargets();

		//System.Void UnityEngine.XR.XRDisplaySubsystem::set_textureLayout(UnityEngine.XR.XRDisplaySubsystem/TextureLayout)
		void Register_UnityEngine_XR_XRDisplaySubsystem_set_textureLayout();
		Register_UnityEngine_XR_XRDisplaySubsystem_set_textureLayout();

		//System.Void UnityEngine.XR.XRDisplaySubsystem::set_zFar(System.Single)
		void Register_UnityEngine_XR_XRDisplaySubsystem_set_zFar();
		Register_UnityEngine_XR_XRDisplaySubsystem_set_zFar();

		//System.Void UnityEngine.XR.XRDisplaySubsystem::set_zNear(System.Single)
		void Register_UnityEngine_XR_XRDisplaySubsystem_set_zNear();
		Register_UnityEngine_XR_XRDisplaySubsystem_set_zNear();

	//End Registrations for type : UnityEngine.XR.XRDisplaySubsystem

	//Start Registrations for type : UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc

		//System.Void UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc::GetBlitParameter_Injected(UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc&,System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRBlitParams&)
		void Register_UnityEngine_XR_XRDisplaySubsystem_XRMirrorViewBlitDesc_GetBlitParameter_Injected();
		Register_UnityEngine_XR_XRDisplaySubsystem_XRMirrorViewBlitDesc_GetBlitParameter_Injected();

	//End Registrations for type : UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc

	//Start Registrations for type : UnityEngine.XR.XRDisplaySubsystem/XRRenderPass

		//System.Int32 UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::GetRenderParameterCount_Injected(UnityEngine.XR.XRDisplaySubsystem/XRRenderPass&)
		void Register_UnityEngine_XR_XRDisplaySubsystem_XRRenderPass_GetRenderParameterCount_Injected();
		Register_UnityEngine_XR_XRDisplaySubsystem_XRRenderPass_GetRenderParameterCount_Injected();

		//System.Void UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::GetRenderParameter_Injected(UnityEngine.XR.XRDisplaySubsystem/XRRenderPass&,UnityEngine.Camera,System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter&)
		void Register_UnityEngine_XR_XRDisplaySubsystem_XRRenderPass_GetRenderParameter_Injected();
		Register_UnityEngine_XR_XRDisplaySubsystem_XRRenderPass_GetRenderParameter_Injected();

	//End Registrations for type : UnityEngine.XR.XRDisplaySubsystem/XRRenderPass

	//Start Registrations for type : UnityEngine.XR.XRMeshSubsystem

		//System.Boolean UnityEngine.XR.XRMeshSubsystem::GetMeshInfosAsList(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>)
		void Register_UnityEngine_XR_XRMeshSubsystem_GetMeshInfosAsList();
		Register_UnityEngine_XR_XRMeshSubsystem_GetMeshInfosAsList();

		//System.Boolean UnityEngine.XR.XRMeshSubsystem::SetBoundingVolume_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_XR_XRMeshSubsystem_SetBoundingVolume_Injected();
		Register_UnityEngine_XR_XRMeshSubsystem_SetBoundingVolume_Injected();

		//System.Void UnityEngine.XR.XRMeshSubsystem::GenerateMeshAsync_Injected(UnityEngine.XR.MeshId&,UnityEngine.Mesh,UnityEngine.MeshCollider,UnityEngine.XR.MeshVertexAttributes,System.Action`1<UnityEngine.XR.MeshGenerationResult>)
		void Register_UnityEngine_XR_XRMeshSubsystem_GenerateMeshAsync_Injected();
		Register_UnityEngine_XR_XRMeshSubsystem_GenerateMeshAsync_Injected();

		//System.Void UnityEngine.XR.XRMeshSubsystem::set_meshDensity(System.Single)
		void Register_UnityEngine_XR_XRMeshSubsystem_set_meshDensity();
		Register_UnityEngine_XR_XRMeshSubsystem_set_meshDensity();

	//End Registrations for type : UnityEngine.XR.XRMeshSubsystem

	//Start Registrations for type : UnityEngine.XR.XRSettings

		//System.Boolean UnityEngine.XR.XRSettings::get_enabled()
		void Register_UnityEngine_XR_XRSettings_get_enabled();
		Register_UnityEngine_XR_XRSettings_get_enabled();

		//System.Boolean UnityEngine.XR.XRSettings::get_isDeviceActive()
		void Register_UnityEngine_XR_XRSettings_get_isDeviceActive();
		Register_UnityEngine_XR_XRSettings_get_isDeviceActive();

		//System.Int32 UnityEngine.XR.XRSettings::get_eyeTextureHeight()
		void Register_UnityEngine_XR_XRSettings_get_eyeTextureHeight();
		Register_UnityEngine_XR_XRSettings_get_eyeTextureHeight();

		//System.Int32 UnityEngine.XR.XRSettings::get_eyeTextureWidth()
		void Register_UnityEngine_XR_XRSettings_get_eyeTextureWidth();
		Register_UnityEngine_XR_XRSettings_get_eyeTextureWidth();

		//System.Single UnityEngine.XR.XRSettings::get_eyeTextureResolutionScale()
		void Register_UnityEngine_XR_XRSettings_get_eyeTextureResolutionScale();
		Register_UnityEngine_XR_XRSettings_get_eyeTextureResolutionScale();

		//System.Single UnityEngine.XR.XRSettings::get_renderViewportScaleInternal()
		void Register_UnityEngine_XR_XRSettings_get_renderViewportScaleInternal();
		Register_UnityEngine_XR_XRSettings_get_renderViewportScaleInternal();

		//System.String UnityEngine.XR.XRSettings::get_loadedDeviceName()
		void Register_UnityEngine_XR_XRSettings_get_loadedDeviceName();
		Register_UnityEngine_XR_XRSettings_get_loadedDeviceName();

		//System.String[] UnityEngine.XR.XRSettings::get_supportedDevices()
		void Register_UnityEngine_XR_XRSettings_get_supportedDevices();
		Register_UnityEngine_XR_XRSettings_get_supportedDevices();

		//System.Void UnityEngine.XR.XRSettings::get_eyeTextureDesc_Injected(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_XR_XRSettings_get_eyeTextureDesc_Injected();
		Register_UnityEngine_XR_XRSettings_get_eyeTextureDesc_Injected();

		//System.Void UnityEngine.XR.XRSettings::set_eyeTextureResolutionScale(System.Single)
		void Register_UnityEngine_XR_XRSettings_set_eyeTextureResolutionScale();
		Register_UnityEngine_XR_XRSettings_set_eyeTextureResolutionScale();

		//UnityEngine.XR.XRSettings/StereoRenderingMode UnityEngine.XR.XRSettings::get_stereoRenderingMode()
		void Register_UnityEngine_XR_XRSettings_get_stereoRenderingMode();
		Register_UnityEngine_XR_XRSettings_get_stereoRenderingMode();

	//End Registrations for type : UnityEngine.XR.XRSettings

	//Start Registrations for type : UnityEngineInternal.Input.NativeInputSystem

		//System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)
		void Register_UnityEngineInternal_Input_NativeInputSystem_set_hasDeviceDiscoveredCallback();
		Register_UnityEngineInternal_Input_NativeInputSystem_set_hasDeviceDiscoveredCallback();

	//End Registrations for type : UnityEngineInternal.Input.NativeInputSystem

}
