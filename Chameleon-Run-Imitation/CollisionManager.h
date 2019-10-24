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

			void CreateCollider(const Collider::ColliderDesc& desc, PhysicsModel* physics_model);

		private:
			// The key(type 'int') is index of a collision domain.
			std::multimap<int, Collider*> static_colliders_;

			std::vector<Collider*> dynamic_colliders_;
		};
	}
}
