#pragma once

#include "BsScriptEnginePrerequisites.h"
#include "BsScriptObject.h"
#include "../../../bsf/Source/Foundation/bsfCore/Animation/BsAnimationCurve.h"
#include "BsScriptObject.h"
#include "../../../bsf/Source/Foundation/bsfCore/Animation/BsAnimationCurve.h"
#include "BsScriptObject.h"
#include "../../../bsf/Source/Foundation/bsfCore/Animation/BsAnimationCurve.h"
#include "../../../bsf/Source/Foundation/bsfCore/Animation/BsAnimationCurve.h"
#include "../../../bsf/Source/Foundation/bsfCore/Animation/BsAnimationCurve.h"
#include "../../../bsf/Source/Foundation/bsfCore/Animation/BsAnimationCurve.h"
#include "../../../bsf/Source/Foundation/bsfCore/Animation/BsAnimationCurve.h"

namespace bs
{
	struct __TNamedAnimationCurvefloatInterop
	{
		MonoString* name;
		Flags<AnimationCurveFlag> flags;
		MonoObject* curve;
	};

	class BS_SCR_BE_EXPORT ScriptTNamedAnimationCurvefloat : public ScriptObject<ScriptTNamedAnimationCurvefloat>
	{
	public:
		SCRIPT_OBJ(ENGINE_ASSEMBLY, "BansheeEngine", "NamedFloatCurve")

		static MonoObject* box(const __TNamedAnimationCurvefloatInterop& value);
		static __TNamedAnimationCurvefloatInterop unbox(MonoObject* value);
		static TNamedAnimationCurve<float> fromInterop(const __TNamedAnimationCurvefloatInterop& value);
		static __TNamedAnimationCurvefloatInterop toInterop(const TNamedAnimationCurve<float>& value);

	private:
		ScriptTNamedAnimationCurvefloat(MonoObject* managedInstance);

	};

	struct __TNamedAnimationCurveVector3Interop
	{
		MonoString* name;
		Flags<AnimationCurveFlag> flags;
		MonoObject* curve;
	};

	class BS_SCR_BE_EXPORT ScriptTNamedAnimationCurveVector3 : public ScriptObject<ScriptTNamedAnimationCurveVector3>
	{
	public:
		SCRIPT_OBJ(ENGINE_ASSEMBLY, "BansheeEngine", "NamedVector3Curve")

		static MonoObject* box(const __TNamedAnimationCurveVector3Interop& value);
		static __TNamedAnimationCurveVector3Interop unbox(MonoObject* value);
		static TNamedAnimationCurve<Vector3> fromInterop(const __TNamedAnimationCurveVector3Interop& value);
		static __TNamedAnimationCurveVector3Interop toInterop(const TNamedAnimationCurve<Vector3>& value);

	private:
		ScriptTNamedAnimationCurveVector3(MonoObject* managedInstance);

	};

	struct __TNamedAnimationCurveQuaternionInterop
	{
		MonoString* name;
		Flags<AnimationCurveFlag> flags;
		MonoObject* curve;
	};

	class BS_SCR_BE_EXPORT ScriptTNamedAnimationCurveQuaternion : public ScriptObject<ScriptTNamedAnimationCurveQuaternion>
	{
	public:
		SCRIPT_OBJ(ENGINE_ASSEMBLY, "BansheeEngine", "NamedQuaternionCurve")

		static MonoObject* box(const __TNamedAnimationCurveQuaternionInterop& value);
		static __TNamedAnimationCurveQuaternionInterop unbox(MonoObject* value);
		static TNamedAnimationCurve<Quaternion> fromInterop(const __TNamedAnimationCurveQuaternionInterop& value);
		static __TNamedAnimationCurveQuaternionInterop toInterop(const TNamedAnimationCurve<Quaternion>& value);

	private:
		ScriptTNamedAnimationCurveQuaternion(MonoObject* managedInstance);

	};
}
