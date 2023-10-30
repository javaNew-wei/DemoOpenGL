#pragma once

class VertexBuffer
{
private:
	unsigned int m_RandererID;

public:
	VertexBuffer(const void* data, unsigned int size);
	~VertexBuffer();

	void Bind() const;
	void UnBind() const;
};