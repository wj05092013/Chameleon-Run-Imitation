#pragma once

/*
PCH: Yes
*/

#include "GraphicComponent.h"

namespace ba
{
	class Camera : public GraphicComponent
	{
	public:
		Camera();
		~Camera() override;

		void Destroy() override;

		//
		// Functions for UpdateParticles
		//

		// Call on every frame.
		//  After modifying camera transformation, rebuild the view matrix.
		void UpdateViewMatrix();

		// Call on resize.
		//  Set frustum.
		void SetLens(float fov_y, float aspect_ratio, float near_z, float far_z);

		//
		// Modulate Camera Transform
		//

		// Define camera space.
		void LookAt(const XMVECTOR& pos, const XMVECTOR& target, const XMVECTOR& up);
		void LookAt(const XMFLOAT3& pos, const XMFLOAT3& target, const XMFLOAT3& up);
		
		// Camera translation.
		void MoveCameraX(float d);
		void MoveCameraZ(float d);
		void MoveCameraY(float d);
		void MoveWorldY(float d);

		// Camera rotation.
		void Roll(float radian);
		void Pitch(float radian);
		void Yaw(float radian);
		void RotateWorldX(float radian);
		void RotateWorldY(float radian);
		void RotateWorldZ(float radian);

		void RotateTheta(const XMVECTOR& target, float radian);
		void RotatePhi(const XMVECTOR& target, float radian);

		//
		// Mutators
		//

		// Mutators for the camera position.
		void set_position_w(float x, float y, float z);
		void set_position_w(const XMFLOAT3& pos);
		void set_position_w(const XMVECTOR& pos);

		//
		// Accessors
		//

		// Accessors for the camera position.
		XMVECTOR position_w_xv() const;
		XMFLOAT3 position_w_xf() const;

		// Accessors to right, up, look vectors.
		XMVECTOR right_w_xv() const;
		XMFLOAT3 right_w_xf() const;
		XMVECTOR up_w_xv() const;
		XMFLOAT3 up_w_xf() const;
		XMVECTOR look_w_xv() const;
		XMFLOAT3 look_w_xf() const;

		// Accessors to the camera properties.
		float near_z() const;
		float far_z() const;
		float near_window_width() const;
		float near_window_height() const;
		float far_window_width() const;
		float far_window_height() const;
		float aspect_ratio() const;
		float fov_x() const;
		float fov_y() const;

		// Accessors to view, projection matrices.
		XMMATRIX view() const;
		XMMATRIX proj() const;

	private:
		XMFLOAT3 pos_w_;
		XMFLOAT3 up_w_;
		XMFLOAT3 right_w_;
		XMFLOAT3 look_w_;
		float near_z_;
		float far_z_;
		float fov_y_;
		float aspect_ratio_;
		
		float near_window_height_;
		float far_window_height_;

		XMFLOAT4X4 view_;
		XMFLOAT4X4 proj_;
	};
}
