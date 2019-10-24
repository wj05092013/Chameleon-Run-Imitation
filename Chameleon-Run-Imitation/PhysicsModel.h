#pragma once

/*
PCH: Yes
*/

namespace ba
{
	namespace collision
	{
		class Collider;

		// Collider�� ����
		// 
		class PhysicsModel : public Model
		{
		public:
			PhysicsModel();
			~PhysicsModel() override;

			// �� PhysicsModel�� �浹�� ����� Collider ����
			void CreateCollider(Collider::EMovementType movement_type, Collider::EPrimitiveType primitive_type);

			void OnCollision();

			// Ʈ������ ����
			void Update();

		private:
			bool gravity_enabled_;

			float mass_;
			XMVECTOR velocity_;
			XMVECTOR res_force_;
		};
	}
}
