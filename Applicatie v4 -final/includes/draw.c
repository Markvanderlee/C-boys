#include "draw.h"
#include "math.h"
#include "stm32_ub_vga_screen.h"
#include "stdlib.h"

//arial font declarations
void put_char_a_arial_normal( int x, int y, int kleur);
void put_char_b_arial_normal( int x, int y, int kleur);
void put_char_c_arial_normal( int x, int y, int kleur);
void put_char_d_arial_normal( int x, int y, int kleur);
void put_char_e_arial_normal( int x, int y, int kleur);
void put_char_f_arial_normal( int x, int y, int kleur);
void put_char_g_arial_normal( int x, int y, int kleur);
void put_char_h_arial_normal( int x, int y, int kleur);
void put_char_i_arial_normal( int x, int y, int kleur);
void put_char_j_arial_normal( int x, int y, int kleur);
void put_char_k_arial_normal( int x, int y, int kleur);
void put_char_l_arial_normal( int x, int y, int kleur);
void put_char_m_arial_normal( int x, int y, int kleur);
void put_char_n_arial_normal( int x, int y, int kleur);
void put_char_o_arial_normal( int x, int y, int kleur);
void put_char_p_arial_normal( int x, int y, int kleur);
void put_char_q_arial_normal( int x, int y, int kleur);
void put_char_r_arial_normal( int x, int y, int kleur);
void put_char_s_arial_normal( int x, int y, int kleur);
void put_char_t_arial_normal( int x, int y, int kleur);
void put_char_u_arial_normal( int x, int y, int kleur);
void put_char_v_arial_normal( int x, int y, int kleur);
void put_char_w_arial_normal( int x, int y, int kleur);
void put_char_x_arial_normal( int x, int y, int kleur);
void put_char_y_arial_normal( int x, int y, int kleur);
void put_char_z_arial_normal( int x, int y, int kleur);

//bookman font declarations
void put_char_a_bookman_normal(int x, int y, int kleur);
void put_char_b_bookman_normal(int x, int y, int kleur);
void put_char_c_bookman_normal(int x, int y, int kleur);
void put_char_d_bookman_normal(int x, int y, int kleur);
void put_char_e_bookman_normal(int x, int y, int kleur);
void put_char_f_bookman_normal(int x, int y, int kleur);
void put_char_g_bookman_normal(int x, int y, int kleur);
void put_char_h_bookman_normal(int x, int y, int kleur);
void put_char_i_bookman_normal(int x, int y, int kleur);
void put_char_j_bookman_normal(int x, int y, int kleur);
void put_char_k_bookman_normal(int x, int y, int kleur);
void put_char_l_bookman_normal(int x, int y, int kleur);
void put_char_m_bookman_normal(int x, int y, int kleur);
void put_char_n_bookman_normal(int x, int y, int kleur);
void put_char_o_bookman_normal(int x, int y, int kleur);
void put_char_p_bookman_normal(int x, int y, int kleur);
void put_char_q_bookman_normal(int x, int y, int kleur);
void put_char_r_bookman_normal(int x, int y, int kleur);
void put_char_s_bookman_normal(int x, int y, int kleur);
void put_char_t_bookman_normal(int x, int y, int kleur);
void put_char_u_bookman_normal(int x, int y, int kleur);
void put_char_v_bookman_normal(int x, int y, int kleur);
void put_char_w_bookman_normal(int x, int y, int kleur);
void put_char_x_bookman_normal(int x, int y, int kleur);
void put_char_y_bookman_normal(int x, int y, int kleur);
void put_char_z_bookman_normal(int x, int y, int kleur);

void put_char_a_arial_vet(int x, int y, int kleur);
void put_char_b_arial_vet(int x, int y, int kleur);
void put_char_c_arial_vet(int x, int y, int kleur);
void put_char_d_arial_vet(int x, int y, int kleur);
void put_char_e_arial_vet(int x, int y, int kleur);
void put_char_f_arial_vet(int x, int y, int kleur);
void put_char_g_arial_vet(int x, int y, int kleur);
void put_char_h_arial_vet(int x, int y, int kleur);
void put_char_i_arial_vet(int x, int y, int kleur);
void put_char_j_arial_vet(int x, int y, int kleur);
void put_char_k_arial_vet(int x, int y, int kleur);
void put_char_l_arial_vet(int x, int y, int kleur);
void put_char_m_arial_vet(int x, int y, int kleur);
void put_char_n_arial_vet(int x, int y, int kleur);
void put_char_o_arial_vet(int x, int y, int kleur);
void put_char_n_arial_vet(int x, int y, int kleur);
void put_char_p_arial_vet(int x, int y, int kleur);
void put_char_q_arial_vet(int x, int y, int kleur);
void put_char_r_arial_vet(int x, int y, int kleur);
void put_char_s_arial_vet(int x, int y, int kleur);
void put_char_t_arial_vet(int x, int y, int kleur);
void put_char_u_arial_vet(int x, int y, int kleur);
void put_char_v_arial_vet(int x, int y, int kleur);
void put_char_w_arial_vet(int x, int y, int kleur);
void put_char_x_arial_vet(int x, int y, int kleur);
void put_char_y_arial_vet(int x, int y, int kleur);
void put_char_z_arial_vet(int x, int y, int kleur);

void put_char_a_arial_cursief(int x, int y, int kleur);
void put_char_a_arial_cursief(int x, int y, int kleur);
void put_char_b_arial_cursief(int x, int y, int kleur);
void put_char_c_arial_cursief(int x, int y, int kleur);
void put_char_d_arial_cursief(int x, int y, int kleur);
void put_char_e_arial_cursief(int x, int y, int kleur);
void put_char_f_arial_cursief(int x, int y, int kleur);
void put_char_g_arial_cursief(int x, int y, int kleur);
void put_char_h_arial_cursief(int x, int y, int kleur);
void put_char_i_arial_cursief(int x, int y, int kleur);
void put_char_j_arial_cursief(int x, int y, int kleur);
void put_char_k_arial_cursief(int x, int y, int kleur);
void put_char_l_arial_cursief(int x, int y, int kleur);
void put_char_m_arial_cursief(int x, int y, int kleur);
void put_char_n_arial_cursief(int x, int y, int kleur);
void put_char_o_arial_cursief(int x, int y, int kleur);
void put_char_n_arial_cursief(int x, int y, int kleur);
void put_char_p_arial_cursief(int x, int y, int kleur);
void put_char_q_arial_cursief(int x, int y, int kleur);
void put_char_r_arial_cursief(int x, int y, int kleur);
void put_char_s_arial_cursief(int x, int y, int kleur);
void put_char_t_arial_cursief(int x, int y, int kleur);
void put_char_u_arial_cursief(int x, int y, int kleur);
void put_char_v_arial_cursief(int x, int y, int kleur);
void put_char_w_arial_cursief(int x, int y, int kleur);
void put_char_x_arial_cursief(int x, int y, int kleur);
void put_char_y_arial_cursief(int x, int y, int kleur);
void put_char_z_arial_cursief(int x, int y, int kleur);


//misc declarations
void put_char_spatie(int x, int y, int kleur);

void L00 (int x, int y, int kleur){
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L01 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L02 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L03 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L04 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L05 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L06 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L07 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L08 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L09 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L10 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L11 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L12 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L13 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L14 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L15 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L16 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L17 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L18 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L19 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L20 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L21 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L22 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L23 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L24 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L25 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L26 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L27 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}


void L28 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L29 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L30 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L31 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L32 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L33 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}
void L34 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L35 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L36 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L37 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L38 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L39 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L40 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L41 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L42 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L43 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L44 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L45 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L46 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L47 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L48 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L49 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L50 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L51 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L52 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L53 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L54 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L55 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L56 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L57 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L58 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L59 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L60 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L61 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L62 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L63 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L64 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L65 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L66 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L67 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L68 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L69 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L70 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L71 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L72 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L73 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L74 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L75 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L76 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L77 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L78 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L79 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L80 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L81 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L82 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L83 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L84 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L85 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L86 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L87 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L88 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L89 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L90 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L91 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L92 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L93 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}
void L94 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L95 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L96 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L97 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L98 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L99 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}
void L100 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L101 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L102 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L103 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L104 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L105 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}
void L106 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L107 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L108 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L109 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L110 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L111 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}
void L112 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L113 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L114 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L115 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L116 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L117 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}
void L118 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L119 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L120 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L121 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L122 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L123 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L124 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, 0);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L125 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L126 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L127 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L128 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L129 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L130 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L131 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L132 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L133 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L134 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L135 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L136 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L137 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L138 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L139 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L140 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L141 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L142 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L143 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L144 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L145 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L146 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L147 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L148 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L149 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L150 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L151 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L152 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L153 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L154 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L155 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L156 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L157 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}
void L158 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L159 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L160 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L161 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L162 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L163 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L164 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L165 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L166 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L167 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L168 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L169 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L170 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L171 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L172 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L173 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L174 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L175 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L176 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L177 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L178 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L179 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L180 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L181 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L182 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L183 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L184 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L185 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L186 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L187 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L188 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L189 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L190 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L191 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L192 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L193 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L194 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L195 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L196 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L197 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L198 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L199 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L200 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L201 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L202 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L203 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L204 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L205 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L206 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L207 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L208 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L209 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L210 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L211 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L212 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L213 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L214 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L215 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L216 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L217 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}
void L218 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L219 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L220 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L221 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L222 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L223 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}
void L224 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L225 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L226 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L227 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L228 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L229 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}
void L230 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L231 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L232 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L233 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L234 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L235 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}
void L236 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L237 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L238 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L239 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L240 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L241 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}
void L242 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L243 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L244 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L245 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L246 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L247 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L248 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, kleur);
	UB_VGA_SetPixel(x+2, y, kleur);
	UB_VGA_SetPixel(x+3, y, kleur);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, kleur);
	UB_VGA_SetPixel(x+6, y, kleur);
	UB_VGA_SetPixel(x+7, y, kleur);
}

void L249 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, 0);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, 0);
}

void L250 (int x, int y, int kleur) {
	UB_VGA_SetPixel(x+0, y, kleur);
	UB_VGA_SetPixel(x+1, y, 0);
	UB_VGA_SetPixel(x+2, y, 0);
	UB_VGA_SetPixel(x+3, y, 0);
	UB_VGA_SetPixel(x+4, y, kleur);
	UB_VGA_SetPixel(x+5, y, 0);
	UB_VGA_SetPixel(x+6, y, 0);
	UB_VGA_SetPixel(x+7, y, kleur);
}




// het smiley plaatje
int smiley[] = {
		255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,182,109,73,36,36,0,0,36,36,73,109,182,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,146,36,0,0,0,36,72,72,108,108,72,72,36,0,0,0,36,145,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,219,73,0,0,36,108,180,252,252,252,252,252,252,252,252,252,252,180,108,36,0,0,73,219,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,109,0,0,108,216,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,216,108,0,0,109,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,182,36,0,72,216,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,216,108,0,36,182,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,109,0,36,180,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,180,36,0,109,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,73,0,72,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,72,0,73,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,73,0,108,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,108,0,73,255,255,255,255,255,255,255
		,255,255,255,255,255,255,73,0,144,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,144,0,73,255,255,255,255,255,255
		,255,255,255,255,255,109,0,108,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,108,0,109,255,255,255,255,255
		,255,255,255,255,182,0,72,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,72,0,182,255,255,255,255
		,255,255,255,255,36,36,252,252,252,252,252,252,252,252,252,252,216,216,252,252,252,252,252,252,252,252,252,252,252,252,252,252,216,216,252,252,252,252,252,252,252,252,252,252,36,36,255,255,255,255
		,255,255,255,109,0,180,252,252,252,252,252,252,252,252,216,36,0,0,108,252,252,252,252,252,252,252,252,252,252,252,252,72,0,0,36,216,252,252,252,252,252,252,252,252,180,0,109,255,255,255
		,255,255,219,0,108,252,252,252,252,252,252,252,252,252,36,0,0,0,0,108,252,252,252,252,252,252,252,252,252,252,108,0,0,0,0,36,252,252,252,252,252,252,252,252,252,72,0,219,255,255
		,255,255,73,0,216,252,252,252,252,252,252,252,252,180,0,0,0,0,0,36,252,252,252,252,252,252,252,252,252,252,36,0,0,0,0,0,180,252,252,252,252,252,252,252,252,216,0,73,255,255
		,255,219,0,108,252,252,252,252,252,252,252,252,252,108,0,0,0,0,0,0,180,252,252,252,252,252,252,252,252,180,0,0,0,0,0,0,108,252,252,252,252,252,252,252,252,252,108,0,219,255
		,255,146,0,216,252,252,252,252,252,252,252,252,252,72,0,0,0,0,0,0,144,252,252,252,252,252,252,252,252,144,0,0,0,0,0,0,72,252,252,252,252,252,252,252,252,252,216,0,146,255
		,255,36,36,252,252,252,252,252,252,252,252,252,252,72,0,0,0,0,0,0,180,252,252,252,252,252,252,252,252,180,0,0,0,0,0,0,72,252,252,252,252,252,252,252,252,252,252,36,36,255
		,219,0,108,252,252,252,252,252,252,252,252,252,252,108,0,0,0,0,0,0,216,252,252,252,252,252,252,252,252,216,0,0,0,0,0,0,140,252,252,252,252,252,252,252,252,252,252,108,0,219
		,182,0,180,252,252,252,252,252,252,252,252,252,252,216,0,0,0,0,0,36,252,252,252,252,252,252,252,252,252,252,36,0,0,0,0,0,216,252,252,252,252,252,252,252,252,252,252,180,0,182
		,109,0,252,252,252,252,252,252,252,252,252,252,252,252,108,0,0,0,0,216,252,252,252,252,252,252,252,252,252,252,180,0,0,0,0,108,252,252,252,252,252,252,252,252,252,252,252,252,0,109
		,73,36,252,252,252,252,252,252,252,252,252,252,252,252,252,144,72,72,216,252,252,252,252,252,252,252,252,252,252,252,252,216,72,72,144,252,252,252,252,252,252,252,252,252,252,252,252,252,36,73
		,36,72,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,72,36
		,36,72,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,72,36
		,0,108,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,108,0
		,0,108,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,108,0
		,36,72,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,72,36
		,36,72,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,72,36
		,73,36,252,252,252,216,108,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,108,216,252,252,252,36,73
		,109,0,252,252,252,144,0,180,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,180,0,144,252,252,252,0,109
		,182,0,180,252,252,216,0,108,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,108,0,216,252,252,180,0,182
		,219,0,108,252,252,252,36,36,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,36,36,252,252,252,108,0,219
		,255,36,36,252,252,252,144,0,180,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,180,0,144,252,252,252,36,36,255
		,255,146,0,216,252,252,252,36,36,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,36,36,252,252,252,216,0,146,255
		,255,219,0,72,252,252,252,108,0,144,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,144,0,108,252,252,252,108,0,219,255
		,255,255,73,0,216,252,252,252,36,36,216,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,216,36,36,252,252,252,216,0,73,255,255
		,255,255,219,0,72,252,252,252,180,0,72,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,72,0,180,252,252,252,72,0,219,255,255
		,255,255,255,109,0,180,252,252,252,108,0,72,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,72,0,108,252,252,252,180,0,109,255,255,255
		,255,255,255,255,36,36,252,252,252,252,108,0,72,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,72,0,108,252,252,252,252,36,36,255,255,255,255
		,255,255,255,255,182,0,72,252,252,252,252,108,0,72,216,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,216,72,0,108,252,252,252,252,72,0,182,255,255,255,255
		,255,255,255,255,255,109,0,108,252,252,252,252,144,0,36,144,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,144,36,0,144,252,252,252,252,108,0,109,255,255,255,255,255
		,255,255,255,255,255,255,73,0,144,252,252,252,252,180,36,0,36,144,252,252,252,252,252,252,252,252,252,252,252,252,252,252,144,36,0,36,180,252,252,252,252,144,0,73,255,255,255,255,255,255
		,255,255,255,255,255,255,255,73,0,108,252,252,252,252,252,144,36,0,36,108,180,216,252,252,252,252,252,252,216,180,108,36,0,36,144,252,252,252,252,252,108,0,73,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,73,0,72,252,252,252,252,252,252,144,36,0,0,0,36,36,72,72,36,36,0,0,0,36,144,252,252,252,252,252,252,72,0,73,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,109,0,36,180,252,252,252,252,252,252,216,144,108,72,36,36,36,36,72,108,144,216,252,252,252,252,252,252,180,36,0,109,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,182,36,0,108,216,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,216,72,0,36,182,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,109,0,0,108,216,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,216,108,0,0,109,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,219,109,0,0,36,108,180,252,252,252,252,252,252,252,252,252,252,180,108,36,0,0,73,219,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,146,36,0,0,0,36,72,72,108,108,72,72,36,0,0,0,36,146,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,146,109,73,36,36,0,0,36,36,73,109,182,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255

};

int boos[] = {
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,72,108,144,180,180,180,144,108,72,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,144,216,252,252,252,252,252,252,252,252,252,252,252,216,108,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,72,216,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,144,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,0,0,0,36,180,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,72,0,0,0,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,0,0,72,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,108,0,0,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,0,72,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,108,0,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,72,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,72,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,36,252,252,252,252,252,252,252,252,144,252,252,252,252,252,252,252,252,252,252,252,252,144,252,252,252,252,252,252,252,252,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,180,252,252,252,252,252,252,252,252,36,108,252,252,252,252,252,252,252,252,252,252,72,108,252,252,252,252,252,252,252,252,180,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,68,252,252,252,252,252,252,252,252,252,252,0,72,248,252,252,252,252,252,252,216,36,36,252,252,252,252,252,252,252,252,252,252,36,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,180,252,252,252,252,252,252,252,252,252,252,0,0,0,216,252,252,252,252,180,0,0,36,252,252,252,252,252,252,252,252,252,252,180,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,252,252,252,252,252,252,252,252,252,252,216,0,0,36,252,252,252,252,252,252,0,0,0,252,252,252,252,252,252,252,252,252,252,252,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,72,252,252,252,252,252,252,252,252,252,252,216,0,0,36,252,252,252,252,252,252,0,0,0,252,252,252,252,252,252,252,252,252,252,252,108,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,180,252,252,252,252,252,252,252,252,252,252,216,0,0,36,252,252,252,252,252,252,0,0,0,252,252,252,252,252,252,252,252,252,252,252,180,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,252,252,252,252,252,252,252,252,252,252,252,252,0,0,108,252,252,252,252,252,252,72,0,68,252,252,252,252,252,252,252,252,252,252,252,252,0,0,0,0,0,0,0
		,0,0,0,0,0,0,36,252,252,252,252,252,252,252,252,252,252,252,252,144,0,216,252,252,252,252,252,252,180,0,180,252,252,252,252,252,252,252,252,252,252,252,252,36,0,0,0,0,0,0
		,0,0,0,0,0,0,108,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,72,0,0,0,0,0,0
		,0,0,0,0,0,0,144,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,248,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,108,0,0,0,0,0,0
		,0,0,0,0,0,0,180,252,252,252,252,252,252,252,252,252,252,252,252,252,176,72,0,0,0,0,36,108,216,252,252,252,252,252,252,252,252,252,252,252,252,252,252,144,0,0,0,0,0,0
		,0,0,0,0,0,0,180,252,252,252,252,252,252,252,252,252,252,252,180,36,0,0,0,36,36,0,0,0,0,72,248,252,252,252,252,252,252,252,252,252,252,252,252,144,0,0,0,0,0,0
		,0,0,0,0,0,0,212,252,252,252,252,252,252,252,252,252,252,108,0,0,72,180,252,252,252,252,252,144,36,0,0,180,252,252,252,252,252,252,252,252,252,252,252,144,0,0,0,0,0,0
		,0,0,0,0,0,0,212,252,252,252,252,252,252,252,252,252,72,0,36,216,252,252,252,252,252,252,252,252,252,180,0,0,144,252,252,252,252,252,252,252,252,252,252,144,0,0,0,0,0,0
		,0,0,0,0,0,0,180,252,252,252,252,252,252,252,252,108,0,108,252,252,252,252,252,252,252,252,252,252,252,252,248,36,0,176,252,252,252,252,252,252,252,252,252,144,0,0,0,0,0,0
		,0,0,0,0,0,0,144,252,252,252,252,252,252,252,176,0,108,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,72,0,216,252,252,252,252,252,252,252,252,108,0,0,0,0,0,0
		,0,0,0,0,0,0,108,252,252,252,252,252,252,216,0,72,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,36,0,252,252,252,252,252,252,252,252,72,0,0,0,0,0,0
		,0,0,0,0,0,0,72,252,252,252,252,252,252,72,0,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,216,0,108,252,252,252,252,252,252,252,36,0,0,0,0,0,0
		,0,0,0,0,0,0,36,252,252,252,252,252,180,0,180,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,180,0,212,252,252,252,252,252,252,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,216,252,252,108,180,36,72,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,72,36,252,252,252,252,252,180,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,144,252,252,72,0,0,216,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,216,0,176,252,252,252,252,104,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,36,252,252,108,0,36,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,108,36,144,144,252,252,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,216,252,180,0,72,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,216,0,0,108,252,144,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,72,252,252,0,72,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,36,0,144,252,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,216,252,144,32,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,0,0,252,144,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,36,252,252,216,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,180,36,216,248,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,108,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,72,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,0,144,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,108,0,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,0,0,108,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,144,0,0,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,0,0,0,36,216,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,144,0,0,0,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,144,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,108,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,180,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,180,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,144,252,252,252,252,252,252,252,252,252,252,252,180,72,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,72,108,180,216,216,216,180,144,72,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0

};

int pijl_rechts[] = {
		255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,109,36,73,219,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,36,0,0,0,0,219,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,146,0,0,0,0,0,0,219,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,0,0,219,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,182,0,0,0,0,0,0,0,0,219,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,73,0,0,0,0,0,0,0,0,219,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,73,0,0,0,0,0,0,0,0,219,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,73,0,0,0,0,0,0,0,0,219,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,73,0,0,0,0,0,0,0,0,219,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,73,0,0,0,0,0,0,0,0,219,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,73,0,0,0,0,0,0,0,0,219,255,255
		,255,255,146,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,0,0,0,0,0,0,0,0,0,219,255
		,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255
		,109,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,109
		,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36
		,73,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,73
		,219,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,219
		,255,219,109,73,73,73,73,73,73,73,73,73,73,73,73,73,73,73,73,73,73,73,73,73,0,0,0,0,0,0,0,0,0,219,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,0,0,0,219,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,0,0,0,219,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,0,0,0,219,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,0,0,0,219,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,0,0,0,182,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,0,0,0,182,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,0,0,0,0,0,0,0,0,182,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,146,0,0,0,0,0,0,0,182,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,182,0,0,0,0,0,0,182,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,36,0,0,0,0,182,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,109,36,73,219,255,255,255,255,255,255,255,255,255,255,255,255
};

int pijl_links[] = {
		255,255,255,255,255,255,255,255,255,255,255,255,219,73,36,109,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,182,0,0,0,0,36,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,182,0,0,0,0,0,0,182,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,182,0,0,0,0,0,0,0,146,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,182,0,0,0,0,0,0,0,0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,182,0,0,0,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,182,0,0,0,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,219,0,0,0,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,219,0,0,0,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,219,0,0,0,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,219,0,0,0,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,219,0,0,0,0,0,0,0,0,0,73,73,73,73,73,73,73,73,73,73,73,73,73,73,73,73,73,73,73,73,73,109,219,255
		,219,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,219
		,73,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,73
		,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36
		,109,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,109
		,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255
		,255,219,0,0,0,0,0,0,0,0,0,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,146,255,255
		,255,255,219,0,0,0,0,0,0,0,0,73,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,219,0,0,0,0,0,0,0,0,73,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,219,0,0,0,0,0,0,0,0,73,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,219,0,0,0,0,0,0,0,0,73,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,219,0,0,0,0,0,0,0,0,73,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,219,0,0,0,0,0,0,0,0,73,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,219,0,0,0,0,0,0,0,0,182,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,219,0,0,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,219,0,0,0,0,0,0,146,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,219,0,0,0,0,36,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,219,73,36,109,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
};

int pijl_omhoog[] = {
		255,255,255,255,255,255,255,255,255,255,255,255,255,109,36,73,219,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,219,0,0,0,0,0,219,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,219,0,0,0,0,0,0,0,219,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,219,0,0,0,0,0,0,0,0,0,219,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,219,0,0,0,0,0,0,0,0,0,0,0,219,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,219,0,0,0,0,0,0,0,0,0,0,0,0,0,219,255,255,255,255,255,255,255
		,255,255,255,255,255,255,219,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,182,255,255,255,255,255,255
		,255,255,255,255,255,219,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,182,255,255,255,255,255
		,255,255,255,255,219,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,182,255,255,255,255
		,255,255,255,219,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,182,255,255,255
		,255,255,219,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,182,255,255
		,255,219,0,0,0,0,0,0,0,0,73,109,0,0,0,0,0,73,109,0,0,0,0,0,0,0,0,182,255
		,219,0,0,0,0,0,0,0,0,73,255,109,0,0,0,0,0,73,255,109,0,0,0,0,0,0,0,0,219
		,73,0,0,0,0,0,0,0,73,255,255,109,0,0,0,0,0,73,255,255,109,0,0,0,0,0,0,0,73
		,36,0,0,0,0,0,0,73,255,255,255,109,0,0,0,0,0,73,255,255,255,109,0,0,0,0,0,0,36
		,109,0,0,0,0,0,73,255,255,255,255,109,0,0,0,0,0,73,255,255,255,255,109,0,0,0,0,0,109
		,255,36,0,0,0,73,255,255,255,255,255,109,0,0,0,0,0,73,255,255,255,255,255,109,0,0,0,36,255
		,255,255,146,109,182,255,255,255,255,255,255,109,0,0,0,0,0,73,255,255,255,255,255,255,219,146,182,255,255
		,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,73,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,73,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,73,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,73,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,73,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,73,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,73,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,73,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,73,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,73,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,73,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,73,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,73,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,73,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,146,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,0,0,0,0,0,219,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,109,36,73,219,255,255,255,255,255,255,255,255,255,255,255,255
};

int pijl_omlaag[] = {
		255,255,255,255,255,255,255,255,255,255,255,255,219,73,36,109,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,219,0,0,0,0,0,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,109,0,0,0,0,0,146,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,73,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,73,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,73,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,73,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,73,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,73,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,73,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,73,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,73,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,73,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,73,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,73,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,73,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,73,0,0,0,0,0,109,255,255,255,255,255,255,255,255,255,255,255
		,255,255,182,146,219,255,255,255,255,255,255,73,0,0,0,0,0,109,255,255,255,255,255,255,182,109,146,255,255
		,255,36,0,0,0,109,255,255,255,255,255,73,0,0,0,0,0,109,255,255,255,255,255,73,0,0,0,36,255
		,109,0,0,0,0,0,109,255,255,255,255,73,0,0,0,0,0,109,255,255,255,255,73,0,0,0,0,0,109
		,36,0,0,0,0,0,0,109,255,255,255,73,0,0,0,0,0,109,255,255,255,73,0,0,0,0,0,0,36
		,73,0,0,0,0,0,0,0,109,255,255,73,0,0,0,0,0,109,255,255,73,0,0,0,0,0,0,0,73
		,219,0,0,0,0,0,0,0,0,109,255,73,0,0,0,0,0,109,255,73,0,0,0,0,0,0,0,0,219
		,255,182,0,0,0,0,0,0,0,0,109,73,0,0,0,0,0,109,73,0,0,0,0,0,0,0,0,219,255
		,255,255,182,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,219,255,255
		,255,255,255,182,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,219,255,255,255
		,255,255,255,255,182,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,219,255,255,255,255
		,255,255,255,255,255,182,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,219,255,255,255,255,255
		,255,255,255,255,255,255,182,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,219,255,255,255,255,255,255
		,255,255,255,255,255,255,255,219,0,0,0,0,0,0,0,0,0,0,0,0,0,219,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,219,0,0,0,0,0,0,0,0,0,0,0,219,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,219,0,0,0,0,0,0,0,0,0,219,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,219,0,0,0,0,0,0,0,219,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,219,0,0,0,0,0,219,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,219,73,36,109,255,255,255,255,255,255,255,255,255,255,255,255,255
};

void VGA_init()
{
	UB_VGA_Screen_Init();
}

extern void clearscreen(int colour)
{
	UB_VGA_FillScreen(colour);
}

// deze functie maakt gebruik van de "Bresenham's Line Drawing Algoritmh".
void lijn_tonen(int x0, int y0, int x1, int y1, int dikte, int kleur) {
	int dx = abs(x1-x0), sx = x0<x1 ? 1 : -1;
	int dy = abs(y1-y0), sy = y0<y1 ? 1 : -1;
	int err = (dx>dy ? dx : -dy)/2, e2;
	int i = 0;

	for(;;){
		for (i=0; i<=dikte; i++) {
			UB_VGA_SetPixel(x0+i,y0, kleur);
		}
	    if (x0==x1 && y0==y1) break;
	    e2 = err;
	    if (e2 >-dx) { err -= dy; x0 += sx; }
	    if (e2 < dy) { err += dx; y0 += sy; }
	}
}


void cirkel_tonen(int xStart, int yStart, int Straal, int kleur) {
int y = 0;
int x = 0;

	for(y=-Straal; y<=Straal; y++)
	    for(x=-Straal; x<=Straal; x++)
	        if(x*x+y*y <= Straal*Straal)
	        	UB_VGA_SetPixel(xStart+x, yStart+y, kleur);
}

void driehoek_tonen(int x0, int y0, int x1, int y1, int x2, int y2, int kleur){

	lijn_tonen(x0, y0, x1, y1, 1, kleur);
	lijn_tonen(x0, y0, x2, y2, 1, kleur);
	lijn_tonen(x1, y1, x2, y2, 1, kleur);

}


void rechthoek_tonen(int xStart, int yStart, int xEind, int yEind, int kleur){
	int lengte = xEind - xStart;
	int breedte = yEind -yStart;

	int yPos = 0;
	int xPos = 0;

	for(yPos=0; yPos<=breedte; yPos++) {
		for(xPos=0; xPos<=lengte; xPos++) {
			UB_VGA_SetPixel(xPos+xStart, yPos+yStart, kleur);
		}
	}
}



void ellipse_tonen(int x, int y, int width, int height, int kleur){
	int xPos =0;
	int yPos =0;
	for(yPos=-height; yPos<=height; yPos++) {
		for(xPos=-width; xPos<=width; xPos++) {
			if(xPos*xPos*height*height+yPos*yPos*width*width <= height*height*width*width)
				UB_VGA_SetPixel(xPos+x, yPos+y, kleur);
	    }
	}
}

void tekst_tonen_arial_normaal(int x_s, int y, int kleur, char* tekst, int lengte)
{
	int i,j = 0;
	int x = x_s;
	for (i=0; i<=(lengte-1); i++){
		char letter = *tekst++;
		x = x_s + i*8;

		if(x >= VGA_X)
		{
			if(j == 0)
				y += 10;

			x=x_s + j*8;
			j++;
		}

		switch (letter){
		case 'a':
			put_char_a_arial_normal(x, y, kleur);
			break;
		case 'b':
			put_char_b_arial_normal(x, y, kleur);
			break;
		case 'c':
			put_char_c_arial_normal(x, y, kleur);
			break;
		case 'd':
			put_char_d_arial_normal(x, y, kleur);
			break;
		case 'e':
			put_char_e_arial_normal(x, y, kleur);
			break;
		case 'f':
			put_char_f_arial_normal(x, y, kleur);
			break;
		case 'g':
			put_char_g_arial_normal(x, y, kleur);
			break;
		case 'h':
			put_char_h_arial_normal(x, y, kleur);
			break;
		case 'i':
			put_char_i_arial_normal(x, y, kleur);
			break;
		case 'j':
			put_char_j_arial_normal(x, y, kleur);
			break;
		case 'k':
			put_char_k_arial_normal(x, y, kleur);
			break;
		case 'l':
			put_char_l_arial_normal(x, y, kleur);
			break;
		case 'm':
			put_char_m_arial_normal(x, y, kleur);
			break;
		case 'n':
			put_char_n_arial_normal(x, y, kleur);
			break;
		case 'o':
			put_char_o_arial_normal(x, y, kleur);
			break;
		case 'p':
			put_char_p_arial_normal(x, y, kleur);
			break;
		case 'q':
			put_char_q_arial_normal(x, y, kleur);
			break;
		case 'r':
			put_char_r_arial_normal(x, y, kleur);
			break;
		case 's':
			put_char_s_arial_normal(x, y, kleur);
			break;
		case 't':
			put_char_t_arial_normal(x, y, kleur);
			break;
		case 'u':
			put_char_u_arial_normal(x, y, kleur);
			break;
		case 'v':
			put_char_v_arial_normal(x, y, kleur);
			break;
		case 'w':
			put_char_w_arial_normal(x, y, kleur);
			break;
		case 'x':
			put_char_x_arial_normal(x, y, kleur);
			break;
		case 'y':
			put_char_y_arial_normal(x, y, kleur);
			break;
		case 'z':
			put_char_z_arial_normal(x, y, kleur);
			break;
		case ' ':
			put_char_spatie(x,y,kleur);
			break;
		}
	}
}

void tekst_tonen_arial_vet(int x_s, int y, int kleur, char* tekst, int lengte)
{
	int i,j = 0;
	int x = x_s;


	for (i=0; i<=(lengte-1); i++){
		char letter = *tekst++;
		x = x_s + i*8;

		if(x >= VGA_X)
		{
			if(j == 0)
				y += 10;

			x=x_s + j*8;
			j++;
		}

		switch (letter){
		case 'a':
			put_char_a_arial_vet(x, y, kleur);
			break;
		case 'b':
			put_char_b_arial_vet(x, y, kleur);
			break;
		case 'c':
			put_char_c_arial_vet(x, y, kleur);
			break;
		case 'd':
			put_char_d_arial_vet(x, y, kleur);
			break;
		case 'e':
			put_char_e_arial_vet(x, y, kleur);
			break;
		case 'f':
			put_char_f_arial_vet(x, y, kleur);
			break;
		case 'g':
			put_char_g_arial_vet(x, y, kleur);
			break;
		case 'h':
			put_char_h_arial_vet(x, y, kleur);
			break;
		case 'i':
			put_char_i_arial_vet(x, y, kleur);
			break;
		case 'j':
			put_char_j_arial_vet(x, y, kleur);
			break;
		case 'k':
			put_char_k_arial_vet(x, y, kleur);
			break;
		case 'l':
			put_char_l_arial_vet(x, y, kleur);
			break;
		case 'm':
			put_char_m_arial_vet(x, y, kleur);
			break;
		case 'n':
			put_char_n_arial_vet(x, y, kleur);
			break;
		case 'o':
			put_char_o_arial_vet(x, y, kleur);
			break;
		case 'p':
			put_char_p_arial_vet(x, y, kleur);
			break;
		case 'q':
			put_char_q_arial_vet(x, y, kleur);
			break;
		case 'r':
			put_char_r_arial_vet(x, y, kleur);
			break;
		case 's':
			put_char_s_arial_vet(x, y, kleur);
			break;
		case 't':
			put_char_t_arial_vet(x, y, kleur);
			break;
		case 'u':
			put_char_u_arial_vet(x, y, kleur);
			break;
		case 'v':
			put_char_v_arial_vet(x, y, kleur);
			break;
		case 'w':
			put_char_w_arial_vet(x, y, kleur);
			break;
		case 'x':
			put_char_x_arial_vet(x, y, kleur);
			break;
		case 'y':
			put_char_y_arial_vet(x, y, kleur);
			break;
		case 'z':
			put_char_z_arial_vet(x, y, kleur);
			break;
		case ' ':
			put_char_spatie(x,y,kleur);
			break;
		}
	}
}

void tekst_tonen_arial_cursief(int x_s, int y, int kleur, char* tekst, int lengte)
{
	int i,j = 0;
	int x = x_s;

	for (i=0; i<=(lengte-1); i++){
		char letter = tekst[i];
		x = x_s + i*8;

		if(x >= VGA_X)
		{
			if(j == 0)
				y += 10;

			x=x_s + j*8;
			j++;
		}

		switch (letter){
		case 'a':
			put_char_a_arial_cursief(x, y, kleur);
			break;
		case 'b':
			put_char_b_arial_cursief(x, y, kleur);
			break;
		case 'c':
			put_char_c_arial_cursief(x, y, kleur);
			break;
		case 'd':
			put_char_d_arial_cursief(x, y, kleur);
			break;
		case 'e':
			put_char_e_arial_cursief(x, y, kleur);
			break;
		case 'f':
			put_char_f_arial_cursief(x, y, kleur);
			break;
		case 'g':
			put_char_g_arial_cursief(x, y, kleur);
			break;
		case 'h':
			put_char_h_arial_cursief(x, y, kleur);
			break;
		case 'i':
			put_char_i_arial_cursief(x, y, kleur);
			break;
		case 'j':
			put_char_j_arial_cursief(x, y, kleur);
			break;
		case 'k':
			put_char_k_arial_cursief(x, y, kleur);
			break;
		case 'l':
			put_char_l_arial_cursief(x, y, kleur);
			break;
		case 'm':
			put_char_m_arial_cursief(x, y, kleur);
			break;
		case 'n':
			put_char_n_arial_cursief(x, y, kleur);
			break;
		case 'o':
			put_char_o_arial_cursief(x, y, kleur);
			break;
		case 'p':
			put_char_p_arial_cursief(x, y, kleur);
			break;
		case 'q':
			put_char_q_arial_cursief(x, y, kleur);
			break;
		case 'r':
			put_char_r_arial_cursief(x, y, kleur);
			break;
		case 's':
			put_char_s_arial_cursief(x, y, kleur);
			break;
		case 't':
			put_char_t_arial_cursief(x, y, kleur);
			break;
		case 'u':
			put_char_u_arial_cursief(x, y, kleur);
			break;
		case 'v':
			put_char_v_arial_cursief(x, y, kleur);
			break;
		case 'w':
			put_char_w_arial_cursief(x, y, kleur);
			break;
		case 'x':
			put_char_x_arial_cursief(x, y, kleur);
			break;
		case 'y':
			put_char_y_arial_cursief(x, y, kleur);
			break;
		case 'z':
			put_char_z_arial_cursief(x, y, kleur);
			break;
		case ' ':
			put_char_spatie(x,y,kleur);
			break;
		}
	}
}

void smiley_tonen(int x, int y){
	int width = 49;
	int height = 49;
	int yPos = 0;
	int xPos = 0;
	int teller = 0;

	for(yPos=0; yPos<=height; yPos++) {
	      for(xPos=0; xPos<=width; xPos++) {
	      	  UB_VGA_SetPixel(xPos+x, yPos+y, smiley[teller]);
	       	  teller++;
	      }
	}
}

void boos_tonen(int x, int y){
	int width = 49;
	int height = 49;
	int yPos = 0;
	int xPos = 0;
	int teller = 0;

	for(yPos=0; yPos<=height; yPos++) {
	      for(xPos=0; xPos<=width; xPos++) {
	      	  UB_VGA_SetPixel(xPos+x, yPos+y, boos[teller]);
	       	  teller++;
	      }
	}
}

void pijl_rechts_tonen( int x, int y){
	int width = 34;
	int height = 28;
	int yPos = 0;
	int xPos = 0;
	int teller = 0;

	for(yPos=0; yPos<=height; yPos++) {
	      for(xPos=0; xPos<=width; xPos++) {
	      	  UB_VGA_SetPixel(xPos+x, yPos+y, pijl_rechts[teller]);
	       	  teller++;
	      }
	}
}

void pijl_omhoog_tonen( int x, int y){
	int width = 28;
	int height = 34;
	int yPos = 0;
	int xPos = 0;
	int teller = 0;

	for(yPos=0; yPos<=height; yPos++) {
	      for(xPos=0; xPos<=width; xPos++) {
	      	  UB_VGA_SetPixel(xPos+x, yPos+y, pijl_omhoog[teller]);
	       	  teller++;
	      }
	}
}

void pijl_omlaag_tonen( int x, int y){
	int width = 28;
	int height = 34;
	int yPos = 0;
	int xPos = 0;
	int teller = 0;

	for(yPos=0; yPos<=height; yPos++) {
	      for(xPos=0; xPos<=width; xPos++) {
	      	  UB_VGA_SetPixel(xPos+x, yPos+y, pijl_omlaag[teller]);
	       	  teller++;
	      }
	}
}

void pijl_links_tonen( int x, int y){
	int width = 34;
	int height = 28;
	int yPos = 0;
	int xPos = 0;
	int teller = 0;

	for(yPos=0; yPos<=height; yPos++) {
	      for(xPos=0; xPos<=width; xPos++) {
	      	  UB_VGA_SetPixel(xPos+x, yPos+y, pijl_links[teller]);
	       	  teller++;
	      }
	}
}

void put_char_a_arial_normal( int x, int y, int kleur) {
	L00(x, (y+0), kleur);
	L16(x, (y+1), kleur);
	L40(x, (y+2), kleur);
	L40(x, (y+3), kleur);
	L65(x, (y+4), kleur);
	L121(x, (y+5), kleur);
	L126(x, (y+6), kleur);
	L126(x, (y+7), kleur);
}

void put_char_b_arial_normal( int x, int y, int kleur) {
	L117(x, (y+0), kleur);
	L65(x, (y+1), kleur);
	L65(x, (y+2), kleur);
	L117(x, (y+3), kleur);
	L65(x, (y+4), kleur);
	L65(x, (y+5), kleur);
	L65(x, (y+6), kleur);
	L117(x, (y+7), kleur);
}

void put_char_c_arial_normal( int x, int y, int kleur) {
	L28(x, (y+0), kleur);
	L34(x, (y+1), kleur);
	L61(x, (y+2), kleur);
	L61(x, (y+3), kleur);
	L61(x, (y+4), kleur);
	L61(x, (y+5), kleur);
	L34(x, (y+6), kleur);
	L28(x, (y+7), kleur);
}

void put_char_d_arial_normal(int x, int y, int kleur) {
	L117(x, (y+0), kleur);
	L65(x, (y+1), kleur);
	L63(x, (y+2), kleur);
	L63(x, (y+3), kleur);
	L63(x, (y+4), kleur);
	L63(x, (y+5), kleur);
	L65(x, (y+6), kleur);
	L117(x, (y+7), kleur);
}

void put_char_e_arial_normal(int x, int y, int kleur) {
	L121(x, (y+0), kleur);
	L61(x, (y+1), kleur);
	L61(x, (y+2), kleur);
	L121(x, (y+3), kleur);
	L61(x, (y+4), kleur);
	L61(x, (y+5), kleur);
	L61(x, (y+6), kleur);
	L121(x, (y+7), kleur);
}

void put_char_f_arial_normal(int x, int y, int kleur) {
	L121(x, (y+0), kleur);
	L61(x, (y+1), kleur);
	L61(x, (y+2), kleur);
	L121(x, (y+3), kleur);
	L61(x, (y+4), kleur);
	L61(x, (y+5), kleur);
	L61(x, (y+6), kleur);
	L61(x, (y+7), kleur);
}

void put_char_g_arial_normal(int x, int y, int kleur) {
	L30(x, (y+0), kleur);
	L33(x, (y+1), kleur);
	L61(x, (y+2), kleur);
	L61(x, (y+3), kleur);
	L68(x, (y+4), kleur);
	L62(x, (y+5), kleur);
	L33(x, (y+6), kleur);
	L30(x, (y+7), kleur);
}

void put_char_h_arial_normal(int x, int y, int kleur) {
	L63(x, (y+0), kleur);
	L63(x, (y+1), kleur);
	L63(x, (y+2), kleur);
	L123(x, (y+3), kleur);
	L63(x, (y+4), kleur);
	L63(x, (y+5), kleur);
	L63(x, (y+6), kleur);
	L63(x, (y+7), kleur);
}

void put_char_i_arial_normal(int x, int y, int kleur) {
	L16(x, (y+0), kleur);
	L16(x, (y+1), kleur);
	L16(x, (y+2), kleur);
	L16(x, (y+3), kleur);
	L16(x, (y+4), kleur);
	L16(x, (y+5), kleur);
	L16(x, (y+6), kleur);
	L16(x, (y+7), kleur);
}

void put_char_j_arial_normal( int x, int y, int kleur) {
	L04(x, (y+0), kleur);
	L04(x, (y+1), kleur);
	L04(x, (y+2), kleur);
	L04(x, (y+3), kleur);
	L04(x, (y+4), kleur);
	L65(x, (y+5), kleur);
	L65(x, (y+6), kleur);
	L53(x, (y+7), kleur);
}

void put_char_k_arial_normal(int x, int y, int kleur) {
	L63(x, (y+0), kleur);
	L65(x, (y+1), kleur);
	L69(x, (y+2), kleur);
	L77(x, (y+3), kleur);
	L93(x, (y+4), kleur);
	L69(x, (y+5), kleur);
	L65(x, (y+6), kleur);
	L63(x, (y+7), kleur);
}

void put_char_l_arial_normal(int x, int y, int kleur) {
	L32(x, (y+0), kleur);
	L32(x, (y+1), kleur);
	L32(x, (y+2), kleur);
	L32(x, (y+3), kleur);
	L32(x, (y+4), kleur);
	L32(x, (y+5), kleur);
	L32(x, (y+6), kleur);
	L57(x, (y+7), kleur);
}

void put_char_m_arial_normal(int x, int y, int kleur) {
	L62(x, (y+0), kleur);
	L96(x, (y+1), kleur);
	L96(x, (y+2), kleur);
	L82(x, (y+3), kleur);
	L82(x, (y+4), kleur);
	L82(x, (y+5), kleur);
	L70(x, (y+6), kleur);
	L70(x, (y+7), kleur);
}

void put_char_n_arial_normal(int x, int y, int kleur) {
	L63(x, (y+0), kleur);
	L95(x, (y+1), kleur);
	L79(x, (y+2), kleur);
	L79(x, (y+3), kleur);
	L71(x, (y+4), kleur);
	L71(x, (y+5), kleur);
	L67(x, (y+6), kleur);
	L63(x, (y+7), kleur);
}

void put_char_o_arial_normal(int x, int y, int kleur) {
	L28(x, (y+0), kleur);
	L34(x, (y+1), kleur);
	L62(x, (y+2), kleur);
	L62(x, (y+3), kleur);
	L62(x, (y+4), kleur);
	L62(x, (y+5), kleur);
	L34(x, (y+6), kleur);
	L28(x, (y+7), kleur);
}

void put_char_p_arial_normal(int x, int y, int kleur) {
	L117(x, (y+0), kleur);
	L65(x, (y+1), kleur);
	L65(x, (y+2), kleur);
	L65(x, (y+3), kleur);
	L117(x, (y+4), kleur);
	L61(x, (y+5), kleur);
	L61(x, (y+6), kleur);
	L61(x, (y+7), kleur);
}

void put_char_q_arial_normal(int x, int y, int kleur) {
	L28(x, (y+0), kleur);
	L34(x, (y+1), kleur);
	L62(x, (y+2), kleur);
	L62(x, (y+3), kleur);
	L62(x, (y+4), kleur);
	L66(x, (y+5), kleur);
	L34(x, (y+6), kleur);
	L31(x, (y+7), kleur);
}

void put_char_r_arial_normal(int x, int y, int kleur) {
	L121(x, (y+0), kleur);
	L63(x, (y+1), kleur);
	L63(x, (y+2), kleur);
	L63(x, (y+3), kleur);
	L121(x, (y+4), kleur);
	L65(x, (y+5), kleur);
	L63(x, (y+6), kleur);
	L62(x, (y+7), kleur);
}

void put_char_s_arial_normal(int x, int y, int kleur) {
	L53(x, (y+0), kleur);
	L65(x, (y+1), kleur);
	L61(x, (y+2), kleur);
	L45(x, (y+3), kleur);
	L08(x, (y+4), kleur);
	L04(x, (y+5), kleur);
	L65(x, (y+6), kleur);
	L53(x, (y+7), kleur);
}

void put_char_t_arial_normal(int x, int y, int kleur) {
	L124(x, (y+0), kleur);
	L08(x, (y+1), kleur);
	L08(x, (y+2), kleur);
	L08(x, (y+3), kleur);
	L08(x, (y+4), kleur);
	L08(x, (y+5), kleur);
	L08(x, (y+6), kleur);
	L08(x, (y+7), kleur);
}

void put_char_u_arial_normal(int x, int y, int kleur) {
	L63(x, (y+0), kleur);
	L63(x, (y+1), kleur);
	L63(x, (y+2), kleur);
	L63(x, (y+3), kleur);
	L63(x, (y+4), kleur);
	L63(x, (y+5), kleur);
	L63(x, (y+6), kleur);
	L57(x, (y+7), kleur);
}

void put_char_v_arial_normal(int x, int y, int kleur) {
	L00(x, (y+0), kleur);
	L126(x, (y+1), kleur);
	L65(x, (y+2), kleur);
	L65(x, (y+3), kleur);
	L65(x, (y+4), kleur);
	L40(x, (y+5), kleur);
	L40(x, (y+6), kleur);
	L16(x, (y+7), kleur);
}

void put_char_w_arial_normal(int x, int y, int kleur) {
	L00(x, (y+0), kleur);
	L250(x, (y+1), kleur);
	L250(x, (y+2), kleur);
	L82(x, (y+3), kleur);
	L82(x, (y+4), kleur);
	L82(x, (y+5), kleur);
	L82(x, (y+6), kleur);
	L34(x, (y+7), kleur);
}

void put_char_x_arial_normal(int x, int y, int kleur) {
	L62(x, (y+0), kleur);
	L34(x, (y+1), kleur);
	L20(x, (y+2), kleur);
	L08(x, (y+3), kleur);
	L08(x, (y+4), kleur);
	L20(x, (y+5), kleur);
	L34(x, (y+6), kleur);
	L62(x, (y+7), kleur);
}

void put_char_y_arial_normal(int x, int y, int kleur) {
	L62(x, (y+0), kleur);
	L34(x, (y+1), kleur);
	L34(x, (y+2), kleur);
	L20(x, (y+3), kleur);
	L08(x, (y+4), kleur);
	L08(x, (y+5), kleur);
	L08(x, (y+6), kleur);
	L08(x, (y+7), kleur);
}

void put_char_z_arial_normal(int x, int y, int kleur) {
	L123(x, (y+0), kleur);
	L02(x, (y+1), kleur);
	L04(x, (y+2), kleur);
	L08(x, (y+3), kleur);
	L16(x, (y+4), kleur);
	L32(x, (y+5), kleur);
	L61(x, (y+6), kleur);
	L123(x, (y+7), kleur);
}

void put_char_a_bookman_normal(int x, int y, int kleur) {
	L00(x, (y+0), kleur);
	L16(x, (y+1), kleur);
	L40(x, (y+2), kleur);
	L40(x, (y+3), kleur);
	L40(x, (y+4), kleur);
	L121(x, (y+5), kleur);
	L65(x, (y+6), kleur);
	L191(x, (y+7), kleur);
}

void put_char_b_bookman_normal(int x, int y, int kleur) {
	L245(x, (y+0), kleur);
	L63(x, (y+1), kleur);
	L63(x, (y+2), kleur);
	L121(x, (y+3), kleur);
	L63(x, (y+4), kleur);
	L63(x, (y+5), kleur);
	L63(x, (y+6), kleur);
	L245(x, (y+7), kleur);
}

void put_char_c_bookman_normal(int x, int y, int kleur) {
	L55(x, (y+0), kleur);
	L67(x, (y+1), kleur);
	L126(x, (y+2), kleur);
	L249(x, (y+3), kleur);
	L249(x, (y+4), kleur);
	L249(x, (y+5), kleur);
	L63(x, (y+6), kleur);
	L57(x, (y+7), kleur);
}

void put_char_d_bookman_normal(int x, int y, int kleur) {
	L241(x, (y+0), kleur);
	L65(x, (y+1), kleur);
	L63(x, (y+2), kleur);
	L63(x, (y+3), kleur);
	L63(x, (y+4), kleur);
	L63(x, (y+5), kleur);
	L65(x, (y+6), kleur);
	L241(x, (y+7), kleur);
}

void put_char_e_bookman_normal(int x, int y, int kleur) {
	L245(x, (y+0), kleur);
	L63(x, (y+1), kleur);
	L69(x, (y+2), kleur);
	L117(x, (y+3), kleur);
	L69(x, (y+4), kleur);
	L63(x, (y+5), kleur);
	L63(x, (y+6), kleur);
	L245(x, (y+7), kleur);
}

void put_char_f_bookman_normal(int x, int y, int kleur) {
	L245(x, (y+0), kleur);
	L63(x, (y+1), kleur);
	L69(x, (y+2), kleur);
	L117(x, (y+3), kleur);
	L69(x, (y+4), kleur);
	L61(x, (y+5), kleur);
	L61(x, (y+6), kleur);
	L217(x, (y+7), kleur);
}

void put_char_g_bookman_normal(int x, int y, int kleur) {
	L55(x, (y+0), kleur);
	L67(x, (y+1), kleur);
	L126(x, (y+2), kleur);
	L249(x, (y+3), kleur);
	L138(x, (y+4), kleur);
	L128(x, (y+5), kleur);
	L65(x, (y+6), kleur);
	L57(x, (y+7), kleur);
}

void put_char_h_bookman_normal(int x, int y, int kleur) {
	L224(x, (y+0), kleur);
	L63(x, (y+1), kleur);
	L63(x, (y+2), kleur);
	L123(x, (y+3), kleur);
	L63(x, (y+4), kleur);
	L63(x, (y+5), kleur);
	L63(x, (y+6), kleur);
	L224(x, (y+7), kleur);
}

void put_char_i_bookman_normal(int x, int y, int kleur) {
	L53(x, (y+0), kleur);
	L16(x, (y+1), kleur);
	L16(x, (y+2), kleur);
	L16(x, (y+3), kleur);
	L16(x, (y+4), kleur);
	L16(x, (y+5), kleur);
	L16(x, (y+6), kleur);
	L53(x, (y+7), kleur);
}

void put_char_j_bookman_normal(int x, int y, int kleur) {
	L28(x, (y+0), kleur);
	L08(x, (y+1), kleur);
	L08(x, (y+2), kleur);
	L08(x, (y+3), kleur);
	L08(x, (y+4), kleur);
	L132(x, (y+5), kleur);
	L132(x, (y+6), kleur);
	L109(x, (y+7), kleur);
}

void put_char_k_bookman_normal(int x, int y, int kleur) {
	L224(x, (y+0), kleur);
	L65(x, (y+1), kleur);
	L69(x, (y+2), kleur);
	L77(x, (y+3), kleur);
	L101(x, (y+4), kleur);
	L69(x, (y+5), kleur);
	L65(x, (y+6), kleur);
	L224(x, (y+7), kleur);
}

void put_char_l_bookman_normal(int x, int y, int kleur) {
	L217(x, (y+0), kleur);
	L61(x, (y+1), kleur);
	L61(x, (y+2), kleur);
	L61(x, (y+3), kleur);
	L61(x, (y+4), kleur);
	L61(x, (y+5), kleur);
	L63(x, (y+6), kleur);
	L245(x, (y+7), kleur);
}

void put_char_m_bookman_normal(int x, int y, int kleur) {
	L220(x, (y+0), kleur);
	L96(x, (y+1), kleur);
	L96(x, (y+2), kleur);
	L82(x, (y+3), kleur);
	L82(x, (y+4), kleur);
	L82(x, (y+5), kleur);
	L70(x, (y+6), kleur);
	L228(x, (y+7), kleur);
}

void put_char_n_bookman_normal(int x, int y, int kleur) {
	L224(x, (y+0), kleur);
	L95(x, (y+1), kleur);
	L79(x, (y+2), kleur);
	L79(x, (y+3), kleur);
	L71(x, (y+4), kleur);
	L67(x, (y+5), kleur);
	L67(x, (y+6), kleur);
	L219(x, (y+7), kleur);
}

void put_char_o_bookman_normal(int x, int y, int kleur) {
	L57(x, (y+0), kleur);
	L63(x, (y+1), kleur);
	L125(x, (y+2), kleur);
	L125(x, (y+3), kleur);
	L125(x, (y+4), kleur);
	L125(x, (y+5), kleur);
	L63(x, (y+6), kleur);
	L57(x, (y+7), kleur);
}

void put_char_p_bookman_normal(int x, int y, int kleur) {
	L245(x, (y+0), kleur);
	L63(x, (y+1), kleur);
	L63(x, (y+2), kleur);
	L63(x, (y+3), kleur);
	L121(x, (y+4), kleur);
	L61(x, (y+5), kleur);
	L61(x, (y+6), kleur);
	L217(x, (y+7), kleur);
}

void put_char_q_bookman_normal(int x, int y, int kleur) {
	L57(x, (y+0), kleur);
	L63(x, (y+1), kleur);
	L125(x, (y+2), kleur);
	L125(x, (y+3), kleur);
	L125(x, (y+4), kleur);
	L129(x, (y+5), kleur);
	L67(x, (y+6), kleur);
	L60(x, (y+7), kleur);
}

void put_char_r_bookman_normal(int x, int y, int kleur) {
	L245(x, (y+0), kleur);
	L63(x, (y+1), kleur);
	L63(x, (y+2), kleur);
	L121(x, (y+3), kleur);
	L77(x, (y+4), kleur);
	L69(x, (y+5), kleur);
	L65(x, (y+6), kleur);
	L219(x, (y+7), kleur);
}

void put_char_s_bookman_normal(int x, int y, int kleur) {
	L113(x, (y+0), kleur);
	L136(x, (y+1), kleur);
	L65(x, (y+2), kleur);
	L109(x, (y+3), kleur);
	L12(x, (y+4), kleur);
	L65(x, (y+5), kleur);
	L189(x, (y+6), kleur);
	L177(x, (y+7), kleur);
}

void put_char_t_bookman_normal(int x, int y, int kleur) {
	L121(x, (y+0), kleur);
	L142(x, (y+1), kleur);
	L16(x, (y+2), kleur);
	L16(x, (y+3), kleur);
	L16(x, (y+4), kleur);
	L16(x, (y+5), kleur);
	L16(x, (y+6), kleur);
	L53(x, (y+7), kleur);
}

void put_char_u_bookman_normal(int x, int y, int kleur) {
	L224(x, (y+0), kleur);
	L63(x, (y+1), kleur);
	L63(x, (y+2), kleur);
	L63(x, (y+3), kleur);
	L63(x, (y+4), kleur);
	L63(x, (y+5), kleur);
	L63(x, (y+6), kleur);
	L57(x, (y+7), kleur);
}

void put_char_v_bookman_normal(int x, int y, int kleur) {
	L231(x, (y+0), kleur);
	L65(x, (y+1), kleur);
	L65(x, (y+2), kleur);
	L40(x, (y+3), kleur);
	L40(x, (y+4), kleur);
	L40(x, (y+5), kleur);
	L40(x, (y+6), kleur);
	L16(x, (y+7), kleur);
}

void put_char_w_bookman_normal(int x, int y, int kleur) {
	L214(x, (y+0), kleur);
	L133(x, (y+1), kleur);
	L133(x, (y+2), kleur);
	L82(x, (y+3), kleur);
	L82(x, (y+4), kleur);
	L82(x, (y+5), kleur);
	L82(x, (y+6), kleur);
	L34(x, (y+7), kleur);
}

void put_char_x_bookman_normal(int x, int y, int kleur) {
	L224(x, (y+0), kleur);
	L36(x, (y+1), kleur);
	L36(x, (y+2), kleur);
	L24(x, (y+3), kleur);
	L24(x, (y+4), kleur);
	L36(x, (y+5), kleur);
	L65(x, (y+6), kleur);
	L224(x, (y+7), kleur);
}

void put_char_y_bookman_normal(int x, int y, int kleur) {
	L231(x, (y+0), kleur);
	L65(x, (y+1), kleur);
	L40(x, (y+2), kleur);
	L40(x, (y+3), kleur);
	L16(x, (y+4), kleur);
	L16(x, (y+5), kleur);
	L16(x, (y+6), kleur);
	L53(x, (y+7), kleur);
}

void put_char_z_bookman_normal(int x, int y, int kleur) {
	L123(x, (y+0), kleur);
	L65(x, (y+1), kleur);
	L08(x, (y+2), kleur);
	L16(x, (y+3), kleur);
	L16(x, (y+4), kleur);
	L34(x, (y+5), kleur);
	L63(x, (y+6), kleur);
	L245(x, (y+7), kleur);
}

void put_char_a_arial_cursief(int x, int y, int kleur) {
	L04(x, (y+0), kleur);
	L10(x, (y+1), kleur);
	L10(x, (y+2), kleur);
	L18(x, (y+3), kleur);
	L18(x, (y+4), kleur);
	L59(x, (y+5), kleur);
	L34(x, (y+6), kleur);
	L63(x, (y+7), kleur);
}

void put_char_b_arial_cursief(int x, int y, int kleur) {
	L30(x, (y+0), kleur);
	L18(x, (y+1), kleur);
	L34(x, (y+2), kleur);
	L57(x, (y+3), kleur);
	L34(x, (y+4), kleur);
	L34(x, (y+5), kleur);
	L63(x, (y+6), kleur);
	L121(x, (y+7), kleur);
}

void put_char_c_arial_cursief(int x, int y, int kleur) {
	L28(x, (y+0), kleur);
	L34(x, (y+1), kleur);
	L61(x, (y+2), kleur);
	L61(x, (y+3), kleur);
	L61(x, (y+4), kleur);
	L63(x, (y+5), kleur);
	L65(x, (y+6), kleur);
	L53(x, (y+7), kleur);
}

void put_char_d_arial_cursief(int x, int y, int kleur) {
	L30(x, (y+0), kleur);
	L17(x, (y+1), kleur);
	L33(x, (y+2), kleur);
	L33(x, (y+3), kleur);
	L33(x, (y+4), kleur);
	L33(x, (y+5), kleur);
	L63(x, (y+6), kleur);
	L121(x, (y+7), kleur);
}

void put_char_e_arial_cursief(int x, int y, int kleur) {
	L31(x, (y+0), kleur);
	L16(x, (y+1), kleur);
	L32(x, (y+2), kleur);
	L59(x, (y+3), kleur);
	L32(x, (y+4), kleur);
	L32(x, (y+5), kleur);
	L61(x, (y+6), kleur);
	L123(x, (y+7), kleur);
}

void put_char_f_arial_cursief(int x, int y, int kleur) {
	L31(x, (y+0), kleur);
	L16(x, (y+1), kleur);
	L32(x, (y+2), kleur);
	L59(x, (y+3), kleur);
	L32(x, (y+4), kleur);
	L32(x, (y+5), kleur);
	L61(x, (y+6), kleur);
	L61(x, (y+7), kleur);
}

void put_char_g_arial_cursief(int x, int y, int kleur) {
	L30(x, (y+0), kleur);
	L33(x, (y+1), kleur);
	L61(x, (y+2), kleur);
	L61(x, (y+3), kleur);
	L76(x, (y+4), kleur);
	L63(x, (y+5), kleur);
	L63(x, (y+6), kleur);
	L57(x, (y+7), kleur);
}

void put_char_h_arial_cursief(int x, int y, int kleur) {
	L33(x, (y+0), kleur);
	L33(x, (y+1), kleur);
	L63(x, (y+2), kleur);
	L123(x, (y+3), kleur);
	L63(x, (y+4), kleur);
	L63(x, (y+5), kleur);
	L128(x, (y+6), kleur);
	L128(x, (y+7), kleur);
}

void put_char_i_arial_cursief(int x, int y, int kleur) {
	L08(x, (y+0), kleur);
	L08(x, (y+1), kleur);
	L16(x, (y+2), kleur);
	L16(x, (y+3), kleur);
	L16(x, (y+4), kleur);
	L16(x, (y+5), kleur);
	L32(x, (y+6), kleur);
	L32(x, (y+7), kleur);
}

void put_char_j_arial_cursief(int x, int y, int kleur) {
	L04(x, (y+0), kleur);
	L04(x, (y+1), kleur);
	L04(x, (y+2), kleur);
	L08(x, (y+3), kleur);
	L08(x, (y+4), kleur);
	L69(x, (y+5), kleur);
	L69(x, (y+6), kleur);
	L45(x, (y+7), kleur);
}

void put_char_k_arial_cursief(int x, int y, int kleur) {
	L18(x, (y+0), kleur);
	L20(x, (y+1), kleur);
	L40(x, (y+2), kleur);
	L45(x, (y+3), kleur);
	L40(x, (y+4), kleur);
	L40(x, (y+5), kleur);
	L65(x, (y+6), kleur);
	L65(x, (y+7), kleur);
}

void put_char_l_arial_cursief(int x, int y, int kleur) {
	L16(x, (y+0), kleur);
	L16(x, (y+1), kleur);
	L32(x, (y+2), kleur);
	L32(x, (y+3), kleur);
	L32(x, (y+4), kleur);
	L32(x, (y+5), kleur);
	L61(x, (y+6), kleur);
	L121(x, (y+7), kleur);
}

void put_char_m_arial_cursief(int x, int y, int kleur) {
	L46(x, (y+0), kleur);
	L80(x, (y+1), kleur);
	L80(x, (y+2), kleur);
	L82(x, (y+3), kleur);
	L82(x, (y+4), kleur);
	L86(x, (y+5), kleur);
	L150(x, (y+6), kleur);
	L142(x, (y+7), kleur);
}

void put_char_n_arial_cursief(int x, int y, int kleur) {
	L33(x, (y+0), kleur);
	L46(x, (y+1), kleur);
	L79(x, (y+2), kleur);
	L79(x, (y+3), kleur);
	L71(x, (y+4), kleur);
	L71(x, (y+5), kleur);
	L136(x, (y+6), kleur);
	L128(x, (y+7), kleur);
}

void put_char_o_arial_cursief(int x, int y, int kleur) {
	L57(x, (y+0), kleur);
	L63(x, (y+1), kleur);
	L126(x, (y+2), kleur);
	L126(x, (y+3), kleur);
	L126(x, (y+4), kleur);
	L126(x, (y+5), kleur);
	L128(x, (y+6), kleur);
	L117(x, (y+7), kleur);
}

void put_char_p_arial_cursief(int x, int y, int kleur) {
	L57(x, (y+0), kleur);
	L34(x, (y+1), kleur);
	L63(x, (y+2), kleur);
	L63(x, (y+3), kleur);
	L121(x, (y+4), kleur);
	L61(x, (y+5), kleur);
	L249(x, (y+6), kleur);
	L249(x, (y+7), kleur);
}

void put_char_q_arial_cursief(int x, int y, int kleur) {
	L57(x, (y+0), kleur);
	L63(x, (y+1), kleur);
	L63(x, (y+2), kleur);
	L126(x, (y+3), kleur);
	L126(x, (y+4), kleur);
	L128(x, (y+5), kleur);
	L152(x, (y+6), kleur);
	L123(x, (y+7), kleur);
}

void put_char_r_arial_cursief(int x, int y, int kleur) {
	L59(x, (y+0), kleur);
	L34(x, (y+1), kleur);
	L63(x, (y+2), kleur);
	L121(x, (y+3), kleur);
	L69(x, (y+4), kleur);
	L69(x, (y+5), kleur);
	L136(x, (y+6), kleur);
	L136(x, (y+7), kleur);
}

void put_char_s_arial_cursief(int x, int y, int kleur) {
	L57(x, (y+0), kleur);
	L63(x, (y+1), kleur);
	L61(x, (y+2), kleur);
	L45(x, (y+3), kleur);
	L08(x, (y+4), kleur);
	L128(x, (y+5), kleur);
	L128(x, (y+6), kleur);
	L117(x, (y+7), kleur);
}

void put_char_t_arial_cursief(int x, int y, int kleur) {
	L247(x, (y+0), kleur);
	L16(x, (y+1), kleur);
	L16(x, (y+2), kleur);
	L32(x, (y+3), kleur);
	L32(x, (y+4), kleur);
	L32(x, (y+5), kleur);
	L61(x, (y+6), kleur);
	L61(x, (y+7), kleur);
}

void put_char_u_arial_cursief(int x, int y, int kleur) {
	L63(x, (y+0), kleur);
	L63(x, (y+1), kleur);
	L65(x, (y+2), kleur);
	L128(x, (y+3), kleur);
	L128(x, (y+4), kleur);
	L128(x, (y+5), kleur);
	L132(x, (y+6), kleur);
	L109(x, (y+7), kleur);
}

void put_char_v_arial_cursief(int x, int y, int kleur) {
	L63(x, (y+0), kleur);
	L63(x, (y+1), kleur);
	L65(x, (y+2), kleur);
	L69(x, (y+3), kleur);
	L69(x, (y+4), kleur);
	L77(x, (y+5), kleur);
	L77(x, (y+6), kleur);
	L32(x, (y+7), kleur);
}

void put_char_w_arial_cursief(int x, int y, int kleur) {
	L133(x, (y+0), kleur);
	L149(x, (y+1), kleur);
	L166(x, (y+2), kleur);
	L166(x, (y+3), kleur);
	L166(x, (y+4), kleur);
	L166(x, (y+5), kleur);
	L197(x, (y+6), kleur);
	L132(x, (y+7), kleur);
}

void put_char_x_arial_cursief(int x, int y, int kleur) {
	L62(x, (y+0), kleur);
	L34(x, (y+1), kleur);
	L20(x, (y+2), kleur);
	L24(x, (y+3), kleur);
	L24(x, (y+4), kleur);
	L40(x, (y+5), kleur);
	L65(x, (y+6), kleur);
	L128(x, (y+7), kleur);
}

void put_char_y_arial_cursief(int x, int y, int kleur) {
	L63(x, (y+0), kleur);
	L65(x, (y+1), kleur);
	L40(x, (y+2), kleur);
	L40(x, (y+3), kleur);
	L16(x, (y+4), kleur);
	L16(x, (y+5), kleur);
	L32(x, (y+6), kleur);
	L32(x, (y+7), kleur);
}

void put_char_z_arial_cursief(int x, int y, int kleur) {
	L59(x, (y+0), kleur);
	L02(x, (y+1), kleur);
	L04(x, (y+2), kleur);
	L08(x, (y+3), kleur);
	L16(x, (y+4), kleur);
	L32(x, (y+5), kleur);
	L61(x, (y+6), kleur);
	L123(x, (y+7), kleur);
}

void put_char_a_arial_vet(int x, int y, int kleur) {
	L53(x, (y+0), kleur);
	L53(x, (y+1), kleur);
	L105(x, (y+2), kleur);
	L105(x, (y+3), kleur);
	L105(x, (y+4), kleur);
	L247(x, (y+5), kleur);
	L191(x, (y+6), kleur);
	L191(x, (y+7), kleur);
}
void put_char_b_arial_vet(int x, int y, int kleur) {
	L241(x, (y+0), kleur);
	L197(x, (y+1), kleur);
	L197(x, (y+2), kleur);
	L241(x, (y+3), kleur);
	L197(x, (y+4), kleur);
	L197(x, (y+5), kleur);
	L197(x, (y+6), kleur);
	L241(x, (y+7), kleur);
}
void put_char_c_arial_vet(int x, int y, int kleur) {
	L57(x, (y+0), kleur);
	L99(x, (y+1), kleur);
	L185(x, (y+2), kleur);
	L185(x, (y+3), kleur);
	L185(x, (y+4), kleur);
	L185(x, (y+5), kleur);
	L99(x, (y+6), kleur);
	L57(x, (y+7), kleur);
}

void put_char_d_arial_vet(int x, int y, int kleur) {
	L121(x, (y+0), kleur);
	L99(x, (y+1), kleur);
	L99(x, (y+2), kleur);
	L99(x, (y+3), kleur);
	L99(x, (y+4), kleur);
	L99(x, (y+5), kleur);
	L99(x, (y+6), kleur);
	L121(x, (y+7), kleur);
}

void put_char_e_arial_vet(int x, int y, int kleur) {
	L245(x, (y+0), kleur);
	L185(x, (y+1), kleur);
	L185(x, (y+2), kleur);
	L245(x, (y+3), kleur);
	L185(x, (y+4), kleur);
	L185(x, (y+5), kleur);
	L185(x, (y+6), kleur);
	L245(x, (y+7), kleur);
}

void put_char_f_arial_vet(int x, int y, int kleur) {
	L245(x, (y+0), kleur);
	L185(x, (y+1), kleur);
	L185(x, (y+2), kleur);
	L245(x, (y+3), kleur);
	L185(x, (y+4), kleur);
	L185(x, (y+5), kleur);
	L185(x, (y+6), kleur);
	L185(x, (y+7), kleur);
}

void put_char_g_arial_vet(int x, int y, int kleur) {
	L59(x, (y+0), kleur);
	L96(x, (y+1), kleur);
	L185(x, (y+2), kleur);
	L185(x, (y+3), kleur);
	L192(x, (y+4), kleur);
	L188(x, (y+5), kleur);
	L96(x, (y+6), kleur);
	L59(x, (y+7), kleur);
}

void put_char_h_arial_vet(int x, int y, int kleur) {
	L99(x, (y+0), kleur);
	L99(x, (y+1), kleur);
	L99(x, (y+2), kleur);
	L123(x, (y+3), kleur);
	L99(x, (y+4), kleur);
	L99(x, (y+5), kleur);
	L99(x, (y+6), kleur);
	L99(x, (y+7), kleur);
}

void put_char_i_arial_vet(int x, int y, int kleur) {
	L24(x, (y+0), kleur);
	L24(x, (y+1), kleur);
	L24(x, (y+2), kleur);
	L24(x, (y+3), kleur);
	L24(x, (y+4), kleur);
	L24(x, (y+5), kleur);
	L24(x, (y+6), kleur);
	L24(x, (y+7), kleur);
}

void put_char_j_arial_vet(int x, int y, int kleur) {
	L06(x, (y+0), kleur);
	L06(x, (y+1), kleur);
	L06(x, (y+2), kleur);
	L06(x, (y+3), kleur);
	L06(x, (y+4), kleur);
	L06(x, (y+5), kleur);
	L51(x, (y+6), kleur);
	L28(x, (y+7), kleur);
}

void put_char_k_arial_vet(int x, int y, int kleur) {
	L191(x, (y+0), kleur);
	L213(x, (y+1), kleur);
	L209(x, (y+2), kleur);
	L201(x, (y+3), kleur);
	L241(x, (y+4), kleur);
	L209(x, (y+5), kleur);
	L197(x, (y+6), kleur);
	L197(x, (y+7), kleur);
}

void put_char_l_arial_vet(int x, int y, int kleur) {
	L93(x, (y+0), kleur);
	L93(x, (y+1), kleur);
	L93(x, (y+2), kleur);
	L93(x, (y+3), kleur);
	L93(x, (y+4), kleur);
	L93(x, (y+5), kleur);
	L93(x, (y+6), kleur);
	L121(x, (y+7), kleur);
}

void put_char_m_arial_vet(int x, int y, int kleur) {
	L220(x, (y+0), kleur);
	L220(x, (y+1), kleur);
	L240(x, (y+2), kleur);
	L238(x, (y+3), kleur);
	L206(x, (y+4), kleur);
	L214(x, (y+5), kleur);
	L214(x, (y+6), kleur);
	L194(x, (y+7), kleur);
}

void put_char_n_arial_vet(int x, int y, int kleur) {
	L99(x, (y+0), kleur);
	L99(x, (y+1), kleur);
	L115(x, (y+2), kleur);
	L115(x, (y+3), kleur);
	L107(x, (y+4), kleur);
	L107(x, (y+5), kleur);
	L99(x, (y+6), kleur);
	L99(x, (y+7), kleur);
}

void put_char_o_arial_vet(int x, int y, int kleur) {
	L28(x, (y+0), kleur);
	L51(x, (y+1), kleur);
	L96(x, (y+2), kleur);
	L96(x, (y+3), kleur);
	L96(x, (y+4), kleur);
	L96(x, (y+5), kleur);
	L51(x, (y+6), kleur);
	L28(x, (y+7), kleur);
}

void put_char_p_arial_vet(int x, int y, int kleur) {
	L121(x, (y+0), kleur);
	L99(x, (y+1), kleur);
	L99(x, (y+2), kleur);
	L99(x, (y+3), kleur);
	L121(x, (y+4), kleur);
	L93(x, (y+5), kleur);
	L93(x, (y+6), kleur);
	L93(x, (y+7), kleur);
}

void put_char_q_arial_vet(int x, int y, int kleur) {
	L28(x, (y+0), kleur);
	L51(x, (y+1), kleur);
	L96(x, (y+2), kleur);
	L96(x, (y+3), kleur);
	L104(x, (y+4), kleur);
	L100(x, (y+5), kleur);
	L51(x, (y+6), kleur);
	L31(x, (y+7), kleur);
}

void put_char_r_arial_vet(int x, int y, int kleur) {
	L121(x, (y+0), kleur);
	L99(x, (y+1), kleur);
	L99(x, (y+2), kleur);
	L99(x, (y+3), kleur);
	L121(x, (y+4), kleur);
	L105(x, (y+5), kleur);
	L99(x, (y+6), kleur);
	L96(x, (y+7), kleur);
}

void put_char_s_arial_vet(int x, int y, int kleur) {
	L117(x, (y+0), kleur);
	L197(x, (y+1), kleur);
	L185(x, (y+2), kleur);
	L45(x, (y+3), kleur);
	L57(x, (y+4), kleur);
	L12(x, (y+5), kleur);
	L197(x, (y+6), kleur);
	L117(x, (y+7), kleur);
}

void put_char_t_arial_vet(int x, int y, int kleur) {
	L123(x, (y+0), kleur);
	L24(x, (y+1), kleur);
	L24(x, (y+2), kleur);
	L24(x, (y+3), kleur);
	L24(x, (y+4), kleur);
	L24(x, (y+5), kleur);
	L24(x, (y+6), kleur);
	L24(x, (y+7), kleur);
}

void put_char_u_arial_vet(int x, int y, int kleur) {
	L99(x, (y+0), kleur);
	L99(x, (y+1), kleur);
	L99(x, (y+2), kleur);
	L99(x, (y+3), kleur);
	L99(x, (y+4), kleur);
	L99(x, (y+5), kleur);
	L99(x, (y+6), kleur);
	L57(x, (y+7), kleur);
}

void put_char_v_arial_vet(int x, int y, int kleur) {
	L00(x, (y+0), kleur);
	L191(x, (y+1), kleur);
	L191(x, (y+2), kleur);
	L105(x, (y+3), kleur);
	L105(x, (y+4), kleur);
	L105(x, (y+5), kleur);
	L117(x, (y+6), kleur);
	L117(x, (y+7), kleur);
}

void put_char_w_arial_vet(int x, int y, int kleur) {
	L00(x, (y+0), kleur);
	L133(x, (y+1), kleur);
	L153(x, (y+2), kleur);
	L214(x, (y+3), kleur);
	L206(x, (y+4), kleur);
	L238(x, (y+5), kleur);
	L96(x, (y+6), kleur);
	L96(x, (y+7), kleur);
}

void put_char_x_arial_vet(int x, int y, int kleur) {
	L99(x, (y+0), kleur);
	L99(x, (y+1), kleur);
	L57(x, (y+2), kleur);
	L24(x, (y+3), kleur);
	L24(x, (y+4), kleur);
	L57(x, (y+5), kleur);
	L99(x, (y+6), kleur);
	L99(x, (y+7), kleur);
}

void put_char_y_arial_vet(int x, int y, int kleur) {
	L99(x, (y+0), kleur);
	L99(x, (y+1), kleur);
	L36(x, (y+2), kleur);
	L57(x, (y+3), kleur);
	L24(x, (y+4), kleur);
	L24(x, (y+5), kleur);
	L24(x, (y+6), kleur);
	L24(x, (y+7), kleur);
}

void put_char_z_arial_vet(int x, int y, int kleur) {
	L123(x, (y+0), kleur);
	L06(x, (y+1), kleur);
	L12(x, (y+2), kleur);
	L24(x, (y+3), kleur);
	L24(x, (y+4), kleur);
	L45(x, (y+5), kleur);
	L93(x, (y+6), kleur);
	L123(x, (y+7), kleur);
}

void put_char_spatie(int x, int y, int kleur){
	L00(x, (y+0), kleur);
	L00(x, (y+1), kleur);
	L00(x, (y+2), kleur);
	L00(x, (y+3), kleur);
	L00(x, (y+4), kleur);
	L00(x, (y+5), kleur);
	L00(x, (y+6), kleur);
	L00(x, (y+7), kleur);
}

