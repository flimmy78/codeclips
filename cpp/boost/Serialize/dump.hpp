#pragma once


template<class Archive>
void serialize(Archive & ar, ND_PCSDATA& nd_pcsdata, const unsigned int version)
{
    ar & _S(nd_pcsdata.no);          // �m�[�hNo
    ar & _S(nd_pcsdata.vol);
    ar & _S(nd_pcsdata.P);
    ar & _S(nd_pcsdata.Q);
}


template<class Archive>
void serialize(Archive & ar, BR_PCSDATA& br_pcsdata, const unsigned int version)
{
    ar & _S(br_pcsdata.no);   // �u�����`No
    ar & _S(br_pcsdata.cur);
    ar & _S(br_pcsdata.pir);
}


template<class Archive>
void serialize(Archive & ar, SVR_PCSDATA& svr_pcsdata, const unsigned int version)
{
    ar & _S(svr_pcsdata.no);   // SVRNo
    ar & _S(svr_pcsdata.cur);
    ar & _S(svr_pcsdata.pir);
}


template<class Archive>
void serialize(Archive & ar, TVR_PCSDATA& tvr_pcsdata, const unsigned int version)
{
    ar & _S(tvr_pcsdata.no);   // TVRNo
    ar & _S(tvr_pcsdata.cur);
    ar & _S(tvr_pcsdata.pir);
}

template<class Archive>
void serialize(Archive & ar, PCSDATA_EXL& pcsdata_exl, const unsigned int version)
{
    ar & _S(pcsdata_exl.max_node_no);
    ar & _S(pcsdata_exl.max_bf);
    ar & _S(pcsdata_exl.max_af);
    ar & _S(pcsdata_exl.max_riki);
    ar & _S(pcsdata_exl.node_bf);
    ar & _S(pcsdata_exl.node_af);
    ar & _S(pcsdata_exl.node_riki);
    ar & _S(pcsdata_exl.use);
}

template<class Archive>
void serialize(Archive & ar, NODEN& noden, const unsigned int version)
{
    ar & _S(noden.id);// DNA node_t��No.
    ar & _S(noden.name);
    ar & _S(noden.use_flg); // �Ώۂł����1, 
    ar & _S(noden.tap); // �ψ���^�b�v��
    ar & _S(noden.vol_pu); // [2]������O�A��A[LOOP_NUM]���d���ו��U�d������A�Ȃ��A�y���ׁ@����A�Ȃ� 100V�n
}


template<class Archive>
void serialize(Archive & ar, SEITEI& seitei, const unsigned int version)
{
    ar & _S(seitei.max_node);   // �Ώۃm�[�h��
    ar & _SN(NODEN,seitei.node,seitei.max_node);

    ar & _S(seitei.max_vol); // �W�񂵂��ő�d�� 100V�n
    ar & _S(seitei.max_id);
    ar & _S(seitei.min_vol); // �W�񂵂��ŏ��d�� 100V�n
    ar & _S(seitei.min_id);
    // ���茋��
    ar & _S(seitei.irc);
    ar & _S(seitei.min_jiko_ohm_r);
    ar & _S(seitei.min_jiko_ohm_x);
    ar & _S(seitei.max_jiko_ohm_r);
    ar & _S(seitei.max_jiko_ohm_x);
    ar & _S(seitei.min_kijyun_vol);
    ar & _S(seitei.max_kijyun_vol);

    ar & _S(seitei.err_node_id); // �G���[�Ώۃm�[�hID
    ar & _S(seitei.err_node_name); // �G���[�Ώۃm�[�h����
    ar & _S(seitei.err_vol); //�G���[�d���l
    ar & _S(seitei.err_type); // �d���ׁA�y���ׁA���d�@����A�Ȃ��̔ԍ�
    ar & _S(seitei.err_type_info1);
    ar & _S(seitei.err_type_info2);
    ar & _S(seitei.err_type_info3); // �G���[����
    ar & _S(seitei.err_type_info4); // Add 20070312 S.S �G���[�̏���A������� 

}

template<class Archive>
void serialize(Archive & ar, CString& s, const unsigned int version)
{
    std::string cstring(s);
    ar & _S(cstring);
    s = cstring.c_str();
}

