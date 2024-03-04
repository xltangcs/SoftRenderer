#pragma once

#include <vector>
#include <string>
#include <glm/glm.hpp>


class Model
{
public:
	std::string modelName;
public:
	Model() = default;
	Model(const char* filename);
	~Model() = default;

	bool LoadModel(const char* filename);
	//std::vector<int> GetFace(int index);

	int nVerts() { return (int)verts.size(); }
	int nFaces() { return (int)faces.size(); }

	glm::vec3 GetVert(int index) { return verts[index]; }
	glm::vec3 GetNormal(int index) { return normals[index]; }
	glm::vec2 GetUV(int index) { return uvs[index]; }
	std::vector<glm::vec3> GetFace(int index) { return faces[index]; }

private:
	std::vector<glm::vec3> verts;
	std::vector<glm::vec2> uvs;
	std::vector<glm::vec3> normals;
	
	std::vector<std::vector<glm::vec3> > faces; // attention, this Vec3i means vertex/uv/normal


};