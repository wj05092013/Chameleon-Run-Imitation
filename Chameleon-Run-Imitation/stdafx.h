﻿// header.h: 표준 시스템 포함 파일
// 또는 프로젝트 특정 포함 파일이 들어 있는 포함 파일입니다.
//

#pragma once

#include "targetver.h"
#include "resource.h"

#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용을 Windows 헤더에서 제외합니다.

// C system header files.
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

// C++ standard library header files.
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include <map>
#include <set>

// Windows header files.
#include <Windows.h>
#include <windowsx.h>

// DirectX11 header files.
#include <D3D11.h>
#include <D3DX11.h>
#include <DirectXMath.h>
#include <DirectXCollision.h>

// Other library header files.

// Current project's header files.
#include "UsingNamespace.h"
#include "Uncopiable.h"
#include "Unconstructable.h"
#include "Light.h"
#include "Macros.h"
#include "MathHelper.h"
#include "Timer.h"

#include "d3dx11effect.h"
#include "EffectWrapper.h"
#include "BasicEffect.h"
#include "NormalMappingEffect.h"
#include "ShadowMapEffect.h"
#include "NormalDepthMapEffect.h"
#include "SSAOMapEffect.h"
#include "BlurSSAOEffect.h"
#include "DebugScreenEffect.h"
#include "RenderTextureEffect.h"
#include "ParticleEffect.h"
#include "Effects.h"

#include "InputVertex.h"
#include "GeometryGenerator.h"
#include "Mesh.h"

#include "Collider.h"
#include "SphereCollider.h"
#include "AABBCollider.h"
#include "CollisionManager.h"
#include "Model.h"
#include "PhysicsModel.h"

#include "DebugScreen.h"
#include "TextureManager.h"
#include "GraphicComponentManager.h"
#include "GraphicComponent.h"
#include "Camera.h"
#include "FreeViewpointCamera.h"
#include "RotationalCamera.h"
#include "RenderStates.h"
#include "ShadowMap.h"
#include "SSAOMap.h"
#include "Renderer.h"
#include "Particle.h"
#include "ParticleManager.h"

#include "SceneManager.h"
#include "Scene.h"
#include "Application.h"
#include "Game.h"