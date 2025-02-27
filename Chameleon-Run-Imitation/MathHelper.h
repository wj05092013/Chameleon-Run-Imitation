#pragma once

/*
PCH: Yes
*/

namespace ba
{
	namespace mathhelper
	{
		extern const XMMATRIX kRhToLh;

		static float RandF()
		{
			return (float)(rand()) / (float)RAND_MAX;
		}

		static float RandF(float a, float b)
		{
			return a + RandF() * (b - a);
		}

		template<typename T>
		static T Min(const T& a, const T& b)
		{
			return a < b ? a : b;
		}

		template<typename T>
		static T Max(const T& a, const T& b)
		{
			return a > b ? a : b;
		}

		template<typename T>
		static T Lerp(const T& a, const T& b, float t)
		{
			return a + (b - a) * t;
		}

		template<class T>
		static T Clamp(const T& x, const T& min, const T& max)
		{
			return (x > max) ? max : ((x < min) ? min : x);
		}

		float AngleFromXY(float x, float y);

		XMMATRIX InverseTranspose(CXMMATRIX m);

		XMVECTOR RandUnitVec3();
		XMVECTOR RandHemisphereUnitVec3(XMVECTOR n);


		// Calculate equations of all planes of an axis aligned box.
		void SetAABBPlaneEquations(const BoundingBox& box, XMVECTOR out_planes[6]);

		// Calculate a vector from 'plane' to 'point', using the intersection point between the 'plane'
		//  and the line which passes the 'plane' perpendicularly.
		XMVECTOR CalcVectorFromTo(const XMVECTOR& plane, const XMVECTOR& point);
	}
}
