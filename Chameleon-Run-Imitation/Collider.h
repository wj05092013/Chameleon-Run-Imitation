#pragma once

/*
PCH: Yes
*/

namespace ba
{
	namespace collision
	{
		class PhysicsModel;
		class CollisionManager;

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
			struct ColliderDesc
			{
				EMovementType movement_type_;
				EPrimitiveType primitive_type_;
				union
				{
					BoundingSphere sphere;
					BoundingBox box;
				};

				ColliderDesc() :
					movement_type_(kStatic),
					primitive_type_(kSphere)
				{}
			};

		private:
			Collider();
			friend class CollisionManager;

		public:
			~Collider();

			// ���� ���� ������ �ε��� ����
			//  Dynamic type�� ���
			void Update();

			// Mutators.
			//void set_physics_model(PhysicsModel* physics_model);

			// Accessors.
			//EMovementType get_movement_type() const;
			//EPrimitiveType get_primitive_type() const;

		private:
			// The 'out_first_idx' is the index of the domain which the bounding shape is in.
			//  If the shape is in just one domain, the 'out_second_idx' is -1,
			//  and if not, it is the other index different from the center index.
			void CalcDomainIndex();

		private:
			ColliderDesc desc_;

			PhysicsModel* physics_model_;
		};
	}
}
