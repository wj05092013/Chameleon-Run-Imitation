#pragma once

/*
PCH: Yes
*/

namespace ba
{
	namespace inputvertex
	{
		//
		// Different Types Of Vertices
		//

		struct PosNormalTex : public Uncopiable
		{
			struct Vertex
			{
				XMFLOAT3 pos;
				XMFLOAT3 normal;
				XMFLOAT2 uv;
			};
			static const D3D11_INPUT_ELEMENT_DESC kInputElemDesc[3];
			static ID3D11InputLayout* kInputLayout;

			bool Init(ID3D11Device* device);
			void Destroy();
		};

		struct PosNormalTexTangent : public Uncopiable
		{
			struct Vertex
			{
				XMFLOAT3 pos;
				XMFLOAT3 normal;
				XMFLOAT2 uv;
				XMFLOAT3 tangent;
			};
			static const D3D11_INPUT_ELEMENT_DESC kInputElemDesc[4];
			static ID3D11InputLayout* kInputLayout;

			bool Init(ID3D11Device* device);
			void Destroy();
		};

		struct PosNormalTexTanSkinned : public Uncopiable
		{
			struct Vertex
			{
				XMFLOAT3 pos;
				XMFLOAT3 normal;
				XMFLOAT2 uv;
				XMFLOAT3 tangent;
				XMFLOAT3 blend_weights;
				UCHAR bone_indices[4];
			};
			static const D3D11_INPUT_ELEMENT_DESC kInputElemDesc[6];
			static ID3D11InputLayout* kInputLayout;

			bool Init(ID3D11Device* device);
			void Destroy();
		};

		struct Particle : public Uncopiable
		{
			struct Vertex
			{
				XMFLOAT3 pos;
				XMFLOAT3 velocity;
				XMFLOAT2 size;
				float age;
				unsigned int type;
			};
			static const D3D11_INPUT_ELEMENT_DESC kInputElemDesc[5];
			static ID3D11InputLayout* kInputLayout;

			bool Init(ID3D11Device* device);
			void Destroy();
		};


		// Integrated management of all input layouts.
		//
		bool InitAll(ID3D11Device* device);
		void DestroyAll();

		extern PosNormalTex kPosNormalTex;
		extern PosNormalTexTangent kPosNormalTexTangent;
		extern PosNormalTexTanSkinned kPosNormalTexTanSkinned;
		extern Particle kParticle;
		//__
	}
}