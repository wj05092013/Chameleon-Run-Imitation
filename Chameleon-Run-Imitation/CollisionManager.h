#pragma once

/*
PCH: Yes
*/

namespace ba
{
	namespace collision
	{
		struct CollisionInfo
		{

		};

		// ��� Collider���� ����/������ ���
		// DynamicCollider �������� ���� ���� ���� ��� Collider��� �浹 �˻� ����
		class CollisionManager
		{
		private:
			CollisionManager();

		public:
			static CollisionManager& GetInstance();

			~CollisionManager();

			void CreateCollider(
				Collider::EMovementType movement_type,
				Collider::EPrimitiveType primitive_type,
				const float* restitutions,
				PhysicsModel* in_physics_model
			);

		private:
			// The key(type 'int') is index of a collision domain.
			std::multimap<int, Collider*> static_colliders_;

			std::vector<Collider*> dynamic_colliders_;
		};
	}
}
