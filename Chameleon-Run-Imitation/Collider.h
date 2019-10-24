#pragma once

/*
PCH: Yes
*/

namespace ba
{
	namespace collision
	{
		// CollisionManager�� ���� ����, ����
		// CollisionManager���� �浹 ������ ���޹ް� ���� ������ ����
		//  PhysicsModel ����
		// Collider�� ũ��� Collision Domain���� Ŭ �� ����
		class Collider
		{
		public:
			enum EMovementType
			{
				kStatic,
				kDynamic
			};
			enum EPrimitiveType
			{
				kSphere,
				kAxisAlignedBox
			};

		public:
			Collider();
			virtual ~Collider();

			// ���� ���� ������ �ε��� ����
			//  Dynamic type�� ���
			void Update();

			// The 'out_first_idx' is the index of the domain which the bounding shape is in.
			//  If the shape is in just one domain, the 'out_second_idx' is -1,
			//  and if not, it is the other index different from the center index.
			virtual void CalcDomainIndices() = 0;

		protected:
			PhysicsModel* physics_model_;

			EMovementType movement_type_;
			EPrimitiveType primitive_type_;

			int first_domain_idx_;
			int second_domain_idx_;
		};
	}
}
