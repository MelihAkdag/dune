//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: bc2765321262233e448a7c647616f5da                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.038030875190586566);
    msg.setSource(19585U);
    msg.setSourceEntity(44U);
    msg.setDestination(3601U);
    msg.setDestinationEntity(3U);
    msg.state = 111U;
    msg.flags = 199U;
    msg.description.assign("LVBIPZQASBFDJDVYRNCLYSCNHPKTPQOZGHFJDXHJBZWASXQAOKEJKLFETZFTIURNFXCNVQUMMSCORURQSNZFKJBCIWEUJDXTHURANAARQKVYXBGCNWATESDZWIOCMTXOQRIBDUGGSYXPWYWMZFGPJWLIEHDIEGJR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.7703048034957318);
    msg.setSource(44660U);
    msg.setSourceEntity(32U);
    msg.setDestination(11381U);
    msg.setDestinationEntity(107U);
    msg.state = 220U;
    msg.flags = 123U;
    msg.description.assign("SPLNLOIAAWPCTTNFSLXDZJEQSHPWBVOSWIYFTMVGPCZQCFFHFEAGSLTMDOLYPYHUTEMIKFZRSPQCTGTZBYBEDEQOHVFKCABJJEHDXZNRSEZHLVSRHSQMXVKOFNWKUAPRO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.6178507926375684);
    msg.setSource(28367U);
    msg.setSourceEntity(111U);
    msg.setDestination(7574U);
    msg.setDestinationEntity(177U);
    msg.state = 96U;
    msg.flags = 121U;
    msg.description.assign("FHULNEJIPOQZYJQLIINTSVNLBBPVRMMYPGBAQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.25272492912484645);
    msg.setSource(49786U);
    msg.setSourceEntity(103U);
    msg.setDestination(23941U);
    msg.setDestinationEntity(184U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.7154892654182343);
    msg.setSource(22589U);
    msg.setSourceEntity(228U);
    msg.setDestination(13757U);
    msg.setDestinationEntity(77U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.051330179505375884);
    msg.setSource(47600U);
    msg.setSourceEntity(14U);
    msg.setDestination(18585U);
    msg.setDestinationEntity(241U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.41971920357046655);
    msg.setSource(4815U);
    msg.setSourceEntity(223U);
    msg.setDestination(20688U);
    msg.setDestinationEntity(151U);
    msg.id = 41U;
    msg.label.assign("KBKXOVJPGZPJKHTCOXQAKYMMGTIRUNJSMRFLTDGNJHMJSSLJGYZBLAODRCAAPHMOOSIHNPPLVAQBCXLFXARWVWUEWONCKKGZNQFFWKFGGIAQRUEYHUYEZCZNCZXNDKIZSXMQTLBXEVYWHWLMSBEGLYGUHIDDRURFZTXTRP");
    msg.component.assign("DQVBCAUUJDLDQFLWLLXWTKOEUIWDPJERLZNLZWZCNEHZQNLJXCKWVXTKQQIUKFXKPDUOPFIEHUSKREJN");
    msg.act_time = 48912U;
    msg.deact_time = 50729U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.7508775146964701);
    msg.setSource(24645U);
    msg.setSourceEntity(105U);
    msg.setDestination(61821U);
    msg.setDestinationEntity(6U);
    msg.id = 242U;
    msg.label.assign("HCHKQBIOUAGELHBUUJCEXAKBBKCJTMMJAOGLWYLIVABRUTNFOGLSIWBXRKWSQRYXQTSPWRISNKUGJKAVPVNEXXOSFABJDAQVDDQONUOPBVBEWYFFLNEPRZRUNWZERIIGKMGUADSQVSPWPCJSIPOSYMLOTFZNPM");
    msg.component.assign("ACAOYYQSLLKKZQAPFUIPNBISWBTUTZMFGVLMCDYTTYQCYATFHPGROPXOYJEKXAHWNSNOUERNEKGELQZLAYREVXCQTGXCLVUBXOOSLJWHJQBODLXMMXHJWOWTEZJYDAPNKDLKURFHBIWV");
    msg.act_time = 29576U;
    msg.deact_time = 11423U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.013805287787579834);
    msg.setSource(25876U);
    msg.setSourceEntity(219U);
    msg.setDestination(6498U);
    msg.setDestinationEntity(36U);
    msg.id = 233U;
    msg.label.assign("EULZPNOASQPXHXCHJLMLMRYUBQVDTAFXLFPTVRASNSKCSNXYDOVYZQINVUTYKOPZFWLTFEEMOBYBYHDMYRDFRXGAQHNUZCICRGUFTVSEDEXTPQHYAZXQVNZCHIMIYQMVZGMSJGBJQIUEOBANZWDPKDVMPCHLGUKPJWJWMOGVFWPRAJCBKGZKQDLS");
    msg.component.assign("AJTYKKFTBSVQSBTCKMZDXCPVXEBNNKHRGYVQURVWQCPJLRISRVGALTKMPWYBJFATEWZHHIBOPHKUEOAOTMPSQFCKDDZRMYNQGNRMDZJNQIDQXXNFDTZPUJPZSHJTXLVEYHNXLFQNTJJAHASOYSXBPXFVYSUTAYWIORSWERCEMZGEDAPUUQEWVJCE");
    msg.act_time = 14635U;
    msg.deact_time = 3822U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.8946724212979026);
    msg.setSource(21012U);
    msg.setSourceEntity(198U);
    msg.setDestination(13805U);
    msg.setDestinationEntity(173U);
    msg.id = 136U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.6268581780432498);
    msg.setSource(34079U);
    msg.setSourceEntity(217U);
    msg.setDestination(40961U);
    msg.setDestinationEntity(157U);
    msg.id = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.848708000019871);
    msg.setSource(10471U);
    msg.setSourceEntity(175U);
    msg.setDestination(26026U);
    msg.setDestinationEntity(11U);
    msg.id = 36U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.2615862753870072);
    msg.setSource(30074U);
    msg.setSourceEntity(226U);
    msg.setDestination(33086U);
    msg.setDestinationEntity(212U);
    msg.op = 96U;
    msg.list.assign("LYMPQCBPIDHCJRKZQEZAJEAHNFEAGTMLMTIUDOTNKJGVKLDQVMFGAYVKJSLUXQWAQBUNVCAJOAZW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.16207880144194675);
    msg.setSource(44187U);
    msg.setSourceEntity(151U);
    msg.setDestination(41494U);
    msg.setDestinationEntity(234U);
    msg.op = 35U;
    msg.list.assign("LYGEKWQGPYFXLBSGUHNNRYJKDBUKEVKCSCNYJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.9416761559163287);
    msg.setSource(23965U);
    msg.setSourceEntity(207U);
    msg.setDestination(37301U);
    msg.setDestinationEntity(211U);
    msg.op = 253U;
    msg.list.assign("YAGVFJPOTZYCLKBTVPLYPKJCLHOIKSZKMMPEDQHWHRKGSUWUGQMWRFJAEHCYLFUJCSNPSUCJZEOVGXCLUXQIYIAZOWGSDFQABTACIHAVFXZK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.896182608281664);
    msg.setSource(24662U);
    msg.setSourceEntity(231U);
    msg.setDestination(28711U);
    msg.setDestinationEntity(208U);
    msg.value = 179U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.7004062054601584);
    msg.setSource(2598U);
    msg.setSourceEntity(251U);
    msg.setDestination(51975U);
    msg.setDestinationEntity(191U);
    msg.value = 179U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.5663337916801742);
    msg.setSource(29346U);
    msg.setSourceEntity(82U);
    msg.setDestination(63282U);
    msg.setDestinationEntity(183U);
    msg.value = 80U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.7953463774688395);
    msg.setSource(26476U);
    msg.setSourceEntity(219U);
    msg.setDestination(65410U);
    msg.setDestinationEntity(85U);
    msg.consumer.assign("HXDPKMNHTDKESQARINLXCJCUPTLMNCGVZYVUUJTKKMWPQWLIIFWGSVRZHRMVDXDRUSFAXMFDCKFYRYGUZNCQBXIQWOLBESFBBGMQZNKIVDPLYQCHGQJIHEXMVOIURIUELVPQUCELVKZCCTMXERSROJPAZRTTGJETDYZKYMANGOGJWZSLTABADJUGSYNKMPNFJBYZOYAXXWQXWOHRBWOWBSJNFGLSDH");
    msg.message_id = 39181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.7844788716492037);
    msg.setSource(13895U);
    msg.setSourceEntity(127U);
    msg.setDestination(33657U);
    msg.setDestinationEntity(192U);
    msg.consumer.assign("POEFAERFNFPRKJWEGHNUMKHARMZVTNMIQHNUGWISAAMFVAYWRXXTITXBQOXXKUBPBTCSJNQJQHFLPZC");
    msg.message_id = 28440U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.810762060388312);
    msg.setSource(26591U);
    msg.setSourceEntity(195U);
    msg.setDestination(17257U);
    msg.setDestinationEntity(175U);
    msg.consumer.assign("LIWQKHRZKTBLRBWJRAFEXGZKCJJBQREXAUYESNZGHFGKALNQVENNSQPGXOWNMVCPSJLYAULSJAGYJHDDXZVSBUIGXLWDAKIHQETBHUDMNTGNMVIRSNVSMOJPVVFDZCMEOBTKBJMJMQETFPOWCT");
    msg.message_id = 48214U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.9263601271239232);
    msg.setSource(41988U);
    msg.setSourceEntity(15U);
    msg.setDestination(20671U);
    msg.setDestinationEntity(119U);
    msg.type = 207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.421587193266738);
    msg.setSource(33063U);
    msg.setSourceEntity(212U);
    msg.setDestination(6824U);
    msg.setDestinationEntity(225U);
    msg.type = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.30373079779144363);
    msg.setSource(30469U);
    msg.setSourceEntity(45U);
    msg.setDestination(52764U);
    msg.setDestinationEntity(224U);
    msg.type = 71U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.8537410379399736);
    msg.setSource(33668U);
    msg.setSourceEntity(179U);
    msg.setDestination(8824U);
    msg.setDestinationEntity(172U);
    msg.op = 23U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.688520738366473);
    msg.setSource(7495U);
    msg.setSourceEntity(186U);
    msg.setDestination(1239U);
    msg.setDestinationEntity(195U);
    msg.op = 103U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.9222830890205675);
    msg.setSource(47445U);
    msg.setSourceEntity(59U);
    msg.setDestination(60987U);
    msg.setDestinationEntity(192U);
    msg.op = 223U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.49622395721878687);
    msg.setSource(24071U);
    msg.setSourceEntity(101U);
    msg.setDestination(58498U);
    msg.setDestinationEntity(198U);
    msg.total_steps = 91U;
    msg.step_number = 250U;
    msg.step.assign("BFIFLANUTMMGDWKQEWWTIBBLARFMCZCGWSYGGHGLMOLWURVNILHKVXOAMZHRCJAFUSDTXNOHVWYCSOIZVYNPRJPGOMKFOJBEZIICCGGDKWI");
    msg.flags = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.7048024222447278);
    msg.setSource(63096U);
    msg.setSourceEntity(233U);
    msg.setDestination(48723U);
    msg.setDestinationEntity(193U);
    msg.total_steps = 218U;
    msg.step_number = 108U;
    msg.step.assign("HFEYNVJDXCMQUVVOGBWVMKXUTTAPLPXZRNWPXEUQIFNDMJRUXPCXCXALBSJLTEDOWWQCBDDKKAPKTOMYOGSXHFRZKBVQDZERJGTSAOHNPZINMTPQHPVHFGXYVKFEDGBLYNYEZK");
    msg.flags = 220U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.9536755594106215);
    msg.setSource(11170U);
    msg.setSourceEntity(109U);
    msg.setDestination(14130U);
    msg.setDestinationEntity(44U);
    msg.total_steps = 174U;
    msg.step_number = 160U;
    msg.step.assign("XYMDLFMJAJZYRWDSALWMJOZMZGPYRFJYSTJVATCUDEENGEKSCWYBHXIETDKSBMGXKUZODVPLWKUFGBSAXHBTHYHLXEIAJIJRUJTXRGNGNMODKQLFYRDUIYQVPWCGJ");
    msg.flags = 119U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.12227015930675267);
    msg.setSource(60711U);
    msg.setSourceEntity(115U);
    msg.setDestination(61559U);
    msg.setDestinationEntity(133U);
    msg.state = 207U;
    msg.error.assign("GNAXKHDISVUZBNUJSWCRFIDHYSQLRWLFXPJGCKQDGCTRPEODLZXEFTVTGMADPVCPUFHXBLOSHNYKKCBVRIOREFORDDXDACLTVZFJMUIMMVFNETLAVBHNPZEQCLQXYSYPZIJWXZECUABLMNAGJQDBZNVXUAGYSWPWWHZYPQOEWGKIJERMGMPOKHGOUJJJQLXSCKQIATGSRMQKSCRZKMEFYWIFNXFBTQSWDIBMIEYHAUTT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.7137558104311248);
    msg.setSource(58159U);
    msg.setSourceEntity(219U);
    msg.setDestination(19960U);
    msg.setDestinationEntity(145U);
    msg.state = 247U;
    msg.error.assign("VKMCRCDTCSSUXWKMQVSTZRBOFGEFWVWDPBJMMRZBNVYLPFBDTQNXZBMKXGHXVZDWYCPCIVGYZDUNTOYWMFEZSRLGEJQXAEQIAPE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.28119715226985054);
    msg.setSource(45147U);
    msg.setSourceEntity(170U);
    msg.setDestination(46629U);
    msg.setDestinationEntity(152U);
    msg.state = 151U;
    msg.error.assign("CNOAPMVTHAPNQTWVFAVXOAMXXFMGSJEYDCKTQDPFNTAOGYXEZWTRISJFHDEJPBHKULRSXMXYTACDUNVWCLGMSCTYKHFUDRUAMCNWWSCDDPBXVZGQNRLUUJJUAQFURZHZHYBLKHMQITCYLXDOQLJCBQOLOPAVZGEPMTWUGFESNB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.7990161530913443);
    msg.setSource(55377U);
    msg.setSourceEntity(87U);
    msg.setDestination(50760U);
    msg.setDestinationEntity(226U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.2176047365014322);
    msg.setSource(11369U);
    msg.setSourceEntity(144U);
    msg.setDestination(9616U);
    msg.setDestinationEntity(109U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.13311683385876927);
    msg.setSource(42987U);
    msg.setSourceEntity(44U);
    msg.setDestination(14811U);
    msg.setDestinationEntity(166U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.9231485602821778);
    msg.setSource(45678U);
    msg.setSourceEntity(148U);
    msg.setDestination(15037U);
    msg.setDestinationEntity(150U);
    msg.op = 252U;
    msg.speed_min = 0.48959544396969124;
    msg.speed_max = 0.3146598639773025;
    msg.long_accel = 0.10660639083868484;
    msg.alt_max_msl = 0.7316536031937747;
    msg.dive_fraction_max = 0.22707586539947022;
    msg.climb_fraction_max = 0.5631619840252742;
    msg.bank_max = 0.31333993129170257;
    msg.p_max = 0.5414779169488751;
    msg.pitch_min = 0.7607268079159973;
    msg.pitch_max = 0.26705761982858645;
    msg.q_max = 0.1990492000027636;
    msg.g_min = 0.5971106793918568;
    msg.g_max = 0.9038124674948655;
    msg.g_lat_max = 0.7227019674151449;
    msg.rpm_min = 0.3455496719197926;
    msg.rpm_max = 0.27295837759397024;
    msg.rpm_rate_max = 0.9955537860478187;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.1796666860411641);
    msg.setSource(10885U);
    msg.setSourceEntity(133U);
    msg.setDestination(47527U);
    msg.setDestinationEntity(249U);
    msg.op = 50U;
    msg.speed_min = 0.07083449912773565;
    msg.speed_max = 0.5448314063629786;
    msg.long_accel = 0.4950803379413179;
    msg.alt_max_msl = 0.2706420507581817;
    msg.dive_fraction_max = 0.2610959265164241;
    msg.climb_fraction_max = 0.7364607207590376;
    msg.bank_max = 0.7044768518297538;
    msg.p_max = 0.6751672064811925;
    msg.pitch_min = 0.5558728081026617;
    msg.pitch_max = 0.7943677537685369;
    msg.q_max = 0.8738410288619035;
    msg.g_min = 0.6663236213647553;
    msg.g_max = 0.41725605643031805;
    msg.g_lat_max = 0.044268769978995426;
    msg.rpm_min = 0.5237128285705621;
    msg.rpm_max = 0.3760800807759851;
    msg.rpm_rate_max = 0.9178942217926064;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.6837267414471029);
    msg.setSource(61128U);
    msg.setSourceEntity(177U);
    msg.setDestination(20304U);
    msg.setDestinationEntity(206U);
    msg.op = 139U;
    msg.speed_min = 0.4294830580707565;
    msg.speed_max = 0.07890886228024052;
    msg.long_accel = 0.43716810708280285;
    msg.alt_max_msl = 0.6033404349802328;
    msg.dive_fraction_max = 0.6261356126949671;
    msg.climb_fraction_max = 0.060776728056563645;
    msg.bank_max = 0.4873358793589284;
    msg.p_max = 0.16956451766363367;
    msg.pitch_min = 0.11677085138786136;
    msg.pitch_max = 0.9493676553427579;
    msg.q_max = 0.7269908992088158;
    msg.g_min = 0.15095356054474107;
    msg.g_max = 0.48546485546770934;
    msg.g_lat_max = 0.2415552396108802;
    msg.rpm_min = 0.445740535576728;
    msg.rpm_max = 0.19738097247190967;
    msg.rpm_rate_max = 0.687956090399907;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.5060826995175723);
    msg.setSource(21644U);
    msg.setSourceEntity(37U);
    msg.setDestination(64847U);
    msg.setDestinationEntity(88U);
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 2U;
    tmp_msg_0.op = 249U;
    tmp_msg_0.possimerr = 0.2815888295063318;
    tmp_msg_0.converg = 0.9887602251070691;
    tmp_msg_0.turbulence = 0.3978668581211703;
    tmp_msg_0.possimmon = 63U;
    tmp_msg_0.commmon = 54U;
    tmp_msg_0.convergmon = 228U;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.10420420112256135);
    msg.setSource(20858U);
    msg.setSourceEntity(98U);
    msg.setDestination(50450U);
    msg.setDestinationEntity(37U);
    IMC::Heave tmp_msg_0;
    tmp_msg_0.value = 0.9712042979309826;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.14180594647636768);
    msg.setSource(4379U);
    msg.setSourceEntity(128U);
    msg.setDestination(62402U);
    msg.setDestinationEntity(40U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.5871165363354006);
    msg.setSource(17633U);
    msg.setSourceEntity(247U);
    msg.setDestination(39252U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.21197234180806768;
    msg.lon = 0.7965130247993718;
    msg.height = 0.9198223622763351;
    msg.x = 0.057088126214251744;
    msg.y = 0.04191404926874509;
    msg.z = 0.6046806334160789;
    msg.phi = 0.04988008626446816;
    msg.theta = 0.13939224107980175;
    msg.psi = 0.3308851425044145;
    msg.u = 0.24559784883293512;
    msg.v = 0.3023739644002571;
    msg.w = 0.19071101061564844;
    msg.p = 0.2668895444501935;
    msg.q = 0.8020039076234936;
    msg.r = 0.04249860283082452;
    msg.svx = 0.7446864301537989;
    msg.svy = 0.538301700624954;
    msg.svz = 0.35114853491593656;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.7424482639151528);
    msg.setSource(30922U);
    msg.setSourceEntity(21U);
    msg.setDestination(50412U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.2546206268962884;
    msg.lon = 0.3276538928573216;
    msg.height = 0.9943326472965387;
    msg.x = 0.3962929397792627;
    msg.y = 0.7440731312978923;
    msg.z = 0.8334342429196281;
    msg.phi = 0.06914237180325722;
    msg.theta = 0.1815292398455426;
    msg.psi = 0.7129710403071503;
    msg.u = 0.037705769444109305;
    msg.v = 0.2849902692944486;
    msg.w = 0.15685211988388614;
    msg.p = 0.4749506716683696;
    msg.q = 0.9045326533584255;
    msg.r = 0.1537038930420087;
    msg.svx = 0.17625370189833767;
    msg.svy = 0.8004008897235687;
    msg.svz = 0.6410002379861282;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.7895641751703859);
    msg.setSource(61292U);
    msg.setSourceEntity(45U);
    msg.setDestination(24362U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.7726537181389184;
    msg.lon = 0.9293542093103719;
    msg.height = 0.4732828072879537;
    msg.x = 0.8810841707724313;
    msg.y = 0.09495844061030323;
    msg.z = 0.0018989381887251078;
    msg.phi = 0.8471117831156864;
    msg.theta = 0.9274783876834951;
    msg.psi = 0.6088056130344587;
    msg.u = 0.13959564899413723;
    msg.v = 0.5256631430000771;
    msg.w = 0.7610985036896206;
    msg.p = 0.6203863619528891;
    msg.q = 0.08489089715593634;
    msg.r = 0.8086882899968706;
    msg.svx = 0.03069365211078745;
    msg.svy = 0.8234392567399843;
    msg.svz = 0.008014883381174731;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.5526557266723138);
    msg.setSource(23184U);
    msg.setSourceEntity(51U);
    msg.setDestination(50789U);
    msg.setDestinationEntity(220U);
    msg.op = 195U;
    msg.entities.assign("KORBEPXUUISJAYZZJVLIMVVYDIXSCMJWBGTOZQLQUHMFYGHKWWPRARTMDCWSDBSAUG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.6526424020789333);
    msg.setSource(54174U);
    msg.setSourceEntity(123U);
    msg.setDestination(58847U);
    msg.setDestinationEntity(58U);
    msg.op = 248U;
    msg.entities.assign("JESYWFTZXATRDXHHOFVBZPFBQHGDYFI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.791061492364561);
    msg.setSource(47210U);
    msg.setSourceEntity(2U);
    msg.setDestination(7357U);
    msg.setDestinationEntity(88U);
    msg.op = 57U;
    msg.entities.assign("LZCZESHDEUBOOFDHWPXYSHGLMNPMDIXTRNJBTAKLCXBZGFSUGUCUNLULWKDAYPYCNMQFIOIUTVJVEHIOINYRGFRHBGLMOYTSBTYBNRGXPRAVYWSQOXWXARSHQWMEOXCGWMNZAJPPJIDXTRMCGUDJRJQVOIQFHMQLZNPQQWKKDWSFZHIOWLKETOD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.33061351201400413);
    msg.setSource(22061U);
    msg.setSourceEntity(242U);
    msg.setDestination(6827U);
    msg.setDestinationEntity(31U);
    msg.type = 206U;
    msg.speed = 27969U;
    const signed char tmp_msg_0[] = {-59, 64, 58, 116, 121, 120, -77, -116, -98, -124, -2, 12, 77, 58, 3, -100, 46, -50, 69, 92, -48, -95, -97, -78, 123, 32, 37, 126, -126, -108, 13, 113, 64, -50, 36, 27, 53, -69, 107, 78};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.8248206240000717);
    msg.setSource(53941U);
    msg.setSourceEntity(58U);
    msg.setDestination(17633U);
    msg.setDestinationEntity(191U);
    msg.type = 191U;
    msg.speed = 37414U;
    const signed char tmp_msg_0[] = {-97, -44, -95, 66, 64, 80, -32, -99, -78, -126, -77, -48, 19, -62, 56, -69, -5, 4, 58, 86, -63, 3, 7, 63, -86, -68, 70, 69, -12, -12, -98, -115, -63, -25, -121, -61, 32, 102, -117, -18, 96, -65, 67, 32, -103, -106, 73, -97, -26, 89};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.3207377600195246);
    msg.setSource(59446U);
    msg.setSourceEntity(47U);
    msg.setDestination(4594U);
    msg.setDestinationEntity(69U);
    msg.type = 200U;
    msg.speed = 1115U;
    const signed char tmp_msg_0[] = {-125, 45, -15, -94, 43, -106, -74, -10, 119, 24, -70, 56, -5, -27, -98, 60, -2, -33, 126, -128, 125, -19, -110, 72, -55, 55, -64, 47, -106, 113, 0, -66, 123, -53, 10, -35, -99, -41, -121, 79, -18, 114, -111, -128, 7, 22, 28, -29, 83, 25, -109, -97, 54, 85, -30, 96, -8, -74, 13, -73, 57, -12, 46, 38, -42, -77, -102, -38, -6, -32, 114, 73, -83, 69, -65, 57, 80, -25, 68, 102, -69, -111, 41, 66, -99, 7, -6, -113, -97, 4, 125, -69, -127, 71, 40, 95, -44, -105, -98, 97, 31, 88, 97, 79, -80, -21, 55, -77, -34, -2, -20, 50, -15, 87, -20, -75, 29, 25, -68, 83, -87, 9, -74, 30, 11, 1, 64, 19, -117, 38, -111, -10, -66, 55, 13, -101, 42, 19, -56, 77, 9, -105, -37, -98, -87, 7, -39, 35, -22, -3, 40, -76, -111, -125, 36, 54, -66, 24, -25, 63, 46, 66, 24, 19, -73, 60, -98, -24, -90, -113, 125, 46, -69, -68, -79, 67, -78, 106, -99, 123, -63, 27, -37, -15, -8, 10, 12, 97, 69, -22, 23, 13, 73, 45, -12, -69};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.153005838119191);
    msg.setSource(58324U);
    msg.setSourceEntity(195U);
    msg.setDestination(40331U);
    msg.setDestinationEntity(138U);
    msg.op = 234U;
    msg.tas2acc_pgain = 0.6634246281705418;
    msg.bank2p_pgain = 0.11656213481110511;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.3550335604910517);
    msg.setSource(41186U);
    msg.setSourceEntity(61U);
    msg.setDestination(62189U);
    msg.setDestinationEntity(155U);
    msg.op = 248U;
    msg.tas2acc_pgain = 0.5945747507992161;
    msg.bank2p_pgain = 0.7863995479152992;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.022155626584989374);
    msg.setSource(22261U);
    msg.setSourceEntity(223U);
    msg.setDestination(29625U);
    msg.setDestinationEntity(50U);
    msg.op = 141U;
    msg.tas2acc_pgain = 0.38650459880151333;
    msg.bank2p_pgain = 0.07299669700361189;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.362832895903459);
    msg.setSource(59244U);
    msg.setSourceEntity(17U);
    msg.setDestination(52012U);
    msg.setDestinationEntity(80U);
    msg.available = 2728148863U;
    msg.value = 40U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.5528241744923922);
    msg.setSource(30688U);
    msg.setSourceEntity(199U);
    msg.setDestination(12583U);
    msg.setDestinationEntity(102U);
    msg.available = 1862121109U;
    msg.value = 252U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.7633879665506805);
    msg.setSource(49936U);
    msg.setSourceEntity(48U);
    msg.setDestination(65222U);
    msg.setDestinationEntity(136U);
    msg.available = 1336579560U;
    msg.value = 63U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.9453524616927365);
    msg.setSource(32684U);
    msg.setSourceEntity(222U);
    msg.setDestination(4388U);
    msg.setDestinationEntity(176U);
    msg.op = 1U;
    msg.snapshot.assign("SCFOIVBYAVYMRACSNRDRYQERYJUTFJWVHWMXSMCHRXTOMQZSMWIXYTLFOFOIAIPEPJSBOGKUZMHSNCBRRMKPUBDQVZISYPIBUJAQDAJLJLGXFNDNQSWGVHJLZNDGGVWEYFZILLNPHMAVMOQWCTWEIUKPVFCIPWERHNDCXDTDXBDATUZKUIEKGLNHQKFXNELEQQJJAOBBPVXKKGCXJUONUSHFZZHMWDVU");
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 114U;
    tmp_msg_0.lon_gain = 0.7844650220557609;
    tmp_msg_0.lat_gain = 0.4187610156682794;
    tmp_msg_0.bond_thick = 0.1134634891843509;
    tmp_msg_0.lead_gain = 0.17699332418021096;
    tmp_msg_0.deconfl_gain = 0.9087562681999666;
    tmp_msg_0.accel_switch_gain = 0.8441233699041123;
    tmp_msg_0.safe_dist = 0.6699108536281514;
    tmp_msg_0.deconflict_offset = 0.3801217251014827;
    tmp_msg_0.accel_safe_margin = 0.9626446661202552;
    tmp_msg_0.accel_lim_x = 0.4299691585427665;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.7899340595438004);
    msg.setSource(21126U);
    msg.setSourceEntity(10U);
    msg.setDestination(32041U);
    msg.setDestinationEntity(146U);
    msg.op = 53U;
    msg.snapshot.assign("NVFFZOKDVMVZXQKKXDAHIJDUIQWBIMCRMYQBSYHHRZTQDYZJCYLUNLANBGMSPCQNFMBTA");
    IMC::AcousticSystemsQuery tmp_msg_0;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.3669821536060164);
    msg.setSource(24086U);
    msg.setSourceEntity(88U);
    msg.setDestination(57392U);
    msg.setDestinationEntity(246U);
    msg.op = 43U;
    msg.snapshot.assign("SASUBHEDUWHCLVFAHJRBYTQPOCFLSITSKRCZMQQKZNLBQUPKIPIJHYLNGHNBTHIIGOGPNXJBTSJJDSDUWKZVWUUCK");
    IMC::SmsRequest tmp_msg_0;
    tmp_msg_0.req_id = 29360U;
    tmp_msg_0.destination.assign("HOPXXQJWBWUKLGUNJUKTZYTKCGAPMOGZWMQBMHADKLIIHKFXNOLFSMIFVNDVLZPJFUTQVGLEKXZCWWKLBBYOIRDWTJOGFAVRPFTYVUXNSQXDAHUZVMZQMCMNLQYZPCDHCQOIYBSENLNAHJUZCLKW");
    tmp_msg_0.timeout = 0.5008960250477079;
    tmp_msg_0.sms_text.assign("RXORSNKMUOLCKRRHUVFTNEWFREUHYPNMTYXMWQPQJINQBEHJQKVTKWPY");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.38755006731209685);
    msg.setSource(45190U);
    msg.setSourceEntity(135U);
    msg.setDestination(56882U);
    msg.setDestinationEntity(225U);
    msg.op = 148U;
    msg.name.assign("QWPCCUDNTMGGADLGEONFHVKQHTPWSXDYSKIZBPNLDDAZUJJSDFDCQIFBMDICUVVYRHTMLOGJKQZILPXPXXCIDIMVTPWUYEYFQXOLPNKQFGMHROAGGIJYZARLVUAUNMGXYPU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.24131296173229977);
    msg.setSource(28482U);
    msg.setSourceEntity(126U);
    msg.setDestination(33586U);
    msg.setDestinationEntity(224U);
    msg.op = 143U;
    msg.name.assign("PLBAGKDZAFRXYIJJNVLNIGHTXTPVQUQFMWUJHHQVWUHPSENXJOBHYFRPOHQOBUDSPSEYSDVUGKEPYTYNJIPKTYIVBTFMGVMRNCDQZOCFUSQAXJARFVSETHBKZCZJHQIHGWKMBIOXCIVXJKWIQKWBTMWLDZBVCSBSRAOYXFYAREDLVNSTXPFMRRHNZOSEJFZDLGILPBDGDCTTMCUEYUUJZKOXOMKUPQOGDNCCCER");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.8567233280416027);
    msg.setSource(34692U);
    msg.setSourceEntity(176U);
    msg.setDestination(42974U);
    msg.setDestinationEntity(160U);
    msg.op = 34U;
    msg.name.assign("DGAVZMNKKRWUSRZEXQFIPXGBNEYUWYBIFQWFGWJFYBLEYJX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.7518998565834654);
    msg.setSource(23287U);
    msg.setSourceEntity(149U);
    msg.setDestination(32365U);
    msg.setDestinationEntity(233U);
    msg.type = 223U;
    msg.htime = 0.6543529398781734;
    msg.context.assign("PWDBPGRMEURQATKOTMCTGUUPJMVKCYKCXLLDWGIQKASKJUWUHRYVRORFPXCHSSIPYGNXNCPHRCIOBZZINGDZLSFNAENHODA");
    msg.text.assign("KLWQUYMKZIHROBVXOPHCXODEDSMELNQTKLVUPHGBJGNWKMRSUBDWNUJSDTVROSCJBUYFYEHBCEIGDEWKYENKOHUCDZTFIEFZTTOWYXHPCAEGRKWCVPIXVJSNUESXTJSVBFLHHDYKPDNRQXIMGZALMYFDWZNQWKYVVIGMPYOFGJYFBLZSITWJGEDZLATMGPAHJLONQMSMTQBUUWRONLBARQPAPISCJTVQQNOQJBRRRMIH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.3917092365918101);
    msg.setSource(26499U);
    msg.setSourceEntity(62U);
    msg.setDestination(26784U);
    msg.setDestinationEntity(218U);
    msg.type = 98U;
    msg.htime = 0.12959072319148335;
    msg.context.assign("ZBHFZDYIYOENMOYKQTOY");
    msg.text.assign("WPVEDJFZEGZWSLHVUCACEJVBIREYANHERKKZXQIYNNQOSMUNWEQCJGDOMSTXQKTO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.8702896107424959);
    msg.setSource(55723U);
    msg.setSourceEntity(91U);
    msg.setDestination(60735U);
    msg.setDestinationEntity(24U);
    msg.type = 210U;
    msg.htime = 0.07285046487210967;
    msg.context.assign("VLEBDYPKRENVGLZRECJIOPXMAVLKYSKIFFXHGTTPBFSZIAGQUUWYQMBLLNWZSRXTSFDBSJSMJNHRLHUJCXTKMOZPRHPGPBNWKQNBXFZAAOPUTTLDQQCNCVOOWZZMHTCEVDHJQ");
    msg.text.assign("YXVQJAXOUVEIEGLJCGMVXKVNFHBQTDUYJNPYWKHYKGYABVT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.6321827107470985);
    msg.setSource(2202U);
    msg.setSourceEntity(210U);
    msg.setDestination(49701U);
    msg.setDestinationEntity(111U);
    msg.command = 76U;
    msg.htime = 0.6582805053544089;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 107U;
    tmp_msg_0.htime = 0.2866254206172336;
    tmp_msg_0.context.assign("ANSPJNBFOJGEYGXPUKAFZSWLWXOGNOHEPXFQVOZDQUMOICYTCKGTEUZBZNNPCOGNMJNRSGOXWLFBYBTIDYVJTFBNKIEQCDIWQUSHBDIMDHYRHVGHPFCTRESLHDLTLKHIIZDICVEEREUSCGVEDHRKHUWPFUSLSWQOMHYLAVIAKWZNYPGBZDBVPLFATCBMKQAMXKDUJSFWJRKAFZQ");
    tmp_msg_0.text.assign("HPQYEWXOJWHVVMQMKPBRDDNJPGAKEUSMSASFFJIQOCBFKFBYOOJROANEYTSUGEWNFGAMWILVSUCREPTCNWPLTTPBQWINJILXVCJHOHCQDRAMCKXVLEARIVDMGUGGPYMUZQYXIHUJNXSFOQIDMTZLSNBYVCZHGZSSNATHJTQMBAWOXQBKFBADBRBRDKTGUFZIPZYTCVWXYNNJCLKZXLVLHWRXROD");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.09798149931041211);
    msg.setSource(3395U);
    msg.setSourceEntity(107U);
    msg.setDestination(21204U);
    msg.setDestinationEntity(156U);
    msg.command = 154U;
    msg.htime = 0.20896783595091484;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.09206833110760781);
    msg.setSource(27941U);
    msg.setSourceEntity(181U);
    msg.setDestination(57409U);
    msg.setDestinationEntity(106U);
    msg.command = 21U;
    msg.htime = 0.06744771742182776;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.018388242076963768);
    msg.setSource(6231U);
    msg.setSourceEntity(192U);
    msg.setDestination(33217U);
    msg.setDestinationEntity(118U);
    msg.op = 43U;
    msg.file.assign("PEXONIUSPISBOQTHFUDTEBRXATHQSRCOXCRTMJFVRK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.4443882996196997);
    msg.setSource(33781U);
    msg.setSourceEntity(42U);
    msg.setDestination(50934U);
    msg.setDestinationEntity(173U);
    msg.op = 25U;
    msg.file.assign("ZAYCIFAQYKD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.910805565171576);
    msg.setSource(60228U);
    msg.setSourceEntity(109U);
    msg.setDestination(65145U);
    msg.setDestinationEntity(76U);
    msg.op = 189U;
    msg.file.assign("UYGMISGBMFTZHVFNFXSVSIOCJAJISUENHGRPSFHBCNZTTXWLLAQBOCHOEKCEVHLMMJJOGDDVDSUUSKUFRPYGPXUMEBVGQDOHIAMYXBPEFBVXPLRECPNEZZZRUEFMHWDNAAKOINONWWVUJKCXKGAQHNTFJUKCQAGLWMYBTBOZYKCILLTYVMCKSQDVOSQGXIXILEFXZIYHQHUPYJQMDRPZROTDZPDGRRCNTVRYLLWDJPBIAXTW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.22331180774932247);
    msg.setSource(46733U);
    msg.setSourceEntity(66U);
    msg.setDestination(41526U);
    msg.setDestinationEntity(232U);
    msg.op = 75U;
    msg.clock = 0.397604242877971;
    msg.tz = -108;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.18059474053568936);
    msg.setSource(376U);
    msg.setSourceEntity(250U);
    msg.setDestination(38118U);
    msg.setDestinationEntity(146U);
    msg.op = 121U;
    msg.clock = 0.1471149446949871;
    msg.tz = 80;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.025082763464294278);
    msg.setSource(20901U);
    msg.setSourceEntity(68U);
    msg.setDestination(51072U);
    msg.setDestinationEntity(49U);
    msg.op = 39U;
    msg.clock = 0.876233681769635;
    msg.tz = 21;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.6768019950286185);
    msg.setSource(6892U);
    msg.setSourceEntity(223U);
    msg.setDestination(45919U);
    msg.setDestinationEntity(109U);
    msg.conductivity = 0.1591808779634618;
    msg.temperature = 0.06337403329170543;
    msg.depth = 0.32689238525397923;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.51911850205439);
    msg.setSource(64902U);
    msg.setSourceEntity(198U);
    msg.setDestination(10790U);
    msg.setDestinationEntity(42U);
    msg.conductivity = 0.07714899353690963;
    msg.temperature = 0.9319952150538252;
    msg.depth = 0.600869267639683;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.26977807838180035);
    msg.setSource(47114U);
    msg.setSourceEntity(241U);
    msg.setDestination(60284U);
    msg.setDestinationEntity(43U);
    msg.conductivity = 0.4311389261034838;
    msg.temperature = 0.6945138705748548;
    msg.depth = 0.7079682252864398;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.05574212341074902);
    msg.setSource(23343U);
    msg.setSourceEntity(243U);
    msg.setDestination(61584U);
    msg.setDestinationEntity(217U);
    msg.altitude = 0.8818217374433661;
    msg.roll = 3686U;
    msg.pitch = 41589U;
    msg.yaw = 26158U;
    msg.speed = 6491;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.2885693655685658);
    msg.setSource(40571U);
    msg.setSourceEntity(108U);
    msg.setDestination(43156U);
    msg.setDestinationEntity(111U);
    msg.altitude = 0.5429511812841604;
    msg.roll = 4155U;
    msg.pitch = 48794U;
    msg.yaw = 31612U;
    msg.speed = -20451;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.5443814158081736);
    msg.setSource(24544U);
    msg.setSourceEntity(160U);
    msg.setDestination(24440U);
    msg.setDestinationEntity(177U);
    msg.altitude = 0.9656975968941702;
    msg.roll = 63911U;
    msg.pitch = 23388U;
    msg.yaw = 44175U;
    msg.speed = 28341;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.6868992495383429);
    msg.setSource(11269U);
    msg.setSourceEntity(205U);
    msg.setDestination(58064U);
    msg.setDestinationEntity(203U);
    msg.altitude = 0.048067465680410204;
    msg.width = 0.5324224247828159;
    msg.length = 0.4689934754504328;
    msg.bearing = 0.6322286438975986;
    msg.pxl = -5289;
    msg.encoding = 85U;
    const signed char tmp_msg_0[] = {82, -45, -92, -100, 69, -30, -9, 71, 119, 117, 122, -116, 126, -76, 78, -7, 106, 30, -115, -81, -96, 78, 119, -6, -59, -35, -73, -88, 26, 88, 65, -10, -23, -120, -58, 51, -83, -51, -46, -64, -123, 111, -13, -81, 9, -111, 122, 100, -125, 52, -83, -45, -40, 9, -96, 9, -23, -95, -95, 56, 104, -122, 15, 23, 75, 49, -38, -121};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.2847199681936531);
    msg.setSource(51266U);
    msg.setSourceEntity(89U);
    msg.setDestination(14960U);
    msg.setDestinationEntity(107U);
    msg.altitude = 0.40346923771170673;
    msg.width = 0.3869729535156692;
    msg.length = 0.5367896416974623;
    msg.bearing = 0.8574865609350815;
    msg.pxl = -4541;
    msg.encoding = 43U;
    const signed char tmp_msg_0[] = {-93, -100, 43, -110, 23, -18, -11, -18, 31, -92, -43, 126, 57, -58, -111, 23, 24, 6, -68, -110, 119, -55, -88, 74, -55, 52, -121, -44, -127, -125, 90, -108, -70, -45, 70, -7, -5, -80, 16, 57, -122, -119, 64, -56};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.7318462332181995);
    msg.setSource(20122U);
    msg.setSourceEntity(51U);
    msg.setDestination(12211U);
    msg.setDestinationEntity(170U);
    msg.altitude = 0.8624679427307318;
    msg.width = 0.6402672660153834;
    msg.length = 0.39239909583703914;
    msg.bearing = 0.2356851733966271;
    msg.pxl = 27258;
    msg.encoding = 112U;
    const signed char tmp_msg_0[] = {-76, -115, -76, 45, -28, 44, 96, -40, 10, 123, 17, 84, -30, -72, -25, 71, -99, 6, -77, -67, 6, 116, 8, 43, -103, 20, -82, 70, 48, 37, -75, -62, -9, 59, 71, -15, -74, -74, 76, -101, 60, 26, -88, -68, 76, 53, 69, -10, -91, -107, -64, -48, 111, 106, 27, -69, 90, 79, -80, -19, -73, -81, 17, 46, -44, 113, 76, -125, 42, -28, 43, 72, 41, -14, 95, -49, 11, -46, -100, -118, -47, 56, 37, -12, -99, -40, -42, 96, -75, -20, 45, -26, -118, 16, 69, 11, 114, 28, -84, -9, -79, 87, 119, -79, -58, 119, 74, -9, 42, -119, 28, -44, 116, -94, -86, 24, 112, 44, 91, 70, -112, -100, 116, 51, 17, -10, 36, 123, 85, 88, 73, 1, 111, -38, -116, 86, -86, -40, 115, 57, 84, 60, 5, -25, -75, -99, 72, -127, -47, 105, 107, 38, 107, -111, -93, -80, -76, -49, -32, 1, -37, 64, 29, 118, 90, 29, 126, -43, -95, -128, -107, -48, -36, 77, 20, -123, 61, -64, 118, -58, -43, 63, -86, -83, 117, -90, 76, 106, -47, -44, -63, 60, -80};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.30896251268880337);
    msg.setSource(58938U);
    msg.setSourceEntity(171U);
    msg.setDestination(35571U);
    msg.setDestinationEntity(127U);
    msg.text.assign("HSEEUUFWREJCRKJXIJVKRQNBCEGXXENVMLMNRNOVIOHDPYQKBYTVOZSBLTGIMYRPHLMATWVCXFHDOLZPHAWCUXMELTJRYSQURVDNKFGYNKXFTWAQUPYRHDKFXEBYSGZHDWIHSBYOJQUONZLAWABWPGIMUIHTZLNXFCWWDKMKGFLZYBVAFOCOZDCJAP");
    msg.type = 189U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.04142539610848117);
    msg.setSource(34753U);
    msg.setSourceEntity(31U);
    msg.setDestination(12657U);
    msg.setDestinationEntity(127U);
    msg.text.assign("LBYTHOCACJVCEVYWNHHXUCWRZOFPCPURVPLVVGJAMWSYVWFGAOBLFNXTPWKLVQFUCKMSGIEROUJUYHUGEIDSNZOOKYNWNCLADKRPZIKKQKJVEQSMBRUBXADIBUCWRTAJBJQERHPDTFTEXIWIQOHSMAOZNDAMLDQLISQYWRNPLKGGQQGIZDFZERXWNGNFFXYXUBOAIETFSQSZZHIHXBMZTLGJXGSPCEMDP");
    msg.type = 51U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.14330035004974107);
    msg.setSource(48157U);
    msg.setSourceEntity(226U);
    msg.setDestination(50789U);
    msg.setDestinationEntity(135U);
    msg.text.assign("SXXYRYPRHKNQVYYMKVWEYJPLXNLEEIJGMFYCEVAIGHSCKBMCOKECLRCSYQPJUZBPUDHFOKZYGKTHNEGTDQRJAVZLNSANDDWUXGBURBFNLRKPXEXMBDIITJKAPQTFUDZW");
    msg.type = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.9970758433296099);
    msg.setSource(45165U);
    msg.setSourceEntity(111U);
    msg.setDestination(33739U);
    msg.setDestinationEntity(231U);
    msg.parameter = 142U;
    msg.numsamples = 148U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 31916U;
    tmp_msg_0.avg = 0.997654077167127;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.7577622700405802;
    msg.lon = 0.6549018517457392;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.38368417681488354);
    msg.setSource(65390U);
    msg.setSourceEntity(20U);
    msg.setDestination(65401U);
    msg.setDestinationEntity(197U);
    msg.parameter = 94U;
    msg.numsamples = 176U;
    msg.lat = 0.32462636414908164;
    msg.lon = 0.08360405285972095;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.8308750226757503);
    msg.setSource(10035U);
    msg.setSourceEntity(74U);
    msg.setDestination(29805U);
    msg.setDestinationEntity(74U);
    msg.parameter = 19U;
    msg.numsamples = 25U;
    msg.lat = 0.7057568706234971;
    msg.lon = 0.4793293821860305;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.32735273812031707);
    msg.setSource(23290U);
    msg.setSourceEntity(131U);
    msg.setDestination(17164U);
    msg.setDestinationEntity(224U);
    msg.depth = 7211U;
    msg.avg = 0.24009213263775786;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.3919071982470571);
    msg.setSource(1532U);
    msg.setSourceEntity(20U);
    msg.setDestination(20787U);
    msg.setDestinationEntity(179U);
    msg.depth = 63396U;
    msg.avg = 0.8014386368395583;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.23949726279493733);
    msg.setSource(36580U);
    msg.setSourceEntity(36U);
    msg.setDestination(45972U);
    msg.setDestinationEntity(108U);
    msg.depth = 10419U;
    msg.avg = 0.2676497274832922;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.452572106409731);
    msg.setSource(58097U);
    msg.setSourceEntity(240U);
    msg.setDestination(65261U);
    msg.setDestinationEntity(223U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.9621421322475229);
    msg.setSource(18639U);
    msg.setSourceEntity(212U);
    msg.setDestination(26553U);
    msg.setDestinationEntity(167U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.34912638201757207);
    msg.setSource(46797U);
    msg.setSourceEntity(84U);
    msg.setDestination(16752U);
    msg.setDestinationEntity(137U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.1702526650342574);
    msg.setSource(56411U);
    msg.setSourceEntity(78U);
    msg.setDestination(43898U);
    msg.setDestinationEntity(33U);
    msg.sys_name.assign("SSDTNUFRWMQVAVNWHPWXLWSDHCNCXGHJGGLUOAZBHRTCVQXDQAWVSWXYEXUTPWUWEIOKWNGJJKKRHUXYECKLGPZXORBVTTSLVAPEIDMBABBEZYPUJTQEJCYIF");
    msg.sys_type = 143U;
    msg.owner = 43779U;
    msg.lat = 0.045393772890982786;
    msg.lon = 0.23353676426269698;
    msg.height = 0.21689801118079954;
    msg.services.assign("FVWWESJMNLZFHUBQVBUYZJKAAOKXUFDGREVCPBHTOARDLSKXORJYWCFANTCYPGKBYZPNJIDITTWGXRSHJLOQOXMUPYPARMNRXCTOIVJSCXGBSFLUCQYMNKLFHEZIKQTCDTJBVIODDDIJVFYGNSTPPEEHSJOPQVCTSWAHKZDWQOQBHANWEZXBRMHMDSKLLPWGVUVYEZY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.03918567199822642);
    msg.setSource(14715U);
    msg.setSourceEntity(196U);
    msg.setDestination(46921U);
    msg.setDestinationEntity(152U);
    msg.sys_name.assign("YEOKMWPGYIHJIXDRHXFDNQKRXQQSKSZNISUFRZPPANRRIKZXRGTHGMJPYCCVKIFVAW");
    msg.sys_type = 101U;
    msg.owner = 21311U;
    msg.lat = 0.47632944279632117;
    msg.lon = 0.6532193380922173;
    msg.height = 0.724453041922409;
    msg.services.assign("CJMCTANMFJMXWEIOFKYUQFJADMPTOMGJBAAREZNOBMKIDZLQNJCXRXWCQTKXEKPLICRPXLVDZFJEQQLLELSHWCKSPPZGYKHBXFNHBSIGMIVQSSJZWHBYDRFGRBYFQWGFULUESDXKYEFCAZYPHRTJAOHVCTXNUIBYQPICOQUKTVBGUGZBKMRZVGITAUAJSOVNGEYVWTDQHILDNEROGSCLPOVTVUAJTSHDRIPP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.6488862337497073);
    msg.setSource(58888U);
    msg.setSourceEntity(101U);
    msg.setDestination(52388U);
    msg.setDestinationEntity(21U);
    msg.sys_name.assign("FBJJVRPEHXSFIZPRYBXFNIQJPQEJJPPQRMYGADGWKHNXKTERUSLWQ");
    msg.sys_type = 4U;
    msg.owner = 4892U;
    msg.lat = 0.5041277745889481;
    msg.lon = 0.27674673635294167;
    msg.height = 0.8635702520412504;
    msg.services.assign("EZJMEQDKXRJKKDNWWWBAUFFJOMGICUKRVBVUVRSRZNCLCEGDUHLPVTMXKIBCKLWAZAUUIGQYJWJOYEMWVGKRQIPSMQRBWFAFFFNBSHOZCTQKXTNZJLFQOVDYZCPTAMDITOJLEYT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.4399380905092075);
    msg.setSource(32547U);
    msg.setSourceEntity(178U);
    msg.setDestination(58018U);
    msg.setDestinationEntity(181U);
    msg.service.assign("SYDIMRUPWZZJHDQBQJPSVWEMMIFWKGTUNRKGPQJFUBBUJSQJXHNOPPAPZWSVDVTEMRLLNHISTXPUXSKOXLJPEQAAJSBECDNQQVLBS");
    msg.service_type = 182U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.36874938779285504);
    msg.setSource(1701U);
    msg.setSourceEntity(88U);
    msg.setDestination(19246U);
    msg.setDestinationEntity(57U);
    msg.service.assign("MBQKGAXZYTNHLLPAKIPUUGYOEEPTRAAPLIVUMDMTQKBIRAEVESEFZDQLVXUQFRYMFFLFNZBUTPSFNLAXKYLFWGKQHQCZBGOOIEDNRHRDSLFWLJAXRCHNFPOAUSIUSGZDWEJVABPWUBGTOENIDJQETVPQKSTSFCOVXHWDMPBMCDYRCGJYHIQXKQMYZVBHWOGMSWHYCVRCNRDBXLOVHUIKTPOJZZKBYEVSTOUZJ");
    msg.service_type = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.6093766332321053);
    msg.setSource(31825U);
    msg.setSourceEntity(198U);
    msg.setDestination(61115U);
    msg.setDestinationEntity(214U);
    msg.service.assign("RVJPHNRCANGJOXCKDXLYDYFSCHDOADQBNOWIFHVMWYDJMRQYQIEEHPIKRFNEYJBIFBSFTVNPOUFCGCLZRXDGQBEYGSUMYNSCBIZMHAAPJAMZWOGJSKCWVMWVTECQRBXOEWELUXZBUIHAKJFEMKLAAGDPMTUPNTTZUVDSWSMSZSGLIQSIBRJPTBCGLTVUXORIFXCFWLHJQMHUXUAPEKNJRFKOYOKLWNRXKHZNXPTGOWGZYIT");
    msg.service_type = 185U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.5037159906562273);
    msg.setSource(20533U);
    msg.setSourceEntity(151U);
    msg.setDestination(39056U);
    msg.setDestinationEntity(42U);
    msg.value = 0.16650145094360624;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.6753185804273069);
    msg.setSource(55950U);
    msg.setSourceEntity(221U);
    msg.setDestination(12099U);
    msg.setDestinationEntity(49U);
    msg.value = 0.11595730260294101;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.5651434428794918);
    msg.setSource(40792U);
    msg.setSourceEntity(104U);
    msg.setDestination(9961U);
    msg.setDestinationEntity(68U);
    msg.value = 0.3233463346757435;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.7450111545576789);
    msg.setSource(24212U);
    msg.setSourceEntity(38U);
    msg.setDestination(36983U);
    msg.setDestinationEntity(160U);
    msg.value = 0.1833000422179808;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.8539115074860713);
    msg.setSource(38798U);
    msg.setSourceEntity(99U);
    msg.setDestination(17354U);
    msg.setDestinationEntity(172U);
    msg.value = 0.16568562982396606;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.8830747503770777);
    msg.setSource(32814U);
    msg.setSourceEntity(156U);
    msg.setDestination(32167U);
    msg.setDestinationEntity(93U);
    msg.value = 0.22988088090799486;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.3895415183509635);
    msg.setSource(65298U);
    msg.setSourceEntity(248U);
    msg.setDestination(6518U);
    msg.setDestinationEntity(230U);
    msg.value = 0.6384837727480934;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.658594490788305);
    msg.setSource(36993U);
    msg.setSourceEntity(103U);
    msg.setDestination(12555U);
    msg.setDestinationEntity(187U);
    msg.value = 0.36080592067310313;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.7824418208316453);
    msg.setSource(40668U);
    msg.setSourceEntity(192U);
    msg.setDestination(7033U);
    msg.setDestinationEntity(80U);
    msg.value = 0.37214151701227627;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.5351691430208513);
    msg.setSource(5999U);
    msg.setSourceEntity(98U);
    msg.setDestination(53272U);
    msg.setDestinationEntity(213U);
    msg.number.assign("WAEJIDOYUAZOKQHXAQSXYQCCTZDVFTDVLUNYZLRBIHZUFBANGFOYKSEZXYSEFZOWTRNTOIDRKELENRUFVIYWKZYJPMIQXVEAYBPRMGROKJEUSHCMXBIAPCPEFZXJFULTWDBLNGBZUYTGKZJHBPCQQDGWOTAMVKMOCPDWIJNVXSCWHESOFHPRVIQJRUCQV");
    msg.timeout = 52490U;
    msg.contents.assign("OJSUEPXWUTDQFSZRPLHLIXSCLMEBDJSBVQVVIYWKRSUVJABCMONMIRVVBXABYULKQZBWJMOXTHBFYMYFYMTNLLZGPEUNZRUZKEQGFGPPGTEIFZAWUWCIUWGYCCNKHHTPJAZEOOIVADJJOGIHJWDAVKYBVHTSHPDPPRAEXRSDDXTLGDCNJNUAXQOXQNSOIEWUWKRMHQQDGNTRKZOLFBGLRDPLJBTSCFMWKYCFKKIEGOFRHEXMQCNQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.6015255359560553);
    msg.setSource(43662U);
    msg.setSourceEntity(216U);
    msg.setDestination(39890U);
    msg.setDestinationEntity(97U);
    msg.number.assign("EMDOKQLDJOVLEBIOPFZYDMARFFKVBWBESAVQEJOPJBXKEYHNQZFUSFYCISRZUWTRNXNJZOFRYAUQPNZQXCSLSCKPQGKTRUNBIOUADTIIAQGQYCOEIPD");
    msg.timeout = 3559U;
    msg.contents.assign("KQICTADMZNEQBNVMAWHEGJGIEXSOARLEVQLUSQPJHRXKRMQONYQYJHGTJDRLUVZIWGKQOSRHFBPNROLKSFCZMEMXRTPYBDLQCBBVRVSLWAZGNCZZSKAFTDXKSWTNOYTUUWLTVNABVNXJPDHGXBDSBYLIZLYVTNADFNEDOYGCEIWKDFGEMMPBDJUFCAFKXQEFYHJYZRRFUSVTHFPVZPLXZJQUCITMSCAIHMAIWOHIPHOPE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.8063303448490483);
    msg.setSource(49812U);
    msg.setSourceEntity(160U);
    msg.setDestination(44492U);
    msg.setDestinationEntity(229U);
    msg.number.assign("BBIQTUFXYQRLXGKAHIAOFWVSCFVALESYBTQSOPNIZSKPOKUXKQKWFJFPIWYEJUWIJCDJTDKXEXHPSRMDHBCGTKGNQYOBXYWNELWAUJMUFMILPTZKMZHRIRMNMODINJNTMZGLDKHEMQLJAHRFGWWUVKQYEZGIGVRBVUPISYDEPUAOXZRFSCQHZOXXJ");
    msg.timeout = 22830U;
    msg.contents.assign("MRHVPUEBRTSYOQGMZC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.2726614453287075);
    msg.setSource(22355U);
    msg.setSourceEntity(54U);
    msg.setDestination(45105U);
    msg.setDestinationEntity(198U);
    msg.seq = 1795111120U;
    msg.destination.assign("FFRTNBCJAKWTLZICKWRTAXWPNWOQLJPCDZSYMLPAACGHYGQHFDAWVYKFWPODSOCSGIXWFEELVPPDNKFUKMDZLLWJPTQMJSADBXNVZNQSSXJGXMVKVGEOFBBMGUJFSITTJHBUXUYLQZEC");
    msg.timeout = 28949U;
    const signed char tmp_msg_0[] = {44, -95, -37, -55, 22, -99, 40, 45, 86, 116, -9, -54, -120, -50, -7, 86, 56, 48, -42, 125, 59, 54, -11, 25, 53, 83, 108, 10, 59, -65, -30, -76, 17, -19, 7, 123, 103, -32, -113, 68, -40, 33, 68, -44, -62, -90, 14, -7, 37, -93, -70, -109, 91, 54, -31, -61, -2, 21, 34, 29, 102, -38, -2, -15, -41, -93, 22, 81, 34, -123, -23, -126, 121, -68, 53, -11, 83, 36, 4, 29, 125, 33, -81, 121, 0, -18, -113, 76, -64, 0, 42, -43, 102, 29, -7, -125, 58, 94, -5, 2, -82, 14, -121, 1, -50, 103, 44, -107, 58, 65, 62, 58, 56, -36, -118, 5, 126, 48, 54, -49, 83, 115, -73, -112, 77, -26, -10, -123, 39, -83, -79, -29, 31, -24, 53, -128, -117, -104, 9, -95, -28, 113, 93, 86, -111, -5, -96, -48, 47, 122, 23, -79, -52, 46, 11, -98, 54, -101, -3, -15, 63, 34, 122, -36, 95, -89, 48, -80, 117, -110, -84, 47, 126};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.4661866165092793);
    msg.setSource(44582U);
    msg.setSourceEntity(68U);
    msg.setDestination(32628U);
    msg.setDestinationEntity(5U);
    msg.seq = 2999153724U;
    msg.destination.assign("NIKANVTWAOPISDFZRGZEYOBKVNPKUWTPSHBYTEVOBQAEXKUSVMBKJZQNKHLXNFOJFTFXVGCDIZIFHWCMCCRZASKIQKGSYARROWGRJCYBVHSMJLFEAGLKHPGPMATNDSVSUHUUERQDPLJQUUZZYRCZIY");
    msg.timeout = 63927U;
    const signed char tmp_msg_0[] = {57, 91, -119, 29, 111, -29, 120, -101, -125, -67, -58, -72, 70, 33, -107, 100, 28, -91, -122, 25, -26, 19, 55, 75, -18, -84, 14, -51, -127, -107, -29, 58, -17, 87, 49, -34, -125, -88, -74, -114, 30, -31, -116, -104, 46, -51, 54, 122};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.3893975176736907);
    msg.setSource(20047U);
    msg.setSourceEntity(245U);
    msg.setDestination(41721U);
    msg.setDestinationEntity(235U);
    msg.seq = 1356316130U;
    msg.destination.assign("UEQDBGHBONOHIUTGMKFCCIQPMVEMJAJEZTKMUMNINLSKBQOYTDYUXOFCIHCURF");
    msg.timeout = 47505U;
    const signed char tmp_msg_0[] = {18, -128, -81, 13, 75, 98, -115, 109, -86, 55, 77, 102, -123, -51, 117, -33, 106, -14, 35, -27, 36, 104, 126, 80, -3, 34, 49, -68, 99, -52, -95, 9, -123, -110, -46, 50, 13, -118, -82, 85};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.11416719749949544);
    msg.setSource(50085U);
    msg.setSourceEntity(9U);
    msg.setDestination(56384U);
    msg.setDestinationEntity(111U);
    msg.source.assign("GPKIZBGJATRKHCGSAPDXEKGZGYZGXJUCBCHXIJFIMUIOKPNXBSOBAWEFXTYCHKNCZWVBJLXKJYECFEWQQSLKFGXGQQHIEIYELORVONHIJOOPLMNYKFZVOTXLBREMUTPYJASUAJLAJHFQWWDDYGEBDRZMPSZCMVFVRKRNWXEDVMYDKUQTRHPADNOSWAMCTIVRZYHDVWBNEUZSMTQFQLGCFSPTBQXSVLPHBWUDCL");
    const signed char tmp_msg_0[] = {81, -120, 0, -122, 106, -34, -64, 41, 33, -22, 96, -77, 118, 99, -20, 64, 19, -50, 69, 120, -118, -46, -27, 84, -121, 44, -13, 18, -55, 41, -52, -102, -107, -95, 12, 38, 12, -57, -35, 91, -64, 81, -127, -1, -122, 62, 34, -50, -4, 73, -121, -66, 33, -29, -13, -121, 123, 81, 116, 66, 111, -76, 1, 57, -7, -11, 35, 0, -100, 3, -12, -10, 9, 105, -87, -74, 7, -59, 41, 119, -107, -41, 53, -9, -86, 3, -110, 39, -120, 57, 86, 113, -87, 8, 17, 56, 21, 53, -70, 97};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.7354689647611983);
    msg.setSource(38268U);
    msg.setSourceEntity(50U);
    msg.setDestination(57241U);
    msg.setDestinationEntity(80U);
    msg.source.assign("YITEDURJVJJUCWCKNUXHNESSDRJGGHBCWPMYZQLVBCETHCRFWMTNGZVPWHRPHRDUCQFSLLIROKMBNZSOAWCIHGAQJMTJAXLKXYGKABFKDXZFEOACTFKWOSIJSLIIWAXMOUHGQMKZNFMPONXPVFOCUWZPVMEFHGABIKMXURCYPRDLQDBDQPTNQYWBIDAVOGKYAEUQZGJTNYTBFQTIVXZADGYUEDBBTEVLMEUPXLNNJOHWROJPV");
    const signed char tmp_msg_0[] = {-38, 107, 23, -100, 107, 75, 115, -87, -125, 2, 29, -67, 86, 60, 61, 41, 91, -39, 72, 78, 10, 54, 44, 86, -20, 65, 118, 94, -89, -13, -73, 31, 15, 18, -27, 84, 81, -75, 88, -104, -128, -76, -105, 52, 38, 4, 63, -46, -76, 38, 90, -92, 119, 98, -122, 10, 8, -33, -111, -111, 83, 114, -88, 118, -91, -112, 5, -33, 49, -32, -42, 49, -7, 82, 101, -38, -91, 80, 55, -75, 116, 126, -58, 49, 64, 71, -18, -75, -1, 44, 111, 56, 122, -90, 103, -59, -16, 88, 108, -64, 61, 36, -34, 63, -121, -34, 77, -121, -26, 21, 30, -38, -49, -99, -93, 81, 48, -110, 8, 47, 99, 118, 48, 40, 7, -38, 72, -15, 39, -84, -120, -63, -121, -26, 57, -77, 62, -62, 69, -102, 47, 29, -72, 101, -112, 124, 55, 126, -68, -24, 25, 32, -4, 109, 109, -70, 16, -42, -70, -10, 122, 101, 94, -81, 19, -36, -19, 4};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.9034939869537463);
    msg.setSource(24647U);
    msg.setSourceEntity(169U);
    msg.setDestination(42570U);
    msg.setDestinationEntity(174U);
    msg.source.assign("ILJCWGTQULWIVQFOMSAGVCMZBZULWFIEOOPZHCSYNCTKYVAKXSOKJAQBDPVGTJRXQXEOXAGXBZFYVUEJGOBNDDHNAPOLHYDETKWRRJLOXCURXIMSNMYMFQWL");
    const signed char tmp_msg_0[] = {-126, 101, 108, -100, 80, 83, 114, 109, -10, -86, 108, 78, 13, -128, -77, -94, -37, 32, 92, 45, -120, -13, -75, -87, -4, 7, 4, 76, 43, -70, -97, -127, 107, -97, 80, -125, -41, -35, -47, 57, -56, 0, -74, 21, -22};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.2251536594277872);
    msg.setSource(12715U);
    msg.setSourceEntity(131U);
    msg.setDestination(43167U);
    msg.setDestinationEntity(198U);
    msg.seq = 2540208333U;
    msg.state = 209U;
    msg.error.assign("PFEPNLQHWGHHCNUUEVDFEBRXWWIPFKQFAMZSLZLGHDYLNMBICQXEVCRROOSVKDWFOKXRIXPGABSRCLJSZTDWSQQUQNCSBMTFBPEJIZYQIOYAWMODDEKJVGJUINEJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.533813148115739);
    msg.setSource(41238U);
    msg.setSourceEntity(42U);
    msg.setDestination(17636U);
    msg.setDestinationEntity(161U);
    msg.seq = 1039750338U;
    msg.state = 150U;
    msg.error.assign("BHHSCJTXURRHCDZMHTDIHISAKJLMCHZSYYJKVPOENDDYWGDFLTQUWEMZQVUUSRLXYEFNJBZMHLZVWMTBLLTJXSFKPDTBFJYAQNCOUQYNLCZIKAAINCVNYGUTATXEDCLVERSMPGBFGRSAJOEAZGPPJQPGYRMEBUPNRGAGKHIVONRMOCWIUWQIIPJXTMOOFIZDHAEQBLQKDGSPNORKTXGIUCWUWVQWMWEFXEPXAO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.057146184316392845);
    msg.setSource(63653U);
    msg.setSourceEntity(251U);
    msg.setDestination(20628U);
    msg.setDestinationEntity(140U);
    msg.seq = 3424254668U;
    msg.state = 185U;
    msg.error.assign("PYQJAMHNMKHAXMNQQORQKWELKVGDOZCADLWYTVBOWXYKHGHQPRUVEPSRVMKXOJLRFUBUVMBOFUDBKGXAWIWLA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.33715460593747715);
    msg.setSource(54090U);
    msg.setSourceEntity(200U);
    msg.setDestination(22679U);
    msg.setDestinationEntity(29U);
    msg.origin.assign("YDLBZSZLEPNXTMWAIJXJZSFQLEMVFDJWWYQKEUMIOWSYSVLFZSUFBVEXNRMAHMHEKTCEOZHKLHDORTPTGHDALZLIEPSNYBORMOCAFRQQAWYJJCTHIRSGWJYJGVVBXDAHECMSBGXYQBUCQWWIVPUYGGJKDMBRILJFDNHUXGJKKYPCYWENGBIVRL");
    msg.text.assign("BFJJTGIZHKXVOIURABGKEPVCHSQLXRLHHBXTRMSHPLYKHMOSBTXLFHDWXDUVAIBYWKWFANZEJXOCWLSPDEWNVRPKRDQUDZIVPOCMYEYVKXTZZBNHQYOMQPFECTFPAJORRMNUPFMGUJDYPKSOZGDBOHQJNFETYMDLCLZNCBZCJEZICGVAJFM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.8022520582078234);
    msg.setSource(46994U);
    msg.setSourceEntity(71U);
    msg.setDestination(25318U);
    msg.setDestinationEntity(131U);
    msg.origin.assign("IEYJNBXCADOYJZALZFHKAHBGZESAPJVSIHGQGPOCOHNYRJXHLLXZGTKNLRKVJSUOQJGEWKLIDFDZRXPUOSMZMLCEKFEYLBJZIQTYIWNTDCTMGFSRWVQOMEBNMVZHUOXTDQHLVBHBCGKYWMUKBHNBSDROTIRYATKGJWLPXDALPTBNXQWMCEIQNUVDVURCSAPIBFXVZFSYRUIWE");
    msg.text.assign("ELKARQHEGCABQGKRACLNXTCSXYQVAJQMNRXTEFHCDPPDIVUJFNZXSCZSBJLSQJPMHIUXXRAEEOPQCXJGTSVKHYRNTDGQDYNKEVNKGOSNGRLZSELCMQWTOTAYLBOGWPKPHMDVUDABNRQBLMUIXBYFKURCJKOEOZSUSYFKDWTGWQFFZULNFTBWSKMVJRG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.4344622790490622);
    msg.setSource(1072U);
    msg.setSourceEntity(26U);
    msg.setDestination(60727U);
    msg.setDestinationEntity(234U);
    msg.origin.assign("WQYJTENMQNNNKNB");
    msg.text.assign("PUJKWKLLZGAOWPGSNTNBVXJGTPCWMYBKGNDHMXAMHMTRDWXVHTRCTTKOCJQRVUZTJYFFEWLRHJZRSYGEVKFZILE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.22027729625140546);
    msg.setSource(38138U);
    msg.setSourceEntity(186U);
    msg.setDestination(23425U);
    msg.setDestinationEntity(49U);
    msg.origin.assign("QZMFZTBXGYYMOTTGZIFLAVYXU");
    msg.htime = 0.864343306691034;
    msg.lat = 0.4099762919073814;
    msg.lon = 0.3315379561647296;
    const signed char tmp_msg_0[] = {6, 37, 58, -92, -64, 89, -74, -64, 83, -116, 11, -14, -71, -61, 74, -18, -49, -41, -29, -101, 110, 38, -126, -2, -103, -115, 64, 27, 29, -126, -12, 12, -65, 105, -120, 107, -6, -36, 0, 122, -33, -29, -46, 61, 114, -45};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.5293591046911252);
    msg.setSource(49911U);
    msg.setSourceEntity(120U);
    msg.setDestination(50955U);
    msg.setDestinationEntity(10U);
    msg.origin.assign("SYSMXZSDNVIZDRWQZCWCPDBXJBTBGSGMOLCUBVZCNUEGERDKFKNJVFDGMSCVROSHXUPWIUMRKHRYANESJGFQCBBSUVLPSMERDTTPELOFDVYTUXNHAEGQHQDJVIPTZQRYJBEWOHNLVKZZUK");
    msg.htime = 0.9154150528620302;
    msg.lat = 0.2909051102162522;
    msg.lon = 0.2991734722020394;
    const signed char tmp_msg_0[] = {-114, 28, 16, 6, -95, 37, -58, -86, 73, -91, 60, -53, 53, -77, -128, 80, -79, -46, 100, -72, -94, 0, 111, -89, 68, 111, 103, -86, 3, -75, 46, -86, 108, -65, 33, 94, 82, -45, -27, -62, 60, -10, -28, -69, -37, -52, -97, -5, -52, 83, -91, -112, -113, 63, 119, 89, -46, -57, -29, 59, -103, 19, -113, -100, 101, 37, -49, -79, 114, 33, 110, 45, -95, -116, -14, -47, 45, -75, -66, 89, -123, 80, 0, -103, 119, -85, -20, 65, -69, 110, -115, 108, 121, 87, 67, 105, 20, -120, -118, -41, -86, 19, 99, 95, -54, 99, 43, -67, -41, 8, -66, -89, -13, 52, 96, 29, -60, 17, 112, 44, 39, -33, 68, -5, 54, 19, 60, 90, 92, -120, 109, 102, -79, 5, -99, 67, -79, -125, -61, -125, 90, 16, -92, 13, 51, 3, -75, -36, -72, 24, -112, 86, -113, 118, -82, 121, 124, 96, 89, -44, -24, -100, 28, -1, 67, 99, 124, 73, 75, 44, -79, -39, -99, -120, 54, 108, 38, 35, 118, 25, 119, -5, 30, 115};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.30843158258266234);
    msg.setSource(32755U);
    msg.setSourceEntity(152U);
    msg.setDestination(45380U);
    msg.setDestinationEntity(36U);
    msg.origin.assign("RXDRORJEXGJBDYVSGWZPJYIOTKYFXLSDSXGYRTORDCGGKLSTHHVRLATUEHZVOMAZMINRMPDYTHVDIPLIGHZXNIPWKWCFFSBNFVMWJYWTGEJBUUCZEAFAQBAURDVECJWGAOJNXHTMIYHFBCQZVTNXABUNIMLRKEPNKJPQRQCEEMTUUUAWNPLVVFHHJMIZTCKBOEVSCNEKXYCWWZPQO");
    msg.htime = 0.5955206044694559;
    msg.lat = 0.3236302291251434;
    msg.lon = 0.2533394136045296;
    const signed char tmp_msg_0[] = {-115, 111, -122, 21, -106, 97, 4, -38, 15, -6, -44, -100, -46, 73, -59, 41, -90, -21, -66, 73, -70, -53, -24, 122, 67, 20, -90, -109, -96, -73, 121, -6, 15, -74, -40, -128, 21, -28, -77, 100, -116, 71, 91, -7, 65, 111, -85, 69, 44, 40, -18, 71, -96, -40, 10, -65, 53, -46, -62, -122, -22, 126, -62, -14, 64, -37, -38, -109, -95, 100, -112, 77, -26, 18, -34, 59, -65, -77, 14, 106, 82, -69, -116, 27, -113, -25, -32, 125, -85, 123, 66, 27, -70, 7, 74, -106, 84, 18, 92, -118, 80, -84, 6, -115, 106, -126, 5, 11, -66, 122, -11, -82, 105, 57, 3, -6, -23, -12, -29, 75, 75, 68, -33, -9, -66, -45, -35, 93, 118, 68, 12, -54, -1, -84, 91, 113, 89, -76, 67, 4, -12, -94, -72, -74, -99, 92, -44, 19, 94, 102, -22, 24, -20, 99, 65, -117, -83, 9, -82, -75, 2, -73, 18, -64, 108, -56, -70, 69, 75, -65, 69, -122, 74, 33, -71, -124, 0, 105, -78, -105, -17, 4, -25, 88, -44, 116, 122, 114, 120, 125, -110, 16, 7, 16, 34, 55, 43, 84, -1, -75, -103, -13, 72, -93, -6, -61, -16, 35, 44, 73, -86, -88, -103, 6, 21, -68, -20, -6, 14, -17, 21, 51, 81, 123, 21, 41, 41, -58, 11, 61, -90, 49, 58, -80, 104, 4, -70, -50, 25, -66, 75, 23, 29, -127, -34, 116, -91, -125, -81};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.9859968991520623);
    msg.setSource(39136U);
    msg.setSourceEntity(10U);
    msg.setDestination(24997U);
    msg.setDestinationEntity(76U);
    msg.req_id = 19193U;
    msg.ttl = 26827U;
    msg.destination.assign("TJLZBCDOWSCKRWGGUEJHCQKAAHNPXPWXPNFXELHGSQCTH");
    const signed char tmp_msg_0[] = {119, -104, -14, 95, -42, -20, -64, -29, 90, -2, 7, 53, 120, 75, -110, -26, 98, 48, -13, 115, 83, -88, -19, 16, 99, 62, -49, 81, 19, 87, -94, 72, -54, 102, 57, -53, -14, 50, -13, 82, 85, -103, 49, -115, 93, 14, -75, -26, -109, 28, 119, -44, 99, 35, -104, 47, -73, -102, 13, -7, 53, 28, 78, 22, 64, 95, 59, -75, -19, 8, 74, 26, -68, 79, -20, -19, 87, 15, -37, 96, 18, 2, 9, 77, 14, 65, -57, 91, 83, 11, 106, 33, 37, -72, -73, 35, 78, 16, 53, -84, 34, 6, -39, -78, -13, 119, 91, -82, 2, 102, 73, 91, -98, 62, -65, -87, 21, 52, 26, -121, -66, 72, 54, 95, -71, 49, 76, -34, -122, -81, -89, -23, 86, 70, -124, 92, 87, 17, 99, -58, 81, -5, 114, -66, -74, 8, 115, 50, 52, 30, 78, -76, 122, 123, 100, -89, 24, 43, 101, -119, -79, 9, -109, -16, 62, -93, 81, -121, -76, -84, 62, 52, 23, -84, 110, -26, -29, 85, 16, 16, 106, 32, -38, 33, 89, 118, 101, 97, 0, 121, -90};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.7498078620723994);
    msg.setSource(40383U);
    msg.setSourceEntity(118U);
    msg.setDestination(61685U);
    msg.setDestinationEntity(16U);
    msg.req_id = 11107U;
    msg.ttl = 17822U;
    msg.destination.assign("SZYPSTIVHOCZYGPWPIOCVVWEINHRNGJRMATZNKUEZWXECBRJAFIYYXWLFKQGITDTQSZJBVKHMTNLQXMHXDUWYOGZUJLKEL");
    const signed char tmp_msg_0[] = {52, 91, -21, 92, -48, -91, -111, -19, 85, -121, -44, 9, -104, 50, -95, 112, 43, -81, -31, -24, 59, -123, 28, 17, 115, 85, 33, 120, -122, -65, 90, -75, 73, 93, 96, 86, -84, -104, 122, 95, -60, 67, -24, -110, 80, -67, -58, -20, 117, 33, -14, 111, 4, -13, 109, -83, 113, -79, -67, -112, -56, -100, 81, 108, 30, -68, 27, 29, -23, 5, -67, -56, -21, -66, -36, -81, 24, 29, -36, 107, -93, 60, -93, 119, 7, 50, 26, -29, 28, -91, -27, -44, -53, -52, -72, 75, -98, 67, -68, -16, 57, -65, 92, -65, -91, 123, 108, 43, 119, 93, 28, -16, 125, 6, 60, -119, 121, 18, -79, 97, -115, 111, 74, 63, -97, 27, 75, 106, -20, -36, -56, -114, -118, 50, 110, -44, -39, -77, -21, -53, -61, 114, 37, -57, 101, 58, -71, -126, -112, -78, -84, -59, 100, 5, 61, -75, -29, -74, -118, 64, 46, 28, 96, 86, 94, -44, 83, 6, 12, 80, -87, 26, 24, 121, 28, 88, -1, -44, 109, -98, 45, -3, 82, -39, 125, 50, -71, 100, -29, 109, -49, -36, -106, 70, 32, -101, 106, 2, -32, -34, -77, 90, 13, 97, -9, 17, -122, 43, -26, 12, -43, 120, -34, -80, 41, 110, -23, -110, -14, -73, -77, 57};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.2413877444335707);
    msg.setSource(63839U);
    msg.setSourceEntity(77U);
    msg.setDestination(11295U);
    msg.setDestinationEntity(144U);
    msg.req_id = 47658U;
    msg.ttl = 23178U;
    msg.destination.assign("MDUSOTATGOQTIAHKSFUIHACEVDBGFQBIKTPTCX");
    const signed char tmp_msg_0[] = {100, -79, -18, 66, -30, 24, 111, 12, 92, -26, -83, 95, -16, 50, 95, -114, 55, -114, 11, -125, 104, 123, -43, -15, 87, -16, -118, -101, 64, 93, 76, -16, -95, -100, 17, 70, -89, -41, -82, -13, 71, 97, -88, 28, -121, -10, 2, -78, -126, 112, 93, -77, 108, 53, 8, 120, -115, -25, 64, -50, 72, -97, 89, -126, 48, -37, 119, 84, 39, -15, 22, -11, 123, 106, 30, 83, 28, 31, 99, -103, 55, 64, 38, -60, -37, -126, 117, -97, 62, -9, -46, 124, -127, 122, 28, 44, -27, 123, 101, -111, -22, 109, -95, -42, 80, 71, 42, -107, 16, 63, 27, 80, 52, -106, -118, -114, 83, -78, 22, -30, 61, 4, 1, 106, -40, 76, -18, -117, 53, 53, -113, 37, -96, -59, -97, 124, 94, 121, 99, -62, -110, 71, 1, -54, -8, -64, -34, -48, 64, 103, 17, -6, 118, 92, 44, 98, -104, 86, 51, 111, -117, 123, -91, -47, 14, -33, -32, 16, -25, -8, -44, -79, 18, 106, 4, 36, -36, 65, 36, -94, -87, 48, -104, -110, 37, 89, -73, -104, -79, 55, 11, -70, -1, -1, -64, 90, 51, 119, 54, 66, -16, 113, 61, 43, 25, -103, -15, 95, -116, -115, -14, 34, 73, -125, 19, 54, 66, -114, 46, 42, 6, 100, 89, -41, -1, 28, 85, -53, 76, -114, 24, -61, 110, -80, 51, 119, -42, 37};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.20355158414474173);
    msg.setSource(8688U);
    msg.setSourceEntity(16U);
    msg.setDestination(22096U);
    msg.setDestinationEntity(130U);
    msg.req_id = 30857U;
    msg.status = 246U;
    msg.text.assign("QUJSYZMDHIOYJIODTGPZKKQKNXJPDRFPVTATRCVWLWJLOBMUOZWONOIXQKIASHYXCGCSRRPTULUAYEVSJYIXJPIVYKUVBXCSPEMCDHAMUBPPFRCFYZBEGNGOSFVCDAFXPAEEZHGTGLQLMRNESQFRKEOSUTHAZWLGQISIHAZBLLKZEXFDQEVKGKNPZNCTB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.3895965481412639);
    msg.setSource(15184U);
    msg.setSourceEntity(49U);
    msg.setDestination(14671U);
    msg.setDestinationEntity(79U);
    msg.req_id = 24325U;
    msg.status = 160U;
    msg.text.assign("HEMSJUCSUAWVDQYCRJLQGULLLPIERPPUWZCQVAFQWDNTTEBMMVKWERZEVSSQZTVDCLOTJOFZIWJCOIVBEMNHILPDRYRGNBFMNTXDJVDOHBPXZNSVHUHZSRFLHRWMKQKHKXKGTFBRRHTSWMACDFOCGICADAUZJVMGUYHAMYWOY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.25693381371447876);
    msg.setSource(47383U);
    msg.setSourceEntity(160U);
    msg.setDestination(56670U);
    msg.setDestinationEntity(21U);
    msg.req_id = 16797U;
    msg.status = 23U;
    msg.text.assign("BLBPAMWLGZFBWMNCJHBWFLKEOODHYZIMLTYPNOFMYBHKKCWZVDXBEKBLEEDTYHJTNXOHIPZLDJUYPYFLPGGBSAAAEPXIWMVKAPARVCGURQEYWJNBTFCEIRPCGPEURUWCSIHSVFQYVBUNQZDDMOKMNGTIZDIHSXDXUL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.13131935692265617);
    msg.setSource(36703U);
    msg.setSourceEntity(164U);
    msg.setDestination(2671U);
    msg.setDestinationEntity(166U);
    msg.group_name.assign("DZNYWGLQQRBXHBKMLIDOJYTTSWTDJKABRSSCIJXKNRFHVQBIXAFFIYHUPKGIQHSVVCLCANLKQMRACZRTXLWVGIOXVNMOSNGXZGVMYQPKMHCIKNCLDIJURNBGAQZKUPTWNWRFEJZYWPUDZJWDMYSVEIFFEYAQPOBJYLDNOAFWMUJCGGEWLOHHEXCOVDFDEVMTPPRZXYH");
    msg.links = 3821734515U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.9055902824883342);
    msg.setSource(16365U);
    msg.setSourceEntity(113U);
    msg.setDestination(52200U);
    msg.setDestinationEntity(39U);
    msg.group_name.assign("DWJLZHGURMTIZTTQYA");
    msg.links = 3981946621U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.8775781330110215);
    msg.setSource(41358U);
    msg.setSourceEntity(183U);
    msg.setDestination(10909U);
    msg.setDestinationEntity(39U);
    msg.group_name.assign("WJCVMENCTUUJKRPXNTTKXGEGRWBMSJE");
    msg.links = 3538591397U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.13256593784388937);
    msg.setSource(31147U);
    msg.setSourceEntity(139U);
    msg.setDestination(63221U);
    msg.setDestinationEntity(59U);
    msg.groupname.assign("AFLYTWWFWTNGZUSCOKTYURBAKMSQKYUJPNMLUJWFHEEXSMZSXMBRDXNVNGSORCSHDPJELJEAFUVOHZRKOBZQAYIQDCRLLDZTPGIDHNQQZKIZDATOWAJ");
    msg.action = 143U;
    msg.grouplist.assign("YJCGPAPLFIDEKJZRUYGTNLQMCWDCQDOBILEYGXPDWRONXNJZIGHHQUKYMUPRNGODQVTQWRBFOJJBEZKIAIJTVCVFKBEKMLCWUGESCMVZWSHVOLSECALM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.3155425839570626);
    msg.setSource(55186U);
    msg.setSourceEntity(105U);
    msg.setDestination(26194U);
    msg.setDestinationEntity(62U);
    msg.groupname.assign("AKPSNBHZHBMYJZEPDSANMWQVQQEKAELKYPCQKIFLZYOBPSNRFIVDRTMMFHYCGGALASQXSMVBPHHSUKUREGXDGMFNVIKFCOSWLJCLJXXYJQWWAFBRISEXGHBBOCEOJCJTANYPAMZCWDXDNOILCXOUMWPOB");
    msg.action = 242U;
    msg.grouplist.assign("TQBGNKWJAWBYDMSRSPFXJXIUKIVZLXKFXORQEOESUHPAIJEKPXIFKWTGMGDWQG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.30844692691949105);
    msg.setSource(27255U);
    msg.setSourceEntity(100U);
    msg.setDestination(2346U);
    msg.setDestinationEntity(22U);
    msg.groupname.assign("YSHAWDFEFGBZFUMDHJPSUEOVBFTLNSYNSKTCRHCQRYRIIDJYFNGQDJDCHENTYUTNRXBEDDWG");
    msg.action = 5U;
    msg.grouplist.assign("PIHKXPDSEVLCHTWYQYZQNZLAEBELYCMVILYXZDCWISNZIQNMAANDLJZJYZRUVNHRSCFYJZROM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.4191513510469287);
    msg.setSource(41693U);
    msg.setSourceEntity(252U);
    msg.setDestination(41543U);
    msg.setDestinationEntity(39U);
    msg.value = 0.526750008130147;
    msg.sys_src = 25773U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.9254597270573531);
    msg.setSource(51566U);
    msg.setSourceEntity(153U);
    msg.setDestination(13701U);
    msg.setDestinationEntity(162U);
    msg.value = 0.5145460990113396;
    msg.sys_src = 30222U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.10520133494538897);
    msg.setSource(15918U);
    msg.setSourceEntity(189U);
    msg.setDestination(21722U);
    msg.setDestinationEntity(222U);
    msg.value = 0.26059483850488285;
    msg.sys_src = 10046U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.6088894818866585);
    msg.setSource(64698U);
    msg.setSourceEntity(87U);
    msg.setDestination(1755U);
    msg.setDestinationEntity(72U);
    msg.value = 0.7841719398264436;
    msg.units = 24U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.5248320214776631);
    msg.setSource(25292U);
    msg.setSourceEntity(150U);
    msg.setDestination(43037U);
    msg.setDestinationEntity(52U);
    msg.value = 0.6660982201924421;
    msg.units = 182U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.04573039412022539);
    msg.setSource(11485U);
    msg.setSourceEntity(238U);
    msg.setDestination(6654U);
    msg.setDestinationEntity(161U);
    msg.value = 0.7289953299720999;
    msg.units = 230U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.16744131840287757);
    msg.setSource(9059U);
    msg.setSourceEntity(2U);
    msg.setDestination(58125U);
    msg.setDestinationEntity(138U);
    msg.base_lat = 0.04180099345667143;
    msg.base_lon = 0.07180627142830998;
    msg.base_time = 0.4775646855381185;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.20665344805765662);
    msg.setSource(16846U);
    msg.setSourceEntity(0U);
    msg.setDestination(38208U);
    msg.setDestinationEntity(45U);
    msg.base_lat = 0.17979932764505913;
    msg.base_lon = 0.10286755314599583;
    msg.base_time = 0.9226861677863166;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 8880U;
    tmp_msg_0.destination = 3039U;
    tmp_msg_0.timeout = 0.8409175986517563;
    IMC::Conductivity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.09660575402948302;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.37632957467735695);
    msg.setSource(54009U);
    msg.setSourceEntity(251U);
    msg.setDestination(9132U);
    msg.setDestinationEntity(234U);
    msg.base_lat = 0.5742675799463383;
    msg.base_lon = 0.44437022954803107;
    msg.base_time = 0.9068010214208224;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.5344707424404577);
    msg.setSource(61050U);
    msg.setSourceEntity(99U);
    msg.setDestination(4416U);
    msg.setDestinationEntity(129U);
    msg.base_lat = 0.5254039838600073;
    msg.base_lon = 0.3408616875750481;
    msg.base_time = 0.8000487665231578;
    const signed char tmp_msg_0[] = {98, -1, 81, 80, -58, -120, -77, 61, 112, -82, 18, 107, 97, 97, -43, -119, 82, -60, 81, 36, -32, 55, 12, 112, 51, -121, -45, -111, 16, -30, 15, -32, 33, -105, 21, 69, 24, 0, 31, -14, -39, -104, 11, 0, 23, 56, 60, -26, 23, 24, 30, -21, 45, 27, 94, -88, -73, 17, -72, 84, 103, 43, -119, 5, 18, -20, -63, -107, -83, 71, -26, 35, -126, -52, 76, 114, -119, -79, -98, 98, -30, -56, -43, 63, 10, 63, 105, 35, -98, 83, -10, 94, 115, 35, 83, 49, 73, -110, -107, -97, 27, 14, 3, -62, 28, -73, -79, 118, 63, 95, -116, 106, 52, 117, 41, -8, 102, 50, 31, 18, 107, 111, 45, -96, 70, 74, 78, 99, 115, -2, -125, -128, 69, 10, 93, -12, -103, -20, -118, -21, 41, -118, -34, 114, -13, -5, -118, -49, 112, -71, 28, -59, -48, 1, -55, 1, 105, -105, 25, 84, -128, -47, 68, -92, -80, -14, 9, 17, 4, 12, 49, 12, 123, -43, -33, -31, -95, -21, -43, -126, -20, -32, 87, -69, 42, -54, -99, -38, 62, 5, 77, -82, 9, 36, -89, -27, 14, -68, 126, -14, 7, 98, -29, 30, 113, -118, -69, 51, -115, -118, 48, 28, 9, -114, -41, -26, 94, 17, -58, -60, 90, 44, 27, 34, 3};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.26798713350893144);
    msg.setSource(51580U);
    msg.setSourceEntity(168U);
    msg.setDestination(6993U);
    msg.setDestinationEntity(249U);
    msg.base_lat = 0.43984256899147967;
    msg.base_lon = 0.6570931103791149;
    msg.base_time = 0.3638168068428921;
    const signed char tmp_msg_0[] = {85, -107, 33, -82, 80, -108, 108, 34, -53, -100, -33, 4, -119, -91, 58, -110, 119, 73, 36, -67, -34, -19, 81, -55, -69, 48, -55, -107, 93, -121, 79, 58, -21, -46, 101, -96, 41, -56, 41, -63, -43, -104, -41, -81, -3, -37, -14, 126, -104, 36, 93, -3, -51, -57, 41, 75, -124, -42, -89, 118, -44, -1, -119, 110, -81, 91, 122, -90, -70, -7, 112, -67, 110, 30, 1, 16, 9, 21, -40, 68, 38, 85, 100, -91, -114, -11, 5, 62, 1, 101, 108, 83, 63, -79, 31, -20, 116, -84, 22, 57, 69, 101, -44, 91, -31, -42, 20, -34, -47, -38, -113, -100, 40, -1, 115, 25, -97, 86, 3, 80, -93, -68, 47, -39, -77, -113, -76, -68, 14, 118, 53, 116, 41, 93, -14, -43, -59, 55, 96, -69, 120, 68, -96, 86, 109, 68, 45, -34, 5, -98, -42, 19, -55, -14, 92, 68, -97, -64, 15, 26, 22, 46, -49, -57, -107, -112, -101, -113, 78, -55, -4, 80, -14, 70, 48, -113, 25, 125, 51, -93, 61, -121, -123, 44, 116, -35, 69, 70, 81, 114, -122, -122, -69, 51, 85, -96, 124, 46, -73, -77, -85, -45, -21, 48, 118, -47, -30};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.8686701015827143);
    msg.setSource(64776U);
    msg.setSourceEntity(160U);
    msg.setDestination(38493U);
    msg.setDestinationEntity(235U);
    msg.base_lat = 0.6090345268821376;
    msg.base_lon = 0.8062214179058332;
    msg.base_time = 0.09605468130619654;
    const signed char tmp_msg_0[] = {-74, 112, -126, 47, 100, 34, 56, -49, 126, 119, -109, -3, -42, 122, 15, 91, -22, 84, 57, 0, -9, 74, -89, 36, 110, -33, -26, -101, 117, 1, -118, 113, -72, -27, 79, -41, -14, 73, 60, 92, -24, -97, -67, 38, 64, -121, -84, 69, -125, 31, -82, 82, 62, 70, 77, -91, -65, 117, 61, -77, 84, 10, 94, -105, -95, -112, 48, -77, 109, -36, -72, -119, 44, -74, -97, -115, -114, -126, -33, 13, -19, -60, 37, -123, -28, -59, 34, 26, 62, -1, 74, 107, 57, -28, 123, -73, -54, 25, 87, 1, 63, 70, 49, 71, 122, -37, -48, 21, 33, 101, 21, -34, -123, -111, 117, 117, 46, -95, 124, -126, -20, 61, 122, 90, -94, -81, -111, 119, 44, 34, -92, 98, 29, 57, 2, 114, 75, 123, -106, -115, 63, 125, -127, 9, -66, 83, -23, -47, 74, 83, 58, -63, 6, -88, 15, 72, -97, 62, 41, -112, -53, 53, 51, -124, 6, 6, 122, 27, 39, -43, 126, 72, -82, 20, -93, 8, -36, 50, -42, 84, 8, -112, -60, 35, 75, -66, -117, -115, -20, 31, 104, -120, 19, 31};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.5571762484845971);
    msg.setSource(21579U);
    msg.setSourceEntity(152U);
    msg.setDestination(48701U);
    msg.setDestinationEntity(26U);
    msg.sys_id = 56910U;
    msg.priority = -27;
    msg.x = 29521;
    msg.y = -10164;
    msg.z = -9039;
    msg.t = -10393;
    IMC::Power tmp_msg_0;
    tmp_msg_0.value = 0.6392803466813539;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.8999949643569886);
    msg.setSource(52309U);
    msg.setSourceEntity(162U);
    msg.setDestination(15658U);
    msg.setDestinationEntity(65U);
    msg.sys_id = 12724U;
    msg.priority = 124;
    msg.x = 30813;
    msg.y = -1328;
    msg.z = -24395;
    msg.t = 16731;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7488081411263822;
    tmp_msg_0.beam_height = 0.8015860445942977;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.009338294964578941);
    msg.setSource(30003U);
    msg.setSourceEntity(200U);
    msg.setDestination(26879U);
    msg.setDestinationEntity(37U);
    msg.sys_id = 22547U;
    msg.priority = 76;
    msg.x = -22520;
    msg.y = -2112;
    msg.z = 17913;
    msg.t = -21314;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 22U;
    tmp_msg_0.htime = 0.6256188387538119;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.6805217510421504);
    msg.setSource(34507U);
    msg.setSourceEntity(13U);
    msg.setDestination(586U);
    msg.setDestinationEntity(168U);
    msg.req_id = 9724U;
    msg.type = 54U;
    msg.max_size = 43769U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.3220142401070347;
    tmp_msg_0.base_lon = 0.13626954894052623;
    tmp_msg_0.base_time = 0.7839667218612717;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 65487U;
    tmp_tmp_msg_0_0.priority = -112;
    tmp_tmp_msg_0_0.x = -6049;
    tmp_tmp_msg_0_0.y = -3835;
    tmp_tmp_msg_0_0.z = -11292;
    tmp_tmp_msg_0_0.t = 3058;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.292029881402853;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 72U;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.4569952263635185);
    msg.setSource(53962U);
    msg.setSourceEntity(28U);
    msg.setDestination(19564U);
    msg.setDestinationEntity(34U);
    msg.req_id = 20367U;
    msg.type = 18U;
    msg.max_size = 38226U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5498611172852597;
    tmp_msg_0.base_lon = 0.1880534564506866;
    tmp_msg_0.base_time = 0.5915553071362105;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 54534U;
    tmp_tmp_msg_0_0.priority = 31;
    tmp_tmp_msg_0_0.x = 16175;
    tmp_tmp_msg_0_0.y = 25995;
    tmp_tmp_msg_0_0.z = -14698;
    tmp_tmp_msg_0_0.t = 26351;
    IMC::ExtendedRSSI tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.770165380643199;
    tmp_tmp_tmp_msg_0_0_0.units = 211U;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.7559025998723271);
    msg.setSource(53217U);
    msg.setSourceEntity(46U);
    msg.setDestination(9909U);
    msg.setDestinationEntity(182U);
    msg.req_id = 48646U;
    msg.type = 139U;
    msg.max_size = 20228U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9848310624572854;
    tmp_msg_0.base_lon = 0.4436418868336798;
    tmp_msg_0.base_time = 0.508250864599987;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 60715U;
    tmp_tmp_msg_0_0.destination = 12969U;
    tmp_tmp_msg_0_0.timeout = 0.1115325091239272;
    IMC::UamRxFrame tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sys_src.assign("SUGELPKOPSRUTZAUWYF");
    tmp_tmp_tmp_msg_0_0_0.sys_dst.assign("RJHZZXHYAKLMMCIPPDZEVFQDXAOVUMYCW");
    tmp_tmp_tmp_msg_0_0_0.flags = 161U;
    const signed char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {104, 96, 101, -11, 53, 113, 29, -33, -66, 110, -19, -99, -57, -15, 9, -38, 110, 78, -9, 100, 21, 60, -91, 25, -36, 114, -121, 108, 14, -127, -85, -122, -66, 124, 40, -32, 6, -9, 49, -120, -105, 111, -111, 78, -82, -51, 43, 50, 93, 33, 65, 13, -110, 126, 24, 100, -38, -4, 80, -3, -121, -56, -9, 14, -102, -126, -102, -61, -29, 53, 97, 16, -27, 2, 96, 98, -6, 102, 110, 80, 13, 111, 41, -117, -12, -23, -118, -49, 80, 46, -17, -39, -89, 91, -53, 94, -1, -61, 113, 1, -8, -119, 34, -23, 29, -92, -34, -35, -73, -37, 51, 81, 16, -72, -104, 125, 19, 85, -122, 67, -125, -38, 44, 86, 77, 51, 25, -12, 102, -115, -64, 24, 114, 16, 117, -123, -74, 71, -62, 109, -64, -89, -94, 85, -119, -128, -44, 74, -66, 71, -94, 95, -84, 72, -46, -126, 8, -5, -2, 65, 73, 0, 28, 49, -6, 69, 6, -88, 16, -78, 3, 68, -32, 9, 2, 79, 54, 57, 67, -38, -111, 0, -33, 66, 97, -7, -4, 79, 59, -61, 30, -40, 72, 44, 126, -59, 76, 45, -77, 78, -26, 91, -22, -3, -90, 11, 81, 12, -33, -52, -72, 31, -108, -16, 115, 71, -96, -33, -75, 111, -124};
    tmp_tmp_tmp_msg_0_0_0.data.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.09328870215377938);
    msg.setSource(25607U);
    msg.setSourceEntity(96U);
    msg.setDestination(35302U);
    msg.setDestinationEntity(240U);
    msg.original_source = 19008U;
    msg.destination = 26508U;
    msg.timeout = 0.39698450190749013;
    IMC::UbxRelPosNED tmp_msg_0;
    tmp_msg_0.refstationid = 7225U;
    tmp_msg_0.itow = 2380261679U;
    tmp_msg_0.relposn = 0.22642535640555272;
    tmp_msg_0.relpose = 0.35317769104498375;
    tmp_msg_0.relposd = 0.6656098958104779;
    tmp_msg_0.relposlength = 0.5027924856114745;
    tmp_msg_0.relposheading = 0.16358472303664884;
    tmp_msg_0.accn = 0.03100919383886569;
    tmp_msg_0.acce = 0.14104518828577706;
    tmp_msg_0.accd = 0.937077103358502;
    tmp_msg_0.acclength = 0.0703108386711323;
    tmp_msg_0.accheading = 0.6182124198346276;
    tmp_msg_0.gnssfixok = 182U;
    tmp_msg_0.diffsoln = 38U;
    tmp_msg_0.relposvalid = 242U;
    tmp_msg_0.ismoving = 123U;
    tmp_msg_0.refposmiss = 63U;
    tmp_msg_0.refobsmiss = 253U;
    tmp_msg_0.relposheadingvalid = 175U;
    tmp_msg_0.carrsoln = 119U;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.15947467025549522);
    msg.setSource(65435U);
    msg.setSourceEntity(223U);
    msg.setDestination(15148U);
    msg.setDestinationEntity(135U);
    msg.original_source = 25126U;
    msg.destination = 27655U;
    msg.timeout = 0.3944006306716874;
    IMC::UsblConfig tmp_msg_0;
    tmp_msg_0.op = 115U;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.983823748852775);
    msg.setSource(31933U);
    msg.setSourceEntity(247U);
    msg.setDestination(48819U);
    msg.setDestinationEntity(100U);
    msg.original_source = 53224U;
    msg.destination = 63427U;
    msg.timeout = 0.6145791483957026;
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 189U;
    tmp_msg_0.op = 176U;
    tmp_msg_0.err_mean = 0.5843158235603696;
    tmp_msg_0.dist_min_abs = 0.10280371642637887;
    tmp_msg_0.dist_min_mean = 0.06345104621082487;
    tmp_msg_0.roll_rate_mean = 0.2515197982167494;
    tmp_msg_0.time = 0.026716616223253054;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 26U;
    tmp_tmp_msg_0_0.lon_gain = 0.3624347021364316;
    tmp_tmp_msg_0_0.lat_gain = 0.030836117315908296;
    tmp_tmp_msg_0_0.bond_thick = 0.44592713874482803;
    tmp_tmp_msg_0_0.lead_gain = 0.542089993560625;
    tmp_tmp_msg_0_0.deconfl_gain = 0.25722726067195134;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.49249374677881563;
    tmp_tmp_msg_0_0.safe_dist = 0.18219421852593065;
    tmp_tmp_msg_0_0.deconflict_offset = 0.09670852880346303;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.7484882496334204;
    tmp_tmp_msg_0_0.accel_lim_x = 0.6467156146406675;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.8178204319003723);
    msg.setSource(40128U);
    msg.setSourceEntity(55U);
    msg.setDestination(53202U);
    msg.setDestinationEntity(98U);
    msg.type = 99U;
    msg.comm_interface = 61195U;
    msg.model = 49911U;
    msg.list.assign("TILPUVZQAIUJFVLODMESKESTRKDRSYCERNQYGGEBTYAEZKCEQSOXIOAKFKLDZNUVYOPUWEBQJHNTSTGRTMHPFGFUXGXHTNYMSLUNZMOCROTBRDNPFDUIVDRHLUVOWWHXUZXYBKVZPENQCAWJDVSWGSBJJFUATFVVMYMYGIBMSZIYKAYZOLANTCPBIFW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.94282519188455);
    msg.setSource(61819U);
    msg.setSourceEntity(236U);
    msg.setDestination(11484U);
    msg.setDestinationEntity(58U);
    msg.type = 51U;
    msg.comm_interface = 9229U;
    msg.model = 54397U;
    msg.list.assign("JPUKRGUGPQLTJFRZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.8500533794202161);
    msg.setSource(49946U);
    msg.setSourceEntity(165U);
    msg.setDestination(12676U);
    msg.setDestinationEntity(191U);
    msg.type = 172U;
    msg.comm_interface = 58994U;
    msg.model = 52443U;
    msg.list.assign("VRJNWKTRNIWTTLHYUMNIATATEWTDSQUHGRAMTGGRFKNLSRXUYBWOCASFAKYXGSPYJPIBQEGZSRUBZPRVNPZWEHXAOVZQDUWEXPYKIJCAIHWILKXXLFQPGFJBOZGQKMFODZQCROKVDSHCHBEATEVUBPMQNBJNCKDIBQOEFNKJCEZBPVFYMDLECAJZUOXWCVFSINLPDOGDFGULCCMMOXRBMMMKHYJWZILQYHVAULSIXERNSVGXPLHQZT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.375222455337044);
    msg.setSource(54221U);
    msg.setSourceEntity(27U);
    msg.setDestination(57316U);
    msg.setDestinationEntity(60U);
    msg.type = 218U;
    msg.req_id = 1610211663U;
    msg.ttl = 60884U;
    msg.code = 123U;
    msg.destination.assign("XSBVNUQLEYKIAIPGRVDJOMDYTJMNZWWESWDRBZKDPUYZSYOBVAYPTXXDPWMIYERFLKJJUYVRFDVHUASNCHYABLZGXFULDZEBCOPJMNEFETNYKPOOQDWHUKCFEVSNQOWKQSOVMIURKZZCIJTMIATCFCWCFMVLGCBZDHHETCVBOAQZVANQQQLTLUGPII");
    msg.source.assign("WDPOHQVXURGEVGXWQNCTDXCPVUMUMMCEAZBOFGCDDKUVAZBNUZVHQBOJBYDQQDPHNPDWIGMYYRSIGYSZNXTLODRJTQNXUYLFAKKXMFBEMIQHWKOWBQOJYFREXWFGEHHXZLBNUIAOANKTJLKRGVJKLCJWHEIGPQPMGAOTSJENZERAUJJTRH");
    msg.acknowledge = 55U;
    msg.status = 12U;
    const signed char tmp_msg_0[] = {106, 72, -75, 100, -104, -106, 79, -127, 61, 17, 48, -86, 11, 44, 64, 56, -58, -29, -43, 105, -125, 41, 46, 31, -106, 46, -84, 98, -121, 36, -36, 18, 1, 52, -48, 38, -100, 90, -39, 44, -70, -74, 6, 83, 84, 121, 79, 0, 111, 35, -115, -12, -80, 126};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.40801729857790836);
    msg.setSource(14150U);
    msg.setSourceEntity(1U);
    msg.setDestination(52691U);
    msg.setDestinationEntity(126U);
    msg.type = 254U;
    msg.req_id = 2976396879U;
    msg.ttl = 28272U;
    msg.code = 201U;
    msg.destination.assign("NMAUALILSYGZJLVFCWXZDPKWSKTVJUAFEPJHLWZMLTZRRHXYBJHTDJTCOWPBXOKBXDQYWEPXZEPQURAIRCRIWBROKFUIWIMJZNZTIXZZDMFPXPOOTXUVHYNOUVHVODKNQRGISCOLDQPVUIAQVAKDCFEZBHNGBGQLIDENSOFSMYFWQWSSYNVTJRKRFGSLEBAMQNBAGGYDKQRMPKFVCLVAJCXESTHQCCG");
    msg.source.assign("SDQSRWSZGEBEYAPVWKHFCASKNTFFPOVRAUCZNYGOAQLTZCVSLGVGWLHWPORGOLGWDYCOUQRBPOLOPIRYSRKZKBKKISTHSDNJIXUMXTALJZMTCIVJJNEISSWMNABUXMTENUHUDHNKPTIMZMKELEBLZUDHKPRIJRMMYLDKPEQZUXWDLFFBTHDAYQOBBVCWDQFCJAWAQHFGQDUGNJXBXWHTXJICCIFAQVIEXXXOBZMRVTEMVYGZPYCNRPGFNY");
    msg.acknowledge = 200U;
    msg.status = 76U;
    const signed char tmp_msg_0[] = {16, -44, 55, -61, 27, -122, -55, 112, 63, -65, -4, 12, 31, 9, -33, -46, -59, 50, 58, 16, -42, 116, 19, 109, -25, 90, -32, -47, -112, 2, 19, 94, -92, 71, 31, 51, -92, 71, 19, 46, -35, 10, 6, 105, 73, 19, -95, 15, -127, 71, 18, 115, -16, 110, -53, 103, 94, -57, 95, -103, -33, 86, 0, -85, 68, -40, 105, -48, 86, 5, -22, 93, -105, 42, 71, 62, 18, 28, 111, 43, -98, -29, 0, 43};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.06286503824179157);
    msg.setSource(43440U);
    msg.setSourceEntity(242U);
    msg.setDestination(24701U);
    msg.setDestinationEntity(55U);
    msg.type = 39U;
    msg.req_id = 2000412884U;
    msg.ttl = 16188U;
    msg.code = 126U;
    msg.destination.assign("QOIQOFKWJFZLAVSEHOQARZGLKUUTPVDTTQMWVXBMBFVNCWR");
    msg.source.assign("QJLGVVTTHGCXDSEZWVILAKYBNDKCZUQIEQFBHDPHJAKQEBEKROYIWZILITRLSNWGORTMKKMHFSJJOSCXMIRDKNPZG");
    msg.acknowledge = 12U;
    msg.status = 132U;
    const signed char tmp_msg_0[] = {-105, 49, -9, 16, 114, 20, 118, 45, -100, 33, -63, -91, -75, -102, 56, 60, 65, -18, -82, 41, -38, -78, 21, -43, 110, 14, 60, 35, -62, -29, 68, -72, 15, 25, -80, -18, -23, 94, 93, -38, -54, -54, -108, -14, -63, 26, 11, 94, -16, -86, 36, -16, 66, 119, -19, -94, 69, -38, -81, 79, 120, 91, -96, -107, -71, -26, 90, -85, -14, -56, 101, 73, -30, -44, 57, 36, 59, 11, -46, 118, -60, -55, 42, 65, -112, 121, -43, -72, -75, 30, -51, 79, 2, 64, -11, -57, -48, -95, 62, 82, -124, -106, 55, 70, 68, 81, 118, 111, 54, 42, 56, -3, 53, 14, 68, -74, 5, 67, 64, -70, -27, -93, -11, -66, 125, -83, -76, -28, -65, 76, 8, 85, -64, 109, -57, -82, 99, -22, -75, -112, -124};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.34441757603379985);
    msg.setSource(3505U);
    msg.setSourceEntity(10U);
    msg.setDestination(2384U);
    msg.setDestinationEntity(32U);
    msg.id = 71U;
    msg.range = 0.2347486831457869;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.6918786309140526);
    msg.setSource(13495U);
    msg.setSourceEntity(143U);
    msg.setDestination(8129U);
    msg.setDestinationEntity(146U);
    msg.id = 93U;
    msg.range = 0.027211764916828862;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.1651783441243122);
    msg.setSource(16653U);
    msg.setSourceEntity(99U);
    msg.setDestination(25599U);
    msg.setDestinationEntity(105U);
    msg.id = 250U;
    msg.range = 0.20911673280625087;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.09478617203909268);
    msg.setSource(55950U);
    msg.setSourceEntity(179U);
    msg.setDestination(31531U);
    msg.setDestinationEntity(70U);
    msg.beacon.assign("EUYMEPDZIDMIQRLTQSILYBJANQWJRTYZOSGAEJMNVZSXZDNGPLHJNMHVICXOHMPAWDBXNWCKGXFUKFRHILKXWXGJCKTELQBLPRJMBCXCCOVPBBGAPYGLGAIONZGSNUHSUOKQWKUSURRTHNPIRHCPJBDNWFJHOTVSSUWYSAKQZOFATAYYVDDBYHTVHDRJLFTULZGFQEMKBUVGEQIWFVLZAFDRXUVSVRYCIFOWMTKKEPEMJCQBOMF");
    msg.lat = 0.6677751195940264;
    msg.lon = 0.011594468179849216;
    msg.depth = 0.9355973134948598;
    msg.query_channel = 118U;
    msg.reply_channel = 216U;
    msg.transponder_delay = 234U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.34426953384718617);
    msg.setSource(43309U);
    msg.setSourceEntity(104U);
    msg.setDestination(4316U);
    msg.setDestinationEntity(179U);
    msg.beacon.assign("NSGCTSVJDYNMXXCZCNGVPUILAMHFDOZYAOMYABUGNSTCDBEHEPFXJRQATZTINSWNLLCSWMEYOZEBUJTXRKWWLDSFHAMBVKRNBWIYZRBLKVTFHDKKQFCIYZLURLUVAOCPUXTROEFDGHBBIBTRHJKSKFNROOQINWKACNGXWUPMTMHUESAJEVYORL");
    msg.lat = 0.6035605938208509;
    msg.lon = 0.9639098343525272;
    msg.depth = 0.2727162061101569;
    msg.query_channel = 197U;
    msg.reply_channel = 252U;
    msg.transponder_delay = 161U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.5427944218203375);
    msg.setSource(25742U);
    msg.setSourceEntity(245U);
    msg.setDestination(41279U);
    msg.setDestinationEntity(101U);
    msg.beacon.assign("ETPLWYSROGDZOVJPYQAARRAINXMHQAFGHESWRLCTSBUBDCDKRNKSLPENKRDJUAQZOCPSOUFBCDOGLXILHDJVBCTXGXOVPQCMNXOQMYNLHXAFUPIQZJZWQJLFBKMXGWZHXEFKWJHVAZHILJRKPNYEWKCTFBUYMYZFBVGMYHUTVSWEGQVPJIRAQNRBSFMDCKZCYJWUGEUSSNTTOZEELWTKWIDRBCEAXPVFHTIQG");
    msg.lat = 0.14840602847285334;
    msg.lon = 0.4975806901699441;
    msg.depth = 0.8088297012988565;
    msg.query_channel = 56U;
    msg.reply_channel = 63U;
    msg.transponder_delay = 112U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.8439382803179906);
    msg.setSource(7200U);
    msg.setSourceEntity(67U);
    msg.setDestination(34683U);
    msg.setDestinationEntity(180U);
    msg.op = 8U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LDKNOLDAYNLUCNSMJRCTCGHHRWMPNLLVJKRFQODATIZNPVZWNZYAJFVKORTZFKBDLHFGHCKKSSCECPEHJIUAGKQKZUX");
    tmp_msg_0.lat = 0.4452974309472919;
    tmp_msg_0.lon = 0.8874389972626165;
    tmp_msg_0.depth = 0.14546141056909845;
    tmp_msg_0.query_channel = 215U;
    tmp_msg_0.reply_channel = 247U;
    tmp_msg_0.transponder_delay = 99U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.7158286516581235);
    msg.setSource(34880U);
    msg.setSourceEntity(111U);
    msg.setDestination(30665U);
    msg.setDestinationEntity(85U);
    msg.op = 165U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OBNIQSMKRHDHCTCMZXFJCCGUQNZDSZYKWCMKMEQINGGKENPTTVRCCPAZTWSNIJENOAAQYMOIULKVIWYMKALIFEXBBXXYJLWTPLWLPVOBCJKCYYTRRDFSBKDHNGXWUGUXAMLNPOQOSOQKJVRJDDHSEJ");
    tmp_msg_0.lat = 0.8624653012520017;
    tmp_msg_0.lon = 0.5087025584035111;
    tmp_msg_0.depth = 0.6608370220772319;
    tmp_msg_0.query_channel = 150U;
    tmp_msg_0.reply_channel = 52U;
    tmp_msg_0.transponder_delay = 168U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.20951314012751565);
    msg.setSource(55213U);
    msg.setSourceEntity(16U);
    msg.setDestination(63793U);
    msg.setDestinationEntity(25U);
    msg.op = 31U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.10034359387267944);
    msg.setSource(448U);
    msg.setSourceEntity(138U);
    msg.setDestination(26063U);
    msg.setDestinationEntity(232U);
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("KCAGXVFZYFPAXJZQUSSTFLALWWUOYAXNOEBQGIKDXCPOILNRLKKMJDCKYNLTQNBSBKAAMCZFMZHFOUUGELIGQXMJHDHBKEYEDOCDZYJWPCNDBRSEZFVTRXRZZETPXLKSBGVCIEHSOFEYXJBRHARRNGHEAHWIDUYSFTWLPZIAVHMWUCJHVOYMGJRXWTVIFDUETBYSMNRQUVTONTLIVXLPUVJOISPKCMNYGPKUHROTQWQ");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.7191644833995987);
    msg.setSource(1866U);
    msg.setSourceEntity(36U);
    msg.setDestination(61506U);
    msg.setDestinationEntity(223U);
    IMC::Abort tmp_msg_0;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.40821201342013813);
    msg.setSource(43435U);
    msg.setSourceEntity(56U);
    msg.setDestination(26797U);
    msg.setDestinationEntity(108U);
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 190U;
    tmp_msg_0.text.assign("LEOMANRSVAXHJSMHUDJNXZWGCSIYPWBUNKMYQTYVLXXLWBNQRYETNUFEGFOTVXPZXDQNQLAC");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.24756592409154776);
    msg.setSource(21154U);
    msg.setSourceEntity(88U);
    msg.setDestination(8823U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.4623806462797473;
    msg.lon = 0.7025569481550548;
    msg.depth = 0.21975678605942195;
    msg.sentence.assign("AFANASPGQFQCGXGCRCMM");
    msg.txtime = 0.20187085609278965;
    msg.modem_type.assign("JLBUMEPGBNSWWBIOUBJKHONOUSHGATWSOWTQLKMMVEDTTYMCCLDAHRLKZRBTHHIINXAGWSUVXRNEZEVKXCRGYPKQUWWFHEBSQFZQJOEOKGFPMAWIMDCYZGJMPMFAQECLFAERJUSRXZVYRHMYNCMPGOTBIAOBUXSLJILLTVAPUXDPCDKKFTJKKPXVNVYIATIIJFYZWZJHYEXOBVYCFNAJGODVRNXQQ");
    msg.sys_src.assign("EWTJEXCSCFWMATVLIRUGVCQWEJNAFBKXQBAXZVWBXGEXSIFOLNCBQKOPOELCAAEUXNFSQNTYLHKZOGZUXZEVCTMAAVWBPYHJNTOXRNFGZDDMRSHGUFUZIHUUSKCKPWHOYQVVRHDXEILMNKKRHOODLBHNLSMSXHIITRLKODWQNHDYRMVDRCMRGIYJNY");
    msg.seq = 4268U;
    msg.sys_dst.assign("YKTKNLLIPDVIPOVFQXFPWYONZXPYENXPMCJSQCECHSFWGURCUSCYWRTEBGFOUTBLHTPKADUVLNLVSBRLZBSTFNERTWZLECYGUWMEFHYPOSCURAJUKYYIXJWJSCPKINAJFKNAMGIXITSK");
    msg.flags = 55U;
    const signed char tmp_msg_0[] = {34, -103, -110, 51, -37, -100, -44, 34, 9, -102, -16, -76, -123, -24, 98, 86, 102, -46, 2, -103, -58, 43, 86, -58, 90, -85, 92, 111, -33, -100, -76, -26, 1, -104, -66, -100, -50, 101, -25, -17, -25, -12, 72, 96, -125, 28, -72, -25, -75, 45, -98, 93, 10, 36, 26, -47, -67, 45, 34, 98, 58, -83, 58, 123, 21, 7, 23, -128, -6, -87, 47, -57, -75, 13, -85, -108, 81, 44, -20, -27, -8, -5, -77, 122, 59, 24, 67, -31, 49, -59, -95, 111, -109, 13, 32, 120, -20, 22, 19, 27, 41, -98, -96, 107, 26, -125, -31, 1, -61, 7, -111, 31, -52, 15, -88, -21, -5, -90, 61, -123, 109, 3, 115, -1, 33, -61, -42, 94, -17, -108, -9, 115, -115, 110, -116, -94, 14, -54, 41, 103, -95, -23, 13, -13, -66, 84, 53, 5, -18, -12, -114, 8, 46, 83, -97, 85, -104, -84, -26, 91, 61, -56, 93, 80, -80, 95, -119, -14, 44, -87, -45, -48, -62, 101, 21, -43, -8, -44, 42, 53, -101, -37, -97, -67};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.7381094569505714);
    msg.setSource(29239U);
    msg.setSourceEntity(129U);
    msg.setDestination(29663U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.2651279019978279;
    msg.lon = 0.22170578572615285;
    msg.depth = 0.3324913349512002;
    msg.sentence.assign("IGSRLDRNTBRWZPGLTYEZPEZFCSIZFSFKGMXBPLMAHDWEMUURFAVQJUMUFHCOKNBPVRBJQUBTSKDJIKKQLGTOILJNYEBFTLMFJSYRNALTAVKYHQEDXYNEVAMLDXWDDCEQAWBAUWUYXXILUIGHWATYSWPXBTFNVRUMVOCDOJGXPSOJICQIZERKQHEQARWYNBJINEZYUO");
    msg.txtime = 0.677693860331352;
    msg.modem_type.assign("RNZQRSNAPYCJGBLGQIVCSLDTSFUWZBOVCKHOFAIVOHUZQKEQJXCECTOUDAKTMEYKHWYVZJQNGPGZEXSZPAQUTFDLRRPFIUQMULUTVIWXACTMXJKHFWCFNZKQMBIWORVEMSASYLPIZVWKMSXEMHJXGYLTJWHDPBD");
    msg.sys_src.assign("MRWVEAYQMCJHLTVNWCXTZDAWANCONKICSJSTSLBZPZXMUIVOCE");
    msg.seq = 58664U;
    msg.sys_dst.assign("VBXWOMNUNRXNZXAGQKZBWJFITMCCRGZXGOGNCOYXLYFXOZBLBQPKPRJQBAKMLAQOREHDFYREGMAAOUZZDHJUAEYALRMHKKEICJNCVOQXJYPIOEHDXHPCMPJWLOHUVYDGEEDTZSVSVTZIVNWPSBSIVPWILFJIFCKQDLJVNFDNQTQGFWEGEWMDBH");
    msg.flags = 148U;
    const signed char tmp_msg_0[] = {48, 88, -65, -106, -71, -2, 92, 59, -14, -25, 99, 12, -59, 124, -111, 14, -48, 4, -86, -79, -45, -23, 93, -11, 115, 120, -110, 36, 60, 38, 103, -114, -17, 69, 92, 123, -10, 47, -98, 52, 20, 104, 111, 125, -45, 62, -126, 63, 10, -91, 97, -127, 30, 18, 27, -25, 28, 77, 31, -36, 115, 99, -76, 44, 107, -59, -38, 49, 0, -46, 85, -77, -8, 70, 28, -102, -127, 15, -62, 49, 52, 13};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.8882584188599449);
    msg.setSource(41554U);
    msg.setSourceEntity(231U);
    msg.setDestination(34259U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.06888044169145013;
    msg.lon = 0.9108585538849158;
    msg.depth = 0.21649081048850594;
    msg.sentence.assign("HJJXHONZECMHDKVNEYGJU");
    msg.txtime = 0.5776349159667824;
    msg.modem_type.assign("MPAFXUHOIYERYXHHTOXRXVNHUXNCHPOBZOBQUADYXPWBSRGGSKQNMATMHSUDVPVKYQMPNHIDWJBMWSJVZULSWKKONFRQOMBWUAAEXYGSYILEZAIKLHNCBNVPEGIIJGBELJVCVWMLJNRNHYISJAKDLXTRTELOZWLHFZBFZFGKFRTOXCWWGSPJQFUTKTRDKVCQQBRMPLTVYMKVGEOCWSIFJUPEUTTAGCEDRDJQYQXCIMZCZNCSQPFGZEFUID");
    msg.sys_src.assign("FREIUHVGMGCXVHRNRMHGOROWJYMYIVNTCVDTJKADVOKNPSWNOBUUQWAXIDYTDPATRASUMBXDSDBAUISLEEKRLFNFUQWJHAQEFJDLNXWKGHTFIPKPMUJTHNYLUSXLCQEISLGKADOZAIZEWGBZCBHIQEPIHZFEFNCPJQTCXQKAGLFMVPGWQEJNYMLP");
    msg.seq = 7319U;
    msg.sys_dst.assign("DZELYNZEBSZSRCQNDHVIQEMELATMNNVWTGSVSBYUWPZNYTJDXNODQOTDSJHBKYMOJUPUPBGPFJKCKFSBOWXRFEMVZVATIRVMKIXGYRRFHMTCRTBOETXUCKIYWVUZHIOWATZFPRFIHABYMSRUKIJAUKALIDYLXECFLKDCLXJEHUEFNDZQKUVBPORYPPXNNQEHGSOXLMQGIOHWPDGWHLGWZOAC");
    msg.flags = 10U;
    const signed char tmp_msg_0[] = {18, -49, 97, 28, 90, -91, -18, 13, 45, 11, 69, -25, 100, 85, 66, -33, 0, -11, -86, -101, -43, 96, -115, -113, 57, -24, -87, 69, 63, 19, -77, -26, -58, -17, -50, -124, -74, -42, 125, -70, -87, -67, 43, -13, 62, 84, 29, -82, -115, 82, 114, 74, -40, 58, 105, -3, -86, 18, 35, -114, 45, -79, 105, -78, -88, 58, -39, -95, 38, -43, -74, -49, -76, -35, -45, -37, -121, 43, -100, 108, 102, 57, -72, 86, -40, 108, -124, 65, 118, 80, 35, -70, -6, 82, 37, 92, 104, -9, 123, -91, 126, -79, -124, -92, 106, -114, -21, -5, 96, -115, -6, 44, -124, 126, 22, 64, 19, -72, -58, -2, 71, -120, 4, -41, 115, -1, 36, -50, -99, -33, -50, -84, -56, -63, 71, 66, -19, -101, 96, 100, 19, 18, 5, -90, -56, 25, 84, 15, -84, -66, 33, 119, -114, -39, 58, 122, -90};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.3057432177504318);
    msg.setSource(63166U);
    msg.setSourceEntity(229U);
    msg.setDestination(17768U);
    msg.setDestinationEntity(92U);
    msg.op = 19U;
    msg.system.assign("HRGOGXZTSFUOUXQOTBQXPWRVCKEGXLMU");
    msg.range = 0.5906957630033113;
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 169U;
    tmp_msg_0.numsamples = 209U;
    tmp_msg_0.lat = 0.5062584865555746;
    tmp_msg_0.lon = 0.9752629914264822;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.3168050214850189);
    msg.setSource(29463U);
    msg.setSourceEntity(230U);
    msg.setDestination(12281U);
    msg.setDestinationEntity(117U);
    msg.op = 154U;
    msg.system.assign("AGLPHUHIOPUIGHVILVBNFZEKMWXUYEKUSOFZTSJTPGRLFYKMZKM");
    msg.range = 0.6161958821654488;
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PMDDVCKXBSWQOANERHMEWPJTIHUODDSGATXDCLSAMYEAJSINZNNBAFKQRHCFTXRJCLODWRJLZAYUQGSYHNBVOPZQUGRRUUXNTIXIMENQESZVBJMILKHULQXAYDU");
    tmp_msg_0.attr_type = 174U;
    tmp_msg_0.min.assign("AXHYKARSSEHOAURHQJSXKMCTTYNLICUAPWDZVYLJIYBFVCQXRGECGUHXCZFBYOGIJFZONFWILMMEABMMSPTQVCMROOHKVVUWVYDGDQLXKFARSPBHXWRFDYJSXZGVLNBXWKJICTGUUHGOMWNDZJIINQCCLYRLSOOWSWDEVTZRQ");
    tmp_msg_0.max.assign("DEKXHTZEAHFQMZHSLXWKXMZRKZGOKXWGJGTIBVGTCPRNATGQCDNLVGUOHFBJLDPQZIWNJKCIMVYIBORSYYKWPVX");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.494399197625356);
    msg.setSource(27012U);
    msg.setSourceEntity(117U);
    msg.setDestination(35160U);
    msg.setDestinationEntity(110U);
    msg.op = 108U;
    msg.system.assign("NXYVGAVOYUNMSKKALURXHDGEUSVGZJVEKBLGJTPMFRZWVRDWBOPNIZXOHKQUXDAXJYPRFAXCNJOUVDRSOZZNEYFYTMMBSCGTPCKXDITMHIPDGQEANPUUIKFZQYOUMFBFMPESETORBLWWBNAQQSGTFCPQFZXBNHGJABCSXWPAWEVURPJLNQVFHSOYHYZCHUJLLIHIIWMKRQRCIDYVKSREBDOBLTVECZTZWCKJJFGAIDTKHLMNSAXHQWOLQL");
    msg.range = 0.6512015248376024;
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("WIZLAIRPXRNVKCIFZNDNYSZRCYUPDJOIROYKEVARUAASDLARXHSMNWGRFBBTCPPQZNJJFYLQVBIHFBZQLKLJAXCVNSEWHXDDVQTUWVHPVIKFWYTKWQKXNUTWLLRIPLUROYZHZVSDMOY");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.1999612765117481);
    msg.setSource(10528U);
    msg.setSourceEntity(157U);
    msg.setDestination(54235U);
    msg.setDestinationEntity(41U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.6018810621563478);
    msg.setSource(43092U);
    msg.setSourceEntity(52U);
    msg.setDestination(53662U);
    msg.setDestinationEntity(200U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.21407731711568057);
    msg.setSource(62774U);
    msg.setSourceEntity(76U);
    msg.setDestination(26193U);
    msg.setDestinationEntity(87U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.7183252500791483);
    msg.setSource(25010U);
    msg.setSourceEntity(202U);
    msg.setDestination(54593U);
    msg.setDestinationEntity(204U);
    msg.list.assign("COKDTSNVHQPAJEZYGHBOFDLFMHXMZTHTWSWLIOWEIPGUZEYYGAWELOIHLMGVTYNUVYEHRJLGLXSQLFMQPSFWXIODRNWZZZEYBVMTAZCKKRIVLC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.49000810189073796);
    msg.setSource(38618U);
    msg.setSourceEntity(253U);
    msg.setDestination(59278U);
    msg.setDestinationEntity(216U);
    msg.list.assign("HKGDPLNKCUXYXPZBQTTHYFLEAEGUNQUJPJVABPNDGSZBCNGTOJCQIVVTYVZIROSKAYKBMFFRZGQMTEDILHHNWHKYRUSMSSMEFZWMWMLGQIWQOYTAJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.6260786879189743);
    msg.setSource(11471U);
    msg.setSourceEntity(246U);
    msg.setDestination(25385U);
    msg.setDestinationEntity(153U);
    msg.list.assign("KHMSRDZEUNCJPXTMTXEFIAHIQTXZEXQLVNHGVNCDOJTVHAOVTJUQMDRCVGOAYFHKPLXPRALTUATSGUVGYFJWPVSMQJGCOFJQDMTKQIPRBXLBQUEKEIFWWBZYLLDNLQYBJYIRYZQIOUVHRIUBYGUUKAWLLHHFUCTCLEMBANIOSDDZPFHVXBMZOS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.6754782246287503);
    msg.setSource(4941U);
    msg.setSourceEntity(15U);
    msg.setDestination(29489U);
    msg.setDestinationEntity(19U);
    msg.peer.assign("CFHICERXRPLXSTFYVZDN");
    msg.rssi = 0.18069882530406634;
    msg.integrity = 15503U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.9502442670228607);
    msg.setSource(31799U);
    msg.setSourceEntity(169U);
    msg.setDestination(56134U);
    msg.setDestinationEntity(96U);
    msg.peer.assign("GCVAGTWULAXEOSIJWQNDDSXNXXEQPTVIMAFJBHIBQBCYJFWQHPOUEHYKFSMVEZSBMQPJFTOJTFYOEDFFMKUDQFZMJGMVLX");
    msg.rssi = 0.5848002933317152;
    msg.integrity = 49249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.49405035736767533);
    msg.setSource(22315U);
    msg.setSourceEntity(94U);
    msg.setDestination(8318U);
    msg.setDestinationEntity(136U);
    msg.peer.assign("HKLFUIOXECMUCJBEMUYESIUUBAGIVOPUSCYSWHHNPLVTJVFJLWEXKZRGUNMYZZYYODSQKAMXZTNWTGHDCZGNVRDNLQUAJIXNPM");
    msg.rssi = 0.9407894319663471;
    msg.integrity = 45249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.2130396175048611);
    msg.setSource(37438U);
    msg.setSourceEntity(155U);
    msg.setDestination(23919U);
    msg.setDestinationEntity(197U);
    msg.req_id = 51869U;
    msg.destination.assign("GPOJCLFEBTPHBWCBJDLWLENGPQFNJDXOLMCUSGTKWMUYRTZNWKWAZBRTILZQJIAJVOJQOEKAVXQBVHVJEOWLMXRWSCFGFISCROVMKHHYMKYUKQRHIHDVPTQAXOZPFIDAJHNFXPUKYXLSZOGMCSWYYJELOGUKUFRUNLXJNTFGPAETDUGZIBAIFIHBYQRCXNVIDCDBMY");
    msg.timeout = 0.02442027715475248;
    msg.range = 0.9303861441372958;
    msg.type = 4U;
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 38052U;
    tmp_msg_0.control_ent = 64U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 1U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.7391429691704586;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 243U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.8903151988526322;
    tmp_tmp_tmp_msg_0_0_1.z_units = 34U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.04505466539936609;
    tmp_tmp_msg_0_0.lon = 0.6059911032708606;
    tmp_tmp_msg_0_0.radius = 0.3245420968781926;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 76U;
    tmp_msg_0.proximity = 94U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.3778674488804278);
    msg.setSource(55877U);
    msg.setSourceEntity(75U);
    msg.setDestination(21690U);
    msg.setDestinationEntity(115U);
    msg.req_id = 26635U;
    msg.destination.assign("NQTOJFCXBMQHNXXYHFHDJURZITLBKIMWYRONGGFJPQIRZYBYUVFAYIJOYVAXGMQSSPDGCUUMDYCTQU");
    msg.timeout = 0.9019523066753267;
    msg.range = 0.8946556387247422;
    msg.type = 108U;
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.2579248090720164;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.7640565849288437);
    msg.setSource(21853U);
    msg.setSourceEntity(91U);
    msg.setDestination(9381U);
    msg.setDestinationEntity(172U);
    msg.req_id = 23626U;
    msg.destination.assign("EEGTYTAUAHXRUMAUYDZGNXWEEPWNSSVCGLPFJATUIAZZAYHFBKKJXQAR");
    msg.timeout = 0.5649759126388222;
    msg.range = 0.27529889781280004;
    msg.type = 148U;
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 97U;
    tmp_msg_0.clock = 0.6830007372877146;
    tmp_msg_0.tz = 107;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.39669636199064995);
    msg.setSource(3856U);
    msg.setSourceEntity(159U);
    msg.setDestination(12544U);
    msg.setDestinationEntity(186U);
    msg.req_id = 875U;
    msg.type = 44U;
    msg.status = 15U;
    msg.info.assign("FVUIGMHQOFYDDPIHYFZVYN");
    msg.range = 0.21584125629464057;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.8187358158987714);
    msg.setSource(39840U);
    msg.setSourceEntity(1U);
    msg.setDestination(25368U);
    msg.setDestinationEntity(78U);
    msg.req_id = 44562U;
    msg.type = 57U;
    msg.status = 8U;
    msg.info.assign("HDEWIWQQZRENJSWMGPAVO");
    msg.range = 0.4646970733460126;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.26794806458335996);
    msg.setSource(4098U);
    msg.setSourceEntity(19U);
    msg.setDestination(54290U);
    msg.setDestinationEntity(73U);
    msg.req_id = 2619U;
    msg.type = 251U;
    msg.status = 15U;
    msg.info.assign("QWFDLZODLMKRPUWNGYHNGNXJZFOISATTAJCQCXMZRQVOAYCZUCLBBYSHWKOCBODKMNPRLXWNYFUHPSOBNPURCERWNFELBBYGTMASDGCLJSYDOJDJSIKFPMEAXZWMAYZHIFYHFIDBQEGSQUFAEPNIUCXUNGLRHKII");
    msg.range = 0.8607388920006932;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.9142612482672604);
    msg.setSource(65246U);
    msg.setSourceEntity(39U);
    msg.setDestination(6207U);
    msg.setDestinationEntity(202U);
    msg.system.assign("BNKPZZCBEGGCZXJMFVLTTAKULRNMIRFMQCWCDNMOIYSOLRBHFKJWPRTXFBWMVJPOSLWOSZYNNGNVPWQQWKADZPICISNZDOXPYFBAVDXOJADQRUHMLVWSYYAUSHKGRPDAFTTLTBP");
    msg.op = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.4886887835419855);
    msg.setSource(12765U);
    msg.setSourceEntity(92U);
    msg.setDestination(4336U);
    msg.setDestinationEntity(221U);
    msg.system.assign("KCRABVMZRLOEGTAWYUTEZIENNXGSVJRXTYCFJREVYNFGDEIIWGYQSECJNQFWAOFLVICPHYIOTNNJRQZRHUMLMVSDBSMLWZCOQ");
    msg.op = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.06602637733070771);
    msg.setSource(36122U);
    msg.setSourceEntity(47U);
    msg.setDestination(1119U);
    msg.setDestinationEntity(74U);
    msg.system.assign("ZNYZXGQISURTYFVXJDZLNAMMNJSLDWHEBLQOYPOIPUXPTESBWUQZEUEPFSBZWQDNDLCJLACSWWMPAJKQUFR");
    msg.op = 195U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.038741000872370535);
    msg.setSource(29126U);
    msg.setSourceEntity(31U);
    msg.setDestination(45339U);
    msg.setDestinationEntity(33U);
    msg.value = 3645;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.9073437622141856);
    msg.setSource(21736U);
    msg.setSourceEntity(232U);
    msg.setDestination(52697U);
    msg.setDestinationEntity(38U);
    msg.value = 24545;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.794827484406969);
    msg.setSource(55465U);
    msg.setSourceEntity(76U);
    msg.setDestination(38010U);
    msg.setDestinationEntity(207U);
    msg.value = 4961;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.10573159193010662);
    msg.setSource(8947U);
    msg.setSourceEntity(194U);
    msg.setDestination(33241U);
    msg.setDestinationEntity(101U);
    msg.value = 0.599664646502316;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.7523998007383188);
    msg.setSource(14205U);
    msg.setSourceEntity(250U);
    msg.setDestination(16420U);
    msg.setDestinationEntity(114U);
    msg.value = 0.8507323493159115;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.5504741052953727);
    msg.setSource(41789U);
    msg.setSourceEntity(34U);
    msg.setDestination(44777U);
    msg.setDestinationEntity(111U);
    msg.value = 0.11021672514957459;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.6617484022448136);
    msg.setSource(58503U);
    msg.setSourceEntity(247U);
    msg.setDestination(64028U);
    msg.setDestinationEntity(63U);
    msg.value = 0.029531769898635707;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.5568150456718793);
    msg.setSource(35733U);
    msg.setSourceEntity(79U);
    msg.setDestination(18078U);
    msg.setDestinationEntity(184U);
    msg.value = 0.28956809064188005;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.3644868629568988);
    msg.setSource(35893U);
    msg.setSourceEntity(204U);
    msg.setDestination(12242U);
    msg.setDestinationEntity(73U);
    msg.value = 0.452650779700984;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.5092783700606863);
    msg.setSource(34104U);
    msg.setSourceEntity(85U);
    msg.setDestination(39465U);
    msg.setDestinationEntity(214U);
    msg.validity = 1356U;
    msg.type = 124U;
    msg.utc_year = 38156U;
    msg.utc_month = 27U;
    msg.utc_day = 41U;
    msg.utc_time = 0.036850983376224944;
    msg.lat = 0.21382386099965056;
    msg.lon = 0.17274945255723873;
    msg.height = 0.7284223264427143;
    msg.satellites = 220U;
    msg.cog = 0.731288759116861;
    msg.sog = 0.9692754007884944;
    msg.hdop = 0.8620139702755981;
    msg.vdop = 0.26594820842475586;
    msg.hacc = 0.2965129338029806;
    msg.vacc = 0.23214372651171689;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.09127374910396258);
    msg.setSource(56806U);
    msg.setSourceEntity(227U);
    msg.setDestination(5527U);
    msg.setDestinationEntity(217U);
    msg.validity = 38938U;
    msg.type = 50U;
    msg.utc_year = 6251U;
    msg.utc_month = 141U;
    msg.utc_day = 57U;
    msg.utc_time = 0.2449941643849307;
    msg.lat = 0.5716021869281601;
    msg.lon = 0.022737634428216746;
    msg.height = 0.497982710858505;
    msg.satellites = 152U;
    msg.cog = 0.12498251878963806;
    msg.sog = 0.1479020444606023;
    msg.hdop = 0.5679432642329539;
    msg.vdop = 0.11077576164492298;
    msg.hacc = 0.4380905409590874;
    msg.vacc = 0.9529246263819785;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.9998849276275161);
    msg.setSource(43646U);
    msg.setSourceEntity(59U);
    msg.setDestination(39884U);
    msg.setDestinationEntity(61U);
    msg.validity = 21681U;
    msg.type = 157U;
    msg.utc_year = 45405U;
    msg.utc_month = 19U;
    msg.utc_day = 98U;
    msg.utc_time = 0.3552191065445013;
    msg.lat = 0.06212018581776213;
    msg.lon = 0.46537288095487706;
    msg.height = 0.42419295578880245;
    msg.satellites = 112U;
    msg.cog = 0.26350727651008043;
    msg.sog = 0.5022158849751183;
    msg.hdop = 0.4023335938015208;
    msg.vdop = 0.9820967725216999;
    msg.hacc = 0.5727463651095893;
    msg.vacc = 0.280503165386192;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.09194612369517496);
    msg.setSource(18358U);
    msg.setSourceEntity(148U);
    msg.setDestination(9205U);
    msg.setDestinationEntity(8U);
    msg.time = 0.1868147527922145;
    msg.phi = 0.8047442715462482;
    msg.theta = 0.3635578147488463;
    msg.psi = 0.07506529187982147;
    msg.psi_magnetic = 0.16233261652065245;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.35205256908718974);
    msg.setSource(1806U);
    msg.setSourceEntity(60U);
    msg.setDestination(27626U);
    msg.setDestinationEntity(31U);
    msg.time = 0.12980222203646508;
    msg.phi = 0.12526694852138165;
    msg.theta = 0.2754142463951609;
    msg.psi = 0.668521304507388;
    msg.psi_magnetic = 0.5097042343310902;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.2566514633981982);
    msg.setSource(11998U);
    msg.setSourceEntity(218U);
    msg.setDestination(14845U);
    msg.setDestinationEntity(241U);
    msg.time = 0.5255008360469205;
    msg.phi = 0.3729700361998931;
    msg.theta = 0.0739043924901579;
    msg.psi = 0.7041080105714257;
    msg.psi_magnetic = 0.3154001124513224;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.21314509490735312);
    msg.setSource(7011U);
    msg.setSourceEntity(80U);
    msg.setDestination(1497U);
    msg.setDestinationEntity(194U);
    msg.time = 0.8600514493632547;
    msg.x = 0.8909270839780847;
    msg.y = 0.8144424436634256;
    msg.z = 0.8502793892840996;
    msg.timestep = 0.8859486046281825;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.2969528286227875);
    msg.setSource(28905U);
    msg.setSourceEntity(1U);
    msg.setDestination(3716U);
    msg.setDestinationEntity(53U);
    msg.time = 0.8805558296746896;
    msg.x = 0.5274433739621497;
    msg.y = 0.06934043703347448;
    msg.z = 0.1713370832095058;
    msg.timestep = 0.5253584032903766;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.20626420925186428);
    msg.setSource(57554U);
    msg.setSourceEntity(98U);
    msg.setDestination(38068U);
    msg.setDestinationEntity(3U);
    msg.time = 0.4606265989246311;
    msg.x = 0.6706957419198518;
    msg.y = 0.2848367934394094;
    msg.z = 0.19873297794090927;
    msg.timestep = 0.6972596807874267;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.0017611882381644017);
    msg.setSource(9100U);
    msg.setSourceEntity(144U);
    msg.setDestination(56977U);
    msg.setDestinationEntity(81U);
    msg.time = 0.0009437655297653835;
    msg.x = 0.040203218583623634;
    msg.y = 0.573330569955758;
    msg.z = 0.15939599255044468;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.7589003102557168);
    msg.setSource(41772U);
    msg.setSourceEntity(203U);
    msg.setDestination(6201U);
    msg.setDestinationEntity(134U);
    msg.time = 0.7646621043040218;
    msg.x = 0.3876979202609635;
    msg.y = 0.7774073809157394;
    msg.z = 0.979092931400443;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.03445344137089046);
    msg.setSource(57645U);
    msg.setSourceEntity(162U);
    msg.setDestination(34144U);
    msg.setDestinationEntity(183U);
    msg.time = 0.35605365181723037;
    msg.x = 0.6277918814192044;
    msg.y = 0.6860938811678293;
    msg.z = 0.8248316631853363;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.5488923690473282);
    msg.setSource(23217U);
    msg.setSourceEntity(58U);
    msg.setDestination(28699U);
    msg.setDestinationEntity(100U);
    msg.time = 0.8412703139150857;
    msg.x = 0.7089286215701822;
    msg.y = 0.6857694271362955;
    msg.z = 0.6769270316005676;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.7871625945168856);
    msg.setSource(14585U);
    msg.setSourceEntity(159U);
    msg.setDestination(13613U);
    msg.setDestinationEntity(3U);
    msg.time = 0.7621598431236017;
    msg.x = 0.6943823081344809;
    msg.y = 0.042561430197236017;
    msg.z = 0.08101725650573754;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.7959831471827266);
    msg.setSource(22022U);
    msg.setSourceEntity(87U);
    msg.setDestination(56442U);
    msg.setDestinationEntity(78U);
    msg.time = 0.040269610231065234;
    msg.x = 0.12731864769819157;
    msg.y = 0.4187034057606417;
    msg.z = 0.2028391907850372;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.02235744062591849);
    msg.setSource(38789U);
    msg.setSourceEntity(3U);
    msg.setDestination(7795U);
    msg.setDestinationEntity(20U);
    msg.time = 0.7745654852479832;
    msg.x = 0.6707844447002451;
    msg.y = 0.1623876397256857;
    msg.z = 0.6129199556164427;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.6093243665017662);
    msg.setSource(10557U);
    msg.setSourceEntity(45U);
    msg.setDestination(797U);
    msg.setDestinationEntity(151U);
    msg.time = 0.7887177315896531;
    msg.x = 0.39645921634497316;
    msg.y = 0.3684439831258125;
    msg.z = 0.7707457465801701;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.7633390260773011);
    msg.setSource(25673U);
    msg.setSourceEntity(86U);
    msg.setDestination(28819U);
    msg.setDestinationEntity(13U);
    msg.time = 0.9394790498987013;
    msg.x = 0.1311532838061239;
    msg.y = 0.5617767235438251;
    msg.z = 0.5442634795565325;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.5354657375193094);
    msg.setSource(10175U);
    msg.setSourceEntity(246U);
    msg.setDestination(59539U);
    msg.setDestinationEntity(227U);
    msg.validity = 155U;
    msg.x = 0.8384234370030733;
    msg.y = 0.19143108979904533;
    msg.z = 0.9593522051737579;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.8062727473339905);
    msg.setSource(12296U);
    msg.setSourceEntity(59U);
    msg.setDestination(63300U);
    msg.setDestinationEntity(188U);
    msg.validity = 83U;
    msg.x = 0.683285501272316;
    msg.y = 0.9432321091597995;
    msg.z = 0.34738377938412945;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.3425214739271599);
    msg.setSource(53142U);
    msg.setSourceEntity(101U);
    msg.setDestination(64932U);
    msg.setDestinationEntity(150U);
    msg.validity = 110U;
    msg.x = 0.3695734947779007;
    msg.y = 0.8194051420653847;
    msg.z = 0.550710870252147;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.3488036641407142);
    msg.setSource(8770U);
    msg.setSourceEntity(36U);
    msg.setDestination(36921U);
    msg.setDestinationEntity(53U);
    msg.validity = 98U;
    msg.x = 0.36711756454589506;
    msg.y = 0.2298063595374451;
    msg.z = 0.33652070801518286;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.43651288202483296);
    msg.setSource(20891U);
    msg.setSourceEntity(137U);
    msg.setDestination(14168U);
    msg.setDestinationEntity(220U);
    msg.validity = 240U;
    msg.x = 0.7627800827964913;
    msg.y = 0.3327359661545527;
    msg.z = 0.5348900869203648;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.7460462867566143);
    msg.setSource(46029U);
    msg.setSourceEntity(253U);
    msg.setDestination(63246U);
    msg.setDestinationEntity(177U);
    msg.validity = 0U;
    msg.x = 0.7620619182674929;
    msg.y = 0.48844361795397684;
    msg.z = 0.7815032360792611;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.5925799857556668);
    msg.setSource(28570U);
    msg.setSourceEntity(201U);
    msg.setDestination(64714U);
    msg.setDestinationEntity(35U);
    msg.time = 0.7514286516317281;
    msg.x = 0.30738912584484757;
    msg.y = 0.9470271413358143;
    msg.z = 0.5847177440234861;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.21895112571475706);
    msg.setSource(43855U);
    msg.setSourceEntity(223U);
    msg.setDestination(37015U);
    msg.setDestinationEntity(170U);
    msg.time = 0.7600886949085736;
    msg.x = 0.130078061250547;
    msg.y = 0.845753428790469;
    msg.z = 0.4620388911750659;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.8904586130154347);
    msg.setSource(38163U);
    msg.setSourceEntity(120U);
    msg.setDestination(58370U);
    msg.setDestinationEntity(39U);
    msg.time = 0.6843633144448233;
    msg.x = 0.9468546972072545;
    msg.y = 0.03919210370377191;
    msg.z = 0.20469413417719307;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.4739684274746593);
    msg.setSource(65380U);
    msg.setSourceEntity(54U);
    msg.setDestination(56914U);
    msg.setDestinationEntity(194U);
    msg.validity = 47U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8363704178597249;
    tmp_msg_0.beam_height = 0.952098668421436;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.6657452021566485;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.1029690841263805);
    msg.setSource(11853U);
    msg.setSourceEntity(42U);
    msg.setDestination(40212U);
    msg.setDestinationEntity(175U);
    msg.validity = 153U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7471978483004376;
    tmp_msg_0.y = 0.07977160018770413;
    tmp_msg_0.z = 0.27337468060440395;
    tmp_msg_0.phi = 0.3349604334750945;
    tmp_msg_0.theta = 0.28673296538391424;
    tmp_msg_0.psi = 0.2151582172841372;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.5812178798092453;
    tmp_msg_1.beam_height = 0.6329441746116772;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.7694536361525434;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.5460684700012645);
    msg.setSource(24702U);
    msg.setSourceEntity(38U);
    msg.setDestination(51598U);
    msg.setDestinationEntity(206U);
    msg.validity = 166U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.1509279409876313;
    tmp_msg_0.beam_height = 0.7526153693157972;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.4583059359928692;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.08698361119648534);
    msg.setSource(48542U);
    msg.setSourceEntity(119U);
    msg.setDestination(10618U);
    msg.setDestinationEntity(182U);
    msg.time = 0.4458274513602092;
    msg.value = 0.7081962223926077;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.5542739444079261);
    msg.setSource(60658U);
    msg.setSourceEntity(239U);
    msg.setDestination(57007U);
    msg.setDestinationEntity(126U);
    msg.time = 0.39511730751453544;
    msg.value = 0.7052579250195365;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.2101411197071179);
    msg.setSource(23565U);
    msg.setSourceEntity(79U);
    msg.setDestination(28542U);
    msg.setDestinationEntity(72U);
    msg.time = 0.8786384590186683;
    msg.value = 0.1865079880579149;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.8294509919176482);
    msg.setSource(55290U);
    msg.setSourceEntity(133U);
    msg.setDestination(57262U);
    msg.setDestinationEntity(127U);
    msg.value = 0.37667783928630705;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.7989632686050844);
    msg.setSource(5238U);
    msg.setSourceEntity(52U);
    msg.setDestination(55378U);
    msg.setDestinationEntity(144U);
    msg.value = 0.6166172364083778;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.981134232280705);
    msg.setSource(53767U);
    msg.setSourceEntity(135U);
    msg.setDestination(8221U);
    msg.setDestinationEntity(113U);
    msg.value = 0.6653837124916916;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.062496810887358256);
    msg.setSource(38316U);
    msg.setSourceEntity(200U);
    msg.setDestination(38422U);
    msg.setDestinationEntity(8U);
    msg.value = 0.7314505838978651;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.47534128264944797);
    msg.setSource(63854U);
    msg.setSourceEntity(248U);
    msg.setDestination(9783U);
    msg.setDestinationEntity(63U);
    msg.value = 0.9884734601371168;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.7175617997540057);
    msg.setSource(2753U);
    msg.setSourceEntity(242U);
    msg.setDestination(25471U);
    msg.setDestinationEntity(138U);
    msg.value = 0.4317978979915349;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.11513258703027085);
    msg.setSource(27403U);
    msg.setSourceEntity(211U);
    msg.setDestination(35259U);
    msg.setDestinationEntity(134U);
    msg.value = 0.6978322638223489;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.7382139233320137);
    msg.setSource(4331U);
    msg.setSourceEntity(196U);
    msg.setDestination(20408U);
    msg.setDestinationEntity(194U);
    msg.value = 0.6437888207807334;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.9896158361866637);
    msg.setSource(47493U);
    msg.setSourceEntity(252U);
    msg.setDestination(9149U);
    msg.setDestinationEntity(88U);
    msg.value = 0.934171617238675;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.01448068337241104);
    msg.setSource(50587U);
    msg.setSourceEntity(173U);
    msg.setDestination(37098U);
    msg.setDestinationEntity(165U);
    msg.value = 0.7204384355146696;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.9882666929570516);
    msg.setSource(20655U);
    msg.setSourceEntity(202U);
    msg.setDestination(23511U);
    msg.setDestinationEntity(84U);
    msg.value = 0.5830715940931841;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.14012224917385896);
    msg.setSource(34605U);
    msg.setSourceEntity(222U);
    msg.setDestination(10501U);
    msg.setDestinationEntity(15U);
    msg.value = 0.1513929707733246;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.13842562219747123);
    msg.setSource(6067U);
    msg.setSourceEntity(204U);
    msg.setDestination(53164U);
    msg.setDestinationEntity(59U);
    msg.value = 0.5086326182336952;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.004599356099966867);
    msg.setSource(8190U);
    msg.setSourceEntity(192U);
    msg.setDestination(36007U);
    msg.setDestinationEntity(180U);
    msg.value = 0.5337859611642224;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.9749341074906019);
    msg.setSource(47648U);
    msg.setSourceEntity(9U);
    msg.setDestination(49862U);
    msg.setDestinationEntity(83U);
    msg.value = 0.2951907182050738;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.6020765617552213);
    msg.setSource(37423U);
    msg.setSourceEntity(89U);
    msg.setDestination(19932U);
    msg.setDestinationEntity(179U);
    msg.value = 0.5926231485823078;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.6098074851951709);
    msg.setSource(28730U);
    msg.setSourceEntity(227U);
    msg.setDestination(52U);
    msg.setDestinationEntity(89U);
    msg.value = 0.3988346816028565;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.20976916719835403);
    msg.setSource(32068U);
    msg.setSourceEntity(159U);
    msg.setDestination(24477U);
    msg.setDestinationEntity(128U);
    msg.value = 0.5961332577924406;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.04090194311985429);
    msg.setSource(19736U);
    msg.setSourceEntity(37U);
    msg.setDestination(38967U);
    msg.setDestinationEntity(199U);
    msg.value = 0.6344666624091704;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.49794730475188786);
    msg.setSource(19129U);
    msg.setSourceEntity(120U);
    msg.setDestination(32886U);
    msg.setDestinationEntity(214U);
    msg.value = 0.6252681613480473;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.7805312995768884);
    msg.setSource(39174U);
    msg.setSourceEntity(31U);
    msg.setDestination(46944U);
    msg.setDestinationEntity(57U);
    msg.value = 0.6337572169548186;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.6459802044594276);
    msg.setSource(43874U);
    msg.setSourceEntity(144U);
    msg.setDestination(34472U);
    msg.setDestinationEntity(185U);
    msg.direction = 0.5342917016156962;
    msg.speed = 0.9227151508497391;
    msg.turbulence = 0.5751929604406325;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.9817283652060471);
    msg.setSource(19967U);
    msg.setSourceEntity(39U);
    msg.setDestination(60123U);
    msg.setDestinationEntity(233U);
    msg.direction = 0.2146947388144761;
    msg.speed = 0.34651710698252414;
    msg.turbulence = 0.4843699382523603;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.74553309641854);
    msg.setSource(18902U);
    msg.setSourceEntity(199U);
    msg.setDestination(18825U);
    msg.setDestinationEntity(27U);
    msg.direction = 0.3954117737873418;
    msg.speed = 0.47649705804249887;
    msg.turbulence = 0.32255490534728926;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.6605671099149283);
    msg.setSource(52488U);
    msg.setSourceEntity(136U);
    msg.setDestination(48477U);
    msg.setDestinationEntity(81U);
    msg.value = 0.7163064806169821;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.3382766784845187);
    msg.setSource(59489U);
    msg.setSourceEntity(244U);
    msg.setDestination(9082U);
    msg.setDestinationEntity(219U);
    msg.value = 0.11451005168518957;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.4894042850320528);
    msg.setSource(24845U);
    msg.setSourceEntity(134U);
    msg.setDestination(47123U);
    msg.setDestinationEntity(101U);
    msg.value = 0.39679635843229366;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.7799227672935171);
    msg.setSource(57878U);
    msg.setSourceEntity(232U);
    msg.setDestination(42128U);
    msg.setDestinationEntity(170U);
    msg.value.assign("WBQYEXAALBYBXFTBPLXIQHAQDZYJNHLKGPEWJTIVVKUJMJNWHSMOLPKDIRDZGRHKYPGRPHOGXLUJSTVVCYVLZKLLYECBERQSTQRONZGKALDWOHXMKFM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.8765887067538058);
    msg.setSource(28941U);
    msg.setSourceEntity(135U);
    msg.setDestination(10422U);
    msg.setDestinationEntity(139U);
    msg.value.assign("ECEMFYYCEUMVWZMUERSCGJQMBJOXBJKXLOTN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.5500150380985765);
    msg.setSource(25395U);
    msg.setSourceEntity(31U);
    msg.setDestination(18438U);
    msg.setDestinationEntity(48U);
    msg.value.assign("GAHEVVCDDIIUQHDEJQFFGQTLBKSXPKZSXYLRYORMTVJELOEQJTQWKWOGPHWACKMPTXEJZXNAAFMWCHCVYYINTIVFLWLTEPWDDYXHSII");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.5352748456496101);
    msg.setSource(30552U);
    msg.setSourceEntity(209U);
    msg.setDestination(49658U);
    msg.setDestinationEntity(129U);
    const signed char tmp_msg_0[] = {24, 69, 40, 86, -78, -99, -9, -3, -107, 28, 56, 91, -126, -30, -16, -20, -94, -57, 33, 55, 98, 100, -90, 114, -18, 13, -85, -122, -51, -1, -47, -44, -74, 84, -122, 33, -12, -4, 38, -41, -17, -56, -65, 48, -9, 46, -36, -76, -113, 99, -46, 43, -33, 12, -77, -13, -53, -55};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.7897619381614323);
    msg.setSource(3365U);
    msg.setSourceEntity(34U);
    msg.setDestination(54804U);
    msg.setDestinationEntity(113U);
    const signed char tmp_msg_0[] = {-67, -103, 92, 52, -68, 25, -113, 16, 6, -80, -2, -1, 71, -66, -92, -32, 96, 89, -108, 92, -96, -2, -89, 30, -106, 85, 80, -25, -111, -66, -37, -95, 52, 76, -19, -108, 57, 15, 30, -23, 37, 79, 54, 101, -59, 121, 85, 102, 27, 50, 2, -67, 103, 71, 122, -47, 75, 56, -13, 2, 73, -25, -114, 102, -31, -82, -41, -86, 102, 16, -56, 53, -30, 77, 124, 96, 51, -72, -22, 28, 105, -53, 66, -43, 35, -50, 15, -42, 83, 107, -9, 66, 27, 32, 12, -97, 36, 47};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.3970914919061489);
    msg.setSource(53012U);
    msg.setSourceEntity(232U);
    msg.setDestination(48306U);
    msg.setDestinationEntity(243U);
    const signed char tmp_msg_0[] = {-11, 12, -80, 41, 78, 54, 77, 2, -117, 126, 34, -95, 41, -127, -60, 100, 80, 51, -17, -23, 119, -3, -120, 22, -88, 6, 111, 24, -25, -102, 104, -122, -125, -17, -104, -41, 4, 44, 41, 57, -68, 48, -123, -81, -9, -18, -94, -114, 86, -23, 88, -107, 92, -53, 32, -97, -11, -87, 39, -113, -86, -52, 13, 92, -54, -94, 53, -82, -31, -124, 126, -56, 89, 27, -113, -79, -127, -60, -80, 105, -40, -100, -67, 68, 71, 45, 111, 67, -27, 118, 62, -4, 4, -20, -73, 19, 46, -92, 5, 101, -110, 126, 121, -115, -57, 121, 19, 86, 113, 45, 33, -70, 65, 4, -1, 81, -27, 80, -72, 7, 68, -98, -1, -58, -57, -1, 55, -66, 52, -106, 62, -42, -11, 108, -15, 95, -25, -48, 27, -102, -52, -60, 51, 10, -72, 74, 55, 108, 3, -46, 86, -19, 101, -92, -22, -67, 64, -68, 24, 47, 76, 89, 91, 49, -57, -64, 30, 86, -80, 102, 92, -112, -81, -20, -57, -41, -101, -8, 30, -88, 29, 45, 123, -90, -37, 2, 26, -107, 65, 116, 78, -109, -82, -116, 23, -7, 108, 26, 94, -87, 101, -9, 35, 21, -1, -56, -101, -31, -77, 83, 12, 40, -72, -97, -7, -29, 75, 87, -71, -62, 82, -110, 37, -27, -24, 26, 50, 114, -98, -36, 37, -97, 66, 126};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.5729054901048799);
    msg.setSource(4335U);
    msg.setSourceEntity(38U);
    msg.setDestination(44320U);
    msg.setDestinationEntity(125U);
    msg.value = 0.09952099781395463;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.7083055968092052);
    msg.setSource(62146U);
    msg.setSourceEntity(182U);
    msg.setDestination(46736U);
    msg.setDestinationEntity(165U);
    msg.value = 0.8872504671602478;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.550391089168568);
    msg.setSource(16150U);
    msg.setSourceEntity(223U);
    msg.setDestination(30406U);
    msg.setDestinationEntity(18U);
    msg.value = 0.6745263489282225;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.7812375717342407);
    msg.setSource(12095U);
    msg.setSourceEntity(10U);
    msg.setDestination(61085U);
    msg.setDestinationEntity(54U);
    msg.type = 10U;
    msg.frequency = 864656400U;
    msg.min_range = 6173U;
    msg.max_range = 12517U;
    msg.bits_per_point = 221U;
    msg.scale_factor = 0.8432675285845858;
    const signed char tmp_msg_0[] = {-41, -38, -2, -79, 103, -28, -24, -40, 8, 2, 25, -29, 10, -118, 99, -72, -115, 90, -55, -15, -45, 18, 91, 27, 31, 65, 0, -50, 73, 19, 61, 33, -43, 10, 28, -128, 99, -115, 55, 49, -46, -49, 119, -83, -26, 68, 100, -101, -120, 38, 25, -114, -56, -51, 49, 102, -13, 51, -91, 42, 55, 78, 57, -87, 23, 99, 93, -70, 84, -114, -49, 84, 42, -1, 95, 3, -6, -94, 30, -30, -59, 95, 8, 42, -27, 28, 72, 79, 57, 19, -73, 93, 32, 15, -51, -48};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.6369225725361095);
    msg.setSource(25798U);
    msg.setSourceEntity(217U);
    msg.setDestination(27366U);
    msg.setDestinationEntity(185U);
    msg.type = 38U;
    msg.frequency = 3666122849U;
    msg.min_range = 7789U;
    msg.max_range = 36529U;
    msg.bits_per_point = 31U;
    msg.scale_factor = 0.9433653496942392;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9268652428899765;
    tmp_msg_0.beam_height = 0.23631232824369308;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-117, 106, 102, 124, 12, -100, -106, 74, -105, -49, -29, 8, 35, -77, 25, -33, 85, 77, 59, -48, 118, 94, -32, 91, 75, -30, -39, -99, -119, -82, -61, -35, 116, 11, 119, 119, -31, -12, 30, -126, -42, 80, 67, -26, 65, -113, 1, 61, 91, 122, 15, 118, 31, -84, -126, 92, 26, -48, -54, -108, 59, -27, -128, -97, -24, -50, 121, 44, -66, -122, 39, -103, -90, 45, -45, 126, 17, 31, 92, 67, -101, -65, 50, 35, 89, 57, -88, -115, -65, -58, -59, 60, -9, 118, 119, -80, 69, -4, -72, -104, 21, 60, -97, -80, -17, 36, 50, 116, -30, -73, 114, 69, 110, 96, -126, -105, -69, 3, 94, -105, -12, -36, -121, -51, -69, 103, -87, 90, 32, -35, -119, -48, 14, 28, -27, -85, 34, 25, 84, 15, 4, -19, 79, -1, -20, 72, -115, -88, -75, 2, 68, 70, -21, -53, -19, -52, 121, -107, -76, -45};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.14188824929780974);
    msg.setSource(25015U);
    msg.setSourceEntity(234U);
    msg.setDestination(56038U);
    msg.setDestinationEntity(192U);
    msg.type = 166U;
    msg.frequency = 794670830U;
    msg.min_range = 39160U;
    msg.max_range = 16264U;
    msg.bits_per_point = 3U;
    msg.scale_factor = 0.9415946718329203;
    const signed char tmp_msg_0[] = {31, -43, -31, -102, -63, -12, -84, 65, 27, 119, -9, 93, 122, -63, -54, 70, -38, -73, 91, 32, 124, 34, -89, 63, 17, 92, 30, -88, 21, -26, 16, 33, -64, -78, -115, -50, 48, 36, 12, 114, 35, 87, 9, -31, 109, -58, 66, 40, -52, 104, -84, 126, 51, -12, -123, 68, -95, 23, 6, -67, -109, 47, -31, -58, 76, -41, -65, -97, 59, -128, 39, -105, 53, -115, 11, 65, 68, 42, -83, 42, 94, 63, 10, 111, -88, 32, -34, 45, 76, -71, -57, -29, 119, -40, -117, 62, -80, -24, 71, 2, 110, -56, -79, 66, 88, -94, 92, 36, -59, -22, -61, -9, -48, -114, 49, -79, -13, 116, 45, -114, -23, -75, 18, -64, 17, 110, 125, -81, -2, -68, -106, -94, -73, 55};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.6166487089192784);
    msg.setSource(21921U);
    msg.setSourceEntity(120U);
    msg.setDestination(14300U);
    msg.setDestinationEntity(9U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.28076775993943226);
    msg.setSource(63965U);
    msg.setSourceEntity(135U);
    msg.setDestination(2877U);
    msg.setDestinationEntity(25U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.6655129399236724);
    msg.setSource(917U);
    msg.setSourceEntity(11U);
    msg.setDestination(24663U);
    msg.setDestinationEntity(191U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.925545303099723);
    msg.setSource(55495U);
    msg.setSourceEntity(186U);
    msg.setDestination(61622U);
    msg.setDestinationEntity(76U);
    msg.op = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.6888752453013286);
    msg.setSource(49836U);
    msg.setSourceEntity(148U);
    msg.setDestination(38269U);
    msg.setDestinationEntity(153U);
    msg.op = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.41452033954479073);
    msg.setSource(58748U);
    msg.setSourceEntity(227U);
    msg.setDestination(22474U);
    msg.setDestinationEntity(218U);
    msg.op = 136U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.7050001354906056);
    msg.setSource(63579U);
    msg.setSourceEntity(83U);
    msg.setDestination(7864U);
    msg.setDestinationEntity(67U);
    msg.value = 0.39248270965475607;
    msg.confidence = 0.5837607414601639;
    msg.opmodes.assign("XETRZKWBHXTOJGCRGXMHKZNCFNWDCYYFDNGZGRVVWQZPUMTFJKFAPUYCDMLWEFKDRPZXUQCCMXHRVSADFYCTVPWBNHEIUI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.4113310201213273);
    msg.setSource(62238U);
    msg.setSourceEntity(234U);
    msg.setDestination(49365U);
    msg.setDestinationEntity(98U);
    msg.value = 0.7806017155872698;
    msg.confidence = 0.3695467701398265;
    msg.opmodes.assign("ADJMFMRNWUPJEESWQBFDWYYAAYCAFBMEXPHWKQQLNBQDUOONGZBDCJMOOPIJCXUCZCPFRAZJXWZQBVBKFOGZQDSOGGEJDTXELOFZWSAIAYLPGXPLXXVRKENWQCIUMKEINDVKRJRLTHLVHWBKHRHCCPUDPTGFTBNGIAXMVKYNESKXLQBEAVTRFYSSWYIUGFSGXDOIYKUJIHVMDKERTCJIZUZTYUHZPTHMVBVMSIMUNLLVQTANRHNYLJOTZCRSFW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.47402921892643113);
    msg.setSource(137U);
    msg.setSourceEntity(128U);
    msg.setDestination(50099U);
    msg.setDestinationEntity(174U);
    msg.value = 0.32908575143327934;
    msg.confidence = 0.36775409873651566;
    msg.opmodes.assign("KKJWETPLUPJNRRYBFC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.9041258115278037);
    msg.setSource(27715U);
    msg.setSourceEntity(8U);
    msg.setDestination(51368U);
    msg.setDestinationEntity(19U);
    msg.itow = 2951642093U;
    msg.lat = 0.7167447930527019;
    msg.lon = 0.7323038206700679;
    msg.height_ell = 0.7384055744798536;
    msg.height_sea = 0.5003425329975092;
    msg.hacc = 0.2555174047254878;
    msg.vacc = 0.4302829913838433;
    msg.vel_n = 0.9512415218324117;
    msg.vel_e = 0.9821678146672687;
    msg.vel_d = 0.03101656676070963;
    msg.speed = 0.6294645173219983;
    msg.gspeed = 0.7819170538904934;
    msg.heading = 0.32119351898237414;
    msg.sacc = 0.8787749912722038;
    msg.cacc = 0.4036998133645434;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.6011560926724923);
    msg.setSource(50142U);
    msg.setSourceEntity(219U);
    msg.setDestination(2510U);
    msg.setDestinationEntity(100U);
    msg.itow = 2704552986U;
    msg.lat = 0.2505508861300947;
    msg.lon = 0.8715509413737291;
    msg.height_ell = 0.9147548188897645;
    msg.height_sea = 0.33964827522273766;
    msg.hacc = 0.9758491772890139;
    msg.vacc = 0.7865034719796138;
    msg.vel_n = 0.15401789676156197;
    msg.vel_e = 0.5429415703182453;
    msg.vel_d = 0.9209755483880623;
    msg.speed = 0.4124069332301544;
    msg.gspeed = 0.1755598437683471;
    msg.heading = 0.7474473513836941;
    msg.sacc = 0.4762757581506274;
    msg.cacc = 0.669921697985147;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.5344236920312735);
    msg.setSource(62326U);
    msg.setSourceEntity(53U);
    msg.setDestination(30141U);
    msg.setDestinationEntity(98U);
    msg.itow = 1575051005U;
    msg.lat = 0.608612408312186;
    msg.lon = 0.9865268907855929;
    msg.height_ell = 0.20164417063405804;
    msg.height_sea = 0.0007942631543620404;
    msg.hacc = 0.27220735818446085;
    msg.vacc = 0.7496924684239619;
    msg.vel_n = 0.3705958311242853;
    msg.vel_e = 0.3901364436728494;
    msg.vel_d = 0.11448216447935422;
    msg.speed = 0.6464489348576838;
    msg.gspeed = 0.689900038854529;
    msg.heading = 0.6758769603839467;
    msg.sacc = 0.49208596771551605;
    msg.cacc = 0.0016611388901012214;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.9136314630011221);
    msg.setSource(55419U);
    msg.setSourceEntity(167U);
    msg.setDestination(43638U);
    msg.setDestinationEntity(110U);
    msg.id = 87U;
    msg.value = 0.16542586205126153;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.7773231580131587);
    msg.setSource(18900U);
    msg.setSourceEntity(50U);
    msg.setDestination(39981U);
    msg.setDestinationEntity(169U);
    msg.id = 242U;
    msg.value = 0.7943072864179165;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.9241914715731494);
    msg.setSource(17424U);
    msg.setSourceEntity(85U);
    msg.setDestination(29489U);
    msg.setDestinationEntity(236U);
    msg.id = 207U;
    msg.value = 0.45098100636362826;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.45873566991252845);
    msg.setSource(42525U);
    msg.setSourceEntity(108U);
    msg.setDestination(36807U);
    msg.setDestinationEntity(249U);
    msg.x = 0.520523434129039;
    msg.y = 0.9471699049489088;
    msg.z = 0.5716766941535425;
    msg.phi = 0.5917726471641779;
    msg.theta = 0.9720803750022611;
    msg.psi = 0.9689102816212113;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.7426720708087914);
    msg.setSource(41088U);
    msg.setSourceEntity(172U);
    msg.setDestination(46716U);
    msg.setDestinationEntity(58U);
    msg.x = 0.38992816712157563;
    msg.y = 0.33845634111704803;
    msg.z = 0.5591104636180805;
    msg.phi = 0.42779899919577014;
    msg.theta = 0.5999835822747089;
    msg.psi = 0.7643530260104184;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.6494449050751305);
    msg.setSource(37411U);
    msg.setSourceEntity(54U);
    msg.setDestination(2961U);
    msg.setDestinationEntity(69U);
    msg.x = 0.7555583501532435;
    msg.y = 0.6657337299925288;
    msg.z = 0.7770708322712702;
    msg.phi = 0.1774630698603642;
    msg.theta = 0.3627567526676905;
    msg.psi = 0.7841795727494729;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.10721386055613458);
    msg.setSource(55247U);
    msg.setSourceEntity(2U);
    msg.setDestination(51407U);
    msg.setDestinationEntity(244U);
    msg.beam_width = 0.889210263359221;
    msg.beam_height = 0.7974093553758819;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.9887971134376808);
    msg.setSource(29999U);
    msg.setSourceEntity(4U);
    msg.setDestination(40617U);
    msg.setDestinationEntity(34U);
    msg.beam_width = 0.853232091511196;
    msg.beam_height = 0.9734106575309296;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.8312572087195115);
    msg.setSource(62812U);
    msg.setSourceEntity(254U);
    msg.setDestination(38468U);
    msg.setDestinationEntity(59U);
    msg.beam_width = 0.25840442688810783;
    msg.beam_height = 0.2529425174380302;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.424340044575795);
    msg.setSource(30086U);
    msg.setSourceEntity(82U);
    msg.setDestination(18395U);
    msg.setDestinationEntity(171U);
    msg.sane = 135U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.5860579430793459);
    msg.setSource(54211U);
    msg.setSourceEntity(233U);
    msg.setDestination(15842U);
    msg.setDestinationEntity(227U);
    msg.sane = 142U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.4938830965978859);
    msg.setSource(5348U);
    msg.setSourceEntity(59U);
    msg.setDestination(8329U);
    msg.setDestinationEntity(75U);
    msg.sane = 30U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.7642095799363329);
    msg.setSource(45839U);
    msg.setSourceEntity(50U);
    msg.setDestination(63733U);
    msg.setDestinationEntity(104U);
    msg.value = 0.06050805137677373;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.25036235025956266);
    msg.setSource(60044U);
    msg.setSourceEntity(74U);
    msg.setDestination(13671U);
    msg.setDestinationEntity(113U);
    msg.value = 0.634239280453132;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.35890037145741893);
    msg.setSource(45588U);
    msg.setSourceEntity(77U);
    msg.setDestination(48983U);
    msg.setDestinationEntity(137U);
    msg.value = 0.4690400372229545;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.06892536881750067);
    msg.setSource(61755U);
    msg.setSourceEntity(98U);
    msg.setDestination(6362U);
    msg.setDestinationEntity(26U);
    msg.value = 0.42642051224476807;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.9612290908094457);
    msg.setSource(30026U);
    msg.setSourceEntity(51U);
    msg.setDestination(33171U);
    msg.setDestinationEntity(176U);
    msg.value = 0.6864449240729839;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.7321303924239152);
    msg.setSource(23995U);
    msg.setSourceEntity(50U);
    msg.setDestination(23365U);
    msg.setDestinationEntity(165U);
    msg.value = 0.06766644700659474;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.7237306509576746);
    msg.setSource(2547U);
    msg.setSourceEntity(153U);
    msg.setDestination(13469U);
    msg.setDestinationEntity(144U);
    msg.value = 0.6661351009286225;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.3069959880480412);
    msg.setSource(50622U);
    msg.setSourceEntity(62U);
    msg.setDestination(44633U);
    msg.setDestinationEntity(104U);
    msg.value = 0.1398813691820282;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.09974552544318538);
    msg.setSource(50342U);
    msg.setSourceEntity(34U);
    msg.setDestination(16222U);
    msg.setDestinationEntity(168U);
    msg.value = 0.03236698380156955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.5651560268664327);
    msg.setSource(30016U);
    msg.setSourceEntity(78U);
    msg.setDestination(11077U);
    msg.setDestinationEntity(174U);
    msg.value = 0.2600293729937483;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.7176942435682611);
    msg.setSource(1626U);
    msg.setSourceEntity(165U);
    msg.setDestination(12744U);
    msg.setDestinationEntity(172U);
    msg.value = 0.7130769736850638;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.4512425001512774);
    msg.setSource(29064U);
    msg.setSourceEntity(83U);
    msg.setDestination(4118U);
    msg.setDestinationEntity(148U);
    msg.value = 0.30822898017770073;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.49086710446507553);
    msg.setSource(3700U);
    msg.setSourceEntity(64U);
    msg.setDestination(4818U);
    msg.setDestinationEntity(196U);
    msg.value = 0.6220791470288445;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.4172229210113326);
    msg.setSource(27798U);
    msg.setSourceEntity(152U);
    msg.setDestination(61010U);
    msg.setDestinationEntity(167U);
    msg.value = 0.7239566250989243;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.8870964845831264);
    msg.setSource(40649U);
    msg.setSourceEntity(153U);
    msg.setDestination(57281U);
    msg.setDestinationEntity(238U);
    msg.value = 0.613691584703588;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.510252389256088);
    msg.setSource(38031U);
    msg.setSourceEntity(22U);
    msg.setDestination(54109U);
    msg.setDestinationEntity(57U);
    msg.value = 0.5333063217360144;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.7203824933843798);
    msg.setSource(18694U);
    msg.setSourceEntity(245U);
    msg.setDestination(33269U);
    msg.setDestinationEntity(238U);
    msg.value = 0.2577642060825952;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.2103470846084533);
    msg.setSource(62887U);
    msg.setSourceEntity(65U);
    msg.setDestination(65117U);
    msg.setDestinationEntity(159U);
    msg.value = 0.11551345637559063;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.9058284504313129);
    msg.setSource(63478U);
    msg.setSourceEntity(229U);
    msg.setDestination(29814U);
    msg.setDestinationEntity(84U);
    msg.value = 0.4131091168496097;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.544155176346975);
    msg.setSource(52841U);
    msg.setSourceEntity(245U);
    msg.setDestination(13278U);
    msg.setDestinationEntity(197U);
    msg.value = 0.3878011585966773;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.034972075814890036);
    msg.setSource(41666U);
    msg.setSourceEntity(114U);
    msg.setDestination(47846U);
    msg.setDestinationEntity(234U);
    msg.value = 0.907313216447256;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.8561968500607429);
    msg.setSource(32119U);
    msg.setSourceEntity(132U);
    msg.setDestination(60926U);
    msg.setDestinationEntity(60U);
    msg.value = 0.4309877665157602;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.7691718235099989);
    msg.setSource(56017U);
    msg.setSourceEntity(189U);
    msg.setDestination(52497U);
    msg.setDestinationEntity(184U);
    msg.value = 0.8869301220288021;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.12633941442647167);
    msg.setSource(49504U);
    msg.setSourceEntity(5U);
    msg.setDestination(19465U);
    msg.setDestinationEntity(59U);
    msg.value = 0.32755333275179066;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.46802471019445);
    msg.setSource(59744U);
    msg.setSourceEntity(116U);
    msg.setDestination(46608U);
    msg.setDestinationEntity(123U);
    msg.validity = 55033U;
    msg.type = 106U;
    msg.tow = 4269479763U;
    msg.base_lat = 0.32441358416940735;
    msg.base_lon = 0.8034791918701008;
    msg.base_height = 0.6680473921553619;
    msg.n = 0.339942204982007;
    msg.e = 0.6954115517707745;
    msg.d = 0.0273349776814662;
    msg.v_n = 0.813444426030845;
    msg.v_e = 0.44066867981822067;
    msg.v_d = 0.019661760987923382;
    msg.satellites = 75U;
    msg.iar_hyp = 5298U;
    msg.iar_ratio = 0.8853178267212326;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.9251729281984102);
    msg.setSource(53283U);
    msg.setSourceEntity(91U);
    msg.setDestination(56545U);
    msg.setDestinationEntity(1U);
    msg.validity = 19218U;
    msg.type = 141U;
    msg.tow = 2564936783U;
    msg.base_lat = 0.24386908269387442;
    msg.base_lon = 0.4002625742368595;
    msg.base_height = 0.724109560860945;
    msg.n = 0.5646564080652438;
    msg.e = 0.3740136765962444;
    msg.d = 0.08761412901177379;
    msg.v_n = 0.45329344072534294;
    msg.v_e = 0.6272506836593608;
    msg.v_d = 0.8841003479475132;
    msg.satellites = 154U;
    msg.iar_hyp = 16426U;
    msg.iar_ratio = 0.5600738461484137;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.17986278134006317);
    msg.setSource(4890U);
    msg.setSourceEntity(27U);
    msg.setDestination(60410U);
    msg.setDestinationEntity(99U);
    msg.validity = 54766U;
    msg.type = 55U;
    msg.tow = 3090832092U;
    msg.base_lat = 0.7794284043590848;
    msg.base_lon = 0.2188020408549164;
    msg.base_height = 0.653431069115893;
    msg.n = 0.3204621898880723;
    msg.e = 0.50817969004698;
    msg.d = 0.7313181599763977;
    msg.v_n = 0.7286210352880408;
    msg.v_e = 0.6807467724196699;
    msg.v_d = 0.416953326754391;
    msg.satellites = 56U;
    msg.iar_hyp = 33156U;
    msg.iar_ratio = 0.3435203095668071;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.8306141516897311);
    msg.setSource(17727U);
    msg.setSourceEntity(130U);
    msg.setDestination(45254U);
    msg.setDestinationEntity(216U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7221084941272863;
    tmp_msg_0.lon = 0.08464778295590736;
    tmp_msg_0.height = 0.9875919511470893;
    tmp_msg_0.x = 0.8746765229697484;
    tmp_msg_0.y = 0.6917630367601879;
    tmp_msg_0.z = 0.5081273772243052;
    tmp_msg_0.phi = 0.32236572913302997;
    tmp_msg_0.theta = 0.14746032101598017;
    tmp_msg_0.psi = 0.22325365432623356;
    tmp_msg_0.u = 0.1682685695473929;
    tmp_msg_0.v = 0.3723917898954583;
    tmp_msg_0.w = 0.20329418058291482;
    tmp_msg_0.vx = 0.38291763013142066;
    tmp_msg_0.vy = 0.7465957189270613;
    tmp_msg_0.vz = 0.0984877336840898;
    tmp_msg_0.p = 0.5683964575141602;
    tmp_msg_0.q = 0.5080095256758016;
    tmp_msg_0.r = 0.06986058810358231;
    tmp_msg_0.depth = 0.8306230530168487;
    tmp_msg_0.alt = 0.27018493933639565;
    msg.state.set(tmp_msg_0);
    msg.type = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.8369875791078275);
    msg.setSource(58118U);
    msg.setSourceEntity(3U);
    msg.setDestination(52704U);
    msg.setDestinationEntity(72U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6645503212247282;
    tmp_msg_0.lon = 0.3591486961936504;
    tmp_msg_0.height = 0.7996801608413119;
    tmp_msg_0.x = 0.9277255542022589;
    tmp_msg_0.y = 0.7851224080926585;
    tmp_msg_0.z = 0.1231420157467572;
    tmp_msg_0.phi = 0.7085531871039862;
    tmp_msg_0.theta = 0.676259710732141;
    tmp_msg_0.psi = 0.37436481545502664;
    tmp_msg_0.u = 0.9329860013999312;
    tmp_msg_0.v = 0.9630075287641457;
    tmp_msg_0.w = 0.8173364420760774;
    tmp_msg_0.vx = 0.3176637803556356;
    tmp_msg_0.vy = 0.11537822673195153;
    tmp_msg_0.vz = 0.07313152469048556;
    tmp_msg_0.p = 0.09057500357362958;
    tmp_msg_0.q = 0.29014979542072294;
    tmp_msg_0.r = 0.8433249473685384;
    tmp_msg_0.depth = 0.9785718953304033;
    tmp_msg_0.alt = 0.2162546090601456;
    msg.state.set(tmp_msg_0);
    msg.type = 145U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.8624369345618091);
    msg.setSource(32464U);
    msg.setSourceEntity(22U);
    msg.setDestination(22168U);
    msg.setDestinationEntity(15U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.45905452056959384;
    tmp_msg_0.lon = 0.965825395266382;
    tmp_msg_0.height = 0.7269756354148738;
    tmp_msg_0.x = 0.11993973911657763;
    tmp_msg_0.y = 0.21499375934745457;
    tmp_msg_0.z = 0.3657805694108328;
    tmp_msg_0.phi = 0.6574288928289591;
    tmp_msg_0.theta = 0.5007977303483073;
    tmp_msg_0.psi = 0.9948385186420979;
    tmp_msg_0.u = 0.7835832514496219;
    tmp_msg_0.v = 0.0612499240893466;
    tmp_msg_0.w = 0.2599188061600116;
    tmp_msg_0.vx = 0.9447194200275161;
    tmp_msg_0.vy = 0.021187888943331346;
    tmp_msg_0.vz = 0.4172901452317074;
    tmp_msg_0.p = 0.2326675413178657;
    tmp_msg_0.q = 0.4437425947615077;
    tmp_msg_0.r = 0.25588995417326876;
    tmp_msg_0.depth = 0.013280172327454487;
    tmp_msg_0.alt = 0.2915051321408836;
    msg.state.set(tmp_msg_0);
    msg.type = 231U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.24545528564997965);
    msg.setSource(53687U);
    msg.setSourceEntity(176U);
    msg.setDestination(60547U);
    msg.setDestinationEntity(237U);
    msg.value = 0.9061595503467607;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.5413791630988328);
    msg.setSource(6261U);
    msg.setSourceEntity(15U);
    msg.setDestination(24645U);
    msg.setDestinationEntity(77U);
    msg.value = 0.5107859311490617;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.013560033792369919);
    msg.setSource(55825U);
    msg.setSourceEntity(114U);
    msg.setDestination(23820U);
    msg.setDestinationEntity(193U);
    msg.value = 0.5470995449588923;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.19219757617905608);
    msg.setSource(33629U);
    msg.setSourceEntity(206U);
    msg.setDestination(19045U);
    msg.setDestinationEntity(139U);
    msg.value = 0.08576262434386772;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.0002697470315797812);
    msg.setSource(7562U);
    msg.setSourceEntity(205U);
    msg.setDestination(54624U);
    msg.setDestinationEntity(241U);
    msg.value = 0.5063947535089199;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.29703144395681214);
    msg.setSource(21645U);
    msg.setSourceEntity(219U);
    msg.setDestination(52144U);
    msg.setDestinationEntity(171U);
    msg.value = 0.821462475975863;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.08952726987527448);
    msg.setSource(13458U);
    msg.setSourceEntity(52U);
    msg.setDestination(12024U);
    msg.setDestinationEntity(55U);
    msg.value = 0.5789708162284136;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.668386413004765);
    msg.setSource(35929U);
    msg.setSourceEntity(37U);
    msg.setDestination(56969U);
    msg.setDestinationEntity(57U);
    msg.value = 0.4761173606772199;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.432892688868455);
    msg.setSource(39063U);
    msg.setSourceEntity(73U);
    msg.setDestination(48033U);
    msg.setDestinationEntity(199U);
    msg.value = 0.18725726171021762;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.23915913657999932);
    msg.setSource(46611U);
    msg.setSourceEntity(228U);
    msg.setDestination(4043U);
    msg.setDestinationEntity(136U);
    msg.value = 0.5783537972620036;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.9957322470363459);
    msg.setSource(58722U);
    msg.setSourceEntity(220U);
    msg.setDestination(15629U);
    msg.setDestinationEntity(174U);
    msg.value = 0.07584352106159886;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.932810792340314);
    msg.setSource(54600U);
    msg.setSourceEntity(24U);
    msg.setDestination(1000U);
    msg.setDestinationEntity(4U);
    msg.value = 0.6230994054195187;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.7189297440557362);
    msg.setSource(33435U);
    msg.setSourceEntity(247U);
    msg.setDestination(36340U);
    msg.setDestinationEntity(57U);
    msg.value = 0.6209155323373425;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.6319338778738287);
    msg.setSource(35952U);
    msg.setSourceEntity(135U);
    msg.setDestination(7506U);
    msg.setDestinationEntity(99U);
    msg.value = 0.10894858669698415;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.10953398759590338);
    msg.setSource(5994U);
    msg.setSourceEntity(92U);
    msg.setDestination(18647U);
    msg.setDestinationEntity(195U);
    msg.value = 0.651605999196063;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.9931198110696494);
    msg.setSource(12887U);
    msg.setSourceEntity(246U);
    msg.setDestination(54343U);
    msg.setDestinationEntity(27U);
    msg.id = 78U;
    msg.zoom = 137U;
    msg.action = 118U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.18171332818110675);
    msg.setSource(8545U);
    msg.setSourceEntity(224U);
    msg.setDestination(52003U);
    msg.setDestinationEntity(12U);
    msg.id = 177U;
    msg.zoom = 241U;
    msg.action = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.01026145122217148);
    msg.setSource(3685U);
    msg.setSourceEntity(70U);
    msg.setDestination(30789U);
    msg.setDestinationEntity(179U);
    msg.id = 254U;
    msg.zoom = 60U;
    msg.action = 135U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.3621825223809162);
    msg.setSource(1860U);
    msg.setSourceEntity(48U);
    msg.setDestination(50914U);
    msg.setDestinationEntity(239U);
    msg.id = 61U;
    msg.value = 0.6598596520994213;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.5086185425779147);
    msg.setSource(25071U);
    msg.setSourceEntity(188U);
    msg.setDestination(44612U);
    msg.setDestinationEntity(91U);
    msg.id = 189U;
    msg.value = 0.5729358357293263;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.5300703994690268);
    msg.setSource(37435U);
    msg.setSourceEntity(95U);
    msg.setDestination(5803U);
    msg.setDestinationEntity(230U);
    msg.id = 73U;
    msg.value = 0.21638820952405535;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.9096175072579268);
    msg.setSource(13071U);
    msg.setSourceEntity(86U);
    msg.setDestination(6576U);
    msg.setDestinationEntity(76U);
    msg.id = 207U;
    msg.value = 0.5369699903569739;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.049063978077098724);
    msg.setSource(60556U);
    msg.setSourceEntity(106U);
    msg.setDestination(59380U);
    msg.setDestinationEntity(171U);
    msg.id = 240U;
    msg.value = 0.23315434443897898;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.6098082994076184);
    msg.setSource(59448U);
    msg.setSourceEntity(132U);
    msg.setDestination(44753U);
    msg.setDestinationEntity(11U);
    msg.id = 47U;
    msg.value = 0.024765783980555955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.8693595412196264);
    msg.setSource(24871U);
    msg.setSourceEntity(83U);
    msg.setDestination(16976U);
    msg.setDestinationEntity(152U);
    msg.id = 176U;
    msg.angle = 0.9174426584574987;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.03148963816180139);
    msg.setSource(50777U);
    msg.setSourceEntity(164U);
    msg.setDestination(62464U);
    msg.setDestinationEntity(37U);
    msg.id = 217U;
    msg.angle = 0.4228724905957524;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.1337517441985746);
    msg.setSource(38709U);
    msg.setSourceEntity(224U);
    msg.setDestination(32063U);
    msg.setDestinationEntity(221U);
    msg.id = 104U;
    msg.angle = 0.9556051075831645;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.1883830077573786);
    msg.setSource(20818U);
    msg.setSourceEntity(242U);
    msg.setDestination(15716U);
    msg.setDestinationEntity(91U);
    msg.op = 48U;
    msg.actions.assign("AOUBIFUPRWXNORSVMCJENPNFWEMCJISVBPLLFEEKVPCBCLRGYYFHIFZXJYKOUWELXMULIFVDQWSWQXNUOKYQGLTESAVRZNTKDABZXRCUJDTARMWRPXBMIPDHQRCXWZVDPTLJAMGKBDGZUSSAQXMBHTHDIRWJQNMVOQZLUMHUYJAYKHGKFCKZEVTJIQHZAJSCGIDTZIS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.6758827963934836);
    msg.setSource(60733U);
    msg.setSourceEntity(93U);
    msg.setDestination(53503U);
    msg.setDestinationEntity(4U);
    msg.op = 104U;
    msg.actions.assign("MTTXAPEDOBSKLMNYVJJGYOQDFPMEXRHDZVXQONMTYWWY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.0693294292112362);
    msg.setSource(8274U);
    msg.setSourceEntity(180U);
    msg.setDestination(5790U);
    msg.setDestinationEntity(237U);
    msg.op = 145U;
    msg.actions.assign("KCOTEHKANBSOATQEAOVIFHYLZYFZBDHFOUWVXLAGSMWWSUYPTFPHMXXVAJONGYTJBDGDALWNHBWCQXFIKRMZWJGTETSLWUOQFOCIRUVFIHKUUXJXMRSLGQVFGSPAVMKDDMBRBPCNKZLZVDNN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.8766939749698692);
    msg.setSource(12186U);
    msg.setSourceEntity(47U);
    msg.setDestination(33449U);
    msg.setDestinationEntity(116U);
    msg.actions.assign("BPYCGABOPULIGGTMVLRFIVOZQWLYJXHBFCBGJZMKJCMUGLGHUVBURICQOHMNQEJSARMALKCWDQUOIVMUANYJNETHFOKIZRTSCLCTEYMWXUOIWYJYKEQKGFFQXEDWPQNKJFHWOZMHAOWDYAZTNCFHPZEVVXNTGEAZNTONDWTJHXWEUPREYPTBJUSRTPWHALNMRIKPVQVSDSZGNKKSXSASJFLABXDPYBZQUHDMDBODZIFXBQIXIYSFVVRSR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.21396598435722936);
    msg.setSource(42963U);
    msg.setSourceEntity(16U);
    msg.setDestination(3324U);
    msg.setDestinationEntity(132U);
    msg.actions.assign("URDJIINAAJVDCQQQHUSNVETTWJKSEDMQXIRGFANBFVIXBXCAPFMYRULYLCJUYHF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.30423370104002734);
    msg.setSource(18701U);
    msg.setSourceEntity(140U);
    msg.setDestination(34533U);
    msg.setDestinationEntity(93U);
    msg.actions.assign("OOYEIJUPSFPCGULQONKTAXEDPAPAIPQFJFKTVFHQCOKIYCVAAHERVEAFTBYUZFSRYIMVRTWEVLLPBEUZBFKECSNFSVGKKHSCXTZXVAORRVNEHEXDHGCQTSUKZIPBNJDWDLPZZLRXZDQCPAMMMJRCJZJFOKBVYKEFZWNOXWTHNYMIHPHMRMLMJOXLTG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.7046008152360552);
    msg.setSource(55781U);
    msg.setSourceEntity(68U);
    msg.setDestination(64953U);
    msg.setDestinationEntity(245U);
    msg.button = 43U;
    msg.value = 131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.44769693682119793);
    msg.setSource(25975U);
    msg.setSourceEntity(137U);
    msg.setDestination(25487U);
    msg.setDestinationEntity(156U);
    msg.button = 13U;
    msg.value = 73U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.39587680168099126);
    msg.setSource(38027U);
    msg.setSourceEntity(164U);
    msg.setDestination(26161U);
    msg.setDestinationEntity(83U);
    msg.button = 146U;
    msg.value = 65U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.02504266487740936);
    msg.setSource(24466U);
    msg.setSourceEntity(31U);
    msg.setDestination(47178U);
    msg.setDestinationEntity(245U);
    msg.op = 135U;
    msg.text.assign("ANEDANPBAFRDNWYPHAHTTAIVXAHOQKNRXOZJOUTLEQIUSMCARJWKDPSWFCBNRROUQMTHQEKLNUXMVSMH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.26836046187773166);
    msg.setSource(49171U);
    msg.setSourceEntity(100U);
    msg.setDestination(59716U);
    msg.setDestinationEntity(188U);
    msg.op = 78U;
    msg.text.assign("HOFVDFAXRJKYFAQXBZIQLURTQASEC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.2701139135393036);
    msg.setSource(49197U);
    msg.setSourceEntity(160U);
    msg.setDestination(36630U);
    msg.setDestinationEntity(87U);
    msg.op = 189U;
    msg.text.assign("OTAYEOTBBFYNADJZOKENYCLYSCRPZTUCBTCEMENVZSXMNTAMOWFCPDQYLMLVGRCBSPBATHPQXZQWYBOKBICGLAEJVRUGU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.3426854052430601);
    msg.setSource(24984U);
    msg.setSourceEntity(239U);
    msg.setDestination(50867U);
    msg.setDestinationEntity(172U);
    msg.op = 216U;
    msg.time_remain = 0.024463555319518382;
    msg.sched_time = 0.47025157728013234;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.6831251776911842);
    msg.setSource(14568U);
    msg.setSourceEntity(74U);
    msg.setDestination(21257U);
    msg.setDestinationEntity(169U);
    msg.op = 136U;
    msg.time_remain = 0.48659721958701885;
    msg.sched_time = 0.7034084289774003;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.5355111999586605);
    msg.setSource(33789U);
    msg.setSourceEntity(254U);
    msg.setDestination(38872U);
    msg.setDestinationEntity(194U);
    msg.op = 144U;
    msg.time_remain = 0.17329983825598105;
    msg.sched_time = 0.14738475145510455;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.5488587576094482);
    msg.setSource(35722U);
    msg.setSourceEntity(183U);
    msg.setDestination(19228U);
    msg.setDestinationEntity(41U);
    msg.name.assign("SWZLWAHDRGEOWWGVSAJPQZSPLWPROWCWTHNUYBYRBHTXWCJBCKEKGBKRUVPEKHFTIZXJJPTJDAVXOEYIDCJQNVSTVYKTMXBQQFNGIBMCCLFHUASCXIFQISOARGMKNKULIVALNTVZPQBGCJVEZZDZSGXZWOFNYYJHPKONQYEATIFRMVEQGFZHBDY");
    msg.op = 142U;
    msg.sched_time = 0.028176555182657825;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.6650557950975968);
    msg.setSource(49089U);
    msg.setSourceEntity(217U);
    msg.setDestination(42802U);
    msg.setDestinationEntity(229U);
    msg.name.assign("UMLLKJTSGETQUZCDSLFFGJOBAATUSZGRAHLDJIBBLTQEFGCDBNSRBXEIBZRQBPCXKSGIQLWOUWREMUZAFNOCAHJLPLEOXVPRMYYSYUYFXCPQRSWZHPCZGPAERNIHXXDEWKMDEHNXHPIXVMZCIZC");
    msg.op = 105U;
    msg.sched_time = 0.0043485788727611885;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.7887654664181479);
    msg.setSource(2510U);
    msg.setSourceEntity(174U);
    msg.setDestination(34842U);
    msg.setDestinationEntity(43U);
    msg.name.assign("OSRUWXBMVMBLVZTFBQVYQFBZOKXFD");
    msg.op = 61U;
    msg.sched_time = 0.448135744670319;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.5513397899420331);
    msg.setSource(28325U);
    msg.setSourceEntity(92U);
    msg.setDestination(35094U);
    msg.setDestinationEntity(138U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.31212585466745413);
    msg.setSource(18253U);
    msg.setSourceEntity(87U);
    msg.setDestination(30492U);
    msg.setDestinationEntity(4U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.17230822056273654);
    msg.setSource(55778U);
    msg.setSourceEntity(42U);
    msg.setDestination(38571U);
    msg.setDestinationEntity(86U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.6406949903435306);
    msg.setSource(1876U);
    msg.setSourceEntity(24U);
    msg.setDestination(27272U);
    msg.setDestinationEntity(192U);
    msg.name.assign("HOZMNLSPZYQFZWJVAKXISWNEOVQLERFOIDMMTFCXDVMJPDLGCSVQZNKHARNAAXQAFOKUNUNAJVFXKAGSTXBYPXPGDVQRGDSRBDEUAZUDP");
    msg.state = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.5319579467224482);
    msg.setSource(53488U);
    msg.setSourceEntity(160U);
    msg.setDestination(40025U);
    msg.setDestinationEntity(58U);
    msg.name.assign("PXCRUHFMJSMZTJVXYOEJFNQDMOQCESDSBGRZLUWIXWEDEUIFGMDMSPWLYQVNNJRUPIGGPHWNSDFIJLQOREXIRSVYHFTXKFWJUTYGYETVILRASRDQURPGPUUAWLGOCQNZSHCKQXJNZDQ");
    msg.state = 191U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.22551919972597756);
    msg.setSource(40790U);
    msg.setSourceEntity(254U);
    msg.setDestination(6517U);
    msg.setDestinationEntity(76U);
    msg.name.assign("YWWKDNGKIMMVDYPHNKZVRSSQHOUCTFTGOFIKSNUEXVJAWACETNDQZJLR");
    msg.state = 192U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.23005876295984307);
    msg.setSource(14938U);
    msg.setSourceEntity(224U);
    msg.setDestination(39879U);
    msg.setDestinationEntity(184U);
    msg.name.assign("WPSJPNFGOJGFGANVRUTSSKHRHHVLIOJHYVCYMZRQIJROFPBJTUZMAUFNRKPVQXJHZKNLGOSAXLXEBYDLXMFUNVOLMOVJXKLIMTESP");
    msg.value = 19U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.5547855698675224);
    msg.setSource(46949U);
    msg.setSourceEntity(64U);
    msg.setDestination(44757U);
    msg.setDestinationEntity(167U);
    msg.name.assign("KMNUWQASBKRASXEBDKWKZRHFMCCGFDLLTKJCNSYJYDEBTXHEMFAYWIIRINIBYFJXCTGVYFGBVGPILBWXQUOTOCHHKUSTKAYOAAINLUNYZVBWUGRHRTIGGQXTPPCDFQTKUZIYSMDPZEDCVMPRRZPAEPOVBWADFQUXLXZLVUNQNJBNZYSUVWDMO");
    msg.value = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.6505794918796343);
    msg.setSource(20460U);
    msg.setSourceEntity(49U);
    msg.setDestination(15605U);
    msg.setDestinationEntity(68U);
    msg.name.assign("VSGRBLZBOQVVGPHVTEZBXDRMNLYJOLNLKZCNLKRUMDEASBZJUYYOOFIXNDZHLBJHFJFKJTTCOADUYEIGMVWJXGSEQPRSVCHTBOFESSCDKJNMXEIGITKCKAC");
    msg.value = 193U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.6517113031553708);
    msg.setSource(26613U);
    msg.setSourceEntity(55U);
    msg.setDestination(48079U);
    msg.setDestinationEntity(134U);
    msg.name.assign("ZYVBZVWGSIRGWMOQGJANYMEDODWSTJCKILTVOCRFWOVRXYBJENKQKCVXOPDRANBWUAMZVGWVGCTXSBIDQMFLBYNIQQROCFZKHMSZXUSQZFEUPPWLOLABEPJAIIHFWSVLJTDUHJCBRPVDDVH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.8118605863580685);
    msg.setSource(10806U);
    msg.setSourceEntity(125U);
    msg.setDestination(35625U);
    msg.setDestinationEntity(121U);
    msg.name.assign("RHNJJPTHDWCQGRDFKUALZZGORYKSMKOJWVUUVHJLGTPWSRCYVAEKGFHDGCWTIRGAAZJAECXKRJYPKOIDIXHLZOBLITBDBQUKLVTNYFEHZBMKZASGVB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.3506968571569925);
    msg.setSource(56094U);
    msg.setSourceEntity(10U);
    msg.setDestination(1852U);
    msg.setDestinationEntity(174U);
    msg.name.assign("BMCCMTBZBICCQRTPTYCWYSZLGRFCYIIRAUOABQGRAVPLMOTHWGJNSDSGLQYIVXKDQSYKVZLMOWHOUGPURKJKAXYIPXNZUYTBMVUFJWCEHXWFXDDFEPWEYQRSZEDNPJKVVHSEGRVBCKNPKSBGXGAMLZJHQOUBDDFUNJHILXPJVLWOAWFADWTINREQOUGJAHIGEASLIMV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.5906095681516843);
    msg.setSource(7273U);
    msg.setSourceEntity(208U);
    msg.setDestination(47730U);
    msg.setDestinationEntity(225U);
    msg.name.assign("WZQTAMITVWTUZCVJAASLCKRLUTFPWP");
    msg.value = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.8615869006838951);
    msg.setSource(49084U);
    msg.setSourceEntity(185U);
    msg.setDestination(32741U);
    msg.setDestinationEntity(41U);
    msg.name.assign("ZRSZCOPWSRSQAECJLCXPCWAJNTWBPRSLYVQTKRXQNSHOFVDEIDEGCWDHJCZVTKAQYYREMMZYWRSCHAKFVLNJBSGAWFFUNRUZHMGIKDVZWGPPEXVTBAWVERDYGHSFFJKBTXVMYJOETBVLSKUFGLPXNGIXDMOJGLM");
    msg.value = 99U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.05814512605018374);
    msg.setSource(21156U);
    msg.setSourceEntity(38U);
    msg.setDestination(60906U);
    msg.setDestinationEntity(244U);
    msg.name.assign("JPEPGNXBENPEIBPOKEHJGOBEPUTDLXJFTXVWAQCTECTSHSYGUWFIAFEQXNCLUNBCZUYKIRFVDSROTKURGZNBHLORKGJYAL");
    msg.value = 239U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.7968657935779184);
    msg.setSource(41609U);
    msg.setSourceEntity(104U);
    msg.setDestination(65045U);
    msg.setDestinationEntity(125U);
    msg.id = 154U;
    msg.period = 3406759261U;
    msg.duty_cycle = 3020252640U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.7043474788930822);
    msg.setSource(16053U);
    msg.setSourceEntity(159U);
    msg.setDestination(55938U);
    msg.setDestinationEntity(44U);
    msg.id = 213U;
    msg.period = 3225056615U;
    msg.duty_cycle = 3651826338U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.44548549028688056);
    msg.setSource(55603U);
    msg.setSourceEntity(112U);
    msg.setDestination(58638U);
    msg.setDestinationEntity(155U);
    msg.id = 207U;
    msg.period = 1074335320U;
    msg.duty_cycle = 3802449542U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.6241947586633906);
    msg.setSource(23138U);
    msg.setSourceEntity(113U);
    msg.setDestination(44332U);
    msg.setDestinationEntity(63U);
    msg.id = 232U;
    msg.period = 2700647490U;
    msg.duty_cycle = 3579262405U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.574172760261293);
    msg.setSource(45119U);
    msg.setSourceEntity(46U);
    msg.setDestination(5907U);
    msg.setDestinationEntity(153U);
    msg.id = 164U;
    msg.period = 359380699U;
    msg.duty_cycle = 1116606506U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.22697236000561793);
    msg.setSource(4620U);
    msg.setSourceEntity(135U);
    msg.setDestination(61581U);
    msg.setDestinationEntity(232U);
    msg.id = 120U;
    msg.period = 3771930763U;
    msg.duty_cycle = 2298227091U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.11159265392199968);
    msg.setSource(63102U);
    msg.setSourceEntity(214U);
    msg.setDestination(22201U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.11977218691811053;
    msg.lon = 0.8997126381685392;
    msg.height = 0.4035584159798502;
    msg.x = 0.3749728253680481;
    msg.y = 0.7495042289788241;
    msg.z = 0.22022184907765885;
    msg.phi = 0.9317280818455409;
    msg.theta = 0.47420604699371927;
    msg.psi = 0.01894539883808355;
    msg.u = 0.12871971941908966;
    msg.v = 0.6981160168184631;
    msg.w = 0.4373706128233886;
    msg.vx = 0.42608368357465987;
    msg.vy = 0.19550103170368094;
    msg.vz = 0.160164908939882;
    msg.p = 0.8640623431481107;
    msg.q = 0.9142933923198489;
    msg.r = 0.7738174464010514;
    msg.depth = 0.5406556172204898;
    msg.alt = 0.7645811512600829;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.8027167665610065);
    msg.setSource(35898U);
    msg.setSourceEntity(141U);
    msg.setDestination(37991U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.6342573263708201;
    msg.lon = 0.28358416386098917;
    msg.height = 0.5562773086998571;
    msg.x = 0.10398126031534138;
    msg.y = 0.17521527006402626;
    msg.z = 0.9789533171611281;
    msg.phi = 0.31341547242123846;
    msg.theta = 0.28217147394171516;
    msg.psi = 0.1296543457247218;
    msg.u = 0.7999517278194456;
    msg.v = 0.5975651035601277;
    msg.w = 0.88106015849094;
    msg.vx = 0.740119026112459;
    msg.vy = 0.37476820346181894;
    msg.vz = 0.4159879240324734;
    msg.p = 0.16799221065100978;
    msg.q = 0.5763225789795845;
    msg.r = 0.7485593194348018;
    msg.depth = 0.2928315828180451;
    msg.alt = 0.16301768555476204;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.903642040557001);
    msg.setSource(2111U);
    msg.setSourceEntity(49U);
    msg.setDestination(45371U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.7927601771994458;
    msg.lon = 0.3764185107129605;
    msg.height = 0.5684187041041053;
    msg.x = 0.8661340695676337;
    msg.y = 0.5566659857588843;
    msg.z = 0.7426445593726373;
    msg.phi = 0.7602518329953298;
    msg.theta = 0.34256985806961693;
    msg.psi = 0.0029596761452995723;
    msg.u = 0.6594395913481517;
    msg.v = 0.4823084243378726;
    msg.w = 0.9963429079148316;
    msg.vx = 0.5665912799561778;
    msg.vy = 0.6125225904959964;
    msg.vz = 0.20279883300962365;
    msg.p = 0.18250641607596108;
    msg.q = 0.7332859091566329;
    msg.r = 0.7435683364729859;
    msg.depth = 0.38708685140161103;
    msg.alt = 0.3124843052589241;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.638962772860082);
    msg.setSource(55691U);
    msg.setSourceEntity(14U);
    msg.setDestination(42005U);
    msg.setDestinationEntity(22U);
    msg.x = 0.012967778337047653;
    msg.y = 0.9765439538409914;
    msg.z = 0.5332040279756033;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.3694388204879038);
    msg.setSource(19508U);
    msg.setSourceEntity(13U);
    msg.setDestination(7025U);
    msg.setDestinationEntity(240U);
    msg.x = 0.6681313777628054;
    msg.y = 0.8129509988450483;
    msg.z = 0.6032018422896411;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.5840752059846988);
    msg.setSource(17948U);
    msg.setSourceEntity(85U);
    msg.setDestination(51699U);
    msg.setDestinationEntity(243U);
    msg.x = 0.5555119368072102;
    msg.y = 0.5623974992468526;
    msg.z = 0.9832148595698715;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.762505159200867);
    msg.setSource(26635U);
    msg.setSourceEntity(254U);
    msg.setDestination(13483U);
    msg.setDestinationEntity(120U);
    msg.value = 0.4811378540064347;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.24939647498846007);
    msg.setSource(31462U);
    msg.setSourceEntity(207U);
    msg.setDestination(22162U);
    msg.setDestinationEntity(243U);
    msg.value = 0.916294265980663;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.1105123470666779);
    msg.setSource(53842U);
    msg.setSourceEntity(199U);
    msg.setDestination(13939U);
    msg.setDestinationEntity(108U);
    msg.value = 0.5644994109191029;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.6728956572709863);
    msg.setSource(45834U);
    msg.setSourceEntity(70U);
    msg.setDestination(19388U);
    msg.setDestinationEntity(235U);
    msg.value = 0.28374149898668544;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.8747559582786639);
    msg.setSource(11698U);
    msg.setSourceEntity(250U);
    msg.setDestination(29828U);
    msg.setDestinationEntity(242U);
    msg.value = 0.5034940403133348;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.7839108083004132);
    msg.setSource(13443U);
    msg.setSourceEntity(128U);
    msg.setDestination(6600U);
    msg.setDestinationEntity(29U);
    msg.value = 0.12192632256810454;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.15384192238618855);
    msg.setSource(43890U);
    msg.setSourceEntity(72U);
    msg.setDestination(48877U);
    msg.setDestinationEntity(53U);
    msg.x = 0.817814752833619;
    msg.y = 0.026423920334507134;
    msg.z = 0.16609546635726768;
    msg.phi = 0.634169946106333;
    msg.theta = 0.5498457463207413;
    msg.psi = 0.5803942585116673;
    msg.p = 0.6370381019500382;
    msg.q = 0.4794089784167984;
    msg.r = 0.7068799167370687;
    msg.u = 0.4985369476694089;
    msg.v = 0.8774018425215773;
    msg.w = 0.11238548426459172;
    msg.bias_psi = 0.45910282161899196;
    msg.bias_r = 0.5605926529208717;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.6967932796860371);
    msg.setSource(45887U);
    msg.setSourceEntity(116U);
    msg.setDestination(26715U);
    msg.setDestinationEntity(128U);
    msg.x = 0.9818864381012606;
    msg.y = 0.20567494883474968;
    msg.z = 0.27020629767823545;
    msg.phi = 0.8830466389303961;
    msg.theta = 0.7655375629055275;
    msg.psi = 0.3656151473674013;
    msg.p = 0.8424438568660529;
    msg.q = 0.7479703828383243;
    msg.r = 0.7191034947920856;
    msg.u = 0.6592151674981409;
    msg.v = 0.34157363862804535;
    msg.w = 0.7268405833289089;
    msg.bias_psi = 0.08944047967879087;
    msg.bias_r = 0.1091621848064871;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.8419907033151406);
    msg.setSource(1055U);
    msg.setSourceEntity(56U);
    msg.setDestination(26941U);
    msg.setDestinationEntity(155U);
    msg.x = 0.34052044700155704;
    msg.y = 0.7994840795541404;
    msg.z = 0.3125495244366594;
    msg.phi = 0.10296487251165631;
    msg.theta = 0.6660452598436744;
    msg.psi = 0.9351418146319418;
    msg.p = 0.03962032692706019;
    msg.q = 0.43097253753871445;
    msg.r = 0.029161141153545622;
    msg.u = 0.08043991139156015;
    msg.v = 0.5840120807941407;
    msg.w = 0.9265042607685953;
    msg.bias_psi = 0.8413979421483231;
    msg.bias_r = 0.6899029582114503;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.8509908753963877);
    msg.setSource(8831U);
    msg.setSourceEntity(28U);
    msg.setDestination(51601U);
    msg.setDestinationEntity(9U);
    msg.bias_psi = 0.803669727837316;
    msg.bias_r = 0.3190648634094706;
    msg.cog = 0.9196934079683574;
    msg.cyaw = 0.4806735441732747;
    msg.lbl_rej_level = 0.34481416928838515;
    msg.gps_rej_level = 0.34032732066617954;
    msg.custom_x = 0.8105131031452689;
    msg.custom_y = 0.06818091539686477;
    msg.custom_z = 0.6195204539383299;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.5627173056530401);
    msg.setSource(55486U);
    msg.setSourceEntity(181U);
    msg.setDestination(34922U);
    msg.setDestinationEntity(21U);
    msg.bias_psi = 0.8609656651930028;
    msg.bias_r = 0.8743348110896799;
    msg.cog = 0.5277294242821722;
    msg.cyaw = 0.3995511316563477;
    msg.lbl_rej_level = 0.20081342813635916;
    msg.gps_rej_level = 0.18240602004334605;
    msg.custom_x = 0.5204076004760892;
    msg.custom_y = 0.012274836831164815;
    msg.custom_z = 0.9664995290141888;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.11086638356340461);
    msg.setSource(11429U);
    msg.setSourceEntity(245U);
    msg.setDestination(17204U);
    msg.setDestinationEntity(168U);
    msg.bias_psi = 0.003941781896903973;
    msg.bias_r = 0.9650892588584621;
    msg.cog = 0.3684176617342937;
    msg.cyaw = 0.35160600335880343;
    msg.lbl_rej_level = 0.4127064998309138;
    msg.gps_rej_level = 0.8924238920740867;
    msg.custom_x = 0.14085705527074766;
    msg.custom_y = 0.7440452130858419;
    msg.custom_z = 0.7359128956409987;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.7595664824782337);
    msg.setSource(3851U);
    msg.setSourceEntity(152U);
    msg.setDestination(57407U);
    msg.setDestinationEntity(175U);
    msg.utc_time = 0.7112622006262023;
    msg.reason = 114U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.012288933423838633);
    msg.setSource(57766U);
    msg.setSourceEntity(55U);
    msg.setDestination(3115U);
    msg.setDestinationEntity(87U);
    msg.utc_time = 0.14434024062277373;
    msg.reason = 136U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.905926084272953);
    msg.setSource(36064U);
    msg.setSourceEntity(254U);
    msg.setDestination(54973U);
    msg.setDestinationEntity(36U);
    msg.utc_time = 0.6805144400202022;
    msg.reason = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.4308423761698724);
    msg.setSource(59286U);
    msg.setSourceEntity(105U);
    msg.setDestination(32323U);
    msg.setDestinationEntity(213U);
    msg.id = 94U;
    msg.range = 0.6256951004811037;
    msg.acceptance = 17U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.8856478300412004);
    msg.setSource(27875U);
    msg.setSourceEntity(54U);
    msg.setDestination(33923U);
    msg.setDestinationEntity(117U);
    msg.id = 153U;
    msg.range = 0.17289019599249855;
    msg.acceptance = 80U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.08506786672183686);
    msg.setSource(21727U);
    msg.setSourceEntity(234U);
    msg.setDestination(20946U);
    msg.setDestinationEntity(36U);
    msg.id = 111U;
    msg.range = 0.05833359050718345;
    msg.acceptance = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.4973185303763038);
    msg.setSource(43738U);
    msg.setSourceEntity(141U);
    msg.setDestination(42871U);
    msg.setDestinationEntity(87U);
    msg.type = 251U;
    msg.reason = 26U;
    msg.value = 0.8424668551203056;
    msg.timestep = 0.7902276608271154;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.8929574279746724);
    msg.setSource(44889U);
    msg.setSourceEntity(122U);
    msg.setDestination(32219U);
    msg.setDestinationEntity(107U);
    msg.type = 171U;
    msg.reason = 177U;
    msg.value = 0.7579400417921616;
    msg.timestep = 0.9460829782022896;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.6541988634655437);
    msg.setSource(16927U);
    msg.setSourceEntity(114U);
    msg.setDestination(12937U);
    msg.setDestinationEntity(167U);
    msg.type = 202U;
    msg.reason = 60U;
    msg.value = 0.905045893314442;
    msg.timestep = 0.07250640903209171;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.46216157465174923);
    msg.setSource(39927U);
    msg.setSourceEntity(99U);
    msg.setDestination(30840U);
    msg.setDestinationEntity(254U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LRDMPTKHJZMUBPBEEURTXYFRIDCWDFPIHPOYZRHVBPIJVRQOSEZZFGVIJJFVQJKNASNWTGMJXCFRPWDDCNSQMHQSARLWOYUZKXGGLIMQWQNVEIRGMBHWNKEHXCPESCWQNKEKUUOOFUHGYBCLEFIVFKYTBPYSAXY");
    tmp_msg_0.lat = 0.8220762415394083;
    tmp_msg_0.lon = 0.09068022480720872;
    tmp_msg_0.depth = 0.3322659510239414;
    tmp_msg_0.query_channel = 122U;
    tmp_msg_0.reply_channel = 176U;
    tmp_msg_0.transponder_delay = 180U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.48512445237228796;
    msg.y = 0.44425626886851954;
    msg.var_x = 0.5819847188696333;
    msg.var_y = 0.43563060115031993;
    msg.distance = 0.6094759702199393;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.9595659052533406);
    msg.setSource(63977U);
    msg.setSourceEntity(20U);
    msg.setDestination(42358U);
    msg.setDestinationEntity(106U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IWUCWFUPNEFASXCGYWASSLIUOTGVNPCVRQEAMZOSSBXDWBLQNXQEZBBMPWFVYPGLOIQGPQUIICZNEYOHPVDNOAUQHPJNGSXIDLYBXNFAREDZGVZUJYXEXFMLHHGYKDKDOGKWEKHOHJQFJJGJKCZBQQCEPSTRPURVWHNFZKYRFDDMEHATTTLZBTBDOINTVKRLZHMAXVMMMVXVCLIJWXRABRIOYFR");
    tmp_msg_0.lat = 0.8221579818696303;
    tmp_msg_0.lon = 0.35454879336211276;
    tmp_msg_0.depth = 0.41313559352928975;
    tmp_msg_0.query_channel = 189U;
    tmp_msg_0.reply_channel = 133U;
    tmp_msg_0.transponder_delay = 224U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.12447584535772604;
    msg.y = 0.9832532782820194;
    msg.var_x = 0.5021051879049095;
    msg.var_y = 0.18629514902069277;
    msg.distance = 0.696537042496122;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.9252751468280646);
    msg.setSource(42812U);
    msg.setSourceEntity(191U);
    msg.setDestination(27323U);
    msg.setDestinationEntity(211U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YLVXJUKFAQPKPQJGVAECYJDKARCXLEEWFIDXVOVCGMPPTZNFHZKXKOMZXCNWDBRXHBLKRVJQMJGSAXYXHXBOKGFYQFRVFWAHSMUYEBSIDAUYDUKBNEWSMFYIGPWLKDWZBHLIH");
    tmp_msg_0.lat = 0.4971289420912516;
    tmp_msg_0.lon = 0.9184674366079502;
    tmp_msg_0.depth = 0.7359991139509672;
    tmp_msg_0.query_channel = 230U;
    tmp_msg_0.reply_channel = 170U;
    tmp_msg_0.transponder_delay = 94U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8012104776422638;
    msg.y = 0.9277829954415984;
    msg.var_x = 0.30132858570970533;
    msg.var_y = 0.1944656547147966;
    msg.distance = 0.21675806175508971;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.15639227492464425);
    msg.setSource(34429U);
    msg.setSourceEntity(38U);
    msg.setDestination(23023U);
    msg.setDestinationEntity(4U);
    msg.state = 166U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.5920864928857416);
    msg.setSource(27354U);
    msg.setSourceEntity(40U);
    msg.setDestination(29956U);
    msg.setDestinationEntity(179U);
    msg.state = 238U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.10638821136666532);
    msg.setSource(1773U);
    msg.setSourceEntity(61U);
    msg.setDestination(14375U);
    msg.setDestinationEntity(0U);
    msg.state = 21U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.42862347836519366);
    msg.setSource(17776U);
    msg.setSourceEntity(25U);
    msg.setDestination(65224U);
    msg.setDestinationEntity(93U);
    msg.x = 0.31160664266889826;
    msg.y = 0.31559050069086014;
    msg.z = 0.14198456460234432;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.8256001238320585);
    msg.setSource(3948U);
    msg.setSourceEntity(30U);
    msg.setDestination(39628U);
    msg.setDestinationEntity(49U);
    msg.x = 0.32419590858068714;
    msg.y = 0.35235759075628414;
    msg.z = 0.012121408601538874;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.46381897246289105);
    msg.setSource(26916U);
    msg.setSourceEntity(112U);
    msg.setDestination(2695U);
    msg.setDestinationEntity(67U);
    msg.x = 0.7856582240911804;
    msg.y = 0.4686883085590984;
    msg.z = 0.1404892799056786;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.49025324100353496);
    msg.setSource(16059U);
    msg.setSourceEntity(217U);
    msg.setDestination(18473U);
    msg.setDestinationEntity(18U);
    msg.va = 0.6192542819007109;
    msg.aoa = 0.6428186651694018;
    msg.ssa = 0.2357032420602122;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.16121002647004745);
    msg.setSource(40944U);
    msg.setSourceEntity(100U);
    msg.setDestination(40564U);
    msg.setDestinationEntity(137U);
    msg.va = 0.4224139069617875;
    msg.aoa = 0.2742709500133462;
    msg.ssa = 0.8160618610090453;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.38708315578717967);
    msg.setSource(25310U);
    msg.setSourceEntity(112U);
    msg.setDestination(21364U);
    msg.setDestinationEntity(247U);
    msg.va = 0.06625032756189464;
    msg.aoa = 0.3982721275518091;
    msg.ssa = 0.8601274180167511;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.31727866090197787);
    msg.setSource(20888U);
    msg.setSourceEntity(149U);
    msg.setDestination(42546U);
    msg.setDestinationEntity(76U);
    msg.value = 0.0016022789229995782;
    msg.off = 0.8675997304831145;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.7781447934574509);
    msg.setSource(28884U);
    msg.setSourceEntity(52U);
    msg.setDestination(51432U);
    msg.setDestinationEntity(228U);
    msg.value = 0.034127792632760334;
    msg.off = 0.550893590690049;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.5641201632643513);
    msg.setSource(54334U);
    msg.setSourceEntity(24U);
    msg.setDestination(64090U);
    msg.setDestinationEntity(156U);
    msg.value = 0.16416442560387623;
    msg.off = 0.18041710498392083;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.7572877124710444);
    msg.setSource(34398U);
    msg.setSourceEntity(60U);
    msg.setDestination(8012U);
    msg.setDestinationEntity(238U);
    msg.value = 0.3418691153473059;
    msg.z_units = 195U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.9489586486395458);
    msg.setSource(20881U);
    msg.setSourceEntity(82U);
    msg.setDestination(47496U);
    msg.setDestinationEntity(114U);
    msg.value = 0.5885173874396027;
    msg.z_units = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.5452216887727805);
    msg.setSource(10335U);
    msg.setSourceEntity(40U);
    msg.setDestination(34991U);
    msg.setDestinationEntity(113U);
    msg.value = 0.3859390484589377;
    msg.z_units = 181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.46282621415014114);
    msg.setSource(48317U);
    msg.setSourceEntity(179U);
    msg.setDestination(52979U);
    msg.setDestinationEntity(20U);
    msg.value = 0.7302290762380638;
    msg.speed_units = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.5127027293596925);
    msg.setSource(49379U);
    msg.setSourceEntity(144U);
    msg.setDestination(50566U);
    msg.setDestinationEntity(121U);
    msg.value = 0.28107077240331435;
    msg.speed_units = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.037414180192470003);
    msg.setSource(11289U);
    msg.setSourceEntity(75U);
    msg.setDestination(40002U);
    msg.setDestinationEntity(109U);
    msg.value = 0.9314084240263978;
    msg.speed_units = 22U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.6363438508002782);
    msg.setSource(44954U);
    msg.setSourceEntity(169U);
    msg.setDestination(65298U);
    msg.setDestinationEntity(226U);
    msg.value = 0.5021004126702071;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.44102049254789144);
    msg.setSource(40110U);
    msg.setSourceEntity(168U);
    msg.setDestination(8154U);
    msg.setDestinationEntity(21U);
    msg.value = 0.6109966169372868;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.8911087452431095);
    msg.setSource(7934U);
    msg.setSourceEntity(105U);
    msg.setDestination(34973U);
    msg.setDestinationEntity(170U);
    msg.value = 0.2841389172935901;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.18431721044032645);
    msg.setSource(7261U);
    msg.setSourceEntity(108U);
    msg.setDestination(35602U);
    msg.setDestinationEntity(92U);
    msg.value = 0.9468420909554169;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.2976451542018309);
    msg.setSource(55477U);
    msg.setSourceEntity(87U);
    msg.setDestination(28744U);
    msg.setDestinationEntity(228U);
    msg.value = 0.15636350829290813;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.05233264777839863);
    msg.setSource(14185U);
    msg.setSourceEntity(42U);
    msg.setDestination(34787U);
    msg.setDestinationEntity(177U);
    msg.value = 0.40270348293238933;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.7575485034458794);
    msg.setSource(29344U);
    msg.setSourceEntity(90U);
    msg.setDestination(9707U);
    msg.setDestinationEntity(74U);
    msg.value = 0.7951268866772794;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.9093270319767235);
    msg.setSource(34022U);
    msg.setSourceEntity(79U);
    msg.setDestination(25661U);
    msg.setDestinationEntity(75U);
    msg.value = 0.0915729515886986;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.3343210855850227);
    msg.setSource(25420U);
    msg.setSourceEntity(223U);
    msg.setDestination(64591U);
    msg.setDestinationEntity(88U);
    msg.value = 0.7731066964765938;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.1541390403606282);
    msg.setSource(26998U);
    msg.setSourceEntity(189U);
    msg.setDestination(41357U);
    msg.setDestinationEntity(73U);
    msg.path_ref = 1356101582U;
    msg.start_lat = 0.06218430319045043;
    msg.start_lon = 0.5881614791055949;
    msg.start_z = 0.4812355951572077;
    msg.start_z_units = 144U;
    msg.end_lat = 0.12884865391085742;
    msg.end_lon = 0.34968153118266987;
    msg.end_z = 0.14323710612872098;
    msg.end_z_units = 209U;
    msg.speed = 0.609162831475224;
    msg.speed_units = 48U;
    msg.lradius = 0.5880428864396153;
    msg.flags = 243U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.7917243980521201);
    msg.setSource(15796U);
    msg.setSourceEntity(15U);
    msg.setDestination(46286U);
    msg.setDestinationEntity(219U);
    msg.path_ref = 939560536U;
    msg.start_lat = 0.8202832500230473;
    msg.start_lon = 0.3448314650224805;
    msg.start_z = 0.4621416808580998;
    msg.start_z_units = 108U;
    msg.end_lat = 0.4100581570659647;
    msg.end_lon = 0.07828673184431167;
    msg.end_z = 0.6826197574915319;
    msg.end_z_units = 122U;
    msg.speed = 0.17280547313427363;
    msg.speed_units = 196U;
    msg.lradius = 0.9615844145378102;
    msg.flags = 51U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.18738061278555518);
    msg.setSource(12618U);
    msg.setSourceEntity(222U);
    msg.setDestination(60292U);
    msg.setDestinationEntity(252U);
    msg.path_ref = 2826792661U;
    msg.start_lat = 0.08755256108202303;
    msg.start_lon = 0.24221898944358677;
    msg.start_z = 0.3657042064764099;
    msg.start_z_units = 106U;
    msg.end_lat = 0.38797122330467493;
    msg.end_lon = 0.0712734096728842;
    msg.end_z = 0.5237883311223372;
    msg.end_z_units = 162U;
    msg.speed = 0.5665740275966251;
    msg.speed_units = 124U;
    msg.lradius = 0.5512399450614422;
    msg.flags = 160U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.49755364121542756);
    msg.setSource(27059U);
    msg.setSourceEntity(35U);
    msg.setDestination(31128U);
    msg.setDestinationEntity(158U);
    msg.x = 0.902914132016456;
    msg.y = 0.6964200460057373;
    msg.z = 0.11206514208511531;
    msg.k = 0.8089982946760231;
    msg.m = 0.481789215752806;
    msg.n = 0.02915791747927854;
    msg.flags = 56U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.7314281206049867);
    msg.setSource(471U);
    msg.setSourceEntity(109U);
    msg.setDestination(11833U);
    msg.setDestinationEntity(25U);
    msg.x = 0.2300115952259726;
    msg.y = 0.26181104795233634;
    msg.z = 0.7092149813711763;
    msg.k = 0.9159645686074376;
    msg.m = 0.9479991694415091;
    msg.n = 0.04380380305631659;
    msg.flags = 182U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.44604425683938287);
    msg.setSource(22549U);
    msg.setSourceEntity(200U);
    msg.setDestination(56555U);
    msg.setDestinationEntity(94U);
    msg.x = 0.3358175062685681;
    msg.y = 0.9786453178952045;
    msg.z = 0.804311958790336;
    msg.k = 0.43904431213939155;
    msg.m = 0.7988263723374697;
    msg.n = 0.8334856426967461;
    msg.flags = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.8075185711411889);
    msg.setSource(12965U);
    msg.setSourceEntity(164U);
    msg.setDestination(2066U);
    msg.setDestinationEntity(128U);
    msg.value = 0.4718326216708293;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.7511001481942222);
    msg.setSource(38510U);
    msg.setSourceEntity(189U);
    msg.setDestination(47065U);
    msg.setDestinationEntity(175U);
    msg.value = 0.9843993930940066;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.5441645845207899);
    msg.setSource(21477U);
    msg.setSourceEntity(64U);
    msg.setDestination(31276U);
    msg.setDestinationEntity(115U);
    msg.value = 0.908756724498348;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.6315909723360579);
    msg.setSource(48981U);
    msg.setSourceEntity(130U);
    msg.setDestination(23666U);
    msg.setDestinationEntity(26U);
    msg.u = 0.9070317136493155;
    msg.v = 0.9617934339197052;
    msg.w = 0.7921989802095791;
    msg.p = 0.8915524789540388;
    msg.q = 0.9080349089461685;
    msg.r = 0.27283979464132224;
    msg.flags = 38U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.5288949220385868);
    msg.setSource(49846U);
    msg.setSourceEntity(235U);
    msg.setDestination(33370U);
    msg.setDestinationEntity(2U);
    msg.u = 0.33024878869459595;
    msg.v = 0.05433400793127918;
    msg.w = 0.2705697907489677;
    msg.p = 0.38040372301374703;
    msg.q = 0.021624427715825623;
    msg.r = 0.6178086900749571;
    msg.flags = 174U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.010023503138582024);
    msg.setSource(35589U);
    msg.setSourceEntity(157U);
    msg.setDestination(14018U);
    msg.setDestinationEntity(100U);
    msg.u = 0.9047874987630328;
    msg.v = 0.9249213413160656;
    msg.w = 0.9436133092346292;
    msg.p = 0.658506767633928;
    msg.q = 0.2036529976767677;
    msg.r = 0.6817063864216508;
    msg.flags = 13U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.9456452393310713);
    msg.setSource(25806U);
    msg.setSourceEntity(9U);
    msg.setDestination(60826U);
    msg.setDestinationEntity(185U);
    msg.path_ref = 2375103798U;
    msg.start_lat = 0.7509560620210344;
    msg.start_lon = 0.6951767413334575;
    msg.start_z = 0.05040254417049117;
    msg.start_z_units = 113U;
    msg.end_lat = 0.8537086715365694;
    msg.end_lon = 0.8566871890671861;
    msg.end_z = 0.7197661977552614;
    msg.end_z_units = 196U;
    msg.lradius = 0.9763592896713262;
    msg.flags = 114U;
    msg.x = 0.03452404134820153;
    msg.y = 0.7222853884356157;
    msg.z = 0.9448835279669736;
    msg.vx = 0.9814308297538715;
    msg.vy = 0.5259129966764515;
    msg.vz = 0.903022297484622;
    msg.course_error = 0.6575446254955318;
    msg.eta = 9633U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.5865306826257332);
    msg.setSource(24458U);
    msg.setSourceEntity(207U);
    msg.setDestination(25753U);
    msg.setDestinationEntity(168U);
    msg.path_ref = 3954297871U;
    msg.start_lat = 0.2788874622749582;
    msg.start_lon = 0.13212488290349056;
    msg.start_z = 0.94094761989325;
    msg.start_z_units = 87U;
    msg.end_lat = 0.4192393053082518;
    msg.end_lon = 0.48697755851932545;
    msg.end_z = 0.9777185714153548;
    msg.end_z_units = 134U;
    msg.lradius = 0.8780535892168254;
    msg.flags = 27U;
    msg.x = 0.9558118953082879;
    msg.y = 0.5382803013682719;
    msg.z = 0.9346915302060795;
    msg.vx = 0.5887053480950566;
    msg.vy = 0.7944555375230411;
    msg.vz = 0.29346991677823886;
    msg.course_error = 0.6612502698363943;
    msg.eta = 57293U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.9363335832303572);
    msg.setSource(55973U);
    msg.setSourceEntity(94U);
    msg.setDestination(9717U);
    msg.setDestinationEntity(226U);
    msg.path_ref = 2324093380U;
    msg.start_lat = 0.5216395493057702;
    msg.start_lon = 0.37039896331949307;
    msg.start_z = 0.1590442089964833;
    msg.start_z_units = 170U;
    msg.end_lat = 0.6398715323014661;
    msg.end_lon = 0.9832617715776457;
    msg.end_z = 0.34241359902797897;
    msg.end_z_units = 181U;
    msg.lradius = 0.29563490593972364;
    msg.flags = 195U;
    msg.x = 0.9068680084689817;
    msg.y = 0.6085653012652708;
    msg.z = 0.5080799458671715;
    msg.vx = 0.16490495435781172;
    msg.vy = 0.8705882548790673;
    msg.vz = 0.8085018545586684;
    msg.course_error = 0.5427531618901137;
    msg.eta = 19538U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.5223226164752705);
    msg.setSource(3970U);
    msg.setSourceEntity(110U);
    msg.setDestination(49299U);
    msg.setDestinationEntity(127U);
    msg.k = 0.3306439987145843;
    msg.m = 0.5307817259542075;
    msg.n = 0.628889428370737;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.717370966065656);
    msg.setSource(23996U);
    msg.setSourceEntity(145U);
    msg.setDestination(24372U);
    msg.setDestinationEntity(6U);
    msg.k = 0.46190921508030247;
    msg.m = 0.11657878418899459;
    msg.n = 0.11913768270425928;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.08111592493363384);
    msg.setSource(61517U);
    msg.setSourceEntity(191U);
    msg.setDestination(22928U);
    msg.setDestinationEntity(50U);
    msg.k = 0.4973782227979393;
    msg.m = 0.6312581761247908;
    msg.n = 0.3000144427210163;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.8045074001084259);
    msg.setSource(1526U);
    msg.setSourceEntity(25U);
    msg.setDestination(12828U);
    msg.setDestinationEntity(4U);
    msg.p = 0.36770724596846494;
    msg.i = 0.48030990765785486;
    msg.d = 0.6564490808583384;
    msg.a = 0.11055519059321184;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.905076497574338);
    msg.setSource(8653U);
    msg.setSourceEntity(233U);
    msg.setDestination(36553U);
    msg.setDestinationEntity(62U);
    msg.p = 0.5756600314948137;
    msg.i = 0.1665778006500207;
    msg.d = 0.6033490252676909;
    msg.a = 0.8529175457263894;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.15968312546766172);
    msg.setSource(45685U);
    msg.setSourceEntity(237U);
    msg.setDestination(57231U);
    msg.setDestinationEntity(213U);
    msg.p = 0.7451117819643861;
    msg.i = 0.2694744476261115;
    msg.d = 0.0900527105045249;
    msg.a = 0.28669554516418705;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.3356865199395218);
    msg.setSource(36887U);
    msg.setSourceEntity(49U);
    msg.setDestination(13073U);
    msg.setDestinationEntity(236U);
    msg.op = 7U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.04215749560745785);
    msg.setSource(30665U);
    msg.setSourceEntity(72U);
    msg.setDestination(46006U);
    msg.setDestinationEntity(124U);
    msg.op = 45U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.4651252909223177);
    msg.setSource(59473U);
    msg.setSourceEntity(184U);
    msg.setDestination(61929U);
    msg.setDestinationEntity(127U);
    msg.op = 2U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.34584658277975433);
    msg.setSource(33602U);
    msg.setSourceEntity(37U);
    msg.setDestination(3472U);
    msg.setDestinationEntity(99U);
    msg.x = 0.3802885572528779;
    msg.y = 0.5564522855807196;
    msg.z = 0.23809181210945762;
    msg.vx = 0.24739130188017078;
    msg.vy = 0.6062972652513371;
    msg.vz = 0.6998266399170425;
    msg.ax = 0.8275600641562586;
    msg.ay = 0.536443746850589;
    msg.az = 0.06612562578913339;
    msg.flags = 4623U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.06377026663456975);
    msg.setSource(21050U);
    msg.setSourceEntity(148U);
    msg.setDestination(19381U);
    msg.setDestinationEntity(60U);
    msg.x = 0.7715076786512346;
    msg.y = 0.669442810641044;
    msg.z = 0.39210218789891527;
    msg.vx = 0.009632635043151372;
    msg.vy = 0.21459090494357735;
    msg.vz = 0.9245320016009405;
    msg.ax = 0.5199108903887091;
    msg.ay = 0.39642807195150787;
    msg.az = 0.769572415167945;
    msg.flags = 25015U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.7598555746161262);
    msg.setSource(15452U);
    msg.setSourceEntity(239U);
    msg.setDestination(3437U);
    msg.setDestinationEntity(251U);
    msg.x = 0.7540574612771639;
    msg.y = 0.4987728929360734;
    msg.z = 0.2666198397335673;
    msg.vx = 0.19292567222729684;
    msg.vy = 0.18994751355596373;
    msg.vz = 0.9830379451494533;
    msg.ax = 0.8923532927127489;
    msg.ay = 0.6791329332159324;
    msg.az = 0.6912808399326413;
    msg.flags = 59931U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.7721007059432918);
    msg.setSource(35224U);
    msg.setSourceEntity(38U);
    msg.setDestination(27585U);
    msg.setDestinationEntity(141U);
    msg.value = 0.9001704707741452;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.6083017417595703);
    msg.setSource(38306U);
    msg.setSourceEntity(220U);
    msg.setDestination(62495U);
    msg.setDestinationEntity(229U);
    msg.value = 0.2815758624424992;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.08763647048230383);
    msg.setSource(18196U);
    msg.setSourceEntity(24U);
    msg.setDestination(20987U);
    msg.setDestinationEntity(41U);
    msg.value = 0.6603813316846234;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PeekDesiredPath msg;
    msg.setTimeStamp(0.5011459919272083);
    msg.setSource(210U);
    msg.setSourceEntity(68U);
    msg.setDestination(16171U);
    msg.setDestinationEntity(185U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 4192719033U;
    tmp_msg_0.start_lat = 0.9599075302889725;
    tmp_msg_0.start_lon = 0.8035730573508981;
    tmp_msg_0.start_z = 0.33092966355200126;
    tmp_msg_0.start_z_units = 248U;
    tmp_msg_0.end_lat = 0.6138113229318548;
    tmp_msg_0.end_lon = 0.34738569390357876;
    tmp_msg_0.end_z = 0.004585625434307183;
    tmp_msg_0.end_z_units = 0U;
    tmp_msg_0.speed = 0.9405454987275643;
    tmp_msg_0.speed_units = 100U;
    tmp_msg_0.lradius = 0.971491435184759;
    tmp_msg_0.flags = 2U;
    msg.dpath.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PeekDesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PeekDesiredPath msg;
    msg.setTimeStamp(0.6451147693613694);
    msg.setSource(55025U);
    msg.setSourceEntity(41U);
    msg.setDestination(61007U);
    msg.setDestinationEntity(43U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1364712587U;
    tmp_msg_0.start_lat = 0.06454090549666491;
    tmp_msg_0.start_lon = 0.8478725375372098;
    tmp_msg_0.start_z = 0.8319868771376374;
    tmp_msg_0.start_z_units = 234U;
    tmp_msg_0.end_lat = 0.23044571136874958;
    tmp_msg_0.end_lon = 0.1494446860755949;
    tmp_msg_0.end_z = 0.489307859831948;
    tmp_msg_0.end_z_units = 96U;
    tmp_msg_0.speed = 0.10166652461493542;
    tmp_msg_0.speed_units = 59U;
    tmp_msg_0.lradius = 0.4336745332652726;
    tmp_msg_0.flags = 178U;
    msg.dpath.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PeekDesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PeekDesiredPath msg;
    msg.setTimeStamp(0.2088530877430712);
    msg.setSource(12730U);
    msg.setSourceEntity(208U);
    msg.setDestination(19218U);
    msg.setDestinationEntity(169U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 337776971U;
    tmp_msg_0.start_lat = 0.3748740670725449;
    tmp_msg_0.start_lon = 0.2265719437536895;
    tmp_msg_0.start_z = 0.3833195557504444;
    tmp_msg_0.start_z_units = 74U;
    tmp_msg_0.end_lat = 0.2690304466470055;
    tmp_msg_0.end_lon = 0.9512251490037106;
    tmp_msg_0.end_z = 0.8004378593804776;
    tmp_msg_0.end_z_units = 131U;
    tmp_msg_0.speed = 0.7247091568338058;
    tmp_msg_0.speed_units = 167U;
    tmp_msg_0.lradius = 0.9001674325013049;
    tmp_msg_0.flags = 109U;
    msg.dpath.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PeekDesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.6077945982298075);
    msg.setSource(32253U);
    msg.setSourceEntity(6U);
    msg.setDestination(4074U);
    msg.setDestinationEntity(75U);
    msg.timeout = 57511U;
    msg.lat = 0.06622781614198181;
    msg.lon = 0.03544266311996391;
    msg.z = 0.8283240331475542;
    msg.z_units = 162U;
    msg.speed = 0.758866572237341;
    msg.speed_units = 65U;
    msg.roll = 0.033011120623359536;
    msg.pitch = 0.8325063748705275;
    msg.yaw = 0.2535501473006019;
    msg.custom.assign("YSGTCWFPEICIXMTARGPOWTLEEBNCGFWZYNODCBKEXRVPYHECXLBYXDZAWRVIHJRLBBVHHLJMZDESQWHKSYOKGXGCEONKQGOSULPPMFZAYADGQPQZSTFFMJZYDNRBHIZOKOETRAVTEUMIIWLAKUJDHVUIHLPROFBQFQVTLAWSNFMCNNRTYVDKYDWVGPIPVNCXUQOSXTXVFLWJU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.2256909223188276);
    msg.setSource(36280U);
    msg.setSourceEntity(228U);
    msg.setDestination(50962U);
    msg.setDestinationEntity(183U);
    msg.timeout = 33555U;
    msg.lat = 0.9042303039532178;
    msg.lon = 0.0261988984801117;
    msg.z = 0.6109663672130706;
    msg.z_units = 229U;
    msg.speed = 0.375119172234038;
    msg.speed_units = 195U;
    msg.roll = 0.2774978845934646;
    msg.pitch = 0.31501053529415546;
    msg.yaw = 0.5709921527532784;
    msg.custom.assign("ZTNCXFTDPCIBVMDAQQYKGWHXLQZCRHYMAAVUERUYJPMILHEQROUXPQITRNUOFLUDJGKMTEEAYYYBMHZHYLMRSIYOAEUIZPWPXAJAKJZXVOOCPSBLVKANEGNCAPCCJLXRKBVXQTVEOHCBNJJXGLFSUTMQILP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.5626058545158905);
    msg.setSource(9562U);
    msg.setSourceEntity(71U);
    msg.setDestination(4089U);
    msg.setDestinationEntity(64U);
    msg.timeout = 6574U;
    msg.lat = 0.06922831865087442;
    msg.lon = 0.691094886840449;
    msg.z = 0.626974824900717;
    msg.z_units = 28U;
    msg.speed = 0.6489355601571187;
    msg.speed_units = 50U;
    msg.roll = 0.8554411955097327;
    msg.pitch = 0.9750403484645959;
    msg.yaw = 0.2714230978153368;
    msg.custom.assign("FVJEQSZAKLIEPRAEJJUTVOIBCHJLSPFLTRSUOABXBSCAFKBEFMFZHDUORKDNRVGVEQHFBMKCWOPYUZIWQNDPPXKMEJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.4462219042820339);
    msg.setSource(7522U);
    msg.setSourceEntity(174U);
    msg.setDestination(55400U);
    msg.setDestinationEntity(244U);
    msg.timeout = 55367U;
    msg.lat = 0.8335143043036474;
    msg.lon = 0.9144560950571992;
    msg.z = 0.1717568812614927;
    msg.z_units = 243U;
    msg.speed = 0.8506981587343012;
    msg.speed_units = 48U;
    msg.duration = 24541U;
    msg.radius = 0.546128663685931;
    msg.flags = 90U;
    msg.custom.assign("SUKSXCTGULIOGSXTDORHWQLEPXKLHIYAF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.3786889341720123);
    msg.setSource(36710U);
    msg.setSourceEntity(39U);
    msg.setDestination(61999U);
    msg.setDestinationEntity(81U);
    msg.timeout = 61409U;
    msg.lat = 0.6700395842176448;
    msg.lon = 0.7556305763699922;
    msg.z = 0.154937191759296;
    msg.z_units = 4U;
    msg.speed = 0.6804825021202249;
    msg.speed_units = 157U;
    msg.duration = 22329U;
    msg.radius = 0.2676560239930261;
    msg.flags = 133U;
    msg.custom.assign("EAIQAHAPGIARWITOMNDNRZIOWRYPZEUVQJPYGHVLKZBDVQZLLHYOQZBXFEIBXZFIHWHMUPITTJXRKXRETNXHZDJMSXLNBSZVNWRAWUUDNDGMKCOIFYLOXEEWJQCWCGZVUAIOGSHKQDNSCSZNWYBLJXFCUBMFTCMTQWUDORJUMUXGPAFVPNSCFLADKTCUKA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.8215809169070059);
    msg.setSource(46178U);
    msg.setSourceEntity(108U);
    msg.setDestination(44209U);
    msg.setDestinationEntity(127U);
    msg.timeout = 64083U;
    msg.lat = 0.45130011816981774;
    msg.lon = 0.10147144982259093;
    msg.z = 0.5900445717120104;
    msg.z_units = 155U;
    msg.speed = 0.6183532474570356;
    msg.speed_units = 166U;
    msg.duration = 47627U;
    msg.radius = 0.7969669503427836;
    msg.flags = 36U;
    msg.custom.assign("TPJVAVEIYRQBEMZFOBCZMEATKGAQPYARHPDHSESKXNGKEBUH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.43863290328913995);
    msg.setSource(36355U);
    msg.setSourceEntity(204U);
    msg.setDestination(1157U);
    msg.setDestinationEntity(184U);
    msg.custom.assign("GRWDTDOARXAJBFTMCJHIKBKDLDFSDJZVYROQHQGSMEXGKVZUKUROKVTEDJMQEVPYEGRKPGFPISVWIPAVYYMWBWFRUWTBSZHPZBITMBCTEGVMCZNGYYIOTLVLAJUOMTHHQLMQGMOHVXNRXFICUJXKIZJYHPADAQNJXGZMUZHLNURINCKGAOCHYPOSSWWJBLFYPJUOXEFTLBQXDIXNEECELRICLWS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.9890524915847299);
    msg.setSource(3701U);
    msg.setSourceEntity(216U);
    msg.setDestination(64124U);
    msg.setDestinationEntity(132U);
    msg.custom.assign("CVTCWQYQDEDEUHYFAPBAJNAHVPVDZUCRLMRYJAHRELXXFBJKPLEXQFPAGSHKGOMJNFHFCOCUT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.029686409549454673);
    msg.setSource(5177U);
    msg.setSourceEntity(212U);
    msg.setDestination(9868U);
    msg.setDestinationEntity(175U);
    msg.custom.assign("KBZTUWZXEJIYJMSIGJISHJYPQETXQQLAKBJMWWHLIUPLPNYTEKONQRXRXCUYGSXAHVGAYDPEPGUKQLMJCNQZTEMUCMMHPKAITOYVVNPCJUHRQSWNLPOMFFVKFLORTGKTSBLZOCAVYZHQSRBBQJHSOPAGNWOGDRSCUFOWFDZAAWXZSBDTWPDLVU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.19373738307853217);
    msg.setSource(47990U);
    msg.setSourceEntity(99U);
    msg.setDestination(11758U);
    msg.setDestinationEntity(204U);
    msg.timeout = 29301U;
    msg.lat = 0.20054991069131756;
    msg.lon = 0.18265456911219535;
    msg.z = 0.1974940813805368;
    msg.z_units = 210U;
    msg.duration = 44392U;
    msg.speed = 0.26977438574200907;
    msg.speed_units = 114U;
    msg.type = 132U;
    msg.radius = 0.6506534178203772;
    msg.length = 0.20892586712172223;
    msg.bearing = 0.841628469160173;
    msg.direction = 25U;
    msg.custom.assign("XHOMSIUSWSBDPEERDVHLBJAGJRMDZKZBQSWBWHPCXYHFJJQQLARUWHXZZFLGBMFWSOKEFDPWTXDRRXMHMGWXVVUFMJAEQILOKPGZDUYKSMNCNTOPRWDAVYDECQYGYWKIFIVXILLTNBUCZDSYNUQJXGTLZSLHTHRERSPKOYMFLETNBONKXIKBIPCRRCTQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.45866512031639506);
    msg.setSource(4667U);
    msg.setSourceEntity(107U);
    msg.setDestination(4049U);
    msg.setDestinationEntity(135U);
    msg.timeout = 38657U;
    msg.lat = 0.007269831916216218;
    msg.lon = 0.8793059978397267;
    msg.z = 0.46546293030105834;
    msg.z_units = 211U;
    msg.duration = 50758U;
    msg.speed = 0.9842633556219158;
    msg.speed_units = 200U;
    msg.type = 7U;
    msg.radius = 0.8350116242042019;
    msg.length = 0.32261051631051996;
    msg.bearing = 0.28386603445160175;
    msg.direction = 226U;
    msg.custom.assign("PAGQKPOYEXPPATZOVEJQRDBUBEJRMPUIZKLMOOTGCYRCCXXZTTSIKWAODGMBLSHGKJGKFRFVAFMQDSDHLVWBWEUSIKXNYPJDNEUGZVKQTSVXNGFMYNCJOVMLHNNABMGDIONKSWEHQYTSEVLYPICXFHBVFSWWCAFRZAOLWUVCHTEYTRUPBPYFPOHQDQQLWWFZQXBMYRJZCLXTCNZHHJSQBDIYAMJEIFVDWAKUIZDMEJUGN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.5860923838949611);
    msg.setSource(10801U);
    msg.setSourceEntity(179U);
    msg.setDestination(61610U);
    msg.setDestinationEntity(119U);
    msg.timeout = 30647U;
    msg.lat = 0.08864021563169144;
    msg.lon = 0.17479161915052932;
    msg.z = 0.992011479812246;
    msg.z_units = 87U;
    msg.duration = 59663U;
    msg.speed = 0.596579010223852;
    msg.speed_units = 154U;
    msg.type = 169U;
    msg.radius = 0.17878865584594483;
    msg.length = 0.8865401384995334;
    msg.bearing = 0.8344887570326451;
    msg.direction = 203U;
    msg.custom.assign("SHAHUYQOOOMUPCXZSOECZZIUQXIIGRULNRSQAYEVGHEQCEMQDSMYTEGNDQFXPWLUAPXMJYIVHAHBVBHOZWTMQSXSFZTFLDZWRTWJBIGECPSLVDDNINFAUDTBVKJYTCJFKPNMKOWNARXWNVYLZYVYEWBJHWIEJAXQVPFTXRAZPDDNGKDULFMPWTJIJUUQNYVVCKULG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.0027601160446282247);
    msg.setSource(58294U);
    msg.setSourceEntity(230U);
    msg.setDestination(25439U);
    msg.setDestinationEntity(118U);
    msg.duration = 56U;
    msg.custom.assign("UTNZLIYXYRMGWVWLISXXEFBYPJELPSSKZHHTABNZVAQZWAHFABJDCBDCVUCSLCFPEVNJTMKDNOVFTIHUNYSOMFSGIABNJTHMPGUTPIGSXNQOQUXGFZWR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.5640045786397431);
    msg.setSource(8931U);
    msg.setSourceEntity(30U);
    msg.setDestination(48817U);
    msg.setDestinationEntity(207U);
    msg.duration = 30482U;
    msg.custom.assign("EHRSVKYQIJUITRRDKMNICPKLDJYMMOAXAGKXZRHKRAMUUFJDSZMTCVZQAANTYIJIGIIUSPCGGNTBKXLHPOCHWYJNQMSCBWECDOXRMHTVSAHHTFBUQWOLQYYNFTQEXOFEBQMWDRPRVJOUUZOGQPDALBOYGBEILYGVFXNBZXLGEHNLKOZFZKTWCCXDQLGIDFRJRWLSTJAWJVUSFPZBCPBOCQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.21913947537734846);
    msg.setSource(2194U);
    msg.setSourceEntity(115U);
    msg.setDestination(16005U);
    msg.setDestinationEntity(141U);
    msg.duration = 38485U;
    msg.custom.assign("UQCXTFKJMMVPBNFRZPORMPASJENKQBGSPLEMUDVUNUHAENDQEBCHBCXSFOTYLWAIQYFSLXDAEZJWWUICRAOHCHDRULNIFQOFBMJEYOJTDUKNTKZETBBTGVBROLRKLMSCDX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.933256570272266);
    msg.setSource(64802U);
    msg.setSourceEntity(21U);
    msg.setDestination(58431U);
    msg.setDestinationEntity(185U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1781958132702911;
    tmp_msg_0.speed_units = 186U;
    msg.control.set(tmp_msg_0);
    msg.duration = 9816U;
    msg.custom.assign("MIASCBLLOSCPFJAXBWMIWXFXGUYSHDKZYYCQPELWGETXTVETJRJUIDNPXMMCRWOVRLJUJNZVUEQAXGNHDDBKPXIKICVBZFLAFOEWZHKRYTZNYTDHUECYOANORVCGOTKIWBAPOMDAQFNXFHBQULGQDYGKQWHDWMYLURE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.41422578306126845);
    msg.setSource(24119U);
    msg.setSourceEntity(18U);
    msg.setDestination(25744U);
    msg.setDestinationEntity(114U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.8567623719925047;
    msg.control.set(tmp_msg_0);
    msg.duration = 21830U;
    msg.custom.assign("ERBRCTWBTNUL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.833462317343452);
    msg.setSource(49866U);
    msg.setSourceEntity(105U);
    msg.setDestination(46840U);
    msg.setDestinationEntity(129U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.22069720478751287;
    tmp_msg_0.speed_units = 21U;
    msg.control.set(tmp_msg_0);
    msg.duration = 61233U;
    msg.custom.assign("HJJEXMLMNIZNYKEVSPXCGDQDPDWVKPDVXXSHYEFUTSBPBAWXCLYJDOJVAHSPKRZPITKODDTZUXHNRTOWDOMQJINZHPATKGFVQSFZLMGWODFOQBRRZEBABMELGYABYISMTGEJUXNCKSBQWRHQTWL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.7452321133888726);
    msg.setSource(26297U);
    msg.setSourceEntity(98U);
    msg.setDestination(49068U);
    msg.setDestinationEntity(86U);
    msg.timeout = 11674U;
    msg.lat = 0.3008906858229651;
    msg.lon = 0.5125761668445675;
    msg.z = 0.9743782536072323;
    msg.z_units = 245U;
    msg.speed = 0.8493829256328579;
    msg.speed_units = 247U;
    msg.bearing = 0.8249622948098726;
    msg.cross_angle = 0.03588952559433001;
    msg.width = 0.6500514790365867;
    msg.length = 0.18134848763468958;
    msg.hstep = 0.921476389511024;
    msg.coff = 110U;
    msg.alternation = 5U;
    msg.flags = 154U;
    msg.custom.assign("IIKUPTJVZGMKBGGBOSZQHLXNIROXIUYYXAWVQMHLBZCCKNNZHVGLVXMDZBKLTKSQDSEOTAR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.5319572567629819);
    msg.setSource(40306U);
    msg.setSourceEntity(34U);
    msg.setDestination(44873U);
    msg.setDestinationEntity(6U);
    msg.timeout = 27822U;
    msg.lat = 0.41678371852007357;
    msg.lon = 0.5980477294068876;
    msg.z = 0.4370432927059109;
    msg.z_units = 28U;
    msg.speed = 0.35134337860934206;
    msg.speed_units = 52U;
    msg.bearing = 0.1609259642044335;
    msg.cross_angle = 0.8507908672894282;
    msg.width = 0.7935509782287162;
    msg.length = 0.3419577285795432;
    msg.hstep = 0.3071706280604185;
    msg.coff = 172U;
    msg.alternation = 77U;
    msg.flags = 190U;
    msg.custom.assign("OGLAKSXIFHCHTJBURLMJXQSNAIPX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.2893393918454529);
    msg.setSource(29297U);
    msg.setSourceEntity(41U);
    msg.setDestination(2263U);
    msg.setDestinationEntity(73U);
    msg.timeout = 50409U;
    msg.lat = 0.4511600888407882;
    msg.lon = 0.04362274303667468;
    msg.z = 0.57936273775376;
    msg.z_units = 81U;
    msg.speed = 0.8388063493695266;
    msg.speed_units = 25U;
    msg.bearing = 0.4503752848265864;
    msg.cross_angle = 0.2875231885015187;
    msg.width = 0.5354694846516687;
    msg.length = 0.04683846468365982;
    msg.hstep = 0.09679908398400983;
    msg.coff = 106U;
    msg.alternation = 12U;
    msg.flags = 116U;
    msg.custom.assign("CQMCZGIFWCDRPQJRSEMTDKAWZYWJCQXAMTUZGLVBBAVENNPYBQSOUMPHYZWWXZQVHZNDDENYSMJIJGWVZUQULMMRFKQAFBSHKXMRBHGNNIFDGLYFRQXWHEP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.13447814730830843);
    msg.setSource(12861U);
    msg.setSourceEntity(185U);
    msg.setDestination(34918U);
    msg.setDestinationEntity(36U);
    msg.timeout = 17403U;
    msg.lat = 0.6873594234627911;
    msg.lon = 0.39830733187118483;
    msg.z = 0.6226239579489992;
    msg.z_units = 209U;
    msg.speed = 0.16148342322838716;
    msg.speed_units = 39U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.20909962966774887;
    tmp_msg_0.y = 0.6706510467158066;
    tmp_msg_0.z = 0.44157977332849263;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZSAVUVWUQCONYHDLYJHBTL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.10830131278488686);
    msg.setSource(53472U);
    msg.setSourceEntity(139U);
    msg.setDestination(25324U);
    msg.setDestinationEntity(158U);
    msg.timeout = 8422U;
    msg.lat = 0.2940914564885895;
    msg.lon = 0.2498701237602312;
    msg.z = 0.8181177593038188;
    msg.z_units = 102U;
    msg.speed = 0.33718103678681266;
    msg.speed_units = 248U;
    msg.custom.assign("AOPLAIPOOLRRIHKVUUFJTCGOQBDOHBLKDJZGADVZRVYCMBUXXUKWIRCLVDSAZYYCLJTFPSQJSHIQYSOAJVJDEAKQBCSFNUUFNRQVHBKFYWWGTXXAGLTMRMVFUWZOVENCXPSMXXEMQWUYOBYBKFASFPZJVWKMRKUZTEDHINTNXQDBUTKERZDIWHWAYXTHQOZQAZQIBGLECISTRPLPPOKDWIJMLENNTEBVXPGJSLGHGZNJMPGCISG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.8519919774962941);
    msg.setSource(42716U);
    msg.setSourceEntity(53U);
    msg.setDestination(18409U);
    msg.setDestinationEntity(240U);
    msg.timeout = 30303U;
    msg.lat = 0.557297838762356;
    msg.lon = 0.43063722896398393;
    msg.z = 0.8467495614859345;
    msg.z_units = 133U;
    msg.speed = 0.822844548910299;
    msg.speed_units = 195U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.13935442972927337;
    tmp_msg_0.y = 0.6044519993166;
    tmp_msg_0.z = 0.08510305845003541;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CSIPKNZCEEPQNNUPKQRLHKKKAXBMUTBHVCGTVDUCDGVRLTJFHFJPZVREZRMZLOWZQZXAOWXTANRSCXWYZUQGMGRYY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.382417827458568);
    msg.setSource(43874U);
    msg.setSourceEntity(169U);
    msg.setDestination(38857U);
    msg.setDestinationEntity(166U);
    msg.x = 0.6798245803824592;
    msg.y = 0.6355451153022533;
    msg.z = 0.9071088673035409;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.07099661980470306);
    msg.setSource(54243U);
    msg.setSourceEntity(22U);
    msg.setDestination(6285U);
    msg.setDestinationEntity(98U);
    msg.x = 0.7256037617250912;
    msg.y = 0.12587308793277652;
    msg.z = 0.7869723802975768;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.7977783755901233);
    msg.setSource(30218U);
    msg.setSourceEntity(109U);
    msg.setDestination(65397U);
    msg.setDestinationEntity(106U);
    msg.x = 0.8264579990645243;
    msg.y = 0.22698003271121936;
    msg.z = 0.3563636354646561;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.4236811484458758);
    msg.setSource(16558U);
    msg.setSourceEntity(237U);
    msg.setDestination(36242U);
    msg.setDestinationEntity(81U);
    msg.timeout = 50165U;
    msg.lat = 0.3426530604956083;
    msg.lon = 0.42678965243805633;
    msg.z = 0.973859334650267;
    msg.z_units = 53U;
    msg.amplitude = 0.6926469706547443;
    msg.pitch = 0.5330146111514729;
    msg.speed = 0.6445268349152965;
    msg.speed_units = 27U;
    msg.custom.assign("WWIWWGIMYMYOUTLNSSWLGXZQVBZQOOJMJWVIZXREJSBDTTKACFLYMWHBQZLZHBRMZANUWKSXDEKXQYFRAVUVCAJZNFBRDNTJDAVOQZOQGFREJKHCPXLBSELBIELFARIRAIOPVDVTZCWGYXCFYZCFEHQAHOSVTDKHGYISDGTEPQNCOUMUEFKYLCOPMPHEXJSEKMIHITGRUMNUPBK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.5308071846369318);
    msg.setSource(22538U);
    msg.setSourceEntity(225U);
    msg.setDestination(4792U);
    msg.setDestinationEntity(66U);
    msg.timeout = 19191U;
    msg.lat = 0.93974817033437;
    msg.lon = 0.006854028015079283;
    msg.z = 0.4154092379439871;
    msg.z_units = 31U;
    msg.amplitude = 0.6388108313380156;
    msg.pitch = 0.2749233655959905;
    msg.speed = 0.7277838901939976;
    msg.speed_units = 45U;
    msg.custom.assign("FRBUAVDZHXSOYSJGQCNPRNMDRAEWKGCCTKAKDSOKVUGBNJFHFAVDUPVDAHTTLEBYGMKRJIDQGNBVCSYQZHZHXQMCLHIZYRMGJZOHUZIPMCJUIXSHCCYSRLMFUPVOKTPXYXUATFENELUOSJJXIDIXZDOLBEOAOEBRWIEKKBJQSKOLVBLMTTEWHREVIPQLXAYFWTKFQMANUYGWQLHGSBSNDNREMFWAWYPFOWJTQQPLWXCM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.7403930251014401);
    msg.setSource(2804U);
    msg.setSourceEntity(9U);
    msg.setDestination(56967U);
    msg.setDestinationEntity(196U);
    msg.timeout = 22652U;
    msg.lat = 0.9760341166909772;
    msg.lon = 0.8996883155186093;
    msg.z = 0.04320070003687182;
    msg.z_units = 73U;
    msg.amplitude = 0.09307726646889958;
    msg.pitch = 0.09438082075055199;
    msg.speed = 0.7468022383242942;
    msg.speed_units = 23U;
    msg.custom.assign("BHRZWWMSGSFDJUKULNOIGNJNKPGVLHDNJRHIEQKODUAMGNNXSDBYUBRUGZEZTIKLHHJFTEYETPISNYKTLLEYYWKWPRFLCOHDKVSTPOHFSCVHAPTZALEAZBMQMJYZBGLYPELBPFNAXFAXYQFRJERPESSKOIXWAJVQCOVQWCUWQXDMROTXBIG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.5884696161555385);
    msg.setSource(29902U);
    msg.setSourceEntity(220U);
    msg.setDestination(21174U);
    msg.setDestinationEntity(80U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.5755017535349364);
    msg.setSource(7472U);
    msg.setSourceEntity(59U);
    msg.setDestination(49580U);
    msg.setDestinationEntity(223U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.6988191659669221);
    msg.setSource(55123U);
    msg.setSourceEntity(181U);
    msg.setDestination(49558U);
    msg.setDestinationEntity(45U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.23191851144343034);
    msg.setSource(27466U);
    msg.setSourceEntity(118U);
    msg.setDestination(7822U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.5562027211197402;
    msg.lon = 0.2892615098689455;
    msg.z = 0.16471269346231165;
    msg.z_units = 121U;
    msg.radius = 0.6089061784750038;
    msg.duration = 17808U;
    msg.speed = 0.5681377584394075;
    msg.speed_units = 240U;
    msg.custom.assign("ONVSKYRCUATLLVWBOPIDKNKKPJYRGLQQBPNSAQDRFXMHSPJCTZYROBCSMCNLGOZQQBHYWGHYZFHJEBINOMEHWYTRFPVFUIBPEOXFNGJDMKAUNTEIKDRFVXFAJXXODXWXVDLHTQTWPAEIOCRHQIVEITPTIKW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.8905053206070559);
    msg.setSource(39373U);
    msg.setSourceEntity(156U);
    msg.setDestination(21951U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.019238875392872945;
    msg.lon = 0.02993322230269646;
    msg.z = 0.45374337172087;
    msg.z_units = 68U;
    msg.radius = 0.5087135071835126;
    msg.duration = 36648U;
    msg.speed = 0.24144378742067318;
    msg.speed_units = 87U;
    msg.custom.assign("GEARJYIKWCFIHDAMROFSBVUUPDSHMYBUKVKVHSXWKSCYUKYSGFHFWXVRFYCZHBKZACUPSJABGWLDATWOPLJIDESWEHNUGAETQITBWQDNJSRKQPAULMMENJUZXXXROYOPPAEQCIGRTYGDQEPTDGTOZGAVZBIVTEDCXDGLIBKSLWZWDNBFBFPMKMCVRPJNQIXLMOJE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.06682585091895055);
    msg.setSource(40796U);
    msg.setSourceEntity(33U);
    msg.setDestination(22082U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.6989009593997114;
    msg.lon = 0.3309467877801865;
    msg.z = 0.8986178097851074;
    msg.z_units = 238U;
    msg.radius = 0.8476912761647832;
    msg.duration = 37531U;
    msg.speed = 0.11993320408603092;
    msg.speed_units = 93U;
    msg.custom.assign("BFTGEUZTSNV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.45512075223330917);
    msg.setSource(31253U);
    msg.setSourceEntity(102U);
    msg.setDestination(17567U);
    msg.setDestinationEntity(102U);
    msg.timeout = 8284U;
    msg.flags = 251U;
    msg.lat = 0.9078039555564975;
    msg.lon = 0.06827528171781205;
    msg.start_z = 0.44995740161330766;
    msg.start_z_units = 78U;
    msg.end_z = 0.7520471490133783;
    msg.end_z_units = 218U;
    msg.radius = 0.4461475932158818;
    msg.speed = 0.9144539497963163;
    msg.speed_units = 132U;
    msg.custom.assign("EYRMRSHNUSUBAZKCEHHHKMMCTPDALTLQYZZUVATMXKIEOJNUGTQUUODJOIGYXPTDZLQDEBJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.5664860580715673);
    msg.setSource(48272U);
    msg.setSourceEntity(211U);
    msg.setDestination(42539U);
    msg.setDestinationEntity(163U);
    msg.timeout = 24946U;
    msg.flags = 5U;
    msg.lat = 0.901311929931602;
    msg.lon = 0.6496969886082128;
    msg.start_z = 0.9812790050626844;
    msg.start_z_units = 108U;
    msg.end_z = 0.1847208436880038;
    msg.end_z_units = 45U;
    msg.radius = 0.46702362333582836;
    msg.speed = 0.1744815629270442;
    msg.speed_units = 201U;
    msg.custom.assign("RRBITQCVMAPGYYEZYEVQLLAYUWEMSYHMMALNMPFHLZKVGQXNAYAKIUZJGBDUCKWUOCRWJGXPURMOFINFTDKNPUQDTRTLOBWGNZIOWRNSHLNCHDSWZFXAFNBVHSZPLMXVHRTTAINSOBAFITPQZOIJSPOCVY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.1338246498861725);
    msg.setSource(44194U);
    msg.setSourceEntity(214U);
    msg.setDestination(55535U);
    msg.setDestinationEntity(235U);
    msg.timeout = 59122U;
    msg.flags = 221U;
    msg.lat = 0.15260273228575127;
    msg.lon = 0.8436350799782254;
    msg.start_z = 0.9336821174165101;
    msg.start_z_units = 13U;
    msg.end_z = 0.2456632518269276;
    msg.end_z_units = 87U;
    msg.radius = 0.2756820431934982;
    msg.speed = 0.22747544055955238;
    msg.speed_units = 236U;
    msg.custom.assign("BMQEBSKOBBXKJBTMRPQZFVKDOLJBLBSYUSHAZOVEIWFUFMKGYWJCKNQWTUSZXLVIOEHANPYPMMRDACWDRXVETGJGUFQCHBQAGIEIOCRUUXNDKSK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.252938546137896);
    msg.setSource(35252U);
    msg.setSourceEntity(109U);
    msg.setDestination(42235U);
    msg.setDestinationEntity(89U);
    msg.timeout = 2866U;
    msg.lat = 0.8224148831620195;
    msg.lon = 0.16877528878829673;
    msg.z = 0.2432814637596563;
    msg.z_units = 144U;
    msg.speed = 0.6545868707929755;
    msg.speed_units = 154U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8710019237514838;
    tmp_msg_0.y = 0.6787325294994436;
    tmp_msg_0.z = 0.13634477032686765;
    tmp_msg_0.t = 0.49967719905046726;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DDFBTOLELZCHMFACYCWSPNJZISDKWIFJYVRMNKKGRGL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.28965511244667186);
    msg.setSource(40451U);
    msg.setSourceEntity(176U);
    msg.setDestination(10280U);
    msg.setDestinationEntity(100U);
    msg.timeout = 25756U;
    msg.lat = 0.6252715576128609;
    msg.lon = 0.859207619184978;
    msg.z = 0.09538647896637265;
    msg.z_units = 10U;
    msg.speed = 0.20923962192371037;
    msg.speed_units = 66U;
    msg.custom.assign("OKSRPAVOEYYAHZFFXSXLKLHUFILANKSSAMEKBVRZIVINCZFBJQZBYVJSEDRABDWUEHWXMSDUZLJPCHLHFYDZRCZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.29539145494181285);
    msg.setSource(3286U);
    msg.setSourceEntity(232U);
    msg.setDestination(544U);
    msg.setDestinationEntity(161U);
    msg.timeout = 43612U;
    msg.lat = 0.8111410133318012;
    msg.lon = 0.29050079521818917;
    msg.z = 0.30511378915401777;
    msg.z_units = 134U;
    msg.speed = 0.24378544792105217;
    msg.speed_units = 40U;
    msg.custom.assign("YKFCZRRKYEGQZUTCNQLUUWKQTNQRRADKTYSPLQNHHZJIGMFCQYKZBXFDHQERTKIELHEBWAYBZNXWBXSJJZIMSVHYQOPWAONEUHDEBMXGPKBEDBVPUYLODGJAJNCIRXWNPJZEGQLXVBTFLXCHTZASLNPFSMCLFMYWAKSYKVZVGDDNVDJTNXWCVUIRVOPWBFMGEVAGIGGHAOOMSRWSZXEOWDFKJFQYSOHOT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.32208047478422464);
    msg.setSource(37427U);
    msg.setSourceEntity(153U);
    msg.setDestination(22364U);
    msg.setDestinationEntity(146U);
    msg.x = 0.8470215969287312;
    msg.y = 0.06974358583675133;
    msg.z = 0.9718485817570042;
    msg.t = 0.44344249417418324;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.4350207215976617);
    msg.setSource(13221U);
    msg.setSourceEntity(238U);
    msg.setDestination(63148U);
    msg.setDestinationEntity(205U);
    msg.x = 0.49698828707800113;
    msg.y = 0.6522933240926898;
    msg.z = 0.6639761026530833;
    msg.t = 0.09412899830301047;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.5774558022589732);
    msg.setSource(4631U);
    msg.setSourceEntity(66U);
    msg.setDestination(39690U);
    msg.setDestinationEntity(77U);
    msg.x = 0.11774976525143355;
    msg.y = 0.4565016069549337;
    msg.z = 0.0021801309964097904;
    msg.t = 0.3422773918830342;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.06368022119732286);
    msg.setSource(63748U);
    msg.setSourceEntity(72U);
    msg.setDestination(15833U);
    msg.setDestinationEntity(2U);
    msg.timeout = 3140U;
    msg.name.assign("EWIYMOMBUNMTQGRHZLESWRFAQDZDDBVSEQNOYDMUOXOCIVTDFPFLTKDBHOGKJOTTJZZQMCRZHGQHAUOPLWSANGUKBZLYPABBKRTKDSDYGPRCTZRSMIFFIRAUIXXNSXKSIKAABVCUIJSWHUVPBYNQJAJLBWOXCLJCEDNIYMELAPLUMWEEIOVWVXMJZFPRGRIJPYTVEJUX");
    msg.custom.assign("AFIIZZPWUWOCMDELTKZGRNGNZCRMUUBLJQUMHOBGYFQMFZPNWHRCBNVSLCTEHIKSMLRAETHSYYSHQMSBPBAA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.008991419438772685);
    msg.setSource(60169U);
    msg.setSourceEntity(172U);
    msg.setDestination(4041U);
    msg.setDestinationEntity(217U);
    msg.timeout = 55203U;
    msg.name.assign("SXMJPVGKAOYKFPBQ");
    msg.custom.assign("FXRNGLEXKVHHAZFDLJQRILMJMWTNOHDZKAM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.9459434904847365);
    msg.setSource(15260U);
    msg.setSourceEntity(1U);
    msg.setDestination(54625U);
    msg.setDestinationEntity(145U);
    msg.timeout = 38271U;
    msg.name.assign("NBSRRWHXKDPYDNZFECNL");
    msg.custom.assign("QFDZQWQWJOZCRHYNACBIIOOTHLCIPIYGHTEFRSYVQEAAOVRZBKHYGUTFVNXJFPFHEMUENOCQPVYLUIWAOXZRKAM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.9817554924337376);
    msg.setSource(4173U);
    msg.setSourceEntity(253U);
    msg.setDestination(41211U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.2753917638246779;
    msg.lon = 0.6773208979581512;
    msg.z = 0.810035327732534;
    msg.z_units = 60U;
    msg.speed = 0.16335835951304856;
    msg.speed_units = 54U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 25572U;
    tmp_msg_0.off_x = 0.6541063797072134;
    tmp_msg_0.off_y = 0.10346838529482472;
    tmp_msg_0.off_z = 0.05871186869171019;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.9328793520161053;
    msg.custom.assign("BHGMBZCQGXSNYLRSAGLFJBCDCIMQPDXSUTJLPWVLGSYUOVPIFDHUTHGNTSOQHCGLWWSSIWNCRWXUEKIPDDUVPVKXZKOOBERAJOZTIHLVAPQAECTBVZBBCMLLHEJQWXBMWHKZBDZNQXMSQIRVAYDJPBOFUTMUOAVTREZZFMQYFAOWTA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.49515895143640265);
    msg.setSource(62457U);
    msg.setSourceEntity(50U);
    msg.setDestination(19384U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.24669628183763426;
    msg.lon = 0.2443815301842317;
    msg.z = 0.2399679263160076;
    msg.z_units = 144U;
    msg.speed = 0.6890161331437972;
    msg.speed_units = 14U;
    msg.start_time = 0.24072793280948845;
    msg.custom.assign("ZPELBWHHAXFKFGEYKRRLLPTHJCBGXAWRYLYIAELYVNCMKSDACMHYUSMTXKLJYGRBDZUINZUBMHNMI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.3282389694267115);
    msg.setSource(37008U);
    msg.setSourceEntity(103U);
    msg.setDestination(38692U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.2604079225676452;
    msg.lon = 0.7506630672846157;
    msg.z = 0.8325233373103891;
    msg.z_units = 118U;
    msg.speed = 0.759664450362259;
    msg.speed_units = 115U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 54100U;
    tmp_msg_0.off_x = 0.5077862387362856;
    tmp_msg_0.off_y = 0.1773819761077987;
    tmp_msg_0.off_z = 0.9981270247997089;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.12162778890000614;
    msg.custom.assign("MTPKXLWRMYALASVFYIEUJOTA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.2593243892992142);
    msg.setSource(61860U);
    msg.setSourceEntity(96U);
    msg.setDestination(5531U);
    msg.setDestinationEntity(9U);
    msg.vid = 38550U;
    msg.off_x = 0.3227647921014275;
    msg.off_y = 0.6782754229063803;
    msg.off_z = 0.4247582100501407;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.7475078511679659);
    msg.setSource(28413U);
    msg.setSourceEntity(44U);
    msg.setDestination(5682U);
    msg.setDestinationEntity(118U);
    msg.vid = 10367U;
    msg.off_x = 0.14237168865969474;
    msg.off_y = 0.05756504255692452;
    msg.off_z = 0.37704216738528307;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.49303271452990716);
    msg.setSource(13582U);
    msg.setSourceEntity(83U);
    msg.setDestination(208U);
    msg.setDestinationEntity(194U);
    msg.vid = 45249U;
    msg.off_x = 0.4280905189640072;
    msg.off_y = 0.547014485689439;
    msg.off_z = 0.5621219551131784;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.36988760572277746);
    msg.setSource(13548U);
    msg.setSourceEntity(57U);
    msg.setDestination(51504U);
    msg.setDestinationEntity(106U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.7421690176803146);
    msg.setSource(54018U);
    msg.setSourceEntity(125U);
    msg.setDestination(17382U);
    msg.setDestinationEntity(249U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.6699712380453726);
    msg.setSource(14893U);
    msg.setSourceEntity(68U);
    msg.setDestination(40433U);
    msg.setDestinationEntity(140U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.6998980171663047);
    msg.setSource(56951U);
    msg.setSourceEntity(208U);
    msg.setDestination(35194U);
    msg.setDestinationEntity(207U);
    msg.mid = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.6055705898540551);
    msg.setSource(41685U);
    msg.setSourceEntity(213U);
    msg.setDestination(57489U);
    msg.setDestinationEntity(226U);
    msg.mid = 34922U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.10874046508325219);
    msg.setSource(3651U);
    msg.setSourceEntity(1U);
    msg.setDestination(16373U);
    msg.setDestinationEntity(135U);
    msg.mid = 25476U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.2053719054680706);
    msg.setSource(22784U);
    msg.setSourceEntity(47U);
    msg.setDestination(62874U);
    msg.setDestinationEntity(114U);
    msg.state = 36U;
    msg.eta = 33379U;
    msg.info.assign("ASWGSUEGMLBMXRIJKNVBKVUTDWQFOUTCHEMWBGZSOIFZWGTTCHLNVTQRBOLEUHNKWVJIAMAOFUIQYBXXZVIRMJMLTCQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.9067372442194386);
    msg.setSource(34256U);
    msg.setSourceEntity(45U);
    msg.setDestination(5510U);
    msg.setDestinationEntity(174U);
    msg.state = 200U;
    msg.eta = 41071U;
    msg.info.assign("LMWIZXDZJDBATXEQKH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.5111698291280136);
    msg.setSource(54444U);
    msg.setSourceEntity(205U);
    msg.setDestination(4222U);
    msg.setDestinationEntity(165U);
    msg.state = 79U;
    msg.eta = 60909U;
    msg.info.assign("PRQTTKOLLFXVFSJFUTFNNQTMKGYTYHKSVPGWZLETRSKLOMCFWWYDKFVDOXODAVQNWSNYFZDFIRLIIXOABXAGCSFERJZPKJCMEDWYTHUJAKAHEVKHVPZEGUOBRSQZXIDRWHUMLSHJJWCHUPCSIDJAYGLXDMISMCWTVEBYIGSXJQCONBKDAPCTUPJQYTNKELGPXIEIRAOHVXZZUJUAOCGBMHRQWNEYNVPUPMEFNRQBCAGYLBQZLGMVXHBRU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.6411836293070845);
    msg.setSource(62928U);
    msg.setSourceEntity(160U);
    msg.setDestination(22705U);
    msg.setDestinationEntity(220U);
    msg.system = 16823U;
    msg.duration = 37495U;
    msg.speed = 0.008680200248205261;
    msg.speed_units = 213U;
    msg.x = 0.6136236056162844;
    msg.y = 0.8431390353405426;
    msg.z = 0.3624755753995986;
    msg.z_units = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.7031131575327237);
    msg.setSource(4113U);
    msg.setSourceEntity(176U);
    msg.setDestination(41434U);
    msg.setDestinationEntity(223U);
    msg.system = 49617U;
    msg.duration = 17541U;
    msg.speed = 0.6091844889393037;
    msg.speed_units = 25U;
    msg.x = 0.09335942666752506;
    msg.y = 0.8146385047627259;
    msg.z = 0.8968544924299592;
    msg.z_units = 207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.37145711410747284);
    msg.setSource(10877U);
    msg.setSourceEntity(238U);
    msg.setDestination(42904U);
    msg.setDestinationEntity(48U);
    msg.system = 21883U;
    msg.duration = 56946U;
    msg.speed = 0.2773263929417862;
    msg.speed_units = 213U;
    msg.x = 0.593803731370658;
    msg.y = 0.6683233463630622;
    msg.z = 0.9695610095750762;
    msg.z_units = 186U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.06367776386238588);
    msg.setSource(3817U);
    msg.setSourceEntity(211U);
    msg.setDestination(25728U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.18162192009111133;
    msg.lon = 0.06875568118459463;
    msg.speed = 0.321863097617787;
    msg.speed_units = 122U;
    msg.duration = 979U;
    msg.sys_a = 62856U;
    msg.sys_b = 37958U;
    msg.move_threshold = 0.27659109241796953;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.07929409534151743);
    msg.setSource(410U);
    msg.setSourceEntity(104U);
    msg.setDestination(14846U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.5368686399590046;
    msg.lon = 0.07609135950924106;
    msg.speed = 0.1545639170439176;
    msg.speed_units = 181U;
    msg.duration = 10304U;
    msg.sys_a = 61712U;
    msg.sys_b = 47638U;
    msg.move_threshold = 0.44607228872708493;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.6441004911660337);
    msg.setSource(4785U);
    msg.setSourceEntity(18U);
    msg.setDestination(11637U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.19005396001125585;
    msg.lon = 0.10887069514421577;
    msg.speed = 0.5942218825096873;
    msg.speed_units = 43U;
    msg.duration = 14373U;
    msg.sys_a = 24767U;
    msg.sys_b = 61388U;
    msg.move_threshold = 0.26098579723018633;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.2531440723231124);
    msg.setSource(43545U);
    msg.setSourceEntity(182U);
    msg.setDestination(427U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.14852429217333507;
    msg.lon = 0.18179289948600308;
    msg.z = 0.7734665990581185;
    msg.z_units = 236U;
    msg.speed = 0.31890812736597407;
    msg.speed_units = 169U;
    msg.custom.assign("EMRPRKZSBZVZRJXXVWKVQYMOJWHUGFTQNANJHMEGAKWSFQQSFYSSMKDYVROCTFFLEFPDWLMDTZAYLTGHAGJLCFAYYBFDIRBHUVIJLTVDLTSUOWEIXKRUOBWCGYKHNMROHZJLPN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.8472244813503358);
    msg.setSource(24125U);
    msg.setSourceEntity(84U);
    msg.setDestination(58137U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.728543307697901;
    msg.lon = 0.9791338973302183;
    msg.z = 0.36884858191995085;
    msg.z_units = 135U;
    msg.speed = 0.39316681952880217;
    msg.speed_units = 248U;
    msg.custom.assign("BJSJHBHEKNOXBDDUOIAQBAGLMARSPQEPCXTRIAUKCYNEHROCXVHTWLVIIMQNGEPDJFWMKARVQYGWJPZEXPOZZQTJIWLRCHFJEBAZZLKRTUBQCNGXVGZNUKDTSSNIKTJFVVZKKMWEENHCDYVVTWX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.6093536275004009);
    msg.setSource(56539U);
    msg.setSourceEntity(14U);
    msg.setDestination(47704U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.6056791150531383;
    msg.lon = 0.6450372634078512;
    msg.z = 0.0032334440452483904;
    msg.z_units = 136U;
    msg.speed = 0.09136454548301043;
    msg.speed_units = 217U;
    msg.custom.assign("QYAXLKCPFJZGWILODIHXJEAIHTFZVCFHUALZRYFYJGWAVBHVBVYURGHRHNQKQUER");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.030956967372864685);
    msg.setSource(62605U);
    msg.setSourceEntity(43U);
    msg.setDestination(46950U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.08588530838315678;
    msg.lon = 0.46482178138912933;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.22817668541512925);
    msg.setSource(15040U);
    msg.setSourceEntity(60U);
    msg.setDestination(59339U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.2614840986567616;
    msg.lon = 0.14999167584857476;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.8335440414910108);
    msg.setSource(33606U);
    msg.setSourceEntity(218U);
    msg.setDestination(30935U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.8007828199734943;
    msg.lon = 0.9166950107420229;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.78620940626859);
    msg.setSource(22410U);
    msg.setSourceEntity(187U);
    msg.setDestination(57477U);
    msg.setDestinationEntity(126U);
    msg.timeout = 18723U;
    msg.lat = 0.7979577281161961;
    msg.lon = 0.5238894423701503;
    msg.z = 0.6609821292766512;
    msg.z_units = 9U;
    msg.pitch = 0.004825405723193454;
    msg.amplitude = 0.5707527633956967;
    msg.duration = 16999U;
    msg.speed = 0.9586794641134915;
    msg.speed_units = 73U;
    msg.radius = 0.25240495519760986;
    msg.direction = 163U;
    msg.custom.assign("SURBYAJXJFSEYVZOTCAUZMDLMLL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.22162739272570642);
    msg.setSource(25911U);
    msg.setSourceEntity(33U);
    msg.setDestination(60491U);
    msg.setDestinationEntity(237U);
    msg.timeout = 27864U;
    msg.lat = 0.49297799767086115;
    msg.lon = 0.6353510187060973;
    msg.z = 0.8450296686647991;
    msg.z_units = 1U;
    msg.pitch = 0.10572019999150972;
    msg.amplitude = 0.18459416409952323;
    msg.duration = 16114U;
    msg.speed = 0.2922041557981385;
    msg.speed_units = 234U;
    msg.radius = 0.332857167088662;
    msg.direction = 119U;
    msg.custom.assign("PYGAEPSDMTZYOETSNKQMRWSWLQTXUMXEBSXJLZGUBVYZDUHXAUULAZVLUYPJFYFSLHAOVKAEDQKMFTHRGNYJZMTKUNOPPSVNUMDLWXMFIVCDVNXCBOKPWGAAZWHQTOWHMTIBHDCIGIGPWREOWVEKCOW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.1525001703061959);
    msg.setSource(22391U);
    msg.setSourceEntity(231U);
    msg.setDestination(50680U);
    msg.setDestinationEntity(152U);
    msg.timeout = 6389U;
    msg.lat = 0.3216975173916833;
    msg.lon = 0.24057495702168608;
    msg.z = 0.816660467167397;
    msg.z_units = 153U;
    msg.pitch = 0.25064280948144113;
    msg.amplitude = 0.015464484080859764;
    msg.duration = 19805U;
    msg.speed = 0.5323585769047504;
    msg.speed_units = 108U;
    msg.radius = 0.28980559554140595;
    msg.direction = 167U;
    msg.custom.assign("JIVAQAZDJUXTATEQLKMVQSLOZCF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.7889453201056229);
    msg.setSource(38577U);
    msg.setSourceEntity(237U);
    msg.setDestination(40153U);
    msg.setDestinationEntity(36U);
    msg.formation_name.assign("DINZCJPTXVRYVKJEQAYIVCQOWLHAHKJLLFMPVFMIMGDFDANHZEIWTZGQNVODWIEGJCFPZBUTRXESQTCXXEVBEKSUJQBZDEDRYGIBZISBCMOKRRGTMNWHSMDGDCUKHAPFVWFSJRJLQKOSNOGZLNLYYSXHOANJQJRJBBELTMFKDMIOWLTMPVZIQNAPCUYURMPAESWOTOSSZPZTXWXXPIQBYUHNGUGXVCBWVTUEFXLORPAKHUCWYABQKHYFYA");
    msg.reference_frame = 91U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 30008U;
    tmp_msg_0.off_x = 0.6029468942355277;
    tmp_msg_0.off_y = 0.131692001153205;
    tmp_msg_0.off_z = 0.9202926847183702;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("PKMFTDBIQBRRTZNNWKBTYVVMCMPWIVBFYJQZDYGRIEUWRJEKTFNYXPWVXOCHLDJHIBSCVYGRSUAJAPAUEIZSOUSTKWPCWHNNQLREQYDSLLJXKDGMFLVNFGMTKTUMDHJCHHDGKAYXZQMNXMAANPESXBEMRPOCIZQKCODTOJJCSHREGBZGIIWXXLZCJKQSXMFAPYDUIFQVWBFQOLOTPHOUBVHJLLRVZFZAUYQVGHBFENLW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.1921206110449173);
    msg.setSource(54733U);
    msg.setSourceEntity(200U);
    msg.setDestination(27381U);
    msg.setDestinationEntity(224U);
    msg.formation_name.assign("YTVETMZJMVOSIWUGNYUYJEYBSEFKZMKRXSGTDBHILKPCLHICFTZOXYWLMFKCVLBAOVFAQREHATDIUJUTSYLKABWEDPOSXPXWDOPSNRCMZUVNCWU");
    msg.reference_frame = 21U;
    msg.custom.assign("PROGPMFCZEDJYEGADNNZKJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.849537197366812);
    msg.setSource(35788U);
    msg.setSourceEntity(179U);
    msg.setDestination(38788U);
    msg.setDestinationEntity(30U);
    msg.formation_name.assign("FEJDVYPHKOCCYLMWVBVJTDEUFZEWAKZMTQEEYLRQRULKAOIPMSPGQGBMMUUFTCAWABDDJH");
    msg.reference_frame = 181U;
    msg.custom.assign("PQFCYVJEZLJGGBXBAWAOWKMZXIIYDMZPOWWTSVYWEKAPAGIRNDMOQHLXJTYZCSTHONAJRKRXCMUJDXMJRNBOFNQOUAQRHJYLPUVFTJSJFJQBDHQHOHQLIDTLURFCGSUFFZZKSAUECMYNTMLYKPEWWVZCGIWLBNBIM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.16838351037456356);
    msg.setSource(33225U);
    msg.setSourceEntity(148U);
    msg.setDestination(2409U);
    msg.setDestinationEntity(229U);
    msg.group_name.assign("ZXGOATQEGXUIMSVLXDCFKCWXPPKWRZFAKVIVJS");
    msg.formation_name.assign("FUNOWQKJNEZBZWXGATFNMQNNRJKGBHUGSCHYLWNKJWWVVTXOJITIUCMOXPDKXLRHVIVHUEFQUFLFLFBLESBYTESRDUCFPITMZVWZGEYJJXXNBBKYTQYZDLATQOWLBHEQOHMOMORTHKRYIOAIUFRFGOIVVXZGPGPKSGWYBRKDAUNUSINEDRMPGFSEVTXMNVDDWKLBCDQCIPYUBQJMCSDXCRESAA");
    msg.plan_id.assign("BNCMOSVVNZEAIQUXGSEPBWTPNSGIEWZCGYFASIOJGXEMKTSHZCPIFHKMGJKDYGWDLAZTOFLQQXOZWBOCCFXUPGJWWDVXSYXKHZLTVKJAMVBWRHKTJBPQDRRCNKLFJOUSIRANKEDQVGVIIMHWYMVSILARAMBOARUEYCWFLOEGOUPBXYLLVQRYFQZFTDYNBWMFHBZQNNBCAUCTRMJNYTUXZEHPPYUXLFQUGECTJNS");
    msg.description.assign("FBDXATOPLJKKRCNNVNDGPCFRIWGLTCRDYPIWOOHUYFRZEUAZNEJHUVCFGEEUCQJQAHGUUILXOMGDCVMSLPFTKJYRMTPFEDFMFBKDTIZVRNQSJPOBAZHXAXRQTQQRYZHIIWEVYLJBFAKBTOWGKWTVTCKDUZBLSZJYBQIOXJOWZLRAEIUMWMVALMCXJSWIENGESQMDCHPAXZISMO");
    msg.leader_speed = 0.37928442022541053;
    msg.leader_bank_lim = 0.09916635572372223;
    msg.pos_sim_err_lim = 0.6690715210516116;
    msg.pos_sim_err_wrn = 0.7530805375369889;
    msg.pos_sim_err_timeout = 45045U;
    msg.converg_max = 0.233192215153203;
    msg.converg_timeout = 55474U;
    msg.comms_timeout = 18315U;
    msg.turb_lim = 0.5648005598690471;
    msg.custom.assign("ZYOJWXENQQWYZLVVIYQWQPQWBINVACCXLVBDBCDZVYYSTZDUGVWKHFFDYEGCCCJSEGOWOAGNUUKEHLRTNPYLNYKJIZXHHHJFSYMIALXWPARARMUIUFNBOJQMFMXRBJHRQBZQDALJFT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.9016057037823195);
    msg.setSource(19439U);
    msg.setSourceEntity(228U);
    msg.setDestination(64405U);
    msg.setDestinationEntity(113U);
    msg.group_name.assign("OXEBTBTZEKPAIGBHSNWWMOPRBJSOQNGABWCKKFCSBJPLMJRJIQOVIWXIFETZXKLLIODIGMMQVLGNWZXHCURZPKWJTTAIOWY");
    msg.formation_name.assign("VUXMKIXCZSRBIPUQVDVJWLQWKMJQZOYCEXOWBPEVGHJFKACFAYOHHFFQBNEKTPLCMUTPQDU");
    msg.plan_id.assign("TUDELDMIAMNPYMRRPBUTESXTR");
    msg.description.assign("ZXZEAISTBHRGKEGJDAKERTYCZDAXCFPNHIDLLMVYJIWQQWRDLSBKIJOBPARVDALFUVQLOSVABXIGQMOFYZZFNWHMLUJIRTDOELAMSJXHWSKKFNUPWSBPPGKTUKIYNYBJZOCOQYKHCBWTQJVSRGAPONFVXULLMENETVMHXDXEWIOBTWIJIAEMUBPCUKGGZMO");
    msg.leader_speed = 0.9645211604588094;
    msg.leader_bank_lim = 0.9502864628527752;
    msg.pos_sim_err_lim = 0.49825887394267576;
    msg.pos_sim_err_wrn = 0.6422764481957058;
    msg.pos_sim_err_timeout = 30796U;
    msg.converg_max = 0.7399607145104253;
    msg.converg_timeout = 58096U;
    msg.comms_timeout = 63710U;
    msg.turb_lim = 0.22035431914464998;
    msg.custom.assign("BMDBUXKUHJPMWMBIJOERHVXPTOHCOEPYWPQBOOELNNONGFZQQRIDEYZPSRNTLNXBTTQGJJUIWVLULFIFLHGGYXGTRGMMYSAFADQSSITGWBZSPTYEKAVVZORYDOLYUPVUD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.9890146310862865);
    msg.setSource(49471U);
    msg.setSourceEntity(194U);
    msg.setDestination(3894U);
    msg.setDestinationEntity(1U);
    msg.group_name.assign("MBKCRTMRNFHALHRODCXIDSNGIEHOEKFCZTIUZBTSCCHBUBAJIVKAIIDHCEFJUMZM");
    msg.formation_name.assign("NJTKCARMACLTCFMHQGHWTOMODUTMXSDXDEJOBKCTIIHDAOZ");
    msg.plan_id.assign("OQIRZLISKNNTQFMXEBPYIGMTJUNZFBOOBZIFNZPDALPQSRLUKUCNOFXQXSDSDXHTARWSFSNANRUCOCGDPWPWKFWMWURYERYUAHBIZEIQECUMMNKZOEXGMRMJEIEQDJBTSOOVANHFXTCZLFVGVVMJQX");
    msg.description.assign("KMIYFEDYDVXBMLCABWPVNNBGJRZDBCJPBORQEJNUZJINTFHPCZQLFOZKFLXBSGOVDHKGTWEPVECOAOCEURIZSFDIRNWTCOHYZVPALKDVGYWCVLRDFHPGGXNWQMWILKYQCHGTWJSUUEPPFTARBMRSFQLIVTUJQJAVHGTMYLQYGKSIZFAIEMIXSNNYNWCM");
    msg.leader_speed = 0.558711963896979;
    msg.leader_bank_lim = 0.6239753795744031;
    msg.pos_sim_err_lim = 0.34003092521698697;
    msg.pos_sim_err_wrn = 0.5226167667950978;
    msg.pos_sim_err_timeout = 59456U;
    msg.converg_max = 0.48028214224488297;
    msg.converg_timeout = 62881U;
    msg.comms_timeout = 40286U;
    msg.turb_lim = 0.865181122334956;
    msg.custom.assign("XVHZXZJKGEGINVINBLNRFATFQUHWUUVUADFRRMGILFVXYZVUHBTSNCYPFMQGJSYTGURC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.20869449627162473);
    msg.setSource(43679U);
    msg.setSourceEntity(34U);
    msg.setDestination(30343U);
    msg.setDestinationEntity(100U);
    msg.control_src = 34713U;
    msg.control_ent = 36U;
    msg.timeout = 0.33882362751897566;
    msg.loiter_radius = 0.47047870489096566;
    msg.altitude_interval = 0.03517536732514692;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.69429465030282);
    msg.setSource(27447U);
    msg.setSourceEntity(41U);
    msg.setDestination(50194U);
    msg.setDestinationEntity(201U);
    msg.control_src = 22035U;
    msg.control_ent = 215U;
    msg.timeout = 0.2609678720850661;
    msg.loiter_radius = 0.6994980577385476;
    msg.altitude_interval = 0.5796701164395335;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.5152713731796807);
    msg.setSource(52077U);
    msg.setSourceEntity(210U);
    msg.setDestination(45273U);
    msg.setDestinationEntity(117U);
    msg.control_src = 5556U;
    msg.control_ent = 227U;
    msg.timeout = 0.8378856698336518;
    msg.loiter_radius = 0.17076085508773753;
    msg.altitude_interval = 0.08407763446538219;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.5800585338624239);
    msg.setSource(34552U);
    msg.setSourceEntity(87U);
    msg.setDestination(20780U);
    msg.setDestinationEntity(245U);
    msg.flags = 202U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6478328161524541;
    tmp_msg_0.speed_units = 107U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8280824559386905;
    tmp_msg_1.z_units = 31U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8679961218034047;
    msg.lon = 0.8940579675305556;
    msg.radius = 0.7985485797432071;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.054379485802637295);
    msg.setSource(34731U);
    msg.setSourceEntity(20U);
    msg.setDestination(53231U);
    msg.setDestinationEntity(99U);
    msg.flags = 229U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5712359074647194;
    tmp_msg_0.speed_units = 24U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5575864060389284;
    tmp_msg_1.z_units = 178U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8130727422072684;
    msg.lon = 0.9302448308482583;
    msg.radius = 0.26756489239738446;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.7715693186731711);
    msg.setSource(13792U);
    msg.setSourceEntity(43U);
    msg.setDestination(29831U);
    msg.setDestinationEntity(124U);
    msg.flags = 71U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.46442590317496923;
    tmp_msg_0.speed_units = 59U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.15911223690827914;
    tmp_msg_1.z_units = 188U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8951169893576206;
    msg.lon = 0.5512860776571472;
    msg.radius = 0.6637361528325342;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.09694330178293842);
    msg.setSource(11468U);
    msg.setSourceEntity(226U);
    msg.setDestination(30085U);
    msg.setDestinationEntity(242U);
    msg.control_src = 36707U;
    msg.control_ent = 123U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 201U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5317153286978039;
    tmp_tmp_msg_0_0.speed_units = 21U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9790717361510922;
    tmp_tmp_msg_0_1.z_units = 187U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3414646635032281;
    tmp_msg_0.lon = 0.6897018423320871;
    tmp_msg_0.radius = 0.6322928603458337;
    msg.reference.set(tmp_msg_0);
    msg.state = 27U;
    msg.proximity = 246U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.692786800491444);
    msg.setSource(63423U);
    msg.setSourceEntity(201U);
    msg.setDestination(37994U);
    msg.setDestinationEntity(254U);
    msg.control_src = 51727U;
    msg.control_ent = 187U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 191U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.920932235127761;
    tmp_tmp_msg_0_0.speed_units = 244U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.24647137262644725;
    tmp_tmp_msg_0_1.z_units = 5U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.868765771864833;
    tmp_msg_0.lon = 0.6569852518144287;
    tmp_msg_0.radius = 0.1257059541208685;
    msg.reference.set(tmp_msg_0);
    msg.state = 52U;
    msg.proximity = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.3404503396342877);
    msg.setSource(41875U);
    msg.setSourceEntity(59U);
    msg.setDestination(43192U);
    msg.setDestinationEntity(18U);
    msg.control_src = 38444U;
    msg.control_ent = 180U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 228U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6961424617964564;
    tmp_tmp_msg_0_0.speed_units = 198U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.438833634792679;
    tmp_tmp_msg_0_1.z_units = 180U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9245728997386641;
    tmp_msg_0.lon = 0.9396171701013316;
    tmp_msg_0.radius = 0.08788072713101558;
    msg.reference.set(tmp_msg_0);
    msg.state = 136U;
    msg.proximity = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.814484050937666);
    msg.setSource(36502U);
    msg.setSourceEntity(201U);
    msg.setDestination(24795U);
    msg.setDestinationEntity(179U);
    msg.ax_cmd = 0.07014809996743043;
    msg.ay_cmd = 0.6209734447177869;
    msg.az_cmd = 0.023785581972485037;
    msg.ax_des = 0.1840456825181993;
    msg.ay_des = 0.8957037891813986;
    msg.az_des = 0.9183460032094237;
    msg.virt_err_x = 0.6525271305560945;
    msg.virt_err_y = 0.01186870409109364;
    msg.virt_err_z = 0.7791511807713088;
    msg.surf_fdbk_x = 0.6113540308706225;
    msg.surf_fdbk_y = 0.0014056669776482122;
    msg.surf_fdbk_z = 0.33155869028001617;
    msg.surf_unkn_x = 0.04623461811765761;
    msg.surf_unkn_y = 0.7762551173393414;
    msg.surf_unkn_z = 0.7872314088653568;
    msg.ss_x = 0.6888768966314477;
    msg.ss_y = 0.7756997446884862;
    msg.ss_z = 0.6043061785505508;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.4101744974391809);
    msg.setSource(14715U);
    msg.setSourceEntity(166U);
    msg.setDestination(11424U);
    msg.setDestinationEntity(84U);
    msg.ax_cmd = 0.11076577956140043;
    msg.ay_cmd = 0.03229880449149225;
    msg.az_cmd = 0.8610645110016615;
    msg.ax_des = 0.16913880578231455;
    msg.ay_des = 0.44043991458316234;
    msg.az_des = 0.4444379820512353;
    msg.virt_err_x = 0.5484024140774627;
    msg.virt_err_y = 0.4108344821870673;
    msg.virt_err_z = 0.5359240329700224;
    msg.surf_fdbk_x = 0.8870215707005803;
    msg.surf_fdbk_y = 0.8512522935132925;
    msg.surf_fdbk_z = 0.8948816098101846;
    msg.surf_unkn_x = 0.5963097536721635;
    msg.surf_unkn_y = 0.45909201146922496;
    msg.surf_unkn_z = 0.3614995808826442;
    msg.ss_x = 0.3314147291393399;
    msg.ss_y = 0.32412383629619934;
    msg.ss_z = 0.4857845625128566;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.013484169275525204);
    msg.setSource(31272U);
    msg.setSourceEntity(104U);
    msg.setDestination(35553U);
    msg.setDestinationEntity(76U);
    msg.ax_cmd = 0.6393677681044818;
    msg.ay_cmd = 0.088056396049365;
    msg.az_cmd = 0.18849049920617755;
    msg.ax_des = 0.7454593925637909;
    msg.ay_des = 0.052758783780368246;
    msg.az_des = 0.8327411545609715;
    msg.virt_err_x = 0.7072484753929968;
    msg.virt_err_y = 0.43694101747917635;
    msg.virt_err_z = 0.10587977115181302;
    msg.surf_fdbk_x = 0.13441212843392314;
    msg.surf_fdbk_y = 0.617977391748701;
    msg.surf_fdbk_z = 0.6486828306468582;
    msg.surf_unkn_x = 0.8905940229792958;
    msg.surf_unkn_y = 0.47027379237749145;
    msg.surf_unkn_z = 0.19571147219915463;
    msg.ss_x = 0.6335730976861306;
    msg.ss_y = 0.7329310567821665;
    msg.ss_z = 0.11783240717319077;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.2352876081816495);
    msg.setSource(16061U);
    msg.setSourceEntity(217U);
    msg.setDestination(58833U);
    msg.setDestinationEntity(106U);
    msg.s_id.assign("IXXUBIAYMSJEHLOLSOSPPZKRXLFIBPOHJLMRPOBDMCUYLYGNBERVNZHIMMOYVJFTVWFVYQRXFSJYIWOZTTZAXSFKAGOSWBHDXEGDPUDHYATKNOIEQPTUHAQRKC");
    msg.dist = 0.06851725782851392;
    msg.err = 0.5277950866168203;
    msg.ctrl_imp = 0.8963634848061759;
    msg.rel_dir_x = 0.17507676287074136;
    msg.rel_dir_y = 0.5921063950184663;
    msg.rel_dir_z = 0.8319567569181688;
    msg.err_x = 0.4657487878725126;
    msg.err_y = 0.4279655636369758;
    msg.err_z = 0.7259531334214864;
    msg.rf_err_x = 0.686932107459572;
    msg.rf_err_y = 0.884816186806754;
    msg.rf_err_z = 0.7600778577032279;
    msg.rf_err_vx = 0.6292124068249675;
    msg.rf_err_vy = 0.6601271153575461;
    msg.rf_err_vz = 0.0380680011446185;
    msg.ss_x = 0.846638242135124;
    msg.ss_y = 0.9102617062620323;
    msg.ss_z = 0.559426214178396;
    msg.virt_err_x = 0.31723928060493356;
    msg.virt_err_y = 0.936108257317696;
    msg.virt_err_z = 0.8824994849599889;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.10455473413212457);
    msg.setSource(26558U);
    msg.setSourceEntity(186U);
    msg.setDestination(23282U);
    msg.setDestinationEntity(89U);
    msg.s_id.assign("OYPXBKHXRLHZTPYAQKBWVNEQNYLCPHDRLYDCULPHBKKJRZXCVJXOAFTKGYEUMGCMXDEHPIVZEDVVVMJIAATYSSAZQTERZKFXJMLBWVFDNLEGWFIVNWPDAUCXCIEYBQFIFNHYQUOFZZIRBKWAOGTTOWJJASGWOLHPUSMSETCBDM");
    msg.dist = 0.5504845411066052;
    msg.err = 0.5396466359398883;
    msg.ctrl_imp = 0.1196794567058066;
    msg.rel_dir_x = 0.5036150283372053;
    msg.rel_dir_y = 0.2960708778928456;
    msg.rel_dir_z = 0.2591689349530054;
    msg.err_x = 0.0326650545246574;
    msg.err_y = 0.4415289373600476;
    msg.err_z = 0.7469798415038321;
    msg.rf_err_x = 0.7667356934654447;
    msg.rf_err_y = 0.9916161784462355;
    msg.rf_err_z = 0.6907218719284518;
    msg.rf_err_vx = 0.4238872330141161;
    msg.rf_err_vy = 0.8048314494748957;
    msg.rf_err_vz = 0.8495594356131978;
    msg.ss_x = 0.013748689211517284;
    msg.ss_y = 0.18945961279114032;
    msg.ss_z = 0.04977522314898153;
    msg.virt_err_x = 0.31265747013894285;
    msg.virt_err_y = 0.6224125619172612;
    msg.virt_err_z = 0.7391924364744774;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.2831783127346805);
    msg.setSource(17250U);
    msg.setSourceEntity(43U);
    msg.setDestination(56998U);
    msg.setDestinationEntity(12U);
    msg.s_id.assign("BQJCAWZKIGHFDKNKUSFZSDJQURDZXDTWEANJVG");
    msg.dist = 0.8073104001740423;
    msg.err = 0.8129007768007833;
    msg.ctrl_imp = 0.4491891994289594;
    msg.rel_dir_x = 0.6240098393690288;
    msg.rel_dir_y = 0.053746706390327526;
    msg.rel_dir_z = 0.15054933672498994;
    msg.err_x = 0.04057696639641595;
    msg.err_y = 0.12723940928431887;
    msg.err_z = 0.07097702752171497;
    msg.rf_err_x = 0.012776708929912672;
    msg.rf_err_y = 0.8364188063731052;
    msg.rf_err_z = 0.5557150626940955;
    msg.rf_err_vx = 0.5388681640602179;
    msg.rf_err_vy = 0.03000442935319214;
    msg.rf_err_vz = 0.07027593849718283;
    msg.ss_x = 0.8154942686176662;
    msg.ss_y = 0.1779020642504231;
    msg.ss_z = 0.8829741108932231;
    msg.virt_err_x = 0.16182018018686206;
    msg.virt_err_y = 0.9360412456804316;
    msg.virt_err_z = 0.25863124367272927;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.8369494378265215);
    msg.setSource(1723U);
    msg.setSourceEntity(181U);
    msg.setDestination(56323U);
    msg.setDestinationEntity(20U);
    msg.timeout = 63910U;
    msg.rpm = 0.6694088961956853;
    msg.direction = 235U;
    msg.custom.assign("LLMIWDJXQUDSHTEEHZHKLFBAWPBKCOSOSKIQIGRBYEYZEYTSLUNCJHTDJOKXQCJSEXQIQKZZRJTUYXAMYBAUULUHSUPXCPX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.10050388530125598);
    msg.setSource(27109U);
    msg.setSourceEntity(97U);
    msg.setDestination(12283U);
    msg.setDestinationEntity(87U);
    msg.timeout = 40759U;
    msg.rpm = 0.6019569655989605;
    msg.direction = 200U;
    msg.custom.assign("ATBVMHPUZBJEFCRESXSBSLYXSUBPFWPYBTEJMGYTZAZSZLLMCKNZOMXQHESVXQKFWAHQQXJVMYQGAAOTOVJCGTIRZEAHIWAGICJJNBIYRZNDINZUFQJHQNZHBBFUTYWSVIEDJOJDTUDKTYOSQNWZAJPKOGUAKOGLDMXINKQFGPFSOUXHWWHGPNKOPCELBUDNHRMNDWQRFVDCTCRPCEVRYYWCFDRTELPLFHALRKDBV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.004512421226363417);
    msg.setSource(1158U);
    msg.setSourceEntity(24U);
    msg.setDestination(40828U);
    msg.setDestinationEntity(88U);
    msg.timeout = 6292U;
    msg.rpm = 0.003113042069399663;
    msg.direction = 115U;
    msg.custom.assign("DOLVHKPDYVGLWFHVLXCEOWHUKSWAEEPJZOBXBIAMTMERKYMJPYFFQWTNBGMTWG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.709427000748434);
    msg.setSource(61803U);
    msg.setSourceEntity(24U);
    msg.setDestination(12858U);
    msg.setDestinationEntity(190U);
    msg.formation_name.assign("JYGWMFJBZKUWZRAAFJNDQFZHQIWOTWMFWOPDIDACXPQOEUXBQMHCNTZQXGLTDPUFSSJPBKXNILLRHCLOQYYOQPOGEBSVKZYSSETDTDCGCLYGEGYRKHVRWLNSISUVGPDJAQEEQMHKSKIBHUORXOPAYAKGTEORZMZ");
    msg.type = 5U;
    msg.op = 135U;
    msg.group_name.assign("VOQZEDNKBVDNIXLQMOTVYNJEMPVFGQBBZRBDRNPERAHRSKOQFYJSKBMDXIODHNHLJTDGEXXSUNFUHZJECLPZAPIUCMJHEBEPYFUAWUTQZZSOFUWNWODSCKWOLPYXGYIRFLWFVHKXWGPBKAMTJKESITZWBQTHKQLUBDQTZNMMUWPFUHRBQRPICVXVAWDYGFZEGNYAOXXZLCMAAEACRLHTWOCUMDRTVGVCVCTOJGSYGSIK");
    msg.plan_id.assign("MCQPZDVYSWENVBCRYJCHMCDGJMUTFIUUQUIEXINQCAYWTCRIHOGRVOAYNDHSOPUSWCHLUPPLKOVNWJYD");
    msg.description.assign("ZWNOQZHQQADDEHMIZUCSNJDOPOZYEASKDCALARHDVFCQTHVLGWWXPJTHIBVEMFNCTDSXFXVHONMMBRJKIZJGUHKPGOBLYSQJSYBMCUUXGAKCVCLRHREURXERDBIXHSVCDOKAA");
    msg.reference_frame = 166U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 35065U;
    tmp_msg_0.off_x = 0.448065730978503;
    tmp_msg_0.off_y = 0.9856382140662886;
    tmp_msg_0.off_z = 0.5153225110839967;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.3917221669553729;
    msg.leader_speed_min = 0.597252831533891;
    msg.leader_speed_max = 0.9900739136855838;
    msg.leader_alt_min = 0.5786906055832276;
    msg.leader_alt_max = 0.3249090366966456;
    msg.pos_sim_err_lim = 0.6453309437753558;
    msg.pos_sim_err_wrn = 0.3350296477434197;
    msg.pos_sim_err_timeout = 51639U;
    msg.converg_max = 0.31885997561919743;
    msg.converg_timeout = 28517U;
    msg.comms_timeout = 30289U;
    msg.turb_lim = 0.4898954008317681;
    msg.custom.assign("YEQKSSJXYELVTUBCGPIXTGZMNWJYRBLSKJIHMKVKVUCM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.30354474011655164);
    msg.setSource(9027U);
    msg.setSourceEntity(73U);
    msg.setDestination(41337U);
    msg.setDestinationEntity(8U);
    msg.formation_name.assign("OHATDSDSRRJBLNEGYAFXNDGPQBGWNCOSXRZNHOQGFVMOTBAOCBQSQMCAKUYHCCEICKHEBAXYFQDWLKZAZSZKWSTUNIXPVIDEMNSNPMBCTJLXRSFUKHPPCLECKPTLRCUTIEDKLHRZYEMGVXGAQVDZTKHOVSGPFYVZNNOIUTTVVSNIZRIFGRBMWMHYFAWYUJGJVD");
    msg.type = 117U;
    msg.op = 148U;
    msg.group_name.assign("UGGIOFTGIWOIAQEAJZRLNDRFFXWBYXCWKVXJJQFACTZUNKIVANHWDCVPDRXGRDTYYCWCSSEZOUQJZMFNMVTKEPNYMU");
    msg.plan_id.assign("BWXHTBXAVMIQOCI");
    msg.description.assign("UASWRMJGFPPPFUROWZCMUFTOGHAFPXXUKCQGVUQGQQSXWIBKGNKBZDXCNHM");
    msg.reference_frame = 107U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 359U;
    tmp_msg_0.off_x = 0.7677794968376891;
    tmp_msg_0.off_y = 0.5048393599629407;
    tmp_msg_0.off_z = 0.7594493255136853;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.3836374022319301;
    msg.leader_speed_min = 0.7028494357998398;
    msg.leader_speed_max = 0.6751317020244282;
    msg.leader_alt_min = 0.7549612989337648;
    msg.leader_alt_max = 0.909115909875165;
    msg.pos_sim_err_lim = 0.06588146606734258;
    msg.pos_sim_err_wrn = 0.6422214150614554;
    msg.pos_sim_err_timeout = 5253U;
    msg.converg_max = 0.7045699379552871;
    msg.converg_timeout = 43002U;
    msg.comms_timeout = 54646U;
    msg.turb_lim = 0.6565940194037235;
    msg.custom.assign("WENRKFQKFTWOVSGREJLGZOCYRUCOYTLYUOPHJXKDQNUCQJBHNQPXLAWTSEUFKZIKTVUWWBENXQLQJVVDKNQDYHJABDABVECVZUIXZWEDSAGPOQGLIFHIPTCIRKWXKCBMJXYQMFAM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.8726654019500949);
    msg.setSource(11849U);
    msg.setSourceEntity(147U);
    msg.setDestination(40085U);
    msg.setDestinationEntity(173U);
    msg.formation_name.assign("IICKXHVCGAMRJSVMQIVXJYOIHGFTWXDXJDYPLFETRDVASEMRBSGKXAVTRESYRNBTERMIYNCEBHOWVKWPRIULBXTFOPDZFZHFKQLLBQZSDZJOKYKPFJSGYEJUTZNPXUAVLQQMVYSNSCEPNCAAXBSDHURMFBRQLGMZCWEAKHWHFOKVJLUCQHYJTAWVIWMZJ");
    msg.type = 185U;
    msg.op = 10U;
    msg.group_name.assign("NSLHQBVDVVNTYRVVXMAJAMNOGWZVPTQGCRMEOFERXJOYADFMCBHRLPSBSFBJKXHJRDDJOMGHKMPASKGRXRUTIHUALTJJJYLSLASYOLBBYMOEGQWITZLVEIOASQGDCNFDFUIQMYGTYYKCILNDIEHWIXFZCNDEVZIXPPKWLGUURYSDFGMBEBNNOACFUPKOETIKUTVYHCQRBZC");
    msg.plan_id.assign("MIZKNDJGEYSIPMWUODQROLKMIBQLTNKFOQGNHYOYKINAJGBMZKGCIYBBVRPUTFHADGVIKSTPVXXCQAJAZLMFUGEYPDGEJBIXQFDRSVUTHEDHAFTXZHXMFJNZVGKJZPQZFCAMOTSEDJHRTXDKYQSNLSUFWCNAJBCOVHX");
    msg.description.assign("LMBMMOSHGAURUIGVKRHAGOIZVMWFVDKYHUCBDFVIFYGNTDEHIRIMWPTAQBZVYVFKCZVEXNAXWYVIXTGGCXDARDTMPAPMOTPY");
    msg.reference_frame = 221U;
    msg.leader_bank_lim = 0.904436640125459;
    msg.leader_speed_min = 0.2854255751944428;
    msg.leader_speed_max = 0.0997941010612502;
    msg.leader_alt_min = 0.585105663191549;
    msg.leader_alt_max = 0.7410224851338524;
    msg.pos_sim_err_lim = 0.5532326381417065;
    msg.pos_sim_err_wrn = 0.5768792338362777;
    msg.pos_sim_err_timeout = 41337U;
    msg.converg_max = 0.46736769322432903;
    msg.converg_timeout = 42097U;
    msg.comms_timeout = 23162U;
    msg.turb_lim = 0.6883989351766697;
    msg.custom.assign("ADEAXWZWLMERYMBPMWOYKAXBJTPQTBRGFPAMJTQXQNLHZREPDDIARWOHFRUIEDITCVILYBOKBJDPPNKFDJVNCESYCBYRQDVFTQOXQZRBWUHEYNTRJENXQSJNZYLBPWIZMGZVOYHFSXDIUSCJCVMNIZGTNZNKWIYCSFIKDFVCUTSUJHIOXUFMGVQKKAPPKUOGUDXRAGVWSXQHEVSZGOLELLLVS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.7733699879307632);
    msg.setSource(60298U);
    msg.setSourceEntity(221U);
    msg.setDestination(24495U);
    msg.setDestinationEntity(31U);
    msg.timeout = 1599U;
    msg.lat = 0.16110359602347246;
    msg.lon = 0.7304118847530418;
    msg.z = 0.631567025577361;
    msg.z_units = 95U;
    msg.speed = 0.10837550303880528;
    msg.speed_units = 18U;
    msg.custom.assign("UHVGXNTENRKADFBXJVBKIBYUJTDNRGVLWSQQWPYFYBUZRQARYDODSVSWPCZECBHGYLTJZVTHOHIOQZCQLCMIVWPOZXPVXOROUHJDRLVIHMGAKKIQIPHIP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.7608144878281125);
    msg.setSource(46962U);
    msg.setSourceEntity(30U);
    msg.setDestination(38069U);
    msg.setDestinationEntity(179U);
    msg.timeout = 31416U;
    msg.lat = 0.7093707479807934;
    msg.lon = 0.3182411321534572;
    msg.z = 0.7234014092441904;
    msg.z_units = 90U;
    msg.speed = 0.5810781544627318;
    msg.speed_units = 19U;
    msg.custom.assign("YALCVBGYVYJPUHKYUXTBDGZVWOWFWHXARUGIGXVVFHORNCMDJHOPLPUZTZZLSOMJWEGHRGNLUUKXDSUJTUIQYIQVJASBTFELGOMAOYIKTXFAVWDHBELPNWOLRHRQCHXDCUZXAQYQIPNTEFIYVGKBGNBLVDPSMIFFHCOCNJN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.6069164131251004);
    msg.setSource(15831U);
    msg.setSourceEntity(76U);
    msg.setDestination(23582U);
    msg.setDestinationEntity(92U);
    msg.timeout = 1120U;
    msg.lat = 0.7358353688790815;
    msg.lon = 0.09100028650735281;
    msg.z = 0.5931913622709225;
    msg.z_units = 33U;
    msg.speed = 0.6273751804750901;
    msg.speed_units = 54U;
    msg.custom.assign("JJKKCOWVHLXNZEWWOQLJXEKHDVGCXGWUJHICPUEJTEEHQXCJNMXFWANIXYLTWARDDQBOFADVPABYRZVZCPWOENQDOJBSEUPIAPYBMGGFICZCKHZBTSIRZHDERUOSRVZNSRMLVAVSLRKATSULDWCLBP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.5507374809798044);
    msg.setSource(8766U);
    msg.setSourceEntity(32U);
    msg.setDestination(61107U);
    msg.setDestinationEntity(30U);
    msg.timeout = 44198U;
    msg.lat = 0.6097225391366706;
    msg.lon = 0.09611318274319225;
    msg.z = 0.9435200369244354;
    msg.z_units = 15U;
    msg.speed = 0.30349620211745676;
    msg.speed_units = 220U;
    msg.custom.assign("XSJCSFMWITQNHFECLRGARLITHDEEOYWZSJMIVHHHKVFMHQSBHCLFASQBNNTGYFQOBWVSUOZVUKMGBHXUZQFTWNKGPSYJPNJPTIIDEKBFOBWTDMPXCZLYLWPUJXMVXULAXARQZSXRUE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.8353022356011244);
    msg.setSource(40294U);
    msg.setSourceEntity(236U);
    msg.setDestination(54676U);
    msg.setDestinationEntity(104U);
    msg.timeout = 55627U;
    msg.lat = 0.2650148170035669;
    msg.lon = 0.4837528650545534;
    msg.z = 0.329476039667984;
    msg.z_units = 232U;
    msg.speed = 0.058726422837156456;
    msg.speed_units = 187U;
    msg.custom.assign("GZYODBOTFXEOQQGSQFDAJT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.5594172922470109);
    msg.setSource(12184U);
    msg.setSourceEntity(117U);
    msg.setDestination(3404U);
    msg.setDestinationEntity(126U);
    msg.timeout = 12004U;
    msg.lat = 0.749097673297267;
    msg.lon = 0.12193282547495654;
    msg.z = 0.06467342737661985;
    msg.z_units = 124U;
    msg.speed = 0.4079317897981344;
    msg.speed_units = 19U;
    msg.custom.assign("RQBYJYKHWQHEDVAFITZBCPMBOUVRXTBUKMRMKFDGAJQCOVMSSZFOKRDFNGCNXEOAGWFZNDVNPHSXTHQOQFEUVCHZEFBWGSPWDPBELMRXJKAIECIIXVSOAYRPZIWIAXRGUFGUHIKHCJOANYDTGWBQLAWCOFAKUTHLIYCGJCSLSINNLNEQLXNHQDUZHNTXQPYRMLBPXBT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.838904173373218);
    msg.setSource(4475U);
    msg.setSourceEntity(10U);
    msg.setDestination(58325U);
    msg.setDestinationEntity(86U);
    msg.arrival_time = 0.34058184934245384;
    msg.lat = 0.8759344515427379;
    msg.lon = 0.8769530136394709;
    msg.z = 0.7657238345550801;
    msg.z_units = 58U;
    msg.travel_z = 0.620901256470602;
    msg.travel_z_units = 87U;
    msg.delayed = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.18073131023889888);
    msg.setSource(51436U);
    msg.setSourceEntity(220U);
    msg.setDestination(46559U);
    msg.setDestinationEntity(224U);
    msg.arrival_time = 0.5171709518746811;
    msg.lat = 0.424538449591923;
    msg.lon = 0.22849630672597676;
    msg.z = 0.7868903185095005;
    msg.z_units = 67U;
    msg.travel_z = 0.5246391003809487;
    msg.travel_z_units = 238U;
    msg.delayed = 142U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.28401553801140555);
    msg.setSource(57290U);
    msg.setSourceEntity(214U);
    msg.setDestination(25884U);
    msg.setDestinationEntity(184U);
    msg.arrival_time = 0.9653643956662332;
    msg.lat = 0.5608771071565211;
    msg.lon = 0.42546198083496645;
    msg.z = 0.3067460376778499;
    msg.z_units = 173U;
    msg.travel_z = 0.5551901006610895;
    msg.travel_z_units = 254U;
    msg.delayed = 187U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.8371273120237761);
    msg.setSource(43889U);
    msg.setSourceEntity(1U);
    msg.setDestination(65394U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.8391166066473335;
    msg.lon = 0.16694478856814154;
    msg.z = 0.7190059134291694;
    msg.z_units = 196U;
    msg.speed = 0.38042044707356937;
    msg.speed_units = 61U;
    msg.bearing = 0.6903946182816726;
    msg.cross_angle = 0.10797064923086463;
    msg.width = 0.6752380743119905;
    msg.length = 0.5350870901750774;
    msg.coff = 126U;
    msg.angaperture = 0.5387381437676638;
    msg.range = 39972U;
    msg.overlap = 95U;
    msg.flags = 53U;
    msg.custom.assign("GVAGXXGLAOZKNUK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.4804755018032686);
    msg.setSource(490U);
    msg.setSourceEntity(185U);
    msg.setDestination(39772U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.5821651542806313;
    msg.lon = 0.7158853081384392;
    msg.z = 0.20900832029404937;
    msg.z_units = 178U;
    msg.speed = 0.360189136943343;
    msg.speed_units = 90U;
    msg.bearing = 0.028135938790051718;
    msg.cross_angle = 0.6613058994081347;
    msg.width = 0.36508403897029773;
    msg.length = 0.023293222639146682;
    msg.coff = 160U;
    msg.angaperture = 0.11221570396396308;
    msg.range = 4005U;
    msg.overlap = 222U;
    msg.flags = 99U;
    msg.custom.assign("BIWMFLHCRBQSYJULCHOKAELRSOVNDVNIUYQXRUHQTTRJJTVXJRFAACYGWMZRZGKZFJCAWSPYNAFFFQKIXVLIKVDMQMFCEPLOYSZSSWOANUKIVDEHLTUHH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.12518658822730722);
    msg.setSource(15816U);
    msg.setSourceEntity(128U);
    msg.setDestination(47654U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.8161285423392362;
    msg.lon = 0.17246233735995664;
    msg.z = 0.7026349975206195;
    msg.z_units = 15U;
    msg.speed = 0.6262760135643336;
    msg.speed_units = 154U;
    msg.bearing = 0.9404658003740698;
    msg.cross_angle = 0.12266929620790401;
    msg.width = 0.5375894561431128;
    msg.length = 0.3365219612080377;
    msg.coff = 182U;
    msg.angaperture = 0.054040856499388945;
    msg.range = 33230U;
    msg.overlap = 149U;
    msg.flags = 65U;
    msg.custom.assign("KLDCLTPWHWHLFWSXNHOPICOUFPDUFJPQXXLZYAUHPMBFZSSIHGJMRLJVOWVMWVEPEDBBNTOJGYEVABARNICWDJXBRJXTGWMHMQHACYBVQQAVIWRLUKNNBQXQZPKZILHWY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.42531358810789344);
    msg.setSource(44315U);
    msg.setSourceEntity(40U);
    msg.setDestination(34945U);
    msg.setDestinationEntity(204U);
    msg.timeout = 1792U;
    msg.lat = 0.6450757359892478;
    msg.lon = 0.43046308605716943;
    msg.z = 0.7631835798820955;
    msg.z_units = 201U;
    msg.speed = 0.9528574788335346;
    msg.speed_units = 128U;
    msg.syringe0 = 168U;
    msg.syringe1 = 22U;
    msg.syringe2 = 24U;
    msg.custom.assign("DOKZHUXNFAPDBHQGRZOEWZJEXGUXKKXHEBXAYAQHGIKMEJTBGZLMPIDLVXPCPHEVWQWILVAMJNFUMCHHJDWQHPYKIBSVVHRBWEGOXAKVLNIRQFSFJORWSVNJGFHJCAWCESUMTTDAZFGUZF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.05297985279898787);
    msg.setSource(13380U);
    msg.setSourceEntity(91U);
    msg.setDestination(4828U);
    msg.setDestinationEntity(174U);
    msg.timeout = 42561U;
    msg.lat = 0.9641335195259615;
    msg.lon = 0.8067923666121367;
    msg.z = 0.3771924065425992;
    msg.z_units = 44U;
    msg.speed = 0.22685544883543074;
    msg.speed_units = 172U;
    msg.syringe0 = 125U;
    msg.syringe1 = 68U;
    msg.syringe2 = 133U;
    msg.custom.assign("FZYXGYGSYHBNZIYOEBTVSDLTUVMBUECPRDPASLUCANIIUKPJQARKOYBOSJFOGJBVRVQMBODUDMPJWTMEZXEWIIUGFVWYDMWWAUCODJVKLXXHIVILKKRYYMZOKSXBTCMZTVKFHLXKLPPDTLYOLXQKCTNQOYCTJFMQDPRBQONHQMARNRSHZACFJEUNECBNTGNXHJMGGLESDQWGHNWUIQPVGIAPEHSGF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.7345933319219121);
    msg.setSource(2762U);
    msg.setSourceEntity(40U);
    msg.setDestination(44942U);
    msg.setDestinationEntity(150U);
    msg.timeout = 8204U;
    msg.lat = 0.08780690842139738;
    msg.lon = 0.6602588456476419;
    msg.z = 0.5322036982056026;
    msg.z_units = 95U;
    msg.speed = 0.1610538819044285;
    msg.speed_units = 117U;
    msg.syringe0 = 150U;
    msg.syringe1 = 22U;
    msg.syringe2 = 142U;
    msg.custom.assign("QPHBNKZRJBXEGOPPNNFVJZYDGKTPBSYGZOIMZSWYLVPQXBSKWAMAQTQKGUDFYOVFQKLWHHBWCJOFRATCRLGURNFDTYBJXEHUVDAZMDPXNRZEUHAFYNIKUZMCUSFOOESEGUVKCGYGBITHCRSXMOVTFCJJJFXNLRLAVEHDPQPAULWCINTOJBBUPTJUMMYVNZMKLHMW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.6452879751974828);
    msg.setSource(6689U);
    msg.setSourceEntity(167U);
    msg.setDestination(554U);
    msg.setDestinationEntity(103U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.8898604530145923);
    msg.setSource(58569U);
    msg.setSourceEntity(92U);
    msg.setDestination(5535U);
    msg.setDestinationEntity(69U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.05239573429568134);
    msg.setSource(10394U);
    msg.setSourceEntity(225U);
    msg.setDestination(26339U);
    msg.setDestinationEntity(200U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.247516717821902);
    msg.setSource(33204U);
    msg.setSourceEntity(190U);
    msg.setDestination(24315U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.9190519943898406;
    msg.lon = 0.7703247313411344;
    msg.z = 0.9660900492767561;
    msg.z_units = 236U;
    msg.speed = 0.3265291825008281;
    msg.speed_units = 170U;
    msg.takeoff_pitch = 0.7922558541225356;
    msg.custom.assign("VPNFDFWQBZVMHPIABKPPSPMOVWAKNQXMTLQSUULGRSZMCDJVFAGINREXUXHZKHHBWNROKURYXFMHYOONWLTXBNCEEDJRTRRJCIYOJYALKDFUGVDLJTYVPIOQFIBZBSUGNANOG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.90156775041792);
    msg.setSource(62924U);
    msg.setSourceEntity(81U);
    msg.setDestination(28371U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.41100742021866676;
    msg.lon = 0.5014654653456504;
    msg.z = 0.6577777318351452;
    msg.z_units = 164U;
    msg.speed = 0.5974273344376508;
    msg.speed_units = 191U;
    msg.takeoff_pitch = 0.4898095037442287;
    msg.custom.assign("INMPAJIONUVSCKMULACKWEKCGYTQSDGPKDTQMFBFCSELNXFHUWVPIRROYJFYZKYEHFYJQBFXXKXOFBAJXBDOOVDFKRGTZUIMDOUQEMADNBZPQUIRXIDTFJWIILEHHMRSVQTEZOBGQLBXLGATNXTWRWPNUMSTDHSJPQWBORLZSZCJYFUM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.713488094622604);
    msg.setSource(59706U);
    msg.setSourceEntity(131U);
    msg.setDestination(52798U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.04660990097678874;
    msg.lon = 0.06208637675837014;
    msg.z = 0.10528213992795532;
    msg.z_units = 216U;
    msg.speed = 0.2745887632128149;
    msg.speed_units = 62U;
    msg.takeoff_pitch = 0.9101635680110219;
    msg.custom.assign("SGSQNAZYKYCTERQVLVJGOGYXOTUEPPMDWEZIJXFRZCNJRRGNDPI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.0925778123045351);
    msg.setSource(54937U);
    msg.setSourceEntity(160U);
    msg.setDestination(64163U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.950758624589627;
    msg.lon = 0.21146247900969928;
    msg.z = 0.23077745064967525;
    msg.z_units = 40U;
    msg.speed = 0.10646424131330001;
    msg.speed_units = 135U;
    msg.abort_z = 0.6186546971205976;
    msg.bearing = 0.06880987825557905;
    msg.glide_slope = 3U;
    msg.glide_slope_alt = 0.6988909231288079;
    msg.custom.assign("RQLXLYJLCUVPEIULYGIDTWMKRBSDZTGDOJJGFFUZGNLVUTSUZORCVZPGFAWKEKAUEZMBLVQJQBAXIRTYTIWEDQTWMLHURCDOYMRSOKCQNQUSFISWRSWHANKEMFRBIIPTCGXJWZHOEXJSEJMHXBFEQUOOLANHHGTQXYPQBJD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.6213469280775503);
    msg.setSource(17793U);
    msg.setSourceEntity(174U);
    msg.setDestination(15665U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.050841978005503385;
    msg.lon = 0.6164841077808673;
    msg.z = 0.3430894680628196;
    msg.z_units = 188U;
    msg.speed = 0.20131504775550724;
    msg.speed_units = 98U;
    msg.abort_z = 0.05608141586335491;
    msg.bearing = 0.19441644699826677;
    msg.glide_slope = 98U;
    msg.glide_slope_alt = 0.8459218227995073;
    msg.custom.assign("QDNIIYVGVSPMXIVWZFMPJWZKSOMGBZRVPNXQOUREOZFPRGTKTKBRBPUEIYGQQCGDYVDWPDNFIXJKDNSSJK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.38447579180243807);
    msg.setSource(62815U);
    msg.setSourceEntity(189U);
    msg.setDestination(58547U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.1565832610765251;
    msg.lon = 0.4864682520045629;
    msg.z = 0.38734817441190406;
    msg.z_units = 124U;
    msg.speed = 0.18580222487220077;
    msg.speed_units = 15U;
    msg.abort_z = 0.9328260563649075;
    msg.bearing = 0.15485792537652776;
    msg.glide_slope = 3U;
    msg.glide_slope_alt = 0.33094527599245416;
    msg.custom.assign("WZSSBAXUIZZBVCUQXROFMNIZBYCAIRYUEPTHSBCHRMPITBEZJHLNDWJLMRNZJGGUUTWHDJSXOJROXKKGSCJVNPMPNNQUEXTTZNMFVDG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.9825707440745919);
    msg.setSource(30284U);
    msg.setSourceEntity(205U);
    msg.setDestination(40841U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.586757387446085;
    msg.lon = 0.8224028976785557;
    msg.speed = 0.9526288840307796;
    msg.speed_units = 186U;
    msg.limits = 3U;
    msg.max_depth = 0.9849795322825505;
    msg.min_alt = 0.2769093508041669;
    msg.time_limit = 0.22063395546657938;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7893097537887072;
    tmp_msg_0.lon = 0.22710401298174943;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("UTJVLWFYLPMJHCVEEGGCQFNUAXNNQCXZHXPKRUECMYUDJIXHZPNYZDATMGZVRIXKBMDKODVCYZBBJKAYGEOCUMFVTAFPUDHKXEGOSROLRMSWGVIJQXSMIWAZAFOTMRUBKBTQRQQDZVNFLLPESIQJDNMBVXARSYWAHIONTOJYBJDCDKBAEHAWJVSELFIEPKRXQJZPLURKRCTOIQQWPXHKSNHBLPUWNNTGTIFSBCPC");
    msg.custom.assign("HAPOWDUYGEGEJPZQKYCYXUEEKQUIAEDDWDLTKORAVVPSJZXSQLGBZFIWTPVZNNBLXOCGFCONXJOQFQHUTIPFJOEUOMJBFWUNVRZBTIDHJKZBNZEYEFSXFLD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.2250959812656692);
    msg.setSource(39485U);
    msg.setSourceEntity(15U);
    msg.setDestination(17386U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.7397459730737727;
    msg.lon = 0.8614090373534177;
    msg.speed = 0.7047249816408342;
    msg.speed_units = 207U;
    msg.limits = 167U;
    msg.max_depth = 0.5229926863389246;
    msg.min_alt = 0.4233540050357706;
    msg.time_limit = 0.7759680887699661;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.393362359312614;
    tmp_msg_0.lon = 0.5379864883697953;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("JFJQYIVLZFNJNEGMWQAFELKUVFQTYUIZBCASBLLYXGOHDAPKSFGEJGQBBMZREDWZLBOKFTSJLNMCXYKJZYDXATRWHH");
    msg.custom.assign("VWYWLXGUMPEIBUFNXIRGRRPYVUXJIQKKEOAOIPAAXHUXVEPZNNCHMIQKJDITPIZEZWMAJUTCAOBDCYRKGZZMFNVQJLWYBLFUDTHLXROCBKQKPSOSUZVRSHUNHRXWBVACOPFHJDSECXFTTTSOBOSJDSCTTVEPAFEUGJIVMGNFDVHEWRBPBLNENFS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.24039044921354946);
    msg.setSource(41877U);
    msg.setSourceEntity(61U);
    msg.setDestination(40380U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.47478204125360546;
    msg.lon = 0.05849878469598313;
    msg.speed = 0.3308602117661591;
    msg.speed_units = 60U;
    msg.limits = 159U;
    msg.max_depth = 0.10750296632087442;
    msg.min_alt = 0.7306834347272886;
    msg.time_limit = 0.6356640063111789;
    msg.controller.assign("IFAVSPQUYDJRFVXGASXCPTMTRSXAHHDBWNJULZVPBFLKESTEFZYRWTWFZHQHULEDDNWAHI");
    msg.custom.assign("DFVHJEEQXUSNKQGHACDIBKUMNOTYJUDQEUUOWYJBGFTVYNRLZQHQGSOVUBZTFQYKUVXPHNIYCTIXFRGIADQLDUBEUMSMXAGAKHBPKAHZKEFGSYWJELBCPCIFRFINSJIMSPHZFPHBUOPOWTKTLVJNEAKYW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.4874553094349674);
    msg.setSource(61525U);
    msg.setSourceEntity(78U);
    msg.setDestination(56050U);
    msg.setDestinationEntity(106U);
    msg.target.assign("LXXYZUSVZBJJSXHNJWFVSXYOREBKUKFIDGCUAOEEZHTWWYITRTUKOFQPTUIZE");
    msg.max_speed = 0.748577388186293;
    msg.speed_units = 244U;
    msg.lat = 0.041073507845258095;
    msg.lon = 0.7666925565279947;
    msg.z = 0.22439498222652066;
    msg.z_units = 62U;
    msg.custom.assign("MZIKHZWIVCXDIPGJWJBBCTXXSGALOWZVNTGSOAYFWBUKWTYOIZDCSPCOTHDYQDKWHNOOAFZVNEIUMZLYHVSDYPGQXYTKITXUQAYHMVDUBSOEXNMOFFSCKURVYMMRRJQJDEENFVAYWPPWZQSGINERSHILRKLURNVHXDMTAVTTNFQCJTXBQLAGCULYGLEEVGHLAKIIZUEPZNXBLSA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.9091610611055627);
    msg.setSource(6915U);
    msg.setSourceEntity(46U);
    msg.setDestination(14639U);
    msg.setDestinationEntity(183U);
    msg.target.assign("QHGKGZSHBFHEJVDGGYOAZNKOZFG");
    msg.max_speed = 0.7331242902828328;
    msg.speed_units = 168U;
    msg.lat = 0.5538360576233757;
    msg.lon = 0.601763826945918;
    msg.z = 0.899285238127094;
    msg.z_units = 59U;
    msg.custom.assign("IFQKRJJEKCDDNRFDZBXMUIWYQJVMDSXTST");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.9167639970162172);
    msg.setSource(51489U);
    msg.setSourceEntity(70U);
    msg.setDestination(8223U);
    msg.setDestinationEntity(98U);
    msg.target.assign("RAKZGTSHYSNSNDZJJGXUKKFVZWKQQCHCQPOCJYIYPQPKGWRSPKUUSMLWDZALQUEGMHXJWKWCDFLUJTTMSUJIITZMVYENPRFBVESCGNL");
    msg.max_speed = 0.6362440898667606;
    msg.speed_units = 231U;
    msg.lat = 0.6014060814284918;
    msg.lon = 0.41193059892296235;
    msg.z = 0.9711783419665322;
    msg.z_units = 247U;
    msg.custom.assign("OYDTOASTGNJWJTYTKUQMPFYTIOUACSCUZOGPAUOEBXIIBNXVCCKZCHCKQCVNELVEKLPEDDKXXILDQYVXXRMHBTRWHNLAYIHXZGPUISLGASYSYMROOSZLZFDTDZRBKVJZUBIQNDYWQAAAICXPMNLRBUWRKDVSQLNRSFMJQGXEWURFJPMGJDGMIZUAAWHERBMSTQVBLERXJPELHHGFWZGVFSWJPTQWOFHDZMNNUHMCYJEOI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.12445825725320836);
    msg.setSource(34675U);
    msg.setSourceEntity(206U);
    msg.setDestination(22154U);
    msg.setDestinationEntity(228U);
    msg.timeout = 12801U;
    msg.lat = 0.6476828304515574;
    msg.lon = 0.8646228864927497;
    msg.speed = 0.42441720777151803;
    msg.speed_units = 69U;
    msg.custom.assign("ITZDTPVTKOQZESZXBQNQAIYGVKEACTQUTNIOERXTPWZFGKKVMIROLDYJHLNLXWUYGPAMKDEURIFLAONRJPMLFSJGSZDCTHVNVQSPEQRAOKMGZMPPDGCJNFUZCQXXADDPVRN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.9408475079484562);
    msg.setSource(8617U);
    msg.setSourceEntity(13U);
    msg.setDestination(29901U);
    msg.setDestinationEntity(167U);
    msg.timeout = 46193U;
    msg.lat = 0.6559295753638357;
    msg.lon = 0.4601985705173086;
    msg.speed = 0.539163951191928;
    msg.speed_units = 108U;
    msg.custom.assign("NXIIRBOHXONLMBKGXPURTQREYCDMXZQBBHLPRILGGJBDCYJOJZKGMANFBYVCCZQLBMQRYXRGTZROSFJASPNUVJKCUEAAWYEFZMHPLDKSWBURZGTDHXCUKPSWNTNMSKWGFNKATLEOEDWVCQJPDCVNYKYOQHFUHJFLD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.8945848412442321);
    msg.setSource(61959U);
    msg.setSourceEntity(157U);
    msg.setDestination(32881U);
    msg.setDestinationEntity(154U);
    msg.timeout = 58468U;
    msg.lat = 0.4109595881538476;
    msg.lon = 0.7400251339298415;
    msg.speed = 0.662908226032237;
    msg.speed_units = 62U;
    msg.custom.assign("GPFMVRRQZGQAXYFCZLBZEVIREJZQXFDAYCOKBTNHWIQDLBPTFGPOFKMCJXDVGNQBLKWGISGDAKJIIAYUMYJSNXMWSQRPHSKXCRAXLMGRRIQVOMBHOLITWXOVEWNVPY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.06424335993997221);
    msg.setSource(22258U);
    msg.setSourceEntity(193U);
    msg.setDestination(22988U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.5237491514783148;
    msg.lon = 0.07656615270250566;
    msg.z = 0.23371011995069346;
    msg.z_units = 162U;
    msg.radius = 0.8217447994699257;
    msg.duration = 40098U;
    msg.speed = 0.3065399567162681;
    msg.speed_units = 173U;
    msg.popup_period = 19354U;
    msg.popup_duration = 56512U;
    msg.flags = 236U;
    msg.custom.assign("UOZEXXYSFAPXLSOZQGCNZICCRLBBHNIGDWTRKLQONRKFZABUEIOFNMGNDDTZGFAPAKEJRIZVLUFFTTEXFJPXUVRZICUPJCPAIYLMNOVWELYPDMUAOJAHPWVIXNOGVQNHVTFESBRKENAMHLEWQUWTGUHHUDCDXQC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.3930808900113626);
    msg.setSource(63217U);
    msg.setSourceEntity(149U);
    msg.setDestination(50114U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.43635399520870377;
    msg.lon = 0.46710159912846216;
    msg.z = 0.9136146074413104;
    msg.z_units = 133U;
    msg.radius = 0.8225331174229591;
    msg.duration = 25184U;
    msg.speed = 0.9840467114144837;
    msg.speed_units = 222U;
    msg.popup_period = 40433U;
    msg.popup_duration = 10592U;
    msg.flags = 40U;
    msg.custom.assign("VMICDONOLXXVTTUHKZPXAQUDKBLGBTVHJXYBIKEJFVYCBGRFGGBGBKVYHHKCSGOJRZLUKCMYDTNCONSDPFARAQWYBHAVANSCAETGWIUWYHMOGVZZVJHASLLYRNBLPLFJXMUNYQCTMVQQLYPFS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.7505388239416049);
    msg.setSource(53259U);
    msg.setSourceEntity(184U);
    msg.setDestination(5248U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.26936745744194746;
    msg.lon = 0.28301602817437865;
    msg.z = 0.4155872088862781;
    msg.z_units = 166U;
    msg.radius = 0.87940779730007;
    msg.duration = 26063U;
    msg.speed = 0.7894325000236132;
    msg.speed_units = 123U;
    msg.popup_period = 2784U;
    msg.popup_duration = 10037U;
    msg.flags = 223U;
    msg.custom.assign("XAZBNIJFKTPNDGVIGSRVPJQAEPKCHHHYIQAYPPOPQFVMNQSTOCUYUDGROXGMSEZHMCWNJIDNEIDAEJDHHBUGIOXEHXMBROLCCGKWFCWJEJXZELRLJKUROZTFGRGLEVXTWGDJQTIENUZOCDLYVWDHKAQISSMPYIIKJOFUTMELLZXOAORRQLDKYUTSFKSYFBYUNAHNRVMBCVWFHRWMMZSZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.639948600962743);
    msg.setSource(40073U);
    msg.setSourceEntity(251U);
    msg.setDestination(60710U);
    msg.setDestinationEntity(207U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.7389898619048528);
    msg.setSource(20999U);
    msg.setSourceEntity(122U);
    msg.setDestination(13069U);
    msg.setDestinationEntity(17U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.4159869465024679);
    msg.setSource(15677U);
    msg.setSourceEntity(207U);
    msg.setDestination(60222U);
    msg.setDestinationEntity(211U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PeekManeuver msg;
    msg.setTimeStamp(0.45125252290950646);
    msg.setSource(50883U);
    msg.setSourceEntity(53U);
    msg.setDestination(51082U);
    msg.setDestinationEntity(183U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ZGCTMKZITPQSWBDMRPUELJNNYHDDGHXCYQGMJLWWHCBBSERCBDKTXAFXVXKBBJJRMKAPEPJKUOYNDEKJQCTIPMVUFZUSKVHONZSOOCTGY");
    IMC::Teleoperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.custom.assign("CHDEHJYFQABLSRZHPRIAWAPLXFLXUGVSRBOAXUTJBWKSUBOIYDRAJEGTS");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.man.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PeekManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PeekManeuver msg;
    msg.setTimeStamp(0.5740837077281645);
    msg.setSource(42330U);
    msg.setSourceEntity(99U);
    msg.setDestination(46455U);
    msg.setDestinationEntity(50U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ZUKGEOADGJKDKACSZIYQQXQJASJIZWSARQIEPTOIRWKXFYAUIPAQ");
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.1469722327818157;
    tmp_tmp_msg_0_0.lon = 0.3912705559348649;
    tmp_tmp_msg_0_0.z = 0.4747833419578418;
    tmp_tmp_msg_0_0.z_units = 86U;
    tmp_tmp_msg_0_0.speed = 0.17393382916597666;
    tmp_tmp_msg_0_0.speed_units = 221U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.6455855088000968;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.16425444419465618;
    tmp_tmp_msg_0_0.polygon.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("HPVIVFYFKUGOJAJOTEBCITJIAERLZOMQQBSGSNHAHBDFUXQYXOLTWVPFMDKQYKXOZBSMKQCXVKEMWDUDCLHMSSEDPKRVGFRPSEMLZSALHGVGDZKIOFNLWNFRYWIVPGQCJTXWZJCREELPGZXQKOKZCJPTUDSHMBWPUOTOGYZB");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Elevator tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 1315U;
    tmp_tmp_msg_0_1.flags = 228U;
    tmp_tmp_msg_0_1.lat = 0.37790422613266195;
    tmp_tmp_msg_0_1.lon = 0.9333079780178963;
    tmp_tmp_msg_0_1.start_z = 0.5884447177554862;
    tmp_tmp_msg_0_1.start_z_units = 18U;
    tmp_tmp_msg_0_1.end_z = 0.5429946939777458;
    tmp_tmp_msg_0_1.end_z_units = 41U;
    tmp_tmp_msg_0_1.radius = 0.11207397209364056;
    tmp_tmp_msg_0_1.speed = 0.6229462371598232;
    tmp_tmp_msg_0_1.speed_units = 49U;
    tmp_tmp_msg_0_1.custom.assign("RXIRJGHNBFVNUPBSDKQORIVZLDWWWTBUQVSFTAVQOYQXIAK");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.man.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PeekManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PeekManeuver msg;
    msg.setTimeStamp(0.676235043790469);
    msg.setSource(25229U);
    msg.setSourceEntity(231U);
    msg.setDestination(54789U);
    msg.setDestinationEntity(73U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ZVZGAWJEYJZDXHHBDKRTWMFKNCUZMNVZUROQQMCAXPAWFFFEVNSFOLBTGPIFIJGDDQPZUIBESZRBSNBDNIHQPIWGKIVWHMMHLOYYZLSZRUNCCOXKLWXBTCQDMMFHTQSLIQGUMNCGZTOOWOYBNLJNTJFCHEVWFLRMYAKTYWIQYAWTPBCCKJOFNSORVRRXEBKJXDVMDBXRSKAYXAAUTUSCJKUEQEP");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 13725U;
    tmp_tmp_msg_0_0.custom.assign("HSXDALSVPLGJKEGBKMBTZZVSWNFERCWKOMLPUJOPSTMMBDXSRRKHBDYJJFSDCXLCGMPCKDLHCWELIINYEXLTADRZAZDONWROVRGIGDUSWGUZTQNEXVQYHYFHJYCNXXZJYAXTNZOBRUMVULQUFWIYCAIQXQQHTFBMUFJWVRMCYQSYRMDZJVKTPQQIWAPOTOKBHHNCABTUGVEIEFPFJLOIQORSANUVVBCSEMY");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::CommSystemsQuery tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 224U;
    tmp_tmp_msg_0_1.comm_interface = 46155U;
    tmp_tmp_msg_0_1.model = 18327U;
    tmp_tmp_msg_0_1.list.assign("UAXYOKELYMPQNUCVNJCQVOZLVUOBELYMEPHFPAKL");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::CurrentProfile tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.beams = 162U;
    tmp_tmp_msg_0_2.cells = 154U;
    tmp_tmp_msg_0_2.coord_sys = 119U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.man.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PeekManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.23432785504732656);
    msg.setSource(39106U);
    msg.setSourceEntity(148U);
    msg.setDestination(6164U);
    msg.setDestinationEntity(81U);
    msg.timeout = 63285U;
    msg.lat = 0.657955907813507;
    msg.lon = 0.8743159401474507;
    msg.z = 0.16056666350569793;
    msg.z_units = 171U;
    msg.speed = 0.8689995950389352;
    msg.speed_units = 232U;
    msg.bearing = 0.014534652949249383;
    msg.width = 0.4285783608206617;
    msg.direction = 212U;
    msg.custom.assign("GMOHXSPUVPZYIRTLGDGZJLZVKUSVCEHYUWFVEDBKAXKHQMOHOMBG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.16808608253215018);
    msg.setSource(37903U);
    msg.setSourceEntity(187U);
    msg.setDestination(62886U);
    msg.setDestinationEntity(247U);
    msg.timeout = 26338U;
    msg.lat = 0.2116198207962785;
    msg.lon = 0.5599644012935769;
    msg.z = 0.34064442865165434;
    msg.z_units = 112U;
    msg.speed = 0.0662105914175033;
    msg.speed_units = 186U;
    msg.bearing = 0.714764290448572;
    msg.width = 0.7440477205084977;
    msg.direction = 249U;
    msg.custom.assign("LAUFXNATXGESFSLKGUWKGJAPVQNICXROMEJVCBYIPSBOWKHLSGYVKJOCVEMKOXEFQPECLCNOFDBRZTFVHXIOADTLPVNMHZRTEENIYBWTDRBZBHOJIAIMLOQQJLFDYNPMQFHANTPSBYTRHQOTXNEPXMKFNZYBRXQMJCIVKXLZODWVLADBURKDTUDGDWHYYCIYCJUQRFJLEFNWKCDQJMPWGZMXUPGRSRGPZUQASHAVBZWUCUTJA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.7124502790879422);
    msg.setSource(15201U);
    msg.setSourceEntity(131U);
    msg.setDestination(24050U);
    msg.setDestinationEntity(33U);
    msg.timeout = 64856U;
    msg.lat = 0.04723718498910068;
    msg.lon = 0.5845352343795032;
    msg.z = 0.3280308104542595;
    msg.z_units = 92U;
    msg.speed = 0.8155097693146329;
    msg.speed_units = 243U;
    msg.bearing = 0.5072027863387194;
    msg.width = 0.9650370876588925;
    msg.direction = 150U;
    msg.custom.assign("RBROZHNAVSCLWZYLYWZTHEQVEFMJIFVJSNRJPPJAMRSDEYNGJUVOVUKNEYZKWMBYYTEYFXZFPIVVGXZSDPSBSDMGRWVQXTJBVWHAFCDBUKHLLMTSPCEEAPGZFRBRJTPDXKOLQGPKXKHJGTDMQRQPWADMSMGMOQWIWKEOHHFTOWIIFBCBYQRUULIUZCCGFCDOGHOKDXANCKYNUTOACQYEKLDUNAIAVLHBIQPRXNZTSJLIWOJCZSAEXQXXUH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.2753548429544188);
    msg.setSource(25930U);
    msg.setSourceEntity(35U);
    msg.setDestination(19920U);
    msg.setDestinationEntity(53U);
    msg.op_mode = 46U;
    msg.error_count = 223U;
    msg.error_ents.assign("JCKMBFPKRYYWROBCDVWFKQINYOFWAIXOKXYEGWLKPMAUVOHIUQCSXMQLWPJQTBCAGZBGDZQJFVNTPZXHR");
    msg.maneuver_type = 11692U;
    msg.maneuver_stime = 0.2971688957067158;
    msg.maneuver_eta = 36026U;
    msg.control_loops = 3537044819U;
    msg.flags = 184U;
    msg.last_error.assign("RDRCDSXKTCTXIIJQUEYKRWJHUZJVDRPQLGNWMFQLFQWRQBMVZUSUAGQKZXOVTJKKXUGXAWZPDJSXOPYERYRTOTXUVDHYLKTUQFQBINCLJVGBOFCYSHDDPLXLVIALNTHGNAHHLR");
    msg.last_error_time = 0.7031419919759472;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.4884316308387495);
    msg.setSource(32355U);
    msg.setSourceEntity(18U);
    msg.setDestination(43314U);
    msg.setDestinationEntity(189U);
    msg.op_mode = 249U;
    msg.error_count = 14U;
    msg.error_ents.assign("OIAAYJGGJNBZVFJAFMSFDRXZYSFNYQRHMWVGQETEKMTNSHVFUVBQVOCNWYTWMQRGXRIOOJRSPKXWDWCCZUEQSARBLIOXYLIFJIERKVFEXCKVEXCDUIGNIQNEIHPSWKWWPMBVGBASPN");
    msg.maneuver_type = 59711U;
    msg.maneuver_stime = 0.5730422537718889;
    msg.maneuver_eta = 7717U;
    msg.control_loops = 2068947280U;
    msg.flags = 202U;
    msg.last_error.assign("OZJXWIKEPCKGSACVPGIZOSCHFHLKWYVTIHVPQVZFLCXGQTFUDYZSKBUYPASHNGVLIJXXKQJEJUHLRXUWQCWCXPQVNQYVKZFGTTOAOGOBMXBHEEAGNAIBMPBPUKVRMCLDQGOLUWOUTMLFJTWBFBYBISSNSRIDTDADNMYYWCMSRDRFIKQAJHCTSJOZNHLWEPDE");
    msg.last_error_time = 0.7228481921290076;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.05244646542822262);
    msg.setSource(18493U);
    msg.setSourceEntity(204U);
    msg.setDestination(43620U);
    msg.setDestinationEntity(22U);
    msg.op_mode = 228U;
    msg.error_count = 110U;
    msg.error_ents.assign("UGLPNNQFCRHUBAFXOQSYCNDFFFZGXIXFSPRSIWXYDAJBEPWEXKMQELHYQWHNWEIGHDKMARJHOLLDAPSBKDBVGFRZYJGPIMMFQUEGLHOEWOIGRCEHQSMVKXANVMWVBIIWCCNPUOVLKYVZEMTZMNYJUBRFZXHOCUYGLMDVTAA");
    msg.maneuver_type = 37675U;
    msg.maneuver_stime = 0.9740788594357837;
    msg.maneuver_eta = 55265U;
    msg.control_loops = 766593243U;
    msg.flags = 175U;
    msg.last_error.assign("BWHXTYMRGERNGWRVSQQUBICBWAMUYBQTGQQVYZYZDZPTWEXABSFOWKIOZCQYVADFOONSDDCWGZJWJPVBPDKIJILJLETMHKRCPJSLSALFYEEVTKQEXGSBLFNXSQTEXXVFFZCJOGFLQAWTURT");
    msg.last_error_time = 0.18000951731943726;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.17477799426560803);
    msg.setSource(10039U);
    msg.setSourceEntity(74U);
    msg.setDestination(53005U);
    msg.setDestinationEntity(163U);
    msg.type = 211U;
    msg.request_id = 3990U;
    msg.command = 175U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.722247816394856;
    tmp_msg_0.lon = 0.045277340200256866;
    tmp_msg_0.z = 0.09792767679691494;
    tmp_msg_0.z_units = 239U;
    tmp_msg_0.radius = 0.4466282073680775;
    tmp_msg_0.duration = 29501U;
    tmp_msg_0.speed = 0.8796424843318839;
    tmp_msg_0.speed_units = 132U;
    tmp_msg_0.custom.assign("QXHTPJLZLLEDKOAUUAMPNZNJMANVEQXXXJVIKEIJUAEYOUERDOHJUNTSMOGWJDYCCRZUTGVDOYOUARVHBPMZXWTMHYYSCCJBCXQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 9787U;
    msg.info.assign("HHGUSVEKWMEATNUBRFAAVTFPQFZUCHYEOLCIIXWJJEYBZV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.7705023764398256);
    msg.setSource(61042U);
    msg.setSourceEntity(79U);
    msg.setDestination(41509U);
    msg.setDestinationEntity(205U);
    msg.type = 46U;
    msg.request_id = 37925U;
    msg.command = 237U;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("WTEUXBPQYHXXDVKNHSZBMHDMJZOGPBJELRDESEIIXGUQPXMEUAAVYFUGFASLSBYNSQRPQMHOVLSVZEZHYFCRTIGWLYAWEFYCIWYGAFMBMCOBLSOVGSTIFGTUJZTCTPVQHTQNSRAFOXRXZZKJTEUKTKJCOROFVJDIC");
    tmp_msg_0.max_speed = 0.10055033372258726;
    tmp_msg_0.speed_units = 96U;
    tmp_msg_0.lat = 0.9643883232811352;
    tmp_msg_0.lon = 0.5289889725163658;
    tmp_msg_0.z = 0.8828245627901862;
    tmp_msg_0.z_units = 164U;
    tmp_msg_0.custom.assign("WLECKVAJFDSOZDBWPCZZTHMGIEPHGKCTMOQBWDBHMMBJTJBXZQVNONSZH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 34122U;
    msg.info.assign("FPZRDCSEAOZWQZGNNTLUKABIBDEYZJSQPGMBWFKDUKGQAXRIIYCZGCYAEJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.13943051948639118);
    msg.setSource(40571U);
    msg.setSourceEntity(68U);
    msg.setDestination(50221U);
    msg.setDestinationEntity(125U);
    msg.type = 248U;
    msg.request_id = 41316U;
    msg.command = 196U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.3678396787443855;
    tmp_msg_0.lon = 0.21719381227157342;
    tmp_msg_0.z = 0.17954943264391476;
    tmp_msg_0.z_units = 196U;
    tmp_msg_0.speed = 0.18872773874515303;
    tmp_msg_0.speed_units = 108U;
    tmp_msg_0.takeoff_pitch = 0.9078738855621292;
    tmp_msg_0.custom.assign("BBMTFQNFWKISHTBCPZTIYOLUCLMWRLVVAWRUKOMZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 21678U;
    msg.info.assign("ZCTKVPOYXSRROZPTVWUQZJSJYZXDONIQVMDJVDSUIDSMOKFMCRTWK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.0680477233343113);
    msg.setSource(2582U);
    msg.setSourceEntity(26U);
    msg.setDestination(58902U);
    msg.setDestinationEntity(134U);
    msg.command = 230U;
    msg.entities.assign("PLYDUEVAGMZOHUIMCSABZJVVENSUCBTULMBMSWVFKOGXIOMHZFMDKHONRQEXTQDNWGUHFKQKPGVPHZIHBAEZJIKVRMXZPFTYYGKKLXXGXIWQFARUJJUFYNXDBEPATXYLRGUVNDHZRNNZCLBJPSWQDOFAIWCLWECKGIBBDQOGRDDYVNMIHVAFYJSFCAIPLJWHLSTJJKWLFYXYSHUQCOGQRRTZQAXUERRMCAJZSYONE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.20165302049520017);
    msg.setSource(57030U);
    msg.setSourceEntity(11U);
    msg.setDestination(27816U);
    msg.setDestinationEntity(173U);
    msg.command = 30U;
    msg.entities.assign("XIIAOBYYQRREUTCKVXHYIPNXOZBGRPXENJCRNNWBJDODLWBOAVXHHHGDMPHBXFAYOMEEALJLWRSOFQITVVDKIBEKUWIQVMMAYIJRFCTRLNGPVGQRNVJFWSKCNBSQOAVQQJNDOMDZSBUUPTGFUWFSLZSLJMNQCDEHCAAVBUXZYLEKFSKZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.6747589496302902);
    msg.setSource(38697U);
    msg.setSourceEntity(129U);
    msg.setDestination(47279U);
    msg.setDestinationEntity(37U);
    msg.command = 37U;
    msg.entities.assign("TFWWRNUBMKXTLOZSGZHFPSOABJCMXSDQFSLTGWGVSINGXQHYRGYPINAOHFIUDMRQQBHYFOKZHXVITNQDCDDAHLETMIKKGJVQMACKNMMBBZRLOCSKIUDPVITBWSXWUGBEEXGMIOGAULVEHTNTNALBVWTMCYBSIXPLUFFYMSPZJVVDZAJOCYVLJINFYWOPPKPCXUBOQZZHCUDXH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.7381834300461274);
    msg.setSource(10051U);
    msg.setSourceEntity(38U);
    msg.setDestination(55631U);
    msg.setDestinationEntity(39U);
    msg.mcount = 118U;
    msg.mnames.assign("ZKYLKLJYVUZHMMDXWPFCBWMRFZYMKIBIKSATVLVNFACPCMNGWNRLEFQTHDUDEN");
    msg.ecount = 71U;
    msg.enames.assign("JGRVUOTRGFNAIYFEZEIQVIFEXU");
    msg.ccount = 147U;
    msg.cnames.assign("QXMGUHRONXUAXSQIABVUKP");
    msg.last_error.assign("VDIPLVOVANGOYXNFUOIWTIKRWAVLHEYGPTMJTTITOMUMREYSLANXBBSBJKVEEXVFEHZSUZKYTJJCRLBELHOXBKTDLRFDQOWFKBIWCOCZUDLSJVFIFTYQEGSDUZZUYEZNNWPGXVMOTJPFGFCEXRPJR");
    msg.last_error_time = 0.0960367386589982;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.6269232557963089);
    msg.setSource(38240U);
    msg.setSourceEntity(35U);
    msg.setDestination(41952U);
    msg.setDestinationEntity(175U);
    msg.mcount = 165U;
    msg.mnames.assign("RNCUZJYVZEBBXRSLMMKFLJOGSTGBXWEBVUBROLZGQDLENUQJNTEMS");
    msg.ecount = 5U;
    msg.enames.assign("EKLJAXTDPDVCKUPFNEABBODUHBZ");
    msg.ccount = 10U;
    msg.cnames.assign("ZAYAZAJMJTPOIWVKTUZQFBEVJPNFIFKYBQTGVSRDUUHOXATDBGWXHLPGVJZPTOAPTWRDOKWBHNKRRRMWGPJHCTBAZSLFNMQIDFMUQULQONFSOMALBCCKIVGHYBDUXREUCREYPPSHTYDLXKWOZIGXJMWEMHQKFSJESCY");
    msg.last_error.assign("DBAORVBAJFVYVRAKQSKEYXYYPDNWQCPEMJBFQCDLDBKSTNFEPOAIIYLAUIAY");
    msg.last_error_time = 0.028533280467068822;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.15338399023447746);
    msg.setSource(5412U);
    msg.setSourceEntity(140U);
    msg.setDestination(25414U);
    msg.setDestinationEntity(113U);
    msg.mcount = 47U;
    msg.mnames.assign("CJNRTSFPUPBTJQDCZBLIQZWWLICPRGAUUGYYPZJZHQDHACOOPGWZKXEAYOGKDSTDMRECKBXVZSUVGEQPSFOWHFOBINFEUJRJGSKEWBBMUIRMODFVGPLBTVKMFWJOLOAANKRHDHXSAHYZKDLAOIBVEHGDNNTKYUSBHRYYPINFQGCCNTTNTQHWISMWXQQJXJEGD");
    msg.ecount = 160U;
    msg.enames.assign("IBFFYRLRIPXGDAACKQVYQYZIKTEVMUJLLGTMBSIBDLVNRCFOMWDNIKRYPFDXZEPTXDQBVFOHKPAMCEPJCQZWVINVKEDBYASLQJSJNBXXQWOTQZLHUWZPDINSBZOW");
    msg.ccount = 137U;
    msg.cnames.assign("SUWDCJQFAUKZJINPCGYTARVQAIATTCJFLTEQYXONCPGPSSWTEKEVTRYEIKNEHGQVZWQFVJZMDVDYKZLMMICBHUPIBVULLHOAYPBTWVUAZFGUCMJMOBZMGBFKHSWAZZAVLGWFNQTQJNOLEHYRSRFXYOPLXXLMUZLKZQEDMPSKHDOJMEFACCXUTXBSQ");
    msg.last_error.assign("GPRQKUIFWZVCNIJIVLBKOFPUUUPMJFKJDJQFTHMCELEAVQOSRDARMQWRULVHHXURATWKAVXLICDIMNMZVRFMCTYJXSDPNKVRDGFWMSWTBADJXSTKGHOJZQBHFNOGQYCNSOENEKYTLBHZPMDGRHBVEDUBIXFAULNXXKYHSIWBTLJJFPVYQLAZPBWESYXYOXQPGKZWSIZO");
    msg.last_error_time = 0.06350789848250249;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.8569454668253177);
    msg.setSource(4902U);
    msg.setSourceEntity(53U);
    msg.setDestination(30503U);
    msg.setDestinationEntity(162U);
    msg.mask = 42U;
    msg.max_depth = 0.7659883312027337;
    msg.min_altitude = 0.33280416339900176;
    msg.max_altitude = 0.6128616865856764;
    msg.min_speed = 0.754650490116688;
    msg.max_speed = 0.09693169454434514;
    msg.max_vrate = 0.05316083415196893;
    msg.lat = 0.6950332556822134;
    msg.lon = 0.6131700480283874;
    msg.orientation = 0.026278272208270725;
    msg.width = 0.21160921577633018;
    msg.length = 0.27076580827045005;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.3573392176255087);
    msg.setSource(38580U);
    msg.setSourceEntity(211U);
    msg.setDestination(42277U);
    msg.setDestinationEntity(191U);
    msg.mask = 117U;
    msg.max_depth = 0.35592876636369264;
    msg.min_altitude = 0.13203791879564275;
    msg.max_altitude = 0.4604792917265492;
    msg.min_speed = 0.35902298404494315;
    msg.max_speed = 0.3412421613508898;
    msg.max_vrate = 0.9705124681022056;
    msg.lat = 0.630941928259231;
    msg.lon = 0.3707990725423911;
    msg.orientation = 0.4049961934882942;
    msg.width = 0.5580942492752979;
    msg.length = 0.9164077298098751;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.01695916132198516);
    msg.setSource(50112U);
    msg.setSourceEntity(218U);
    msg.setDestination(3172U);
    msg.setDestinationEntity(154U);
    msg.mask = 110U;
    msg.max_depth = 0.12111972809809934;
    msg.min_altitude = 0.2416668446499527;
    msg.max_altitude = 0.9176108950367123;
    msg.min_speed = 0.05550698126860443;
    msg.max_speed = 0.1866935926945854;
    msg.max_vrate = 0.05663435652210502;
    msg.lat = 0.9326790378317615;
    msg.lon = 0.20021498597586695;
    msg.orientation = 0.13162046638824398;
    msg.width = 0.9791992068668415;
    msg.length = 0.7768000603064479;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.2121139598845797);
    msg.setSource(63792U);
    msg.setSourceEntity(139U);
    msg.setDestination(13720U);
    msg.setDestinationEntity(186U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.12461147050273125);
    msg.setSource(12764U);
    msg.setSourceEntity(76U);
    msg.setDestination(23300U);
    msg.setDestinationEntity(2U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.6902534404750467);
    msg.setSource(58291U);
    msg.setSourceEntity(143U);
    msg.setDestination(19581U);
    msg.setDestinationEntity(221U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.44925450036278636);
    msg.setSource(22226U);
    msg.setSourceEntity(225U);
    msg.setDestination(46246U);
    msg.setDestinationEntity(123U);
    msg.duration = 34281U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.8790066157376333);
    msg.setSource(28997U);
    msg.setSourceEntity(186U);
    msg.setDestination(51108U);
    msg.setDestinationEntity(253U);
    msg.duration = 9348U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.3225796065304811);
    msg.setSource(49709U);
    msg.setSourceEntity(248U);
    msg.setDestination(57692U);
    msg.setDestinationEntity(242U);
    msg.duration = 17898U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.20960724341518822);
    msg.setSource(52972U);
    msg.setSourceEntity(106U);
    msg.setDestination(35132U);
    msg.setDestinationEntity(237U);
    msg.enable = 88U;
    msg.mask = 2048331026U;
    msg.scope_ref = 341128937U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.7200987731610307);
    msg.setSource(46229U);
    msg.setSourceEntity(165U);
    msg.setDestination(26649U);
    msg.setDestinationEntity(250U);
    msg.enable = 251U;
    msg.mask = 1009058797U;
    msg.scope_ref = 2137873344U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.148866662629068);
    msg.setSource(7273U);
    msg.setSourceEntity(69U);
    msg.setDestination(51756U);
    msg.setDestinationEntity(112U);
    msg.enable = 238U;
    msg.mask = 3341288242U;
    msg.scope_ref = 1240025467U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.15006188008964083);
    msg.setSource(47898U);
    msg.setSourceEntity(107U);
    msg.setDestination(11587U);
    msg.setDestinationEntity(38U);
    msg.medium = 63U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.49181183499263426);
    msg.setSource(13673U);
    msg.setSourceEntity(53U);
    msg.setDestination(5429U);
    msg.setDestinationEntity(69U);
    msg.medium = 44U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.07362647795578703);
    msg.setSource(63571U);
    msg.setSourceEntity(50U);
    msg.setDestination(22654U);
    msg.setDestinationEntity(178U);
    msg.medium = 242U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.9545003648263358);
    msg.setSource(58949U);
    msg.setSourceEntity(132U);
    msg.setDestination(56771U);
    msg.setDestinationEntity(241U);
    msg.value = 0.15954018963384897;
    msg.type = 123U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.0845239182672789);
    msg.setSource(48304U);
    msg.setSourceEntity(58U);
    msg.setDestination(2114U);
    msg.setDestinationEntity(99U);
    msg.value = 0.7298442693229308;
    msg.type = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.6782020621589372);
    msg.setSource(20989U);
    msg.setSourceEntity(105U);
    msg.setDestination(35705U);
    msg.setDestinationEntity(106U);
    msg.value = 0.192539790871597;
    msg.type = 68U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.12537855014059562);
    msg.setSource(3809U);
    msg.setSourceEntity(158U);
    msg.setDestination(56858U);
    msg.setDestinationEntity(31U);
    msg.possimerr = 0.2791427998244088;
    msg.converg = 0.2520307660429363;
    msg.turbulence = 0.2777807667161093;
    msg.possimmon = 66U;
    msg.commmon = 66U;
    msg.convergmon = 238U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.17789622221353307);
    msg.setSource(22005U);
    msg.setSourceEntity(211U);
    msg.setDestination(47799U);
    msg.setDestinationEntity(146U);
    msg.possimerr = 0.9833188687067678;
    msg.converg = 0.5763524111348076;
    msg.turbulence = 0.43679877042160886;
    msg.possimmon = 116U;
    msg.commmon = 130U;
    msg.convergmon = 147U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.2475877076003169);
    msg.setSource(38345U);
    msg.setSourceEntity(7U);
    msg.setDestination(50073U);
    msg.setDestinationEntity(196U);
    msg.possimerr = 0.004489593098622624;
    msg.converg = 0.10569406001489956;
    msg.turbulence = 0.39744073953427284;
    msg.possimmon = 107U;
    msg.commmon = 31U;
    msg.convergmon = 209U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.21039840167776214);
    msg.setSource(48155U);
    msg.setSourceEntity(228U);
    msg.setDestination(58411U);
    msg.setDestinationEntity(162U);
    msg.autonomy = 193U;
    msg.mode.assign("OOACMAYSVRWBGZNCWQNCRWCXMUQEXMMIWFZGJJYVXNHPYKFAWYNERIIEPFHZCCCBUJPIZWERGNQVSZGWXPADKKHOMOGVMNVXATTLMALVZASUKPTTGBJQLCSXLAXBDHQJBFKPRNQEPFFYKSSLEBMLWBUIJTZJYWTHZZS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.14299170585928134);
    msg.setSource(8237U);
    msg.setSourceEntity(43U);
    msg.setDestination(65514U);
    msg.setDestinationEntity(56U);
    msg.autonomy = 207U;
    msg.mode.assign("LNVWDTXABUKJRKJLSKPAYPOBESDCLKOUBANUZRGSKHZNMZGTERQJWAMWUJBTFAEUXGNDZRGCBNYYOKPBYWVBDVMFMNESRZPHKYQNTYESQYRHGOOPQHMQCLHXGBBWPFFZCVLMTPIZJQXALUIDZFPUTGGDXHOELTVLYRHEAOIGCYAF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.6111533787823391);
    msg.setSource(43506U);
    msg.setSourceEntity(254U);
    msg.setDestination(7066U);
    msg.setDestinationEntity(89U);
    msg.autonomy = 194U;
    msg.mode.assign("QYNNNINEAMJYQLGHGPGMEGLWDQCVETMUOJPKMQWBUXLHKOHBBJAWEURZQVKQRGBZJCLGNYIOMOJKEESICYZTAVOXIIWTETDCAUQLOWXSJMZFIYXCLDRIOVFUPZVAPODJEBURWJCILZNLVVYSKYHUTHFCXVAGNPWBRWRMTHSCPIKRSVZQYNFLPSXB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.5631497848070189);
    msg.setSource(37192U);
    msg.setSourceEntity(95U);
    msg.setDestination(28841U);
    msg.setDestinationEntity(143U);
    msg.type = 161U;
    msg.op = 215U;
    msg.possimerr = 0.8821829378003107;
    msg.converg = 0.012340211943393076;
    msg.turbulence = 0.3246854731809753;
    msg.possimmon = 122U;
    msg.commmon = 20U;
    msg.convergmon = 74U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.18796513524444847);
    msg.setSource(13104U);
    msg.setSourceEntity(89U);
    msg.setDestination(5912U);
    msg.setDestinationEntity(69U);
    msg.type = 69U;
    msg.op = 9U;
    msg.possimerr = 0.9366842167527026;
    msg.converg = 0.3071717308582659;
    msg.turbulence = 0.6648977427874987;
    msg.possimmon = 123U;
    msg.commmon = 9U;
    msg.convergmon = 42U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.22381267821389894);
    msg.setSource(232U);
    msg.setSourceEntity(133U);
    msg.setDestination(9662U);
    msg.setDestinationEntity(126U);
    msg.type = 18U;
    msg.op = 119U;
    msg.possimerr = 0.8129937687809605;
    msg.converg = 0.9226809146016747;
    msg.turbulence = 0.2622345148297017;
    msg.possimmon = 211U;
    msg.commmon = 147U;
    msg.convergmon = 73U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.7486663903896601);
    msg.setSource(7712U);
    msg.setSourceEntity(184U);
    msg.setDestination(700U);
    msg.setDestinationEntity(61U);
    msg.op = 96U;
    msg.comm_interface = 17U;
    msg.period = 54693U;
    msg.sys_dst.assign("OQKOJCJEGVINUOWPVHWKUIJBTQUBIYTBTFAJKZCTBQMFJHFBBARMROBYSZAGIYLRXDDAEUNLWVZKBAQIXZPYQWSCRMQDGLMTSHWPILNNELOFUIULEPEBHXFDOOTNACVCKNLKMXRJHZSLXTPLXNMFPMSQUAJWAYHGUWGQGSSSMIFRXDDZPJPNEYVDSAYQCVVRKUXXG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.9149680303192403);
    msg.setSource(38579U);
    msg.setSourceEntity(243U);
    msg.setDestination(56873U);
    msg.setDestinationEntity(16U);
    msg.op = 179U;
    msg.comm_interface = 118U;
    msg.period = 654U;
    msg.sys_dst.assign("YIJCMRVSTDPZPBJRCNBLKFASFSCGXJUAEKQHQHQMCTWWPIOBPLQRKWXTBHYEUSKCXNDMIIAFXALNQGIPYFSKRFVMVPEMLCYILJQJXRUISPJBLVVOBZFOUCWVNXTXAOWFEDUKTFOHKEYHBIHYGALROLTSGLTVXMOEXUMBGJORDEUVWGSCGZOZRZNQJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.4479999075754356);
    msg.setSource(30895U);
    msg.setSourceEntity(135U);
    msg.setDestination(38246U);
    msg.setDestinationEntity(211U);
    msg.op = 157U;
    msg.comm_interface = 61U;
    msg.period = 16763U;
    msg.sys_dst.assign("WXJTFFCTLZLKJYKQIRWZBJWAKIPHRXOXSALKJZSEHRXVVVTZBZWVEXRLDPVDVELEAD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.7886940985583639);
    msg.setSource(15149U);
    msg.setSourceEntity(149U);
    msg.setDestination(39495U);
    msg.setDestinationEntity(141U);
    msg.stime = 55102097U;
    msg.latitude = 0.9787479885526844;
    msg.longitude = 0.365529133530648;
    msg.altitude = 40879U;
    msg.depth = 58548U;
    msg.heading = 47740U;
    msg.speed = 28471;
    msg.fuel = -6;
    msg.exec_state = -81;
    msg.plan_checksum = 8908U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.2301639815359765);
    msg.setSource(18821U);
    msg.setSourceEntity(249U);
    msg.setDestination(32968U);
    msg.setDestinationEntity(201U);
    msg.stime = 2482971658U;
    msg.latitude = 0.254661891291023;
    msg.longitude = 0.24488131211355557;
    msg.altitude = 52954U;
    msg.depth = 59489U;
    msg.heading = 23574U;
    msg.speed = 21446;
    msg.fuel = -96;
    msg.exec_state = 90;
    msg.plan_checksum = 53807U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.15545011672246478);
    msg.setSource(41084U);
    msg.setSourceEntity(133U);
    msg.setDestination(14643U);
    msg.setDestinationEntity(162U);
    msg.stime = 3154314508U;
    msg.latitude = 0.09745379178571267;
    msg.longitude = 0.2585924251551672;
    msg.altitude = 3069U;
    msg.depth = 16033U;
    msg.heading = 37623U;
    msg.speed = -30115;
    msg.fuel = 38;
    msg.exec_state = 86;
    msg.plan_checksum = 60941U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.6768922799717724);
    msg.setSource(16823U);
    msg.setSourceEntity(40U);
    msg.setDestination(24710U);
    msg.setDestinationEntity(220U);
    msg.req_id = 29261U;
    msg.comm_mean = 218U;
    msg.destination.assign("AADTBXEEVQQAZMQULEMYRKHLJXFEIFODPYAOBROTSZGWULWGHFDRFRHHZWEBVMXKWVTOQKKJFOJETYUNBXPQUFYEYCCIAANVYTFNGWRJRMDXANZHBMRAQMOWQSZDVPOZKNPUVEMSOGPLBHIBKLSEKINKBPDDXVIJCGTUSLHLSXIYLTPNWMGUEFCJSQYOTISMCLRDSKIUNGAZCWIYJIGVPHVDGNUBRUQKJGCTCTVQWXONXXZZYJACFWH");
    msg.deadline = 0.026052745450055315;
    msg.range = 0.9079920026225181;
    msg.data_mode = 104U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.5299541256899785;
    tmp_msg_0.lon = 0.14346415520624234;
    tmp_msg_0.speed = 0.23954891812456625;
    tmp_msg_0.speed_units = 141U;
    tmp_msg_0.duration = 38344U;
    tmp_msg_0.sys_a = 21092U;
    tmp_msg_0.sys_b = 16476U;
    tmp_msg_0.move_threshold = 0.12087359060365521;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LEPFWYMXRRNFVECDZVFCGILZXSIPBYIJTWBHNNWHVNZIAGTXVEVFZXDJLQXXHSBFIXGKHMFDKJGJSSQQINBMEEWZJYPSDKKDMTUCGPMUJOCNJBNRFACOJCJFLNHUCLYPVPPALBGKKQAQHVUEHWWFTIZPGCZLQSOKQDRURIYOOUZOAFBWXMLQTN");
    const signed char tmp_msg_1[] = {78, -53, -15, -114, 6, -36, -64, 42, -39, 16, -24, 73, 22, -76, 87, -92, 91, -27, -23, -30, 12, -98, -123, -111, -105, -94, 70, -10, -113, 15, 91, 100, 126, -100, -121, -122, -111, 125, -75, -29, -44, 31, 56, -43, -124, 68, -64, -26, 33, 25, -27, 0, -60, 4, -92, 9, 52, 66, -14, 76, -109, -89, 76, -87, -32, 49, 87, -46, -118, 102, -50, -107, 89, -50, -24, -52, 105, 41, -116, -80, 82, -115, 6, -37, 12, -120, -51, -67, 88, -31, -56, 69, -91, 80, -80, 20, 58, -114, -52, 56, 10, -96, -70, -40, -49, -110, 19, 124, -46, 53, -33, -14, -87, 95, -12, 94, -116, 75, 43, -28, 66, -50, -69, -50, -37, 126, -35, 72, -113, -51, 104, 76, 118, -103, -99, 4, 92, -37, -62, 99, -85, -81, -113, 118, -73, 15, -26, -56, -54, -101, -2, -32, -10, -67, 102, -11, 125, -73, -73, -59, 8, 106, 84, -2, 14, -128, -59, -127, 67, 13, 95, -60, -57, 30, -69, 109, -32, 13, -46, 126, -7, 69, -94, -117, 27};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.662220317269738);
    msg.setSource(5865U);
    msg.setSourceEntity(184U);
    msg.setDestination(9893U);
    msg.setDestinationEntity(145U);
    msg.req_id = 30290U;
    msg.comm_mean = 151U;
    msg.destination.assign("AUFPUXYJQIAGXRVQKGTAYYUDRLUMQPKNAKNCBLKDLVRTWFKWMJMMLNOUZZRRPBEERSHTTTAFEVGKJ");
    msg.deadline = 0.634497685636816;
    msg.range = 0.3233356916704122;
    msg.data_mode = 245U;
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 247U;
    IMC::DeviceState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.005147075082877373;
    tmp_tmp_msg_0_0.y = 0.9628347345552722;
    tmp_tmp_msg_0_0.z = 0.26063944454073495;
    tmp_tmp_msg_0_0.phi = 0.025724409669756643;
    tmp_tmp_msg_0_0.theta = 0.8270363459945312;
    tmp_tmp_msg_0_0.psi = 0.5368431558000689;
    tmp_msg_0.location.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.value = 0.08441820399688515;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LVEXQLAPSEYFAEGJUTUVUVMZMUGBZMEGJOBEOZXKYNXDJBIKSOLQQCDRIVLCKAIYZKDVSJOZELIWRPAFZOOXRAVMBPZKEFEXJSYTUZNYDEVKGBHABCHOSFVR");
    const signed char tmp_msg_1[] = {-126, -52, -39, 95, 80, 110, 28, 84, 106, -48, -6, 16, 79, 5, 101, -117, 7, 97, 14, 3, -11, -27, -44, 114, 88, -101, -87, 49, -4, 72, -44, 28, 21, 89, -95, -15, -23, -113, 6, 100, -116, -85, 97, -64, 48, 122, 122, 59, -97, 34, -11, -62, -64, -73, -69, 48, 77, -115, -90, -35, -78, -63, -22, 109, 91, -100, 107, -102, 86, -52, -91, 31, 58, -127, 19, -5, 109, 22, -26, 36, 12, -120, 97, -96, 125, -110, -116, -110, -80, -120, 50, 34, 5, 21, -4, -7, 53, -51, 95, -99, -32, -120, -102, -128, 36, 11, -8, -21, -114, 87, 73, 36, 61, -106, 122, -86, 78, 86, -50, 39, 95, -101, 38, 122, -68, -36, 11, -40, 99, 77, -60, 93, -44, -7, 75, -29, -61, 27, -60, 13, 10, -33, -117, 22, -7, -78, 12, 21, -15, 124, -123, 104, 116, 70, -58, 28, 58, 51, 25, -122, -112, 1, 99, 93, -3, -76, 80, -122, -5, -117, 99, 66, 35, 59, -98, 85, -84, 109, -89, 59, 33, -68, -6, 98, 70, -79, 66, 117, -72, -80, 12, 21, -64, -111, 85, -17, 86, -9, -89, 77, -123, 115, -84, -29, 50, -30, 53};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.955905119204547);
    msg.setSource(56397U);
    msg.setSourceEntity(45U);
    msg.setDestination(41527U);
    msg.setDestinationEntity(246U);
    msg.req_id = 33894U;
    msg.comm_mean = 7U;
    msg.destination.assign("WHQJXPOPMPTDHMRAFWOVTLGAGIRTMZHFSJVSQAWQWEITUNGYBGFPRHXLUGRABZYNGUWUVNMNVMSQQSSJCGORMLSJNAZLJZJVALAUDTCDUKZXXHVVWESFDZQBDVVPMCLBICBYBNTFEOXHCPJSLOKHTCHMJBWIPGYOTFNBNRGCOXKMUGIEUKQXDYDDYPEJCMKQDE");
    msg.deadline = 0.3487363125687354;
    msg.range = 0.3335683084123987;
    msg.data_mode = 247U;
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.2590859485403044;
    tmp_msg_0.temperature = 0.7401799576742825;
    tmp_msg_0.depth = 0.6183932562810093;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XNJAUQYDGAJFYYKYKRCJSXABBSLKKFQINVKTWUEMQSETNPGHXLAYUHMPJHAPZJWTVEZRXMWUSMKOCDMJRYUGCFVRDOZYLXDDCUFIDSLSKWMLXHOBRVCPFDPQOOHUFHZNIHQNTOTLIYZZLIQGORDWEHNQBBGRAOUTKXBEAJCQWVFYSMVBEEUNIPBTHJICACPKQEGMLILAWMZWGTRIVXSTRNAXCQ");
    const signed char tmp_msg_1[] = {-123, 70, 78, -16, 36, 92, -69, 94, 85, 78, 23, -18, 110, 101, 0, 47, -100, -74, 87, 47, -68, 99, 109, -54, 60, 60, -11, 95, -100, -28, 15, 91, -23, -63, 81, -17, 118, 17, -56, -104, 72, 49, -55, 42, 26, -84, -67, 64, 9, 29};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.9844674650900962);
    msg.setSource(57349U);
    msg.setSourceEntity(214U);
    msg.setDestination(52986U);
    msg.setDestinationEntity(186U);
    msg.req_id = 12487U;
    msg.status = 127U;
    msg.range = 0.547318838291379;
    msg.info.assign("TKBLQSFOGEVVOITTVHAMWEFPSVJDONNAXDULIZCSDGSDZYWTATAFURZNFJUXKCHVRHOAADWGTBLSTMHEJLTTDMRPONGWUOCYGIBMSOYZPYPHMZEIJXHLIOMPFMUQNFYKYGBBALRHLEZRWGCBUMKHPDFCYEUCAJZQYKADUFKNRIIYSLG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.8151904193602457);
    msg.setSource(54911U);
    msg.setSourceEntity(52U);
    msg.setDestination(32553U);
    msg.setDestinationEntity(73U);
    msg.req_id = 15303U;
    msg.status = 106U;
    msg.range = 0.011686022432606191;
    msg.info.assign("MYTXEZLMIDFCUIILYZCDBOQJMMENTCAHXKUQAWVPQQXDQYBSHBZRUCBHMJXIUSDTAVCKBGPQNJERUJLYOZPZVPHXAGN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.7576298211154822);
    msg.setSource(50862U);
    msg.setSourceEntity(71U);
    msg.setDestination(34695U);
    msg.setDestinationEntity(130U);
    msg.req_id = 36041U;
    msg.status = 103U;
    msg.range = 0.5143797460075622;
    msg.info.assign("TPZAVKGBEODUIZFTBJTFOLXEYRWPLMAMBLFUKLTENNQTYDQLCCAFSVDHTHOKFZO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.47660034395861073);
    msg.setSource(36855U);
    msg.setSourceEntity(82U);
    msg.setDestination(54785U);
    msg.setDestinationEntity(73U);
    msg.req_id = 27209U;
    msg.destination.assign("QDKVFYATENYZXVRJJLRUHGANFEKHOURFIZVSSUOYXURVXCGNZXJCIINKPKEQTMTAHJSETMCGUVXAAOFFHWKODCWBTSIYDZYLWIQZPGBICBAEWKRVZDEMOUZHSULXNHGIEPMPICXCBXPBKQSGBWVISMWQLPGVBWBEMFMEOLLHIXFKZTADJYFBJLDOCQLEQWN");
    msg.timeout = 0.4801978872877499;
    msg.sms_text.assign("XWMXEPNBISUKXODHFRBJAIUVDHLLGOJKQIXRNAFFLTZVVEACFTXCXRUTYCFVLQBGP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.5800315850762193);
    msg.setSource(50314U);
    msg.setSourceEntity(248U);
    msg.setDestination(8295U);
    msg.setDestinationEntity(240U);
    msg.req_id = 46642U;
    msg.destination.assign("ZUTGCVMURLUKTCJOIMULLZYSCYOOQFWQKKPVCFHKQVCSGLDHUMKEBUOOENGEKMSPYXBBHYZZYTVIUNBBXLAKBWQXGRDYCQAETDZBAVEVXGDIWJLRHFWJSUORPPVONGV");
    msg.timeout = 0.40748132491012146;
    msg.sms_text.assign("EALJSROEBZDPKYDTQIMGXVXDVWYMUHFGVXTZHUJZYIMRSAPHIGPKQNTJCNJNFEBJSZCVRBYCVVQDZDAWRJSTEXDLAUMQLAXACUEGRDOFOFWUTIHIOEHPMLMKLPESLOAHEIGROFMHBTLRPDDZVBTMFTGJKIGZHGPUOMCGOSYKCUBCWLQPYAFVGJYJZTNZWCYDNIPNEVAKHBOWXABXYNQURXNYWQKKFSRWBSNMVKPFWSJOQEKFHBWQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.6769477677655057);
    msg.setSource(13014U);
    msg.setSourceEntity(120U);
    msg.setDestination(28722U);
    msg.setDestinationEntity(79U);
    msg.req_id = 23065U;
    msg.destination.assign("PRZVQRCJFOBPDTWFISSLOXKFSPLTKYAJVBLJPKNLWLAXWDRDODCKIYAPYYBUEPETMICN");
    msg.timeout = 0.18618298633891717;
    msg.sms_text.assign("ZRUNESGTFEABPLZRKYKKEJMZGVHALFCXMYELBXQXCKLMYOHINCNHQVXJOTSWDTYIVJTEFMTUVWYHJPZYOZPCLPIQUNXNBKZRCQPNEGYWMBMOVXLFHSEULZJONFPOSGNBQRLXGARQUKTTZQCMJSKSFOSARBQEDCFAUVUAGINWGBESUHMISAQIHRWAXCGJBMAYCPPJKIBOIDYSUMTWHKDP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.33673776350918316);
    msg.setSource(35917U);
    msg.setSourceEntity(134U);
    msg.setDestination(59865U);
    msg.setDestinationEntity(182U);
    msg.req_id = 4569U;
    msg.status = 2U;
    msg.info.assign("PDGPRKSSEWMIGFFLGEOCDXXTAIWAVZXXTVXUKHJLBTV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.5404708477512594);
    msg.setSource(56926U);
    msg.setSourceEntity(215U);
    msg.setDestination(21201U);
    msg.setDestinationEntity(240U);
    msg.req_id = 42338U;
    msg.status = 49U;
    msg.info.assign("JDVSDODGPGFADHJMVGEXTT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.7216451005397023);
    msg.setSource(20138U);
    msg.setSourceEntity(150U);
    msg.setDestination(5219U);
    msg.setDestinationEntity(21U);
    msg.req_id = 632U;
    msg.status = 203U;
    msg.info.assign("IZIOGGECRJCXILSVDNABQUZEVHSXTPUSOKFOZIBIPPTATGTDNLYXDMLVVURXGMNCFKKWHYJRFUFFBCAQSIUYCJTXFJRPGTTIPKMBLEOQOOXRDNEBIEASRLQSKBSQCLFWZVCPUZWHGQWNHTYSMOVYHBEPOUOIARREDWQFKYHJVNSSGVARJMXFUZMQBDJRLZW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.6033542288130772);
    msg.setSource(9307U);
    msg.setSourceEntity(46U);
    msg.setDestination(16561U);
    msg.setDestinationEntity(130U);
    msg.state = 100U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.2142570109161448);
    msg.setSource(32504U);
    msg.setSourceEntity(19U);
    msg.setDestination(2429U);
    msg.setDestinationEntity(15U);
    msg.state = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.9417800564028089);
    msg.setSource(62715U);
    msg.setSourceEntity(30U);
    msg.setDestination(11476U);
    msg.setDestinationEntity(244U);
    msg.state = 228U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.28471672862568564);
    msg.setSource(5627U);
    msg.setSourceEntity(87U);
    msg.setDestination(17055U);
    msg.setDestinationEntity(167U);
    msg.state = 207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.44805004565226636);
    msg.setSource(40635U);
    msg.setSourceEntity(67U);
    msg.setDestination(48826U);
    msg.setDestinationEntity(124U);
    msg.state = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.3021603251668463);
    msg.setSource(42423U);
    msg.setSourceEntity(35U);
    msg.setDestination(45052U);
    msg.setDestinationEntity(61U);
    msg.state = 236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.3210320770312499);
    msg.setSource(9227U);
    msg.setSourceEntity(18U);
    msg.setDestination(58271U);
    msg.setDestinationEntity(177U);
    msg.req_id = 9983U;
    msg.destination.assign("ZEMBWNHGTIRJQLGJTGVQQIOTVDPCEXFVKZMOIRCYLWCJKVHXKSDAAOYQYZERUZCIGWSNHIJQVDROEKHLAKNFCYEYBQELPOHZRFNKYJUFUUNOTMBXPBCLZYFGAULNUORHRFWZIPFIQQGOSUKDVGNKEUQCMEXSJDVWYSTYIIZVNSHXLMTJSANLBAXMTDYDMKOJPUPQRXSHLCRTBPXIBGADBHFEMEWSWXSDBJT");
    msg.timeout = 0.37469130634364933;
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 213U;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.7380801103948318);
    msg.setSource(47579U);
    msg.setSourceEntity(167U);
    msg.setDestination(33753U);
    msg.setDestinationEntity(98U);
    msg.req_id = 5756U;
    msg.destination.assign("MNICZTXTONFFBFKWLPVWZCHQYIVMTDBAGXXIARWYKTOGKXZRQAWQBSZMAOEJPDEPGPUZEDAESPBWHSZHGINUNVTDLMKIRCNVUDCSYLVGSJWJRLEYCZTPWVJSUSKLDGUCEAIRGMOHTBOOQYYWJQUXKRZNMXNKSNBJTWEHLDQDGFHVMFQUIWGIKQQIIBTNRCXDP");
    msg.timeout = 0.04577748002809623;
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.006836693067683419;
    tmp_msg_0.ch02 = 0.4192021447205474;
    tmp_msg_0.ch03 = 0.3521270185190004;
    tmp_msg_0.ch04 = 0.4815368814636609;
    tmp_msg_0.ch05 = 0.6081431839867573;
    tmp_msg_0.ch06 = 0.5065448354217562;
    tmp_msg_0.ch07 = 0.6436966234065948;
    tmp_msg_0.ch08 = 0.2389645915123061;
    tmp_msg_0.ch09 = 0.6063134967043268;
    tmp_msg_0.ch10 = 0.8221299958444451;
    tmp_msg_0.ch11 = 0.8504058465629017;
    tmp_msg_0.ch12 = 0.9878608090332112;
    tmp_msg_0.ch13 = 0.32822525263061253;
    tmp_msg_0.ch14 = 0.15242982798234483;
    tmp_msg_0.ch15 = 0.36023094284449364;
    tmp_msg_0.ch16 = 0.4256332871814523;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.7014667275431595);
    msg.setSource(1640U);
    msg.setSourceEntity(102U);
    msg.setDestination(33576U);
    msg.setDestinationEntity(25U);
    msg.req_id = 46916U;
    msg.destination.assign("CXWRFZSXQHGBMCSIFVVMNKKAHJYPPQARTQFDMKWMKOTMCKPZZWKGIVUDZNPLILCIBDVGSAOFXPPIDEIXQLCJMXAIIGRJJARTWGBHBYAQSOWPGKMDEPDSGCWDUUWMXXMRWEEMNKRGFNTUVEYUCCKFNIOVIHYOHJQQOYN");
    msg.timeout = 0.26612403140562835;
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.5813508733327174;
    tmp_msg_0.ch02 = 0.4779978803124736;
    tmp_msg_0.ch03 = 0.07935563611714869;
    tmp_msg_0.ch04 = 0.14683148450856076;
    tmp_msg_0.ch05 = 0.344269397243836;
    tmp_msg_0.ch06 = 0.282420417231132;
    tmp_msg_0.ch07 = 0.6125136988807252;
    tmp_msg_0.ch08 = 0.3196879725088778;
    tmp_msg_0.ch09 = 0.020550113152556837;
    tmp_msg_0.ch10 = 0.4328412860047949;
    tmp_msg_0.ch11 = 0.4881712333816052;
    tmp_msg_0.ch12 = 0.31867295070703217;
    tmp_msg_0.ch13 = 0.2519892997608615;
    tmp_msg_0.ch14 = 0.27999651303132744;
    tmp_msg_0.ch15 = 0.6336757994288734;
    tmp_msg_0.ch16 = 0.7832158968196016;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.33901645127428226);
    msg.setSource(28866U);
    msg.setSourceEntity(220U);
    msg.setDestination(55339U);
    msg.setDestinationEntity(73U);
    msg.req_id = 53314U;
    msg.status = 150U;
    msg.info.assign("IPRACQTXNQJSBCLJCGKUBWRTFSEBNGCZPHUUXJXDYYOEZVNCIZAUZMTDQSWPUFRZBGHWTWSQGXMJOPLHEXWOXKNXSKKVTOMGNLSRTRIBHPHWMAOPANOENKVGARKPFEWUUIXKDLPVDFIEVEHCTJINNOCMDCTKVQACJHRKZQLAIXZVYMSUVDYHLMYJQEFGZBAADBMFDUAYZJOBVORPLYKFFITXQVSIBGYQMTJP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.12861837698661782);
    msg.setSource(2698U);
    msg.setSourceEntity(40U);
    msg.setDestination(63502U);
    msg.setDestinationEntity(213U);
    msg.req_id = 52798U;
    msg.status = 150U;
    msg.info.assign("UIYEAFPVPQWRPGVOHBLAFXZMQUVHXXPOWBXOBBDORZGLYKZTGRXELYHCIDVRRNSDHEEFIWQOBVUAJKFDIMDFBEVNJNUSLBYKYUWUTAZMCAAMD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.8221259605161887);
    msg.setSource(58756U);
    msg.setSourceEntity(240U);
    msg.setDestination(44346U);
    msg.setDestinationEntity(113U);
    msg.req_id = 5941U;
    msg.status = 18U;
    msg.info.assign("DTLKWDQUDGBZKBLHFYEFTSPVHLAJXPNTFLATBFZRSLIAKIHTFJIZEFWYNUJQJRUNOMYVFBQNJVQUHMAGZVSBADIGFXKNJGNPULCWWRUZGODRNZOLEKBRGAPAIESAWQKWIQXMOXUC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.2917914364987415);
    msg.setSource(38183U);
    msg.setSourceEntity(129U);
    msg.setDestination(53584U);
    msg.setDestinationEntity(82U);
    msg.name.assign("OWGHKANZGKVMGBZIBEYMVYPAWLWBPLLMCLKRITAKDVHXSMUEPXUIKANJWFBVQIJSDPRSXTOKJYBMLAGDTNJZXXOMZWQRPVBYVCKFUKMSEXUFHWQORLISVEE");
    msg.report_time = 0.6453401126274813;
    msg.medium = 53U;
    msg.lat = 0.24521545349521867;
    msg.lon = 0.49401262968199844;
    msg.depth = 0.6273347496237672;
    msg.alt = 0.3597465294782952;
    msg.sog = 0.19461421329833006;
    msg.cog = 0.03992328032027348;
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("YKXICXVSVPBGDPYQBUBRZLNQDMBCVDDEPAADDHZVLAUSUAFAXSICTWYOTDGUMULNMPQDEEMTVSJNKNRJLWQBVCCEPJNDBZORWTSNMTXQEWHXGSOORWKOVJUHOQOMQFFCLQXRRWMCRUIIKKNPIBZIDHYZZFUAVEMLSAXPREWNZLWHSQGGTSEILKHFCBKJFAEWTBCIJAVHFGJNKCUIZYOLJXKTWREY");
    tmp_msg_0.value = 22U;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.4543717076397811);
    msg.setSource(61070U);
    msg.setSourceEntity(122U);
    msg.setDestination(62219U);
    msg.setDestinationEntity(163U);
    msg.name.assign("EPRSLUSTHUHJYQWZFLGXSABHCFAZYWHQMMIGWOXFGBBKWDGRHWDVOXILRGUYMXKFOBBYALHMPQTIUVIXQEGRLEMNABFXFKLBDPAJSVP");
    msg.report_time = 0.522940951737376;
    msg.medium = 145U;
    msg.lat = 0.30831066733090395;
    msg.lon = 0.8437906758376371;
    msg.depth = 0.9722866391518413;
    msg.alt = 0.2349643988366954;
    msg.sog = 0.10203460918728058;
    msg.cog = 0.4786167646247974;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.9944126408961885);
    msg.setSource(10484U);
    msg.setSourceEntity(4U);
    msg.setDestination(46657U);
    msg.setDestinationEntity(229U);
    msg.name.assign("WJEPTPGFDJPOGYKYRESNTRYCRIWZTBJURZHYQQUJARFANDDMUHTSCHNMBHOGOTFZUZEGCMMAPGYPMSLDWSFXUAGVXHEWBKGKKGFYNQILTFMPMNQFCTDSIUOOVAUSZDSBOJLPTDXSYVWIJREHXHYQCQCJCXVRGNBIQXEDHIJITLZQEAQKEBKKWNWNRSLUZELMNSVXTOOOWCRAVVEPWZPKQWXVCOLLUJNKCLDZBPB");
    msg.report_time = 0.20739022133150342;
    msg.medium = 18U;
    msg.lat = 0.0011522570242509245;
    msg.lon = 0.5088574169139661;
    msg.depth = 0.10721271629454943;
    msg.alt = 0.8992492173826648;
    msg.sog = 0.3432809641737484;
    msg.cog = 0.09059178945502577;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.7943806591493865);
    msg.setSource(55687U);
    msg.setSourceEntity(39U);
    msg.setDestination(5006U);
    msg.setDestinationEntity(8U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.8481557690397131);
    msg.setSource(22872U);
    msg.setSourceEntity(55U);
    msg.setDestination(55891U);
    msg.setDestinationEntity(86U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.11314863347695336);
    msg.setSource(59306U);
    msg.setSourceEntity(189U);
    msg.setDestination(43350U);
    msg.setDestinationEntity(82U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.8543811296739561);
    msg.setSource(49961U);
    msg.setSourceEntity(227U);
    msg.setDestination(11177U);
    msg.setDestinationEntity(191U);
    msg.plan_id.assign("OVMHOOBROJPZAQZTJWTSFFLNTFEYUJUBVQXOIXMQCVVRPWYMSHIQALYFXSUDQURGGWLGNADIEKHZENNWXPIEVYDXMKPCSOFBQHJSXMNODRRHEADHIUGOLFXCRTW");
    msg.description.assign("NKKLCQIKUWGFGKVYAKVWEVHHFMTNGBILSZECTCHYAZUBFYDWOTUBPRTDRRNINONSUPRUJBXHCSDJLSWLEQALGYLOTPVQTSMWNEHPDHCRUCIECEJBWYILDWVZSQCKDEMHXMXYBQZQDKNXQEFAWROEGBZYMVMQSVJWTRXKPNIYAABFDFFFLDVMGVTUNOABXLLKJZKPMJFTNOXAQAYFYPHSUPV");
    msg.vnamespace.assign("OFSQLJAYTPJPDNRCHODDWUVTEVEQCTURUASGNPJEEVVWJNPKQUF");
    msg.start_man_id.assign("BMUJNIHQGFZITKETWLECDFFNDKASLSMVDLWQACBPFQQMEJICUOHEJSN");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("EPCVXCXZIIVYHQMNHKZORPTENVZHTCQTFOAZFMOWSCFPXEMEWGVYUYPNUZRYTXHRDQSRLBJOHUUJKBDHNOLPWWAMGJKMIDSRRMYBBCNVSQEULCBNHOTFMLDVWOSRLGCUYFPXBPHWDJRKDINIJRSGKLUABACVZTIQAWBDLOJEYYSJGDATFOYFEIWHQBJAMDNSFAZGESQPTXJZATMHZIRWIPMCNEKKKFLGJQVPQGLXGEUBSWYNDCVZUQKOGXKFU");
    IMC::Goto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 36893U;
    tmp_tmp_msg_0_0.lat = 0.9576360314822089;
    tmp_tmp_msg_0_0.lon = 0.26301570658008677;
    tmp_tmp_msg_0_0.z = 0.5768232907525704;
    tmp_tmp_msg_0_0.z_units = 132U;
    tmp_tmp_msg_0_0.speed = 0.6729387664102476;
    tmp_tmp_msg_0_0.speed_units = 8U;
    tmp_tmp_msg_0_0.roll = 0.3388560934307192;
    tmp_tmp_msg_0_0.pitch = 0.9064748061196068;
    tmp_tmp_msg_0_0.yaw = 0.988144034216451;
    tmp_tmp_msg_0_0.custom.assign("VNOVKBIQIQQFLZSHRUJSTOMNGTCHTXYAVCGMDTUQCTPJUHDWQMLZERPZTIEDZLPUZKRRGQFBOOXCCTYFKEIUDSMAXBXWPCFGLFXBZOGADWNOTTBWHNOMMWAFBVMPBE");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Target tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.label.assign("YGBLQITRXRXFEMRTOEARXNPWEVBRXEPGHUORQTSUWIMYLMJNDYDHZDNEKZNBJNAXSZCQWJFSVRHRFOHJJGYNGMUJGKTUWKIAOPUIACOFIWBTXLGPLLFFTQQ");
    tmp_tmp_msg_0_1.lat = 0.009047618022350767;
    tmp_tmp_msg_0_1.lon = 0.5027847886448;
    tmp_tmp_msg_0_1.z = 0.9882025548643683;
    tmp_tmp_msg_0_1.z_units = 195U;
    tmp_tmp_msg_0_1.cog = 0.31601904165411976;
    tmp_tmp_msg_0_1.sog = 0.2690497578972215;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::LowLevelControl tmp_tmp_msg_0_2;
    IMC::DesiredRoll tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.value = 0.9916075783391997;
    tmp_tmp_msg_0_2.control.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.duration = 11840U;
    tmp_tmp_msg_0_2.custom.assign("SYUPANBEXGDTRIYZJRMQWPNLOXGAZOGYO");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::SoiPlan tmp_msg_1;
    tmp_msg_1.plan_id = 8563U;
    IMC::SoiWaypoint tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.9907960279332493;
    tmp_tmp_msg_1_0.lon = 0.17120904337083753;
    tmp_tmp_msg_1_0.eta = 1146833307U;
    tmp_tmp_msg_1_0.duration = 10632U;
    tmp_msg_1.waypoints.push_back(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.324518301837214);
    msg.setSource(42012U);
    msg.setSourceEntity(43U);
    msg.setDestination(54405U);
    msg.setDestinationEntity(112U);
    msg.plan_id.assign("OBWJFDOPGAWVUEJRVFZVXBUNTSFLUSTWLYWANTAOUJQ");
    msg.description.assign("NRCLZYESEYVLOTCBLFOPDBRZQRWXPXIUWVSIJTMWBWDXAJRUAYWBCEGMICHGXXIKYHLDSTJVTFDFYEWW");
    msg.vnamespace.assign("WENOSPDMBVWQBTCTDKENYKIKGWIJHMNGKJUOKIRDHUNMRADQZQAOOZYCCRZILORLGKKCAANCMRRHKCZSEDWVUHZLMVHKEJOVHUFVGLESLYVUIHFTPXUYCEQXSTKMJBEAWNCUSPH");
    msg.start_man_id.assign("HIOLCNELYBHUVSHOGEOPSIIUPAMBFEYFRJGZKDXXGYILIEVBQUXLJPAEHQJDXMCPDYCVQFNXYTZAROZWAONLQAQKDEVBGHFBXNCCVOBRCVMTRNK");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("NFPPRCSRSVEVEEBOJBXLKYCAFUEJSXWXPQM");
    IMC::Takeoff tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8339034244865238;
    tmp_tmp_msg_0_0.lon = 0.6465306909111566;
    tmp_tmp_msg_0_0.z = 0.8314216580884316;
    tmp_tmp_msg_0_0.z_units = 31U;
    tmp_tmp_msg_0_0.speed = 0.3967954278319983;
    tmp_tmp_msg_0_0.speed_units = 224U;
    tmp_tmp_msg_0_0.takeoff_pitch = 0.5298115980350563;
    tmp_tmp_msg_0_0.custom.assign("LINNRHIITTIDURBXUFNAMNOQPHEIFAICDLKNEHFJUJEYLXZMVVLKGHDLXAPZQEDCBFQLGWIWUSDYKGWLHUEHYRCMNTQGBQJSVTKSXQ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::ReportControl tmp_msg_1;
    tmp_msg_1.op = 132U;
    tmp_msg_1.comm_interface = 101U;
    tmp_msg_1.period = 51519U;
    tmp_msg_1.sys_dst.assign("DNOCFFORCGCMQSJAFESPOEFWR");
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.620604662414247);
    msg.setSource(58071U);
    msg.setSourceEntity(49U);
    msg.setDestination(44951U);
    msg.setDestinationEntity(161U);
    msg.plan_id.assign("HDUZAVFCGYMLDYXSQIBNMKVHWMIOZGUZBTIPEANRCNJXXEAZNLAFSPATRDJXMTLJMSYHOFMGEIUSCDYAQNPEUSLNXBFCKJAFVBCWOCFLBGSSDMZYBAJAQLYKUSSIO");
    msg.description.assign("NWZEVWPEFIOOODMZHIGXOMCBQCMBWTZDQXRUHYUFRUGNMAOFSNVWJYVNFSLZFRBYRGSYKVXPAZLEPX");
    msg.vnamespace.assign("PLUPRELZHCDSCYNGZWGHVJKSPTLCGVBEYCYIMXIRZZILAXKGCQUSHQNGOTIYGVLBDIOHNQPUFQSTSOZXCJWBAJDHBOFBQBXOAYNWISWMUFDHSDOXVFTVMNEPWNRL");
    msg.start_man_id.assign("TUCCNDHQHSHGVEBNLNLBVETWWEPCQTSEMHGJXHESZFMOJHRZWDWAPFINVFKDMAEUAHSYJBXKFDVLHAVIUUMRFROLYSKWZDSJGUWWLUOVZTPKVTKXJDZZQFYYXCGKIIXYSAXOVOOTVTLQQZBPMIPIGWIIAFZKEHOYAJKCUBRDDFZTBCQSPGOXPPEYBLFLSKDVCNOURTZLGJUJLRIXQACKRMPA");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("PLCVSMZKTVGGIBBZDDDXBGHWPPGTIZDHSCQUAXQBTVONQCWKRKWLCEHESWQUYJFZVRRSDWMZIUNXVGBXLRTFYNCAGFPDPIXVKE");
    IMC::FollowTrajectory tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 55585U;
    tmp_tmp_msg_0_0.lat = 0.9090066221519506;
    tmp_tmp_msg_0_0.lon = 0.839487486859167;
    tmp_tmp_msg_0_0.z = 0.7445918237636905;
    tmp_tmp_msg_0_0.z_units = 196U;
    tmp_tmp_msg_0_0.speed = 0.9349554496291981;
    tmp_tmp_msg_0_0.speed_units = 218U;
    tmp_tmp_msg_0_0.custom.assign("ZTGXRLEBBKDUFYWSBRCGLPTNNILEPGOSQCVIKELGDMDXVEJ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::ButtonEvent tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.button = 61U;
    tmp_tmp_msg_0_1.value = 115U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::VerticalProfile tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.parameter = 40U;
    tmp_tmp_msg_0_2.numsamples = 7U;
    IMC::ProfileSample tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.depth = 55780U;
    tmp_tmp_tmp_msg_0_2_0.avg = 0.3258033733319342;
    tmp_tmp_msg_0_2.samples.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.lat = 0.24511653726607552;
    tmp_tmp_msg_0_2.lon = 0.6380063638485239;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("NLYTVEBMZTQRKSQCAIOJIHWZYDMQBRHZUNASOPYHBWFVVEEBLAYPCSTYWWAJLFIUMIFUMEMHBARICNLLLSFRKWXQZDUTGFFVNHMJQJXXFRPCKUGRQKBANPZOPQXKGLLJRAOQFBGONCXOCCDXVYEMETURQTJFOSSPO");
    tmp_msg_1.dest_man.assign("IJXBYJVYHSCZZKFTXNRCXQWDPSBUUPYMURODJTKKCECCLOVNAUXTERYEKQNKQB");
    tmp_msg_1.conditions.assign("MNUHDHNMUMPORRLJFKBQRBKEPUNYCSFIXUPFXDIMHMXAAZSBPMRRSCESQQDYTIYGYDHCKYGOXMLHRJVHVPXEQKLW");
    msg.transitions.push_back(tmp_msg_1);
    IMC::TCPStatus tmp_msg_2;
    tmp_msg_2.req_id = 14504U;
    tmp_msg_2.status = 174U;
    tmp_msg_2.info.assign("POFQWWSBKLNZBQRPQCGZGTMZHDYPFIIWVKKMOMRFOZDZXIGYHVTRZUNBCOSVQBGRQLYSDFBCQPEMEXWJGVQCTZKWSNGMSKUWJDSNJFOEWNEXOHFTHHVUUBGKVTLN");
    msg.start_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.3954592869712308);
    msg.setSource(47056U);
    msg.setSourceEntity(11U);
    msg.setDestination(54800U);
    msg.setDestinationEntity(125U);
    msg.maneuver_id.assign("SQULUWCNAHNCSCLMSAOHYRQITGBFTIDMYQTBJOQYVEOEPKWYBJUVPGOXQZYYHGOCMGUJQAEALEBZYHAJZLIHUFMIDPDLTRVWHMXZKKAIBNUJVVOLNQWHXECAWUGGKWIRDZVNKHBFXKXIGJPWTXWTZXTJPRXORGRDMYZSPRMGCNWRBAUCLUOFCVMRFGQHJVFBFKBIFLJPSINKMZVOQEEDZXBZEJEUKQLYFVNP");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 48209U;
    tmp_msg_0.lat = 0.8239591379433746;
    tmp_msg_0.lon = 0.3676068985857196;
    tmp_msg_0.z = 0.4247575825180686;
    tmp_msg_0.z_units = 86U;
    tmp_msg_0.speed = 0.29675768251073564;
    tmp_msg_0.speed_units = 179U;
    tmp_msg_0.bearing = 0.9522075913419803;
    tmp_msg_0.cross_angle = 0.2934748495120053;
    tmp_msg_0.width = 0.5396548076102798;
    tmp_msg_0.length = 0.6400957016996445;
    tmp_msg_0.hstep = 0.017263798787255924;
    tmp_msg_0.coff = 154U;
    tmp_msg_0.alternation = 149U;
    tmp_msg_0.flags = 116U;
    tmp_msg_0.custom.assign("OEYJUEUVTLJWGEPFZELGWTSZPQBVMAJDQNXNPFHAZXNCSCLYSSQSKCKMKABIMTCYDTJTGJKGVCHNAXVWVMDVNWOXWBXKGLHWINETLHFFENKICAMTRDDPTIRFASHZDHSRFLCBHSPRFUIYBQNYTCIBRDOJOGLXGUHLAQXQCOMBXBYYZVZOPVPQFAFKHUVRFHYTSNUYEUERSXGUDMDRRKLQLWQAZCXIWNMIOZVPZBPW");
    msg.data.set(tmp_msg_0);
    IMC::UsblPositionExtended tmp_msg_1;
    tmp_msg_1.target.assign("WMFPPJLEKURGZOYIVYYNVKLQZLNITARNUATSVXZXJOAINTKZBSLJTMMRERFVYVGBFBVLLQGCWVCUSLIQTARRDBYKWOFAAISKCECZHJUECDUAHXNLGFFXQXASWITEGXZQFKZOMGPIDUOXEADPRGCNDLMOHMJSWWJRBJDDIQKQZYSWUCITHKQHOHAIOBPBTPMTXGWBTECPYFLVUDWNECHRUPZHVKDYNSPCOYZUV");
    tmp_msg_1.x = 0.25913149879747055;
    tmp_msg_1.y = 0.8997110022339186;
    tmp_msg_1.z = 0.5365610239584743;
    tmp_msg_1.n = 0.8815473909214915;
    tmp_msg_1.e = 0.4162858688878246;
    tmp_msg_1.d = 0.37505713687384135;
    tmp_msg_1.phi = 0.09951563332661906;
    tmp_msg_1.theta = 0.8369559669344131;
    tmp_msg_1.psi = 0.11542003741506102;
    tmp_msg_1.accuracy = 0.39388139486512697;
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.894222560030378);
    msg.setSource(33414U);
    msg.setSourceEntity(117U);
    msg.setDestination(13845U);
    msg.setDestinationEntity(92U);
    msg.maneuver_id.assign("JGEQNPHRTOYMEQCTQUODNOIGIISAPCBAVDGEJCDTKAMWLXCHFUYMAXLBXHOFWSPCSLRKNTUSPNZZQZCMOFBFRYIEZBHNQWRJHOMJVUDZMDLQLULBHZEKCRGYSPGTYLLVWPQBRVJRIJBFIGHJJXKNQVMYKDNVUKRVPBIVWSRTKYPWHJZF");
    IMC::ImageTracking tmp_msg_0;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.4945410648020183);
    msg.setSource(49791U);
    msg.setSourceEntity(5U);
    msg.setDestination(51009U);
    msg.setDestinationEntity(242U);
    msg.maneuver_id.assign("HQKQRDUWXPHBTPYWHIRBSCDEEBDQJVHDOZLMKUBCMRMQDMGKTYZKBHVRGYPTXMAUDQBKWLHQZPMQNAPVQSOERNOVTLLSFNQHRT");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 23067U;
    tmp_msg_0.lat = 0.09058232784663123;
    tmp_msg_0.lon = 0.31550544773953926;
    tmp_msg_0.z = 0.07616771317497328;
    tmp_msg_0.z_units = 147U;
    tmp_msg_0.speed = 0.380119543537516;
    tmp_msg_0.speed_units = 127U;
    tmp_msg_0.custom.assign("XOWEJFNVWSAJQBKDJBMLFPOSGKMBDEKPTFZFMEIYOLUCUQRAWCXSSKEZOHQCEJIGCNXYFTVJUUZAREJRIWLXBMXCICIUMTKFZNBNVKTIYHGUSVTLPJEHNYHDONQPKDKZWBYCQUFCSQLRJVHZPXQHGAGIRTBNROLLEECZJAASNONDFIATSXBVYRUVZPWKMAUOHIWJYLGMYAPUIRXOYQKRGETDSPQVMWPRSWDTZPVHD");
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.5758231202280776);
    msg.setSource(55142U);
    msg.setSourceEntity(247U);
    msg.setDestination(12233U);
    msg.setDestinationEntity(64U);
    msg.source_man.assign("MQKNCXYXOZPMENWERCIMCYNDVOKAOFNIDIACVKQHOLRTXYZRUSWWUUMFBFYVZHKEAFASYZTTZMXNEKPJWIZBVQANEAGAVLHOQWUVICSEWWYBSTHGDCKJZHTMZAQDZCCEOTGJKRQWJPBSLIZTMCJHJ");
    msg.dest_man.assign("HKFFYCTVSXTZYUHLFJUWZWHNJWDKZGKDMRLRBUJTCTIITQENEGIADUZWHJAHYNSRFRKILIE");
    msg.conditions.assign("ALBTQWIVTRGKLXYMRSVDMDEKKKHXAPXITEFNGLZMTXA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.02242098900360545);
    msg.setSource(29733U);
    msg.setSourceEntity(228U);
    msg.setDestination(14533U);
    msg.setDestinationEntity(187U);
    msg.source_man.assign("RQHQWBUKMVPVZARFJLMCDYVODCDUVQWRMHWDDWXEZSPFTCVNJSAJHBXVSEOOOMQDAIINAGN");
    msg.dest_man.assign("AHABPVOTGFHRWNUCLZQRNGMTHJIUMEVQYJKRPAOYMVSNFWLEWOFMKSPCEWAZDOHHCTVPDAQUIZSICQF");
    msg.conditions.assign("QYHVRNPUZZKWFHEWAZEOYRDXBFIXCOONZGVLYDELUIKGMAZDRADQHMRGOVYOXJXKKTGREAAXEBFGVTFYGW");
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.8198042916467537;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.371976584891897);
    msg.setSource(45962U);
    msg.setSourceEntity(71U);
    msg.setDestination(63224U);
    msg.setDestinationEntity(177U);
    msg.source_man.assign("BTWYDJKQCTHCFRKTGUQQJQOTURNXZOUWOFRBYTFDSWIEBMOLTSDPDEVONBJXFBZOFXFIOLEMZCZIVHPYPOAPHNFCTICTELKKEPUDAGTWBGLUPKIZZVASGCQVDKHMVEUNHIWQHZAHWNE");
    msg.dest_man.assign("JMURAHNLZIKLZWQBOAHLN");
    msg.conditions.assign("DABLLJVIAZFIFOYSJRCPTHCBWFQQIHEXSAKGPSYGZQPSTKCJSRVACGSHFSVMLD");
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 151U;
    tmp_msg_0.actions.assign("XZUJVLKAGPPNUUKJSZWYTYZLWRNRTCXNCQESZ");
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.7333654730415313);
    msg.setSource(20732U);
    msg.setSourceEntity(77U);
    msg.setDestination(4080U);
    msg.setDestinationEntity(92U);
    msg.command = 111U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OPPDVGBIJWMITZLMFWADIBDFQULXOGLDOJNUKVSNCDAALGWBAGOPQTNITPQSITRZXIJPMXLXUXBWNFVMVRKROAFIVGZETDENNMNJTKACYSWEWYKQSTXUBJMCWZDZCRRCQUYRBCKWVJERVRLGSUPGKFYPXHJAFZVUAXRKSCCIOCWHPEHLOOCYEKRYH");
    tmp_msg_0.description.assign("ADNXESYLNOPPROIEMWGLDFYBVAJFCSWUEKMQNERQCYMJNBGZYKKXMZJRWXUCTVAGSIGJBWFTQXKVDUTPDNUUALBGYBZUPZZAIYNRXCAZPCFOVAETWUEUOVYFEFOUYJQXQHVCKEKIENBXCUQWMLOLKTMOVJHBHZGTESJQPWGWRVQTPHQHNZSORPCSAILXHKRAJGDKFBBKMQNCXDGDHMLMHHVTILPFIBPRTJVGYLIJISZRD");
    tmp_msg_0.vnamespace.assign("CGIVXESYBAZHTHSWLPAGQESCGMEQIOPXHRTUYJYQKVPYDRNVRDRURMHOJRWKWCCXUTLSKAISZWNZQYABNAJMBMBEZXKTSGYADMJPPMZABTOIKJEBDCJOPOZIKXFRFFQERWSPTEOOTPDMQMBLWGNNZCQOSQUHLGVDXBKFLYACMBCSUJJYRIITKERXVVNJAFPVKDWLFMVFTUUAGHGHCWDUYGDLQI");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YCFLBHXKZXUDKEOGJITZNZJOFPELQNERZVYCDBMTVLWHLJWRGIZCCAUBTTIFUGLFTGQIMXFMHAKFOVFMKBOBHEQSDEBJRGPPHQRYWBEUEPGQTOSISKGYXNMKSSCQURKOXOSPVY");
    tmp_tmp_msg_0_0.value.assign("JZNEEARZRKEPSRECXFFVTQPCSDUVIYNJZLCTXENQELLPAXLMYVSHILOSCVRVFRNSPZOAGVTOWFKDYXZQWGDKNTWHFMRKSMIGANJKBJDAUUMUQTYHFBECHHMXPSROGZBUJVYYWYIPHXSWBBGEZFWRMDKKGKISIDOMQQJPFCBTZYHEJRUIAUOUGVMHNKYCFNHJXIS");
    tmp_tmp_msg_0_0.type = 73U;
    tmp_tmp_msg_0_0.access = 190U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("VGDUPQDRFSDVNSERQTBRFJKCBYFKMPUBDTOELSCTCSIMJNGCUBXED");
    IMC::SoundSpeed tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.14461382175968363;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.8067220113526054);
    msg.setSource(8137U);
    msg.setSourceEntity(117U);
    msg.setDestination(25704U);
    msg.setDestinationEntity(83U);
    msg.command = 190U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JEUJBNSLEQDUBTYVMSWCRFTYOGZESWWPDXLBZAXCHMRQNBCKPQZKJKLBYZPCMPVKMPRGHKWXOFCNACUUOUNQUISWRYNFYXFYZKLOGMEBRWXOV");
    tmp_msg_0.description.assign("SRIGJRASOOJNPEMGQXCIGKNJYOBEWFAEYXBGMYHKYEUTULBSDCIONISBPDATDTGJIABNXAOVKNHULVPHUCMSOBZXWWJVCVVHFDFGHFVUWPYASQIUMHDRICIRFFRXKUAYRUYZONPWNW");
    tmp_msg_0.vnamespace.assign("RVFBVQFZFOGJVQKFIFRZCRYGTHYPADAWYWJUDOGAQFIOXTXCLKBUVFWCKTNWDDNYCSNYTZQURBWKGIAKMVTXRPLESYDHOHQJXGPCMDLZBXIGIUTTZWGKOEUGCSNTJAQORLQZQFHSENTPJUEXESRISNGUKNPZPBWJSAXLEXAALFOEUEIVJJQRYVOCMAMECJSWZCPJZVBRHMBXMHH");
    tmp_msg_0.start_man_id.assign("SEYFDEWDCFMMIPMWBDGLOXMAHDHIUOIPJUGNQKDNOMAOOKNNSWWMZWKGVVKIPLLDANZZKRLYRIKOSJZVNESBLDICOKYBWSJMTPZZZFBXAWUMPXPVKGPHYCQCRDYFTGRBJYCHRDGEYTLESCRXXPAHJLXTJKCACJQQJGFQUQDHBESGQVBTINGRQBBPTZYLKUIUGFEPFLYTXITOFASSVRJVHHUVUBZXEUZYFSWFOX");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("LEJPRILMQWPNKGVUCZZWOBBMJSMRTDSKOXJCPRMEELMHEZBJWITBLQGTOFMPIUJYTMNQAVXOUUDBXJVKTNAJGVCMLZVKYHTXPZOSNRGUOTRCFYNWYVFJEDVBTBYXAIEHWZUKYSNULGMOXQPYRQCWEFUZNGSGBIKADXKOCZHQCHXCTNMLRAEHSFRGYDFL");
    tmp_tmp_msg_0_0.dest_man.assign("HHLIYKSEPFKOJDBUUAWUEGYPYLDJLYWESVDQSNXOWNEMYFRXFGKPFLRJICIDWNTDPWAMHPAZXGPRGXASIWLMKKRZJAYOLNBGXGMLFSCJZ");
    tmp_tmp_msg_0_0.conditions.assign("HUDYLBNBCIJTVTWFAULGQMTWDJKBVLQHZGGGONJHAEHQDZYMRNYMVPVLLHVCSDWSXLABPKBWTDZNMTSDPHUMFRCMUHOSNBBIPRPYPRAMZRIGLSARGNYXOKCEWYAOGKECFXMBHVXKQUAZJZJXTQNEOESEXZTWXCTQWNULUISSTIIFQGXAVCQVWGICUYVDFHLNZJEPPEGNOHWQFYJRMEKROAUVOJAFMRSYPKQID");
    IMC::MsgList tmp_tmp_tmp_msg_0_0_0;
    IMC::Goto tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.timeout = 63922U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.0012519429496209433;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.2429683411081437;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.41195636640282196;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z_units = 0U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed = 0.8711428515667535;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 198U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.roll = 0.08893045741295824;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.pitch = 0.6241385164050594;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.yaw = 0.2015879272100214;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.custom.assign("SBZJQKJFFOQOBCZCEWNWAUUONPVIJIJLCOUMLGZMJTYHYCQMTKEHTSNZCIXTRLLUQBUWBDZSGGMMQWAIAKNQNBKYILWBOFVWDFAEUWMJKCJILFXETAMXRPXGXAXQSRGTPGUOSFRGWYRNR");
    tmp_tmp_tmp_msg_0_0_0.msgs.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::TextMessage tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.origin.assign("LGQWWUKIMRIEVDSPMEYDDWFINSBMTNURJCBLVKBQNQYWBMLALTZROHWYHIACQZEHYKXQAJVIXQYVCFGZXE");
    tmp_tmp_msg_0_1.text.assign("DGHIPCGBZMBGMZRTVXIIJZORCSBHTZUHLXUFLUTMVTBKBRCNXAXYANGWSYJGJYHMGDVRBEQWKWKPULNXTTUNTZUSDFAEQFAXOCYYEWRLSZYGHMYNZQZVSWQEPFVSKCDFELMLQAOWDIPBBZKKPUONPYJGMRSWDEGAWKUXLDMJOORECHPJEQPPVCRPTRLFXNCZDXVTHTSAFOXWHEVQIWBQQAASNIMFNEKIGKLJOOBJ");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.6611118705862268);
    msg.setSource(32695U);
    msg.setSourceEntity(101U);
    msg.setDestination(51609U);
    msg.setDestinationEntity(230U);
    msg.command = 225U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NFOBBMIEHHJFFCHKDLSWHCQNFCWZGZVKEVIEONHUYKAWMUIRNNUWQLXTJNIANJSXSDWRPOWVMNYYVUCDIKXZSGAVWGREHZOCPZXAOJFAVITWRJOTMBMUSVALQTZRYPZRLTZ");
    tmp_msg_0.description.assign("SFJEDGKVELSDNVRSZGDIRSAJTTDUOUFSYMTNPNHEAZAQHBZSYBQOZYHJGFCAYKPOIVDNUSZNKJNOLIAUEVXGCRRYQKODJYMXHIBCEXKNALOMHAUZWLCWROPFVQHLZGBCXVYUDFZTCXVPCPZNZLGEAJJFQBLMXECWWTRWGULUTLVWMRYITABFIRLEKIHOYGNHDXRTIVJSKMJFPTSCODIFDIPTUGBMOXXWWEYHGXVSQQBCQMKFRQMNW");
    tmp_msg_0.vnamespace.assign("IOOWMNZMYGRUAPCDEIXRKYGJIOBKQEKAMFOSJQONTVGKHLVZTWNFEFEGDSVDCBHHTMOZTQCOWRQLRWJEQZXMUVVHHQPQLVALRCZCDDXFSNGJPUPKSRLSHBCCIURYGAOBSFAGBBEAQYPVNMTBIYBFJUBDXNOXUJEPHDPA");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OTGAGOWCCQZEHGLXAGLIMOVSTUDSHVHJLLTMPLRANJUSVFPLQJCXSHJNKNDUXIIYYUOYEJMFOZKXUNVBKXCHSIYZMDDFEXUCNNOEISQADBQGXPWLNBFSTRXDOWHPEBKQLTJNDHSJUGEGGBUWIFZNMPTYFXTVSUGQQPRDFRHZAJCAPNWZYRWAK");
    tmp_tmp_msg_0_0.value.assign("CXPJWIUQVMHVZPNPWAYHGQYOLNVQEGUMZBLABARLCKSAEEIXWRKFOCWRCDOHSGOFONRUNSHQUBLODNYPFOARZRZGRBKITXYAYWADOMBWXLFFTCGGTSTMNOLJSTRWYQYGXK");
    tmp_tmp_msg_0_0.type = 174U;
    tmp_tmp_msg_0_0.access = 41U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("QHDJNLEDFBTCTCQCTDHQEXEJLZRGDPSQFFXGGBGJANAYSRLGHWKSJFPUHVWWJMSVUNOGWIFNKJBBVEACLMIWZPCTZFVZIYMDEMUOOWFVKIDM");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("FIFJYWEFBMIJDBRSAWHGXFQVHUSOMHPJSLANLRRSPIYTWRTEPCWITQRUDSRCGGJNQKWJTADBYVTHQVMODGPKEVWFPNHXKGDRMZYJQNZCSDAJODOHEUTKIXXRMYRFFZQXZBQQX");
    tmp_tmp_msg_0_1.dest_man.assign("SVZICUAVSMQKJNTOEERJJAJBGTZXAOIJFJJEEOIWHZLTV");
    tmp_tmp_msg_0_1.conditions.assign("UQKCLPRTSGBPWTXFJFDWADLXCFCXFEUPNQIDCFYUBRMINTNSIJOFVVIPOOGVJDICMBQOKRTTCEJVT");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::UASimulation tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.type = 78U;
    tmp_tmp_msg_0_2.speed = 15864U;
    const signed char tmp_tmp_tmp_msg_0_2_0[] = {-128, -27, 30, 95, 26, 67, 98, -79, 47, -96, -7, -9, -111, -101, -107, 110, 11, 98, -107, -38, 120, 25, 114, -116, -49, -114, 34, 111, -89, 113, -109, 121, -116, 29, 30, -17, 79, -92, -33, 124, -75, 93, -23, 32, -109, 79, -36, -108, -13, -43, 16, 45, 114, 30, 54, 108, -78, -79, -117, -11, 118, 65, -111, 22, 114, -115, -103, 120, -3, 28, 38, -4, -123, -127, -83, 31, -115, -47, -65, -115, 99, 123, -68, 79, -17, 67, -75, -90, -12, 112, -64, 126, -26, -77, 84, -28, -121, 99, 25, -91, 37, 82, -47, 92, -69, -79, 119, -89, 44, -101, -97, -36, 102, -85, 26, 24, 41, -70, 51, 21, -15, -50, 19, -101, 11, -89, 37, 75, 97, 113, 25, -17, -61, 46, 96, 94, 42, -51, -67, 68, -119, -127, -49, 71, 54, 70, 62, -75, -2, 94, -37, -33, 11, 53, 21, -28, -5, 27, 86, -50, 62, -84, 25, -118, 3, 114, 123, -55, 107, -128, -58, -23, -93, -14, 64, -13, 47, 17, -36, -62, -107, 58, -47, -123, 93, -25};
    tmp_tmp_msg_0_2.data.assign(tmp_tmp_tmp_msg_0_2_0, tmp_tmp_tmp_msg_0_2_0 + sizeof(tmp_tmp_tmp_msg_0_2_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.13508161910286376);
    msg.setSource(44578U);
    msg.setSourceEntity(160U);
    msg.setDestination(38428U);
    msg.setDestinationEntity(183U);
    msg.state = 88U;
    msg.plan_id.assign("BADCZOFNGLVIWSZFUIOBREATRCWHXQVQPVTRWDGAGDUEYKOBLXVHT");
    msg.comm_level = 143U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.1213831752663651);
    msg.setSource(25494U);
    msg.setSourceEntity(116U);
    msg.setDestination(62547U);
    msg.setDestinationEntity(188U);
    msg.state = 53U;
    msg.plan_id.assign("FNXGPWJSZRAMSJXVLBOIDUNTHOSCPZJLBVGKHHFNBMNYQEMQCOTHHWBYOLSMVGLCJSRVUIFZGFDTOIMLNKFIHKUDGIALCHQABXVTMLZMUYUDYAXOBQKRZ");
    msg.comm_level = 73U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.5342610264361684);
    msg.setSource(62291U);
    msg.setSourceEntity(150U);
    msg.setDestination(11318U);
    msg.setDestinationEntity(82U);
    msg.state = 126U;
    msg.plan_id.assign("WCVQGBAEJAHWEFCTUDLHYLYHLCWSBCDBAWBDPCRRUJVSNQEXHJOIRPXVPWFZEOIHGKJZZQGXWVJMJKPEMJOAVWAUXYPQTJTVXGEMUDNLUFFIIURAVANIVMPTXVPPOMYZFKKTXTGOGNMRNADQMJFNZNBYOZNQKTVXKZKBAHGNQWISPYYGYFQRKRHCRXQDLWUZEOISEUSMAWF");
    msg.comm_level = 93U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.2749277054105952);
    msg.setSource(46241U);
    msg.setSourceEntity(36U);
    msg.setDestination(1776U);
    msg.setDestinationEntity(38U);
    msg.type = 192U;
    msg.op = 34U;
    msg.request_id = 11849U;
    msg.plan_id.assign("VHFWSMIOJBSELKGNITUZGJCKJACJBGYTLXIRSMPVFZHWBIRPCSVLFZENOAMRMJNUCNTHOEKWFBRDFFASWGEOKUGXAWETGRQSGFTLWFVJLNNCXSRKDMBPEJPXANAPBMEZHAJJQSXZVBWIQMDZWLXSPWZALUKWHDUQUXCCNVUDMRUPQDNOZOEIZZHDLHGQEVQHCDOTKHTYBMQFMUBGTIAYYVYCTRPDTXOVQYXORHSYPAIKJURBKEPGOQYYCILIY");
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.5436036762552398;
    tmp_msg_0.confidence = 0.15954856647129956;
    tmp_msg_0.opmodes.assign("FLORWQGMOTINSPWWGJSEMCEUMWYSSKIKKVNPJSTQIVPTNVGSLDHIQXGVVXZTAAYWLAOSQNDCDTIBBSJAGWTRKKQCXJULHNFUEEAVAXIMZVUAZYHEUGMD");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FCCLZJZIIIOHLNTGFNRXSOEGHBCTNEBXEIKZCGKGDXJRTYBMEIMBQOCGTLILNYVGQZZLEQULMFNCSSEZZAAI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.7898139494697588);
    msg.setSource(6655U);
    msg.setSourceEntity(95U);
    msg.setDestination(15939U);
    msg.setDestinationEntity(101U);
    msg.type = 208U;
    msg.op = 231U;
    msg.request_id = 26891U;
    msg.plan_id.assign("BPWDAPIYBNSJBEIJUZVWXFCPRRTXNDPJICOZWMADGNZSKQJMMQHAJUDBLUKYWFMJFSPEMVLEVLNOXABOUPCVWMOZUSXDJKGHVENRYCDGXMWTMOGSFXSGSTOQIHFNJDKXW");
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.640491062121468;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PCOTCEJQVOABCYXQDIMLFONNFDEFDLHGWNHTISVERXRLIKCOCGFXSHMZRBHMSLIQIFNHUAOCJUQNXWUDSJVQTVEMUMZVEUZOULZRWHPGCZOJBXPWRQASHHQYADGUNLTMKYVEKPYX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.895283394621589);
    msg.setSource(692U);
    msg.setSourceEntity(141U);
    msg.setDestination(39579U);
    msg.setDestinationEntity(158U);
    msg.type = 224U;
    msg.op = 86U;
    msg.request_id = 26269U;
    msg.plan_id.assign("UNWHTIYZCQGCFVNQIFTUHOGUCJCSLDAMTYEDZMJXRUPOHHFXFAMTIKSLWTMRDDBSLWUNURGGFKDQJEVEBAZDYSNNFOPBZKLETNYERGURBOCYOPSTMKMRVLUIKNALWVKOIQGBLWRIDJQWNVMXVBIDJDXYPQLIKSXCMIGEDYSUAXCYKHBYKKJXXRPSJMTAOEVZCFAUVLJBVQPFZJZBVHGPNEGRW");
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("YQTOCRXMHZHRGNSCTRWITCBIMQWKRIMHZVPAWGUGU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WKUMFAJRKVJWESMHMXLQYQLVOPVUICGTCOTOFSYHEOCCIVQHFJWSCPLJIFXNGEJBMMDNYPXYZLMDUOQVGOBEMBNLWATSAFQESHEVVQDOAZKILJFJYTZMWGCRZBEARBNRBIDWULJRBPCFBJYTGDUXKDHHDQKYYNSMMAAVZDZLETUIGSPUKIGPS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.352340794835472);
    msg.setSource(8993U);
    msg.setSourceEntity(98U);
    msg.setDestination(15286U);
    msg.setDestinationEntity(84U);
    msg.plan_count = 2738U;
    msg.plan_size = 2125840722U;
    msg.change_time = 0.049424409169056105;
    msg.change_sid = 31975U;
    msg.change_sname.assign("MZEHADAVWBJORDFSUWDXDPEDIOPMIFFLKZFMGLMRSXANCGCUMOJJEXJBYSHGIHPXMRKVHRELAXRRKTJCCGKFNJAWVJGEQFWYQVEBMIIYSLEZYPVXZLUAPZEPYWXVNDTLJCIBGNOKIQHGPUIHBQGXOZQHIZYRXCETQOSDKPWHNYUDJGLSLQNMURQGZDQBTLYNOMABOSCKABWVVJNACHSOPFUCFPOZTYHFTTQACMWSRUWTULFNWURZIBDVKYKSN");
    const signed char tmp_msg_0[] = {-34, -65, -54, -58, -25, -2, -100, -13, -32, 23, -84, -99, 67, -117, 89, -128, 94, -119, -109, -93, -27, -123, 81, 112, 64, -67, -80, 20, 104, 104, 89, -44, 121, 44, 35, -85, -16, 3, 99, 62, 43, -6, 13, -107, 104, 92, -37, -117, -34, -128, -87, 77, -70, 41, 79, 44, -57, -62, -12, 74, 61, -92, 89, 48, 69, -11, -40, -55, 2, -75, 52, -4, 32, -12, -52, 12, 40, -12, -62};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("HSSKQZYBTDLYCNHORDYFTHXTAQWIQMKMLMNFGOICWDPOGGRFDUEAHGQREVCUNSFEZUCVXQEIWKZLAKOQVUYUVKCSAPWGPVAKSTWEDGBRFAJNFRZHIFHLNHRDIKRJFTEDDXJBVWZYIHLAUWZMXNKSGQABTWDCMROULYSLHETPLXZBLSZCIPAIHXBQTJ");
    tmp_msg_1.plan_size = 339U;
    tmp_msg_1.change_time = 0.7062075317555033;
    tmp_msg_1.change_sid = 50264U;
    tmp_msg_1.change_sname.assign("ICCCINBVFHALXRWGKUZSWHVPEBJZRGNTARSZQTYDTVVTYJQBBSNOCJXNX");
    const signed char tmp_tmp_msg_1_0[] = {-76, -106, 6, -74, 67, -29, 50, 67, -65, -56, -102, -58, -123, -88, -118, -25, 26, 54, 79, -34, 17, 94, -73, 35, 4, -49, -38, 95, 63, 59, -42, 80, -105, 38, 31, 24, -45, 85, -52, 76, -67, 103, -119, 1, 32, 108, -80, 48, 55, 13, 0, 90, 49, -122, 22, 42, -83, -79, -104, -113, -9, 25, -104, -106, -98, 87, -89, 20, -14, 45, -104, 34, 72, -96, 109, -83, 98, 105, -125, -45, 69, 58, -45, -54, -51, -21, -29, -126, 83, -96, -59, 71, -60, -35, 6, 113, -101, -94, -80, 58, 100, -52, -81, -101, 66, 117, -123, 30, -30, 33, 52, -62, 104, -13, -2, -36, 2, -111, 22, -41, -17, 65, 37, -29, 15, 8, -46, 31, -31, 84, 67, 56, 120, -97, -111, 31, -56, -116, -95, -86, -41, 85, -82, -37, 73, -37, 33, -12, 113};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.616719501793104);
    msg.setSource(53379U);
    msg.setSourceEntity(3U);
    msg.setDestination(26601U);
    msg.setDestinationEntity(91U);
    msg.plan_count = 27472U;
    msg.plan_size = 443366842U;
    msg.change_time = 0.8116029309877197;
    msg.change_sid = 7824U;
    msg.change_sname.assign("FMZLUNBFYRKFANMKIOTBLVCSKCZLQOV");
    const signed char tmp_msg_0[] = {-30, -6, 107, -123, 24, -37, -84, -41, 75, 71, 42, -8, -106, 60, 55, -25, -69, 53, -5, 112, -21, -13, 100, -68, 84, -100, 111, -93, 25, -7, -50, -94};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.7409833003355206);
    msg.setSource(16812U);
    msg.setSourceEntity(63U);
    msg.setDestination(63205U);
    msg.setDestinationEntity(236U);
    msg.plan_count = 57812U;
    msg.plan_size = 2025982525U;
    msg.change_time = 0.7082575796413715;
    msg.change_sid = 34305U;
    msg.change_sname.assign("QFBKZFRQKVC");
    const signed char tmp_msg_0[] = {76, -49, 121, 113, 119, -18, -10, 15, -54, 104, -1, -42, 17, 67, -30, -90, -53, -98, 43, -103, -46, -53, -34, 25, -33, 47, -10, -48, 41, -43, -127, 110, -2, -37, -42, 6, 76, -98, 122, -3, -89, 38, -115, 67, 73, 96, 74, 105, 87, -41, 36, 26, 44, -19, -83, -18, 35, 123, 5, -44, 61, 7, 5, 12, 124, -41, 14, 19, 73, 45, -71, 74, 30, 102, 9, -19, -46, -16, 106, -111, -116, -10, 37, -119, 103, 53, -31, 86, 14, 82, 56, -24, -105, -116, 32, 97, 99, -25, -59, 79, 4, 3, -45, -83, -75, -76, -33, -51, -101, -64, -13, -52};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.6227526952704315);
    msg.setSource(32024U);
    msg.setSourceEntity(69U);
    msg.setDestination(12345U);
    msg.setDestinationEntity(22U);
    msg.plan_id.assign("AWFCTAWIOQVYHHXYTBDMGKRNFSTUCZCJKYAGUMRDSXHNDGDRGQCOQSQVEWVKPHRWOTKQFMLOBEAWCABUJTECEZJOEPJKKNXHDJVQHFVJSUMSUNMWPVLYXKQXLHMABPJTVJYU");
    msg.plan_size = 46837U;
    msg.change_time = 0.35918907643657216;
    msg.change_sid = 31032U;
    msg.change_sname.assign("WVIPZRKVXWBQGXVJKXQUAZTFOCTKPICYTDAWXVXZONDTSMZPXWQQQRJEXRWGJJRQOWIGBUFKJYYGSAAHTEDRDKVNKALDAZFYSGAHFECRXTFQIUPLJUGPIPTBDZKSBMBDUCCGHRRSMUMENPUSONCRBSYNJOMDINMHV");
    const signed char tmp_msg_0[] = {-18, 119, 37, 80, 20, -26, -37, -21, -110, -21, 38, -11, 71, 100, -109, -93, 78, -14, -93, 33, 15, 11, 53, -18, -78, 102, -87, 66, -91, 79, -64, -55, 7, -4, -116};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.7668317652711162);
    msg.setSource(61993U);
    msg.setSourceEntity(165U);
    msg.setDestination(6951U);
    msg.setDestinationEntity(25U);
    msg.plan_id.assign("XHUMLJLDKZAFLXWEJRDOUEQLYJTZML");
    msg.plan_size = 35158U;
    msg.change_time = 0.42573365531359075;
    msg.change_sid = 28082U;
    msg.change_sname.assign("KIQRVETJIMPMSZHJEZIEDCPXLPCWMDDDCTAOBYSIFNUOKRINRQPKVJTLNORSSVIOESPWCYLLLXQHEYGABEFOGLUYEFTVWUAUZJJUHMRKDRJCKYXCHXXGBFABGHWCVUFPQKSMUZNCBCXZSJRNZFIMKIUQARXDWTOKPGWNJEPBFVOHHOOVILWENDRMZXSHKTQYZIELAYTCGHPTLZGGYBABOAYPDQQRMLTASVXXTUVDQJWYMQNGWGJFZU");
    const signed char tmp_msg_0[] = {-71, -122, -18, 125, -80, -21, 42, 15, -83, 37, -115, 26, 10, 107, -34, 33, -37, 81, -125};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.13277995397506703);
    msg.setSource(17893U);
    msg.setSourceEntity(158U);
    msg.setDestination(7299U);
    msg.setDestinationEntity(102U);
    msg.plan_id.assign("FULTOZLQJRYVUUZDRCSJBEQNQLPOZSTVYSGDGLTFRHFCKKZMPTEQTSIEIVOCUIAYSXWYJWCEOPHAMYSANANXWXXUOFAMGIKJHOLWDGIBQPVURZQSZMXJGJLDNOVGHJPRMZQHZOWASTCIACHGFQSBEDYDCINELMODEUKXRKYDKFXNYKFKVIRRTVQEWWPFOTBUIGUQVYCHJMWBLRKYJGTMXPBUWFFGBMPSMVND");
    msg.plan_size = 38179U;
    msg.change_time = 0.7524840117147057;
    msg.change_sid = 21823U;
    msg.change_sname.assign("VKZIOYLJJSIFAJUUQVDCQJHPTWXSINVOTUKODNBXZNEQCBFDRWPZLAEXSGLBDOVDJBTKTRPADNZNCQYGKENGIYTHQLYVFTFYKKYDOAJOHLWECAMHMSLXFMBHXYWPIRTQOCOKMLMZCIGRUBPEFDORSAYLPIUGNBNMGGPGHUHLIIWCAKYCQQHTJRYBEZQVJZVLEPTVRFRXMVNEMUZDXUJKQAXUUDZWFSISKANREEWWACXRXVTBC");
    const signed char tmp_msg_0[] = {-62, 85, 83, -104, -14, -14, -69, -28, 52, -85, -31, -102, -43, -53, 66, 106, 86, -64, -82, 72, -60, 92, -4, 64, 86, -40, -123, 6, 119, 21, -117, -62, 91, -58, -52, 87, -105, -73, 123, 11, -109, 85, 46, 120, -79, -115, 20, 77, 9, 77, 55, 85, 85, 100, -65, -74, 34, -69, 77, 103, 112, 13, 74, 17, 5, -122, -12, 110, -80, 93, -101, -108, 84, 66, 3, 79, 39, -39, -63, -72, 29, -110, 86, 55, 104, -10, 115, 49, -29, 16, 112, 6, 124, 85, -75, -98, 26, 90, -80, -45, 93, -38, 9, 125, 63, 86, 125, -86, 110, -92, 53, 31, 54, -122, -56, 6, -47, -22, 68, 123, -118, 30, -84, -120, -2, 0, -4, 111, -78, -42, -37, -70, 119, 55, 57, -36, 112, -19, 33, 93, -56, -37, -104, 48, 89, 28, 14, 107, 43, 89, 89, -48, 56, -44, -109, 0, 59, 99, -21, -3, 61, -41, 80, -94, 77};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.15445090365012049);
    msg.setSource(51322U);
    msg.setSourceEntity(56U);
    msg.setDestination(37326U);
    msg.setDestinationEntity(173U);
    msg.type = 5U;
    msg.op = 89U;
    msg.request_id = 32768U;
    msg.plan_id.assign("QCJBLZDECWYRAFMAWIVQOHNQKDTUGIRIVZCXBRJNEKXJIFMSVIPFOUOGCBOYQCLWLCVCGPIERLOZMXWTQEWZHPHLFHBPWTURIZOPFVSSTO");
    msg.flags = 49970U;
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 72U;
    tmp_msg_0.quality = 254U;
    tmp_msg_0.reps = 74U;
    tmp_msg_0.tsize = 6U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GNYHDJIQQPVBDIPGWQWAYRDMWSPYOZSCIBONUOQLBYZTELLVEZRMQFIBJPTEERSYXQLKNGRCPLPSUXHZPMWKKNDDCIWDBGCYAFJUVJXQPJQSNANVHS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.16737132093009677);
    msg.setSource(33711U);
    msg.setSourceEntity(105U);
    msg.setDestination(15942U);
    msg.setDestinationEntity(172U);
    msg.type = 91U;
    msg.op = 83U;
    msg.request_id = 59654U;
    msg.plan_id.assign("MRPWLXFMUVOKJOMRMDTBWYSMJEXUWFMZTWPZDHCDKNTDZQXWBVGFFUIRITIYGOHYRPNEHPSNBRUZTSSVSGTPCVTCWIPQSWXBRDVNCHQEFHLGKCQJXOXMAHFASLEPIHDAFQLPKHOIXOYJNHTZMWULNEBQSRUKVAJTJYCIFAB");
    msg.flags = 43677U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7728326802458951;
    tmp_msg_0.y = 0.0649583546381598;
    tmp_msg_0.z = 0.6086778026328488;
    tmp_msg_0.phi = 0.8927457907989166;
    tmp_msg_0.theta = 0.9345175202017814;
    tmp_msg_0.psi = 0.1886934517440677;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZOXKGAVLWQNNQGYHKFSWZSZNDYUJNRSEZIQCMDZUSQBAQHKDMYEHQLGEVUIJCOUMGBQEWDPCOXCC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.7749437998735266);
    msg.setSource(37031U);
    msg.setSourceEntity(128U);
    msg.setDestination(49851U);
    msg.setDestinationEntity(173U);
    msg.type = 210U;
    msg.op = 59U;
    msg.request_id = 3371U;
    msg.plan_id.assign("SLJSDEUQGKNEDDFLECXLWJTPAXYAPOAAIULSZNRXIMHLKQAGWPQLJSQJZQJCXQRISWBMRTGYXNAVWHEUYTQXURRCOTSSMXCNNJLVFPRBOFVGZYVYRMWVPWFMONJKXOKMMFSZFBFACUTFOQOYAZUDUEPYODSIFBHBKJIGNGYULNBLVPMEEKOIHWGUTQVIMCMODVIKHK");
    msg.flags = 61526U;
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 59644U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LFZDCRCJILKHJAKJMUIZQYFNAKFISTHOLVRWBOPCYOLUCHZYREBRYCNUWPTDBFXPRIQZTNOTIZHEQEPWODTYXMHAGPCVKSRATJWFGAZDSXD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.8085373634231392);
    msg.setSource(29148U);
    msg.setSourceEntity(135U);
    msg.setDestination(49892U);
    msg.setDestinationEntity(185U);
    msg.state = 155U;
    msg.plan_id.assign("PTNJPKJGJWLKSZFPHY");
    msg.plan_eta = -1086943377;
    msg.plan_progress = 0.2886021444763637;
    msg.man_id.assign("SESIZWVJYJVPRZUOPLSTJFWZCNUNKRDVXKYHWPVFQKNOYVWIYHGSBNSTJSELUVWXCOTNMQZBUJUTCJLYQSHMBBCRSWTGPMHKEOYDFHLEGKGBG");
    msg.man_type = 15124U;
    msg.man_eta = -1177774902;
    msg.last_outcome = 15U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.7619352398579133);
    msg.setSource(39596U);
    msg.setSourceEntity(116U);
    msg.setDestination(19627U);
    msg.setDestinationEntity(214U);
    msg.state = 17U;
    msg.plan_id.assign("VKCKTBIUWMAYPROIWHPEXWMNGFZBZZRWUWBSJJZJKRJQLQZMIUFHOMLVKDNXIRJPNVSCTZVYTPIYGDACWQTTNVECIIMGRBTGJAYCUSZQXHDGFHODSSQOMYDUSREDXJWPHARXRAGGMWNOQTSLFDBEVUEBIQNZXEYKUHLTVAKZTOHNXMAHCPFIJQLCGUAOABCERO");
    msg.plan_eta = 1435536660;
    msg.plan_progress = 0.5748156502983771;
    msg.man_id.assign("KVBCDVFDWSCQJMZUBAZEJHWPOXHLQDUUGDEASYSYBAZQPSRNKFKGMYJCACGGVTJDTNWLWVIIHCOFOIPYY");
    msg.man_type = 54318U;
    msg.man_eta = -749160970;
    msg.last_outcome = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.6162209494797015);
    msg.setSource(21410U);
    msg.setSourceEntity(116U);
    msg.setDestination(2969U);
    msg.setDestinationEntity(58U);
    msg.state = 164U;
    msg.plan_id.assign("NGVLFSRDCHVXWSAMKINMIRNGACSNWTRUWYWCPJWHQ");
    msg.plan_eta = 2122584776;
    msg.plan_progress = 0.4890622842210538;
    msg.man_id.assign("LUJOABEQBIEUWHBDCXAPOFETNHITCLTERGWFPYOEYMCJDWALQGRZVNXOPMZSRPRMTZXCLAYTVAXYSLXVNYZTIONDXUJGNOAAYNDOZOHQSWXCWRLVOCEFIRVCYMYTFMNNTWMPIEALBZBMHDQZPSKHVZKJKKUNBJGEDBKQAXVGQGIUJWOVEPCMKKLVWHFPFHRJGZBAJGUNJSSFXUSZMIKESJHTWYGFUQRT");
    msg.man_type = 10796U;
    msg.man_eta = -520378201;
    msg.last_outcome = 246U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.5914376932781659);
    msg.setSource(11200U);
    msg.setSourceEntity(205U);
    msg.setDestination(5880U);
    msg.setDestinationEntity(118U);
    msg.name.assign("QZYDLRTSLM");
    msg.value.assign("CTVDYTTLDMQOXOLDZCPFRGMIWQLWBOJPDAMCHHZSXHTYUAOHVASNLCSXDFVNTYBLOIMFAZKHQPULZZYWJENYGQWWJXJSWEUKSMKFYIHDRUNVLBWHXKHCEIEBEPVIXWBGSUQFYIMDSNEFXNFQOJGFZZUTBJVVAXYRKRAGSOKHPQPQDMKFRCWNJV");
    msg.type = 30U;
    msg.access = 247U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.4428683093306873);
    msg.setSource(49358U);
    msg.setSourceEntity(206U);
    msg.setDestination(7021U);
    msg.setDestinationEntity(224U);
    msg.name.assign("PRABJCCZCVOPOCXJKHFZYERYVHAHEZINIYUGVJWIFSFGBEDRQVKWCJEJGDUSKDWOYQQQOYIRDNDVUWSURXTPVXDJBJWXEUPRLIJUQFXCNPGKHBXFPRMVHQINSLKTBCXAATJIPSLTDTZFQRLGKYUHBZSZLQAKLU");
    msg.value.assign("MBENCRGHZMGDDSGQJFACSARWUGGMJFLIZLTQVGNJKAFOMQOFUSLDEZJKIPBZUHINKLNCSEZOTMWXRWJBOYOKDVMCM");
    msg.type = 50U;
    msg.access = 185U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.06804763517871959);
    msg.setSource(20555U);
    msg.setSourceEntity(237U);
    msg.setDestination(49117U);
    msg.setDestinationEntity(206U);
    msg.name.assign("MWEDIJTBIYAXHGBBRRUOHZTBCXRHXLFHNDPTFQMSPXPTCHQCZNMNDOEZLPGOSKEVLBKYDVJVOMESSMPCHITANXEEHSMOWYWXAZXZVEINKIRLYUTBSGNSCYDQABKOJPGVFIPVWFQNETOQKGQVNLOUAOWXJTDYZBJMUOPJUVSACJZMWZGDPDCSMKEGIUFRYCYPBWKQRVGURAGITFDFAMRGXIKLQZNHADCFQLLLSHHYVCJFRUTKERQBKNW");
    msg.value.assign("ZBXGWPEOKTEAASMIPYUJGCTFLRMILNGOBMDOSVWKCJKAZXQILQXLNKCFIEERMVRIUIMYKJVRSGJFQGFKSZEDCNMJLWNBPFHWDBWRCYOFYNZQCADAJWHKHQBEVADIHFUSXBXPZTGMNPIHUYLQPZ");
    msg.type = 140U;
    msg.access = 159U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.6028791819573672);
    msg.setSource(30168U);
    msg.setSourceEntity(219U);
    msg.setDestination(52723U);
    msg.setDestinationEntity(2U);
    msg.cmd = 10U;
    msg.op = 203U;
    msg.plan_id.assign("SRYAWNCLUDMYGKAXPQPMTKIVCPZQFVQOJPFZAVGEJHOLYFLTYHWMUKXBLPPEUGYVLDGOWUFZHNAJZJHDLRSOESXVSYIXOJOUWDRMFPTAGTNOZCQNWHP");
    msg.params.assign("ZXXMXSFTYSHHVACI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.6788497939141741);
    msg.setSource(24260U);
    msg.setSourceEntity(245U);
    msg.setDestination(60832U);
    msg.setDestinationEntity(1U);
    msg.cmd = 4U;
    msg.op = 33U;
    msg.plan_id.assign("NSJYZKXIUZHSIHTCPHVYVRCDQORMJOEUPKSIYDTOSQSFAFOZICYAVZEYDYMMFLHKWKVUGXXLINGTAUNESL");
    msg.params.assign("GAXYMXLJCQRKYGZEISJNGHEVDVKJHGSQTFTBRNCIUNMZQAXVGKTGDZXOONWNDGDHMTKSBMZBIEQFAAYUKXBOPOGHHBXOTDYSLXYHJVJPPNXTRESPYNTWFPJYPEWXIQGZALRULIAKSSFADVMCBQJUWONHRMNCHVZSZCLORYBIOQRNELFQFFRYJQBZWEJCAHLPCUBCLYOFSOFIEEPCKWXUKUMWUKIPMAVZFMUTELRISDHD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.2697474954316491);
    msg.setSource(36345U);
    msg.setSourceEntity(179U);
    msg.setDestination(1361U);
    msg.setDestinationEntity(82U);
    msg.cmd = 200U;
    msg.op = 35U;
    msg.plan_id.assign("MGNPZKGWOEVSECCTXITOCKVZDRERLXIUZPUHNQNHIWBHMBUFLYPTLKJITKVVJSCMRRXAQJEUKRMXASGSZOBGXSWCHAPOTSWLIALCOEXMWCYYWUVQUUMHFANNVVDNJRAGMYQLQFXBLYSBOHBOEUZCJNGNGDGR");
    msg.params.assign("AOXWOFIOBPFFGUKBB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.5017439013252298);
    msg.setSource(43845U);
    msg.setSourceEntity(131U);
    msg.setDestination(36755U);
    msg.setDestinationEntity(225U);
    msg.group_name.assign("BHMCULFKMMPNUQJORLPUPANZAVHYDPCCGDMMTYCCSZTNSPGZJFUVWGLWBGTGCGMXLXCRHDQNNQJDJARUNYHIJTCSVDOGOTHJIFHQWZFNNESFQTAPWWKZWSYRVTKQIZAYTBWZDIHGVSNKYLUEIPAKQLZQKBWYWQZUEDFOBXVHBDXXKGRHIAPTEJFVMSFEAKSPJYIDZPSOVUJBIKMOOEMKOWCXMTVORUBFBXGLLEEXNBRIAXLVOXQLYA");
    msg.op = 185U;
    msg.lat = 0.34457267882971787;
    msg.lon = 0.154269872978675;
    msg.height = 0.32118522231752367;
    msg.x = 0.06336481826987106;
    msg.y = 0.7653151538999434;
    msg.z = 0.05495131587847768;
    msg.phi = 0.3307185875689541;
    msg.theta = 0.5922882586036947;
    msg.psi = 0.6676923510940506;
    msg.vx = 0.9463857757554075;
    msg.vy = 0.3086236156602292;
    msg.vz = 0.5354540870276144;
    msg.p = 0.3898606217166698;
    msg.q = 0.8986897707785826;
    msg.r = 0.24576671374599668;
    msg.svx = 0.9017215803757173;
    msg.svy = 0.6824995467334515;
    msg.svz = 0.9776094600855698;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.3202123988131028);
    msg.setSource(4763U);
    msg.setSourceEntity(84U);
    msg.setDestination(36304U);
    msg.setDestinationEntity(65U);
    msg.group_name.assign("MVZHWVGFMEMIQYNMGXTQLDHUCVBETBVSKBOQNRNQXQLQYBHFEVSZGSPRJPJNUILLAOMTAKDMMQUBPHNVKBFQJPHPIFYQAJYJJCKHPCVOOPYKJZYRUUHCGRUVAMFTCDNIBIZ");
    msg.op = 33U;
    msg.lat = 0.40370822272862983;
    msg.lon = 0.20522987441664664;
    msg.height = 0.9705489892851848;
    msg.x = 0.16483407200962275;
    msg.y = 0.18529713513163726;
    msg.z = 0.9791461383460455;
    msg.phi = 0.9883901019880158;
    msg.theta = 0.26556583200844575;
    msg.psi = 0.28397626446839874;
    msg.vx = 0.7934842359265089;
    msg.vy = 0.10733969708725566;
    msg.vz = 0.7102448869282533;
    msg.p = 0.5064688029062059;
    msg.q = 0.12764509768133991;
    msg.r = 0.6463117422071822;
    msg.svx = 0.31817391749213786;
    msg.svy = 0.9538399079308372;
    msg.svz = 0.4166713894549088;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.11762628696667343);
    msg.setSource(25300U);
    msg.setSourceEntity(202U);
    msg.setDestination(30828U);
    msg.setDestinationEntity(21U);
    msg.group_name.assign("NPRRDRDRGZXTDXCBAREVWMBCWPTPSTFLFUIVGUYMRVNDBASGHHZ");
    msg.op = 58U;
    msg.lat = 0.5389362329838727;
    msg.lon = 0.9422616641484813;
    msg.height = 0.6504794614680203;
    msg.x = 0.8744792343763202;
    msg.y = 0.004120293142929277;
    msg.z = 0.7580110521557114;
    msg.phi = 0.5488777880953363;
    msg.theta = 0.6614709896463861;
    msg.psi = 0.20385668165927984;
    msg.vx = 0.149060238910948;
    msg.vy = 0.39950722416225215;
    msg.vz = 0.9946226295914534;
    msg.p = 0.8791607235898133;
    msg.q = 0.6780403025840601;
    msg.r = 0.5036077795392875;
    msg.svx = 0.7804218357454823;
    msg.svy = 0.5748550298364702;
    msg.svz = 0.8359123074861156;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.2638998243636479);
    msg.setSource(41933U);
    msg.setSourceEntity(118U);
    msg.setDestination(12136U);
    msg.setDestinationEntity(112U);
    msg.plan_id.assign("LXDAPXPSQINWNGKCOMIAFAOWOYFGXYUVLGOUSXCQLQJJFREGTYAJTIURCHXVCKNCHCFRYQORFENPKTADRYWMYNULZRPBJMYBUBNOTV");
    msg.type = 106U;
    msg.properties = 152U;
    msg.durations.assign("OMUVAIHIPUNSCPGGRRBRDIRPWTXTTCSUVDYNEOGOZNPMPEK");
    msg.distances.assign("MTRABVGAAVDACZIWXGWTQIORLYJHTCVTMWPTDHQGSGPSTCYKCKUMOMYJNEUORITBNGHWQUPJRDUSZZCSJBQKKXXLMOEELBUNSLWAYHRLXLRYBKQMEPZALURNFJGJPXQEXVZWKZYZMXVNNEIHRWBZTJOQQCJIIOOYUPIJDVF");
    msg.actions.assign("IBNQVKFVTXEVWKPRWAOXECMSNJNBCBLKMRTOERSRSQFDWAXRWMMAIBUDKUXLAAI");
    msg.fuel.assign("HULTAHRRRTMBNQWGBXQLNUZOURXTVVIBKIWBIHXWJAQGKKDFDDDMCEMKJRHDAFCSBEUKNSFYOWBULMGSAMBGTVIHEMVKYQBXCLOODGEUZSYQHJWUVTXYOZSKJPTGASQJFR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.5251561094907374);
    msg.setSource(25658U);
    msg.setSourceEntity(191U);
    msg.setDestination(15893U);
    msg.setDestinationEntity(165U);
    msg.plan_id.assign("WGRUPVTEQUBDIKNPUUKWXJHBGCDMSFWAGVEIZKEOWAGNDPSIKSNPBNWEYQIYBDTFIUJKSAYLXMKATFYQNLRBDZMENTADZRJDRNPYEFGEUIDPWQLUMBWYQYCOFPGTTAVCKTJGJJHDHRHLHFBIFGWZTFLHAOIIOHROXNJEEZNGCFURWAZXBZMBZSCVX");
    msg.type = 88U;
    msg.properties = 103U;
    msg.durations.assign("RWLNTENLZEITAIVZGNBYOVDFAUUDZTCFGCKYRQULLYXVHKHJNXMAMRRIJCXCIQKOGBBPNODSYOPXSFWLOXGIFGRUBVKJZSINOHSWADHEBWKOOHUEPULAIGRETJBQDIPVCJFQRFHJLUKBVAHJZQZJLWMPOCCDNXYYQSWENXBEUUARCYPBWHQGVFTRMTYIACXPBGDTGRVMLPZHWTVXSJIKSHFYSEZMWGTDQXKZPLKMNAQDTEZFEPWSMYUCFNQMVA");
    msg.distances.assign("BZOKLZYAPDFVCNNXEWXCJJFRXTBZCGRMCEL");
    msg.actions.assign("NAUVUZKCJEYPEDXLHMPLQPCXMZUVNMSHXQIDWULTLTCZFYENDCHHAGKOHYHROPIGPUFUYHJOCWQWHONTAAGGGBNSDEFEIGIPRWAQFTEYSFBZMTXAAVFXAXUZAQCYWDBOKMTLOORWLOSJQUIZLJISESJKNVPMFJTSVRYKTTWN");
    msg.fuel.assign("AUPBHFWDBAMZNDBLOHIUUHQCYPHHANSHUZVFTXGJRYFPRQRKTYERIMVUNAWGSTRZQFEZQWJDAILDTYXCZDXFXYDBOXZIWULFGUBQSJCHNPAQLSGLVMBLWZNIJDOGVOEMBSKNJRCHIDYRXRMIJJBREKPTGLJOUZNQGKJQUHMIOHTCNMCYVPSNKEGWGXSVCKKSKKWTOTEMOMBFFCOXBELSLUQFYXAENOTYLVIPVEESZDWARV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.5753804752996983);
    msg.setSource(11578U);
    msg.setSourceEntity(66U);
    msg.setDestination(49880U);
    msg.setDestinationEntity(85U);
    msg.plan_id.assign("UXUYAGEAWBEIBBU");
    msg.type = 109U;
    msg.properties = 13U;
    msg.durations.assign("IKLWXCTPNWSCBLOJEECFBXRITTUURCYPOHAIKSOJSQEXKDREQWUOJVFECQYSYQQBVBBFIWGDKSPCTFQSNGRMIGEYHGMDPHCADXRTIZPLZYVUPOIFXXFVWHRFNLOMVTXIJZALXTHRJHBULCGNZHBUQUYJVKJPWCGEGUXOPDOMKQMAAXZMDLWNSGWFIAQTKAYLKDMZGVPDYANTSZRYHNONGYHLJKOKERHPRZZAMEVMUTFZINLS");
    msg.distances.assign("POARNIZZLNNTQFSAZHEWBPINDEEVSDJUKJQCXIJTYDWJRYPAMFEOLWFFBJMTAHFFOXQMOIFGGYNLMEGJCHNTLCCXLYRGERJVR");
    msg.actions.assign("QBVWAVYQNWJSEHLLQEEUPTRDMYTBDXUIOCHZJHFCFYTHCGZFBIXSAAAQPSLDNEBBOYDJKFSIRKUPZMATUOYNNGTIVGOQWRUMHMCZAQJKCGTMLXOPCEFWLLRQSHWAJDWXWJGDQISXQBIMNEBQXVVJGYBKUZCMDWHAVHXPURIWDBFYKDTOT");
    msg.fuel.assign("YUYGVJEQGMJMKFLPWFNXLIMUZCOWXKVNXGKPCDSLZSQVYYBUDSYFYMDCFGTURXAHAJRLURSNCTSNCQJPOIYHXHYLBGC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.21575722604035663);
    msg.setSource(27689U);
    msg.setSourceEntity(66U);
    msg.setDestination(16683U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.6638415224402844;
    msg.lon = 0.52122862443646;
    msg.depth = 0.20033874190822143;
    msg.roll = 0.17308595281923644;
    msg.pitch = 0.34359403413241574;
    msg.yaw = 0.2503312820758392;
    msg.rcp_time = 0.9982103076203543;
    msg.sid.assign("XTHIHZCXZKRNXDXKHSZHZZGLZBYKHZGQFCUIBAMUMABPDUENBLERJIODTMLIVDCCQNWKJPYARULOZOYGDJXQQPGYTFTYVSEAQWBRETWTRNLXOINADNWVUSUGFLQGJEHCSOAJSVFUHQDCIBTLIHFPJEPBEASWXIXFWMDVW");
    msg.s_type = 106U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.9219219670338648);
    msg.setSource(29835U);
    msg.setSourceEntity(251U);
    msg.setDestination(14644U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.4972412328972601;
    msg.lon = 0.05486880232992142;
    msg.depth = 0.9368271499232746;
    msg.roll = 0.4647835545728911;
    msg.pitch = 0.6711811014385664;
    msg.yaw = 0.10516499576335836;
    msg.rcp_time = 0.6742420286232044;
    msg.sid.assign("CWFRDGPPDKLPCDOXUABJWZEIYTIDDJRCYGYOBHVKXDMMNVDUBFBAAFXOJTEVWBAILPZYRXAJVNOUOSALTMSIHEKWVFNUI");
    msg.s_type = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.029739949797394583);
    msg.setSource(4477U);
    msg.setSourceEntity(188U);
    msg.setDestination(2311U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.13217514158976873;
    msg.lon = 0.15625668979225538;
    msg.depth = 0.1672961076831878;
    msg.roll = 0.36897469697576835;
    msg.pitch = 0.43987728084173905;
    msg.yaw = 0.8868030524199276;
    msg.rcp_time = 0.7750453367845367;
    msg.sid.assign("ZSSKFOPWZZINJVOLPTTYXWIECTEBXMABSHZRUSFNTYLZDKQJAGBNLEIFMQTNWHJYEZKLJNSDERRJCHDXMYGPUIQRKUUXAGPPDBTOCLXVIOFBESMASWAWYRRWLG");
    msg.s_type = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.18796075130438328);
    msg.setSource(2985U);
    msg.setSourceEntity(245U);
    msg.setDestination(26744U);
    msg.setDestinationEntity(92U);
    msg.id.assign("EJTVKCAUOXKKFWYIGVPYKJCHPVIFSGOHIKWYHWFJWQYAJETPKDQNBCTYPJDNOOFQCKSWVCFMVLJKBXSDGXWSUIQUNGQFQEZMZIFJULEJLSNRLUHFIBHOZLDTRTJTFZSVARZACOVSGXQMBTMGXLWERYVVRLNHYPKBLNZHGBUSMMIGERALSZHPCXDYTIRAWNRDYHMUPGJANXWD");
    msg.sensor_class.assign("XFAPOCVQPIWWUUSGHFTSHWMCVIOZYUOSVMMVAKVZGFAMZGRTFRJWQHJJOJJNTEKAGDLDPQIQLHXUBTCSCSHBLGQENGEIQVZRXNDTJBXJCBXXQCX");
    msg.lat = 0.7495400960547225;
    msg.lon = 0.34888763082821506;
    msg.alt = 0.419127592461881;
    msg.heading = 0.8956465745055116;
    msg.data.assign("FIQJVYCHAYRVPLUWBNQCBTKJQTXLPMLOHSCMWGLFGKTVCKUQRKDPBWNDFSWXTGBEZOBIRGYOXIDRRCBNHKSXZNSIMMRUBKBLNPSVDYJYEMSVHCEWRG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.7539604192501544);
    msg.setSource(38321U);
    msg.setSourceEntity(142U);
    msg.setDestination(64775U);
    msg.setDestinationEntity(99U);
    msg.id.assign("VLAMDOJUVKHDIOOCMTWXDNWRESGGFCBDZGXQVFFHQLLTCBQGQCKVYPVXXFESLMUQYLKPWBAFKKUSIBLFETLJPNUJUZDSMJRCQLZHSZZAGYDEGKGYZUZXGVTCVGJXPYAEQDMORUBDACTINIJPUBWWMKKOAPBWCHZNDNITPZBHMOTDXJOITPYOWNAJATAYXWUNMRQMHXSEYQNAWFEVQSKWEGXPU");
    msg.sensor_class.assign("ISMJGCLHMUDREIZTXSDFGHYUGHVAJMVGIJFLSYZVETXTGKFNRTJTAWOMBEIYRAQRMSDJORRZRAQWYCWXTWVOPLMZZKXFGBPFDQGPBJYEOJYGTOPIUOGSHMLVK");
    msg.lat = 0.1269565306091206;
    msg.lon = 0.6726919817139237;
    msg.alt = 0.46005496088746833;
    msg.heading = 0.8725867526951038;
    msg.data.assign("ISBYGJZOJUITRIBYRRRNJMDVAKNRLPEXQTOBNRIOVSLSGDDXOULCZHCMAPJGTWSGRGZWVXHHMVKCWPD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.5799445484028849);
    msg.setSource(30082U);
    msg.setSourceEntity(93U);
    msg.setDestination(45150U);
    msg.setDestinationEntity(152U);
    msg.id.assign("BTKLEQUFHSVCMQMUPPLVPPGJZMKKOCOLBVNXAMCTRLZFBDUIXG");
    msg.sensor_class.assign("YHIKTSXXBFLETDAFOZUHONGXSKARCZCDOIQS");
    msg.lat = 0.8260268705876084;
    msg.lon = 0.09866756673819344;
    msg.alt = 0.577923947603946;
    msg.heading = 0.028637450745212734;
    msg.data.assign("DFGMPRPROOSFYUMTEXGQWKUOQOSHBDNDXXLGJDSKFHJJMTGEEEVJXTIIQATUTWEURIOVNDZLMCGGWAEVZPYTZMOXBMXANSACTSSRFAISHHNZLYZZZRHJCEDTZBBFVYPMCQDFXJCMGFLHWEIQVPLQDBOKUGMVFJTNWJBYYZODVKUHUNNKXKKNEESYXRYHSWKBJRQLABPNWRPGRPMWWIRPIZAXABSUKKFVCQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.4275363596113807);
    msg.setSource(61779U);
    msg.setSourceEntity(87U);
    msg.setDestination(22866U);
    msg.setDestinationEntity(117U);
    msg.msg_type.assign("QRDEGGHSLUIVJIJIQOHMFWJKDNPTUFKXDLYHGMZTJASCWVHOWXXQOLFYOAKPMPRLWKZMFPAEZ");
    msg.sensor_class.assign("KNRPIDPTMVHGBNIQQBIOTFAAEYLTLOERP");
    msg.mmsi.assign("DEPKIECSUVEVHHTSKWPQRNVCDQXTYDTFKUSOEBBXDIDMMHCCRVCFNYHXPHYELQFARFBGLARYWICZIOGKMOLESGPDJPXUUZCNFGBZJBQKIJIYQEEYAVXXDNQZXOBAHIGYWFJOUDNLFBFTCGAVMWRHAIMW");
    msg.callsign.assign("NACDIRMDVJQOUYSZYVBZZAGXSASVQKPLBHJYIWDIYKZFQRJUURUBENGNGRUKTQTFUZLDGWPNCSSJALZLRLXOEOEIXKVXQLFTYQSFPBJQABOCZZTDLMDHWPXHTMQRSAOKGUUACKOICLFRXDFWOC");
    msg.name.assign("LDXLORSXIQOZIXXWACVGQVGCAXCHBQEKJJYQWMOQSFWZMHHOSNGIUPYVOTUAMMARJJHLHNDQFNFPGCNTVEVRYBVWHQMQRFPPJNDPSCJNFFWYHDOXJTIKIKXIFZFKHAJW");
    msg.nav_status = 153U;
    msg.type_and_cargo = 138U;
    msg.lat = 0.18852338355071985;
    msg.lon = 0.8691077395025629;
    msg.course = 0.6353572916823164;
    msg.speed = 0.2715370484350411;
    msg.dist = 0.6603508314624604;
    msg.a = 0.8424462406437511;
    msg.b = 0.7887862901865861;
    msg.c = 0.1932462842494438;
    msg.d = 0.5428099821646579;
    msg.draught = 0.43636842118634267;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.35309191023304876);
    msg.setSource(11032U);
    msg.setSourceEntity(202U);
    msg.setDestination(33677U);
    msg.setDestinationEntity(110U);
    msg.msg_type.assign("UWUPGBPCKTIMKQMFYQIVELXXYTQRIIDFORLGFJOINDDNSPCQHLWVAKEXFZYGXZ");
    msg.sensor_class.assign("TBPIWLWSFWGNINKQDMPTPMKTGUTVRRUKPLUECCEPMZVIXLJDXDBQMYEABAGSIMDLAUKIZOYZAVOPUWXMKZYJCOKCHAEDSZHERNGRYVRPWFBJSODSVWSBJUSREXOIWXQZHKIQERQGIOMKMNWDJORXNEENNDMCPTCBOHFHHTJTUYCCYRJOFVAX");
    msg.mmsi.assign("PNWTDDGREHQOCKLWHRYEJLUTHEZQO");
    msg.callsign.assign("HLILTECEYDVZASZMTEMTJSNWIFANPLKBKSLFEUPAXTDVSEQHCCEAHPOEOBPZJROUZDXYYNIDXKFNLZEPCXGMIPCFHTXUZKGWJPESGABLWNRQJHCIMFQHWSDBUTXYUAGFNOSNRBBNTYGPTHLOBQKWHYSLIZZMQFJVKATWXQPDS");
    msg.name.assign("CYSWRMNNIEJFOPHCNTBWHFWOQWHJRPWMBAXKVXTWQHKUKNARZQZNLSDFRKJLYLEVZKQWRTHEQQMXZUGAIIKBZZULGOCOMHJFQPLYZFEXIXUFCUSXOPRGKTEOALBELIJJGRM");
    msg.nav_status = 117U;
    msg.type_and_cargo = 57U;
    msg.lat = 0.2328124942797929;
    msg.lon = 0.49864928398474717;
    msg.course = 0.12455890042278628;
    msg.speed = 0.0998562252730748;
    msg.dist = 0.13535843179903284;
    msg.a = 0.5208443461673785;
    msg.b = 0.3003972845870039;
    msg.c = 0.5328456364958393;
    msg.d = 0.3213363840723592;
    msg.draught = 0.120294180079772;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.6209680100820874);
    msg.setSource(51906U);
    msg.setSourceEntity(251U);
    msg.setDestination(40029U);
    msg.setDestinationEntity(146U);
    msg.msg_type.assign("OVVDRCBPSQWDNSBDWIIFMRORBNNUKLPNKZLQFNGEZNEOSDJVZVXBMYBCOAKOAYSXFNTLZOIEPYBEWOTREQGOYDAVDQZLVKLIDLITURGMXJTONPEDLMLGFQCBYTXYEABBUXQLHAVMKJGYDJTXMNTKZFPIYJJMEEWGCTQQWXCJZVYCQWPJBQHRPUAYMRAGAFSERSUHUWWPFIHHIMFXCHDCSLUATKHCORGUHKSHMUJWUSISNXK");
    msg.sensor_class.assign("FJTZMDOKUDJWYGCINMJWAVEOBGBYKMGMWBAORVMXCXRDALFLUXUJWBXFKVLDDROSJJ");
    msg.mmsi.assign("GNTMCSFJPHPLGBBNEBMPVHGYBADEQTZGYEGTEAPECWAMZJIOQEUOQKSCXDXTR");
    msg.callsign.assign("FYZBCHQCDTONXETEOQTSSIVUHYWMAMXWQRSVZNPDWSKLBUUPMAKFLIWTOSYHZWCJOAVBEYUJUZAERDHEJBAZICLGFBRCYMQPZXIKOVUIIOYZGEFRBPXNICYVGHRBIQOSFNMVTNTDOWXMGDPVYRZFSPPKTEDSWUUGDAMGIENJMTBWTSDYRMQVKFZNAHKFLLENGQKHOCGRLHNT");
    msg.name.assign("SPDHLIRWCULXNUEZWFLGESXWVDCVZAFAFERJIZRUOQWXPBJOZFRNNIYYDJADMQDFQJALAGBU");
    msg.nav_status = 54U;
    msg.type_and_cargo = 176U;
    msg.lat = 0.7069538044079849;
    msg.lon = 0.6600281764979858;
    msg.course = 0.589659638297938;
    msg.speed = 0.03364237057360353;
    msg.dist = 0.9030796362760423;
    msg.a = 0.9575486116802213;
    msg.b = 0.5546947669458212;
    msg.c = 0.9831671775101175;
    msg.d = 0.7602447221700883;
    msg.draught = 0.8353571290565418;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.7473341859954721);
    msg.setSource(28889U);
    msg.setSourceEntity(166U);
    msg.setDestination(24580U);
    msg.setDestinationEntity(30U);
    msg.id.assign("CWCGNMUOJIEOXWPTCBIBKXMBUGVYMRHOEVZRDVLUYAWHJCRIDXWKDBIVTXPHLQIQBJUZZPKLPBTJTKWQAJWZDSGHSMBDUFRGDSLSFGSZANEYYPKIJNKZEDIYEBRZZPRTHPUNLGYMAKBQZDQGXHMEJNPSGXHWMVCLTTFTPGJOOXWOUEOQCIFCFSR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.5733200848271192);
    msg.setSource(61021U);
    msg.setSourceEntity(102U);
    msg.setDestination(11043U);
    msg.setDestinationEntity(171U);
    msg.id.assign("ZVRIJIFFRVCOKXDBXPQXMQNHSBHDRGPXDYIUVPHJMSZMGAZJFRQMNGXTDCXBDUKLVKUITMEZRKAELHJNOUSEXFEQWDPTIXPRDFRKOYUVDMBEVXPHLCVWOGAAQZGJWEOOZSLULWTJEURU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.01500744717634317);
    msg.setSource(31851U);
    msg.setSourceEntity(253U);
    msg.setDestination(273U);
    msg.setDestinationEntity(104U);
    msg.id.assign("WKPQVRNWHRKIYZGWQOPRAAJZHQSRSSRTYRDGBKNXNDAJQQDBNXVQLDEIBYWIMJOCKKDYRYWHUHGIFEBHCNGPJOTXZQHUEXLUJDFAEAZPDTOLINVPWSXVMIMUSGLSGLHEYJCOCGKVUDPYMQBBFLPHIUCAZAVBLTWMJTRCSYCLJNXVZKEWPMQNMIAFJWJCLZURFHGSHFUXYWKCZLBVTEEEVOFUPNPNDRMZCB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.25804640197274686);
    msg.setSource(32083U);
    msg.setSourceEntity(88U);
    msg.setDestination(47850U);
    msg.setDestinationEntity(150U);
    msg.id.assign("QMLOJLVQHNIDMTASHBJD");
    msg.feature_type = 72U;
    msg.rgb_red = 193U;
    msg.rgb_green = 91U;
    msg.rgb_blue = 163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.7342086478231131);
    msg.setSource(25698U);
    msg.setSourceEntity(100U);
    msg.setDestination(56959U);
    msg.setDestinationEntity(149U);
    msg.id.assign("TLBVSGQSDBOAWPJMVDINLQARFLXAEUQKHYOJPVYEYTLEOCNLDJZUMCHPOYPRCUTTCFPVBZKAGXYKVAOULBUHIRKOPLIJMRLHNXFQOGFZOJIDRMJPKIIUGWJAGNSVGDDEARXQKQNENQMABOKHSHMHXWFTIZSNOEEBVFBUXVMWYFQHTCRBSKDXWPZBHDCCDXXPJEMIRSTPGJALALTKUVIZSZRDZ");
    msg.feature_type = 198U;
    msg.rgb_red = 24U;
    msg.rgb_green = 51U;
    msg.rgb_blue = 93U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9063895308357967;
    tmp_msg_0.lon = 0.4869288966115871;
    tmp_msg_0.alt = 0.9583556473151303;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.2876227641462823);
    msg.setSource(24381U);
    msg.setSourceEntity(143U);
    msg.setDestination(21530U);
    msg.setDestinationEntity(61U);
    msg.id.assign("UJQVMCFNQXHTOOHXKDWKWYAZLPZKUMRENQTCPAJKERKIXCEGCWHEQBBIUMNUWAUHBJTOMXTFGJHFVKYYOLWDBDCBPURTHPDJNSAFANEIZIPPYVSMHQZJNXAAURPXTXQ");
    msg.feature_type = 127U;
    msg.rgb_red = 212U;
    msg.rgb_green = 1U;
    msg.rgb_blue = 115U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.4793659553073448;
    tmp_msg_0.lon = 0.30070571063567697;
    tmp_msg_0.alt = 0.5460299332968231;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.15218664431175322);
    msg.setSource(60544U);
    msg.setSourceEntity(58U);
    msg.setDestination(24645U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.9227131362000995;
    msg.lon = 0.45231991383016346;
    msg.alt = 0.1823157264662777;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.5213710581512492);
    msg.setSource(25813U);
    msg.setSourceEntity(242U);
    msg.setDestination(31295U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.34726697000848583;
    msg.lon = 0.8940089621431105;
    msg.alt = 0.1240270956551428;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.832070839715785);
    msg.setSource(31335U);
    msg.setSourceEntity(118U);
    msg.setDestination(20985U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.9151704822700482;
    msg.lon = 0.7258147884378164;
    msg.alt = 0.4883110936839179;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.9151096380558585);
    msg.setSource(30326U);
    msg.setSourceEntity(17U);
    msg.setDestination(18019U);
    msg.setDestinationEntity(189U);
    msg.type = 106U;
    msg.id.assign("LAPYPDCYFJ");
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZRKKHJOWGGFBNIHBOUCKTUQOPMFPAXYHMJWCIQEEZENSUYAEGTSENCHDNXYDJTTOYXJWWCMQBOFSMZAHFQHSDJWPTRLWVUKKLISPMIZMSPYVTGPLNWDREJTTFCDNUXEIIVEDNFUXBZRBRJKWSFRJUAKOCDPSBFOVIQCXWLAYAKVIRAZVVPEMNLSGULGTCTDWGOGYBYCAMDBHVYLQHBPQLVRLYOQQHSZXQDKZXHBF");
    tmp_msg_0.description.assign("GRPHUVRLORFJEMZNZDXZIPKRWQAEMWWG");
    tmp_msg_0.vnamespace.assign("YIJIHZIWVYIWZBTKITDRLPVZSGORLNRBHHLDFSOCNGLJCQGAWOQJKGUUEYFJJHPTRXBYGUXOXESTBVVCHDBUYBXXWIWIVXMMPOKCPRQUNZGTHXJEYXKCSFBVCVTKPWKPRWRNEZBFNDDONMEQZZPVMOGPIQGSXAPNBXJGMRLOB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CBJXXHWECBUMRZCWZUWEJEVCIDVODWQHXKSNEAISPIQSEHJTARBIUYENALVGBEGXDQWFTMHQLTIZTLCUNWRZESFOHMSPRNQZNDZQLDVDNIUYZPFYYBFHVGOWHAUUTYKOA");
    tmp_tmp_msg_0_0.value.assign("HBWOAYAKJEVSHMRVFPQCMORTPKIDVXVRKWEMWBYGIUKTZXPCMWIIVAHOMKIWLBRZDEOCFEPTGLWNKHRBTRS");
    tmp_tmp_msg_0_0.type = 17U;
    tmp_tmp_msg_0_0.access = 139U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ZOHYNVYQKEVOTLQUANVLOSAOWMUCINHWVTCBFFIONUWJZRVQWPEC");
    IMC::Airflow tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.va = 0.7797103396220652;
    tmp_tmp_msg_0_1.aoa = 0.8135355645176815;
    tmp_tmp_msg_0_1.ssa = 0.2556526946804042;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::ArmingState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.state = 219U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.37672239467394075);
    msg.setSource(45456U);
    msg.setSourceEntity(180U);
    msg.setDestination(55798U);
    msg.setDestinationEntity(31U);
    msg.type = 118U;
    msg.id.assign("VSORNKMVBSQJDEECVBXZNNQLMIACEBTLOBIXSYHXICXHZEQXAQAYTVUTYGORAYKGFTIYMZETJGPZJFMFHKMLWXHPFOHSJSZYIKJZKBJOLBWLDENVPUGOKHA");
    IMC::ScienceSensors tmp_msg_0;
    tmp_msg_0.adcp = 92;
    tmp_msg_0.adcp_dur = 619712477U;
    tmp_msg_0.adcp_fr = 1313104949U;
    tmp_msg_0.ctd = -14;
    tmp_msg_0.ctd_dur = 1967163254U;
    tmp_msg_0.ctd_fr = 698870409U;
    tmp_msg_0.opt = -14;
    tmp_msg_0.opt_dur = 2635684664U;
    tmp_msg_0.opt_fr = 1843052238U;
    tmp_msg_0.tbl = -3;
    tmp_msg_0.tbl_dur = 2055177115U;
    tmp_msg_0.tbl_fr = 1972481121U;
    tmp_msg_0.eco = 126;
    tmp_msg_0.eco_dur = 1539629581U;
    tmp_msg_0.eco_fr = 3712379484U;
    tmp_msg_0.par = -114;
    tmp_msg_0.par_dur = 3547069568U;
    tmp_msg_0.par_fr = 977093180U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.29216407709925973);
    msg.setSource(15551U);
    msg.setSourceEntity(212U);
    msg.setDestination(56566U);
    msg.setDestinationEntity(220U);
    msg.type = 54U;
    msg.id.assign("RALORPPKSAMTIAKJDVZJELVPZTLDPILXIMSOWNUSCGCHXRTETQUERXBSOYCKBJJVSTVSIPXSHMJEUNAZFUQRQDGCYIUMIBLHPLZXBCASFCHBMGCKXJIDTKMLMUGQGLMAWXQYJNOQTJCEWBKLGIEMBVMQDIONCYJWPEDUYWKVZDYVASWTXXNZSUDIOYQOHWNFBZRAWGEK");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.3661928852709434;
    tmp_msg_0.lon = 0.20035619096760648;
    tmp_msg_0.z = 0.05562580205695877;
    tmp_msg_0.z_units = 7U;
    tmp_msg_0.speed = 0.462893883173776;
    tmp_msg_0.speed_units = 215U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.4649839690479929;
    tmp_tmp_msg_0_0.lon = 0.3822219855388901;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("PQFWNJUNIMNWLYLTDURBXYJAQGWHFOBKIBJNOTLBHLACVUHGZISCQZZGKHJIXQHVOBMREKNRGOXSJFUPFVPFWWH");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.753702365400032);
    msg.setSource(60868U);
    msg.setSourceEntity(195U);
    msg.setDestination(26260U);
    msg.setDestinationEntity(141U);
    msg.localname.assign("ZRABJXBNOSBHNFSXYKJEXTOSINBCHFQDQUJLDZEVWWDOGAOSGZGKHWVYMJDCTBNJEFQPHHFTLPMRLBHGISUROYQLQRPUTOKORCEVIPJLUHWPSTENINZDTHDAMKRMOMFHAYUPCBUAKKAQWKDXYOMLJVPZTRXVUBGVJGAVJNZIICVGEGYTWGZJFMYFSCSLDZRPCXTFWCBUAYCKQDFULSLILYR");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("FQLLVXCUOOKRQESDZFTOLCEHFBBIYYTYXKXQBPRKWSKHIIAYFEAZIRHTBLNXUAJMVEZTZGURSJCQDGHWWPOTSHUM");
    tmp_msg_0.sys_type = 5U;
    tmp_msg_0.owner = 63516U;
    tmp_msg_0.lat = 0.7031499976658065;
    tmp_msg_0.lon = 0.9619188754474574;
    tmp_msg_0.height = 0.7099060869624532;
    tmp_msg_0.services.assign("DEVDFTCNWCTRHQEMZSUFPCMTWVHYISEYNZWOSYIXPJWENKYZZHEHBZYZBCOHGFAILMLECUXTOAYLBIVSXETGFOWVKRNXNLDOKOXRKLNXCJXEELUURQGOPUAYSUTHNFPJPHMVQRRQQDQKGRBQHGOUQQBFLMJAZAGTZZKCFHSGJWXVIK");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.09516120609650602);
    msg.setSource(17387U);
    msg.setSourceEntity(242U);
    msg.setDestination(48486U);
    msg.setDestinationEntity(206U);
    msg.localname.assign("MQOZDMKJKHKTWMEXDAOQYTGXSZTGCBRJXXWZVFAXERXOWLYPSYBPRQOGCIKNYEFDOCHFJNRFCHVFGNXKHKAZMDTRPZIJRWW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.5049102255119171);
    msg.setSource(44815U);
    msg.setSourceEntity(198U);
    msg.setDestination(46431U);
    msg.setDestinationEntity(198U);
    msg.localname.assign("BHMNORNDDRWRATLTLQZLQQYCJHKRPLUDYEVYWDPGKMGXPSMELERIHQEQQFUHCQOSNQNBZATTSJRTG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("AQEARQRKJOQMIGFZHYYIPBGUUIQTPPEDDKRIREKKHBBDMAMNXVWXCHVKOBWNAZUUPVUFODUJADJNBASSLFXJMZWEWYFVFRWLCTFBCIPMQNJCDJYZQGOS");
    tmp_msg_0.sys_type = 133U;
    tmp_msg_0.owner = 55375U;
    tmp_msg_0.lat = 0.20305136202075802;
    tmp_msg_0.lon = 0.16029084426393903;
    tmp_msg_0.height = 0.01320210708435221;
    tmp_msg_0.services.assign("ZHUOLHBKXOWLOIOFCRXZFDIJYRJJQZBEVZDIZPLOGTFWFQTVPVIXDBFQNEFSGABORMLMYMWTDJHYTQZTKJCWAPLJPQLSRSTHXYUBYXYTPTEAEEKGMMFQMY");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.21316550780063048);
    msg.setSource(13260U);
    msg.setSourceEntity(252U);
    msg.setDestination(22740U);
    msg.setDestinationEntity(148U);
    msg.timeline.assign("UHGXCYVRFVDPNQTZURSFGDLNLYMOZIQSWCPJDVTHCQUFQBUGZESEKHQBDQPZMPPTXULVPIWREXVHRILAWGIFLWMEFRJAAEDLGDLJOICFVNFGONQWKGJXKOAVXKMZWUPRHGHY");
    msg.predicate.assign("JPMEPZBOMQCHFNMAUSMSRATWHVTJTUPPFZQRJNCZYZNDJDLNAUUDWIFPCVUTLRDLCIBZIJTBNWWXYLFTQLLLOFDXAEYXUEKSXRNWKFVKBJOZGW");
    msg.attributes.assign("UJZKPQZKPBXEQSOFEPZSNEUWVDMXO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.1129387435140996);
    msg.setSource(31462U);
    msg.setSourceEntity(26U);
    msg.setDestination(20418U);
    msg.setDestinationEntity(243U);
    msg.timeline.assign("ZGZSJLQFREULOVICLSYCUJYHTPMAGCVQBKRNUOVGUPHXCPPMELYIUZRINTKQVOTWXPNCKTRDCVPLNMEHAFVGFSSOIWXQWUOBKXCFBFETQWAFGQYHCSAXSMFNPREEYKZRBWDUKMEOSWAMABJDAOUQWYRNOQFOBDBEZNHDRZVSPNGKMUYKTGIR");
    msg.predicate.assign("CHTXOMJEGLXQDGGUZZGDJFZSNHOBTAMUEKDSFAUNKSWZUIACTKQPEHJWTNAJBMONNYYDLORYQHPHWNGLDDDRC");
    msg.attributes.assign("UDADHZXGJQOHEBTWINZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.6280130826179264);
    msg.setSource(27202U);
    msg.setSourceEntity(142U);
    msg.setDestination(48280U);
    msg.setDestinationEntity(233U);
    msg.timeline.assign("BUQGZCUKJABZHYTPZTSWJVZKLTFATDHLKKZLDVNQLSPJQJCQAQBBVKWGCFFYIFRRVDNMIHUCEAUUNSIBUEMLZDREDJNLWQFVVMCDTTMWIIBCOQPJMRNLZIPFPPYZXXRCKTMRJPOPCSMWSTQD");
    msg.predicate.assign("VOSXDWCCTTAGDOLBLJMXSUGYQHINHYDZOKZVLPGBXFMEXEHZSVYHWKIYTCYANPJAPCGITPMLTVVKQWCWMWNDISCNROXZNBMMPYZNJFWWILBTHLUKRNRAKDDGQHILGCIWYAOFZQPVOLTFLYUOZCWYXARQPZBFIPKQGAHRKSXHLEZAXPTAVSJEMAQXJNJUDCKGUTNRRUEDXEFRMQFQI");
    msg.attributes.assign("SSIYLRGULEYYFBKANODJQYLLOOSRVSNCAKFAPTLLXYAMRQDHHMWDJIPBZLTOFXFAZIHUNFMNZQAWHSVJGYZOWBEXFVWECRQYIXVRHVTQCYVSOBJEJEMXNAGCNWSDSRSEAJCUMJPCFZTPIMCLHILUUEWJPZMGEVFQBDJWTPAIMWBYULKZKPBHFIZMUUPXHTQCEKBTWCDUXOSIGGHWXKDVHRRRCAORQGKDXNNYTMTZU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.9694284484023199);
    msg.setSource(59498U);
    msg.setSourceEntity(197U);
    msg.setDestination(45522U);
    msg.setDestinationEntity(4U);
    msg.command = 128U;
    msg.goal_id.assign("UWYECBFSNTMDSPNXAIBYZKPUVHEPKFFWBLWWGDDDVASJRQRADTDLSWFQFSYPFOINNWFVLNMGQRETBAUZCGLICXWXDIPVFUEWRYZZXKNOUCZTJQLQPICTETTIOLAMOIXDOJKCGAULGBTZYMJMMPJVKHKLXDGAKHFQQAEDOUXXKBPHCXVHGJEOCHTMNESMNZSAONFIRURYZYRLKNJS");
    msg.goal_xml.assign("BVFMJZIQXGCHBYFLKORISIKCQFVIERCXJVHNOYKUIZQROTCTVITIIVUXQAYNAQSZBXCUUKXHAMEQNGCGLPFDHLWACJXSKSGHVVYDRBWSFJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.25427562111071644);
    msg.setSource(52297U);
    msg.setSourceEntity(57U);
    msg.setDestination(40663U);
    msg.setDestinationEntity(0U);
    msg.command = 129U;
    msg.goal_id.assign("WEVTDVWOOMEAQHHAKGIDXFSHMYVGBSWULXEROXJBDHQSDQSCUAUSJKBOCKIELRQSLZYNNDCLRGNMYPOTPJJSLFMHXKMEZLJOXICLHRCTXKOJNIERWHBZMFCVVBEAFNZIGRGUSRPUTLYNXWGZCTHOJP");
    msg.goal_xml.assign("NSFZTSHOZDKIDJJGEECZKDYJOLWPUTWHIIFRVUCOHXXTTCYQGMOXAUNBMCQNYPSTGZMCWDDFJOVMBRBSIPVKYQPOTNYGAZHDAEESVDPLBLMXJGKSSCORWOLRDLOZRKKEDEXPZSXAGAKGOV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.6681859560783805);
    msg.setSource(20896U);
    msg.setSourceEntity(2U);
    msg.setDestination(35497U);
    msg.setDestinationEntity(245U);
    msg.command = 22U;
    msg.goal_id.assign("OGPOXDNALUSUZMKGDYWEWBDFTJKPPPJFETJNXZHBMFYGAIMTSECGXNLSOGZRLFHTFZETHLBWMEADJCWXWMVUNLVXRCMHIQGYSMORHQHCUJLPYUUBDEQJFQROSLTIQYBCNUBIKMVJJALOXTKJCQNABZIFGNPDCSFNOTKFCMERNYHRXZWKPWIBBXYDEDGUYYKVXWVLQSUTSVZRUCEVHSWZPEWOVRPGKXVRKAADFAZAITBMIIQAJN");
    msg.goal_xml.assign("FDAMWFSTRLQUKFUHIAMCDBIFBBTUQPKYJPPTBZTCIHSPZWNWYESFDQHWMYJUOKXHBZAPXNEBFLCNLCSDZXVGUDAGKHZCWRTUVEHLPTDJNCNGXGRVIYKGUQYROFWRWVIUJAOAOYIMAGHXWQYKXQWVRLOEPIEIQVPSCTZKTSDINMXJCRSABYBQHVHPBEPRRVNXLDMEOEZGSKLXFKKUZDMFH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.23437724545960925);
    msg.setSource(33829U);
    msg.setSourceEntity(112U);
    msg.setDestination(47158U);
    msg.setDestinationEntity(181U);
    msg.op = 6U;
    msg.goal_id.assign("BMHROJMHKLDCJNQZTSWEENWVWXMLHPUMGJICAQWVRNYGGKXCILHDIJGRZNNHBNAXOQLS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QBGVPNVPQFGYHKQTMQQ");
    tmp_msg_0.predicate.assign("MMZTHXCSFYAWRILWEUEGJVFHXHSODNMOUQXERSUFKSPNLIFAXPUFYLIBPDOWEYJYMSDWMTOTDZXABPLCIEQJXPQHNNGPVYATVCVMPZUDZSREZHQNDPIQTOTOVYMGJUXRIZDODYQSASBTXSOZGVGYWPLLOIQJCGAHAMBRDQWJLYMLVTNCBBGZQJWKBFEEKVICKAEUS");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.9923770365768954);
    msg.setSource(54540U);
    msg.setSourceEntity(55U);
    msg.setDestination(39192U);
    msg.setDestinationEntity(113U);
    msg.op = 103U;
    msg.goal_id.assign("IRKLUEHDEKPVTAZWUGGLJAMIEZYDNNQGNKDOBGDOOQSNQWJIHUHGSCV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LYNYZNBGVXICJDVTFLUIRJDRIZBDQNHJPFJSDGYWPEBUWFIYXWZKJAAFPCCTYRIEPBEHMEFGSRNLOXOFIVCUNNSAOTWFLNBBAJRACQEQBYDKJDVNXTTPXYEDOREDRIJIMKULXTZMHSXISCCQKIPOZWGGGZOCHAEBSMFZWKGQMZEHHBOQ");
    tmp_msg_0.predicate.assign("KACUEIDQZUTITPOJGWTTRING");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.7870337967367885);
    msg.setSource(19471U);
    msg.setSourceEntity(187U);
    msg.setDestination(45325U);
    msg.setDestinationEntity(178U);
    msg.op = 220U;
    msg.goal_id.assign("AVEAIBWQDZKHRYPHXKFWRRPHVIPIKFUGHAJUUZKEXPLMMRYTRJZMLRDVWMWILMALFXAECQPHCDWGJHETGPJRCATCGVCLGBOIBEYPPOEONRTUDJZQDJVTKTPSMOEIIQWYOWKDYRSKWVOYLDSBFQSEKTMXZGXLOAXVHFSCUGFQVQBJEFSCTNOAABNLGHKRLUAXFGQYNMUNKXNYIIVSNVBJDSQNJIPFHFZYZXWY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ESNQAWVVDBCVSCCXICFMMXKOPIJMKUDCYWOAZBJBEKHYILAHHHZTYEXWGDIOQARVSBHLSUFSLGSGKUOYXWGPKGMKFDAIPUQFBYZPJHIZXVDTSMIIZFGXQQQBARCBTZJLDHLGRCUHAUPDCEJZEURPJHEQTEHQTPONYYXZNLQRMYUJARVDFIBJNDTRVYLWRTEOOSJPZPNUWBBFMYVZJSENWLAXTKLVEFSPNWNFCOMCTRGXOFT");
    tmp_msg_0.predicate.assign("UXIFHXWPYJJDUXWLVQXFJGIRPWSMVVDCEPXGOEYUWCXTAJLTAVDFTKLNBRZHNNYZCEKGQADKNQEDVAGITMVUWIRRBLMQYHAMBEHXNIEUEJEUPQCCHRAFLNUYLILQYSAQQANHRLBMFPMCZOTFYMLNYUABOGIOCGVIM");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.02698746192890089);
    msg.setSource(18690U);
    msg.setSourceEntity(135U);
    msg.setDestination(22669U);
    msg.setDestinationEntity(96U);
    msg.name.assign("EONUPCWALUDGCOGVYPMCXCIPBGYSTRPGVJMANHEXJCSXNWFWGYQMAUWAXCUSFPIBFNAQLUHQKJVRDXMPDRWQOFEPUIXZABYHNSDWIDMUHCYJQDFBLNXKTUEZBERVCCLSSKQNIVMHTHDOITWXCTMROGAPLOVNFUTXZ");
    msg.attr_type = 59U;
    msg.min.assign("UOTSSDLRQXBWOGVWOHXVOJCJIBDVKCXFKGQLDEMCDLNAXEBRJZYWIZSEGPJCIHITVBINUALMTROSLKRRXYPLVYTYEPZGIHSDOPSWYC");
    msg.max.assign("UZJVVSEHLMFPNXTJLJJJMEJGUASWGDCYNHONLPBPXOBIDZJWQLIRDWGICVFUFGFGOGDIYLPIPPVVEQZIFHYQKWJUMSZTKKQN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.32693895784842597);
    msg.setSource(34151U);
    msg.setSourceEntity(223U);
    msg.setDestination(5568U);
    msg.setDestinationEntity(219U);
    msg.name.assign("NPOQVVYTNQKFKXDOOEMGCUCHLIHEJPXDDFTZRKVIHBNOOXLSFSRPVEUFNBKIVFWOHWUASUNXDYFKJDLKDZNCRWZRDLYUMSZU");
    msg.attr_type = 93U;
    msg.min.assign("CCJRZWPBMJDIQXKHAIMHIYDYTUJRBUXOBEHKLHOULCGDVIHPYJSEFATACTZZINXZTSCLSDYZROKRZCJLKXWCVOWLBMHWGJDQNNNQYWQWYNYRVRJVSUMOXINNQNLTSVTKYEQOUESZDPFMSJ");
    msg.max.assign("PGHOYICBNMSZVMYFAKHWQOGULJZXTKSWKGNUIZWOYIXTQIVHBKXPYLPKVUEXFXJVIAJTEQWYSEAYDJBBFXWNLHPJSWZZBGGKUPKCYHMJKWODSSZLAPV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.13233971630621333);
    msg.setSource(20508U);
    msg.setSourceEntity(207U);
    msg.setDestination(64592U);
    msg.setDestinationEntity(115U);
    msg.name.assign("TLCPNBFWEQNJZREYEUHQJSOKXAKZGQMCIYQUOTTPALIFJWSOFQJMLQPXKRZXZYWUXDATFGFSMZIHRSVYPAGLMWBLDAHLCQFCBPIRZVEDKTNNRWRMCHTEKZKLGQTCDGYWZSISUAAXWBOJKEUKGXUUSDSABJRAPYADIQLHUBTVNGCIO");
    msg.attr_type = 78U;
    msg.min.assign("WYMEYYOJPTKOFRSUHRZUQXOKCDHTCGLWGHMERZZVBDKIXWCNIWTQIAYSMNYHHVNOUQMMCVLWZVDJOVEAEYZWJKFBSASNJQDQTYMADXIHODQJOTHCLNERBXEGRNFDDNPGTAILNLNSKTELSUWZXJIPVKVJOWNXBVVXBPQJTHBFGEPDHIUAFTRBXRQMSARFJCZSKZAILYYWSLGECX");
    msg.max.assign("CDLLQVOEBRFPIEOEC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.3020639733862165);
    msg.setSource(49653U);
    msg.setSourceEntity(148U);
    msg.setDestination(13034U);
    msg.setDestinationEntity(190U);
    msg.timeline.assign("PJWURVEUXICRXZVOWMXEXLICJKCSDTJXPLFMYOUQEUYHGHYKSAANYINOLITZAGCWFTCKLERVOIHCHGWOLJUJGEZSMXIBKRDPDTTZQOQUDOUZJWVDXIZPJWJERKAHMJRHLNNBRKPXDHHCHMFZTYOAKDZVZAQMMBNCMDPFYVXSBSTLFIVRSRDQQBYHFEJRILPPQABFYVEBSMPGUKGN");
    msg.predicate.assign("ZLHLYKEMOVSJSCAXHYNAKGKCHVKISRWAMZRCWPSGTJPZTNLGLRJGVWOXJXSRCBBOEBCTDKRUFNKXRWGQZDWOQGPIUAQQENQQHHYPGYIDDRXFOSCMLPTWVVJHAMZXJHDUVKLUMLITAOSYECAFNYQQMGBJJBFEBOKPAYUZMYROWZDUAWKEDLXUMVKIEXSTDDJEOFYTSHPJHAORCNBNFVTZFDUGSXMNLEPFUMFPFIRGTHVNTIIC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.48910394175727656);
    msg.setSource(7479U);
    msg.setSourceEntity(107U);
    msg.setDestination(38348U);
    msg.setDestinationEntity(5U);
    msg.timeline.assign("WHGCFXGMKOHZZCDRXWAOMIWSUVTHWJUXIRQQUPIFDIGMEUOAPJNDISQMYOMLLIOPHRRIBDDVEYJKBZEYNWJVGUTXRUCCVQSAYFCCGTJZQCTHNFEPNMUKYPVDXCJGLTQLWZBAHKIAPLDN");
    msg.predicate.assign("LISXAHVJFPVRSDYQKARILAZLOTHRYWTBQUEDWYZACCSNFADPMWZCKKYGHJAORMFNOBKNCXGUTBITVDQUHMSQTRLRVABPXK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.6216611556769263);
    msg.setSource(19702U);
    msg.setSourceEntity(46U);
    msg.setDestination(50026U);
    msg.setDestinationEntity(24U);
    msg.timeline.assign("XFQAPHCAXWRKBECHVMFUSHLBKFIIBWAYJUKUUYFTXWXWJMOTPMXNWTUW");
    msg.predicate.assign("SYMPFEMUDANAUWNEPGQKWTVBUFSNKQKIJOEFIREHXFGUBYEQLFBGKXRCZQTPIRPLHJIVKTULKBCHJGOWNYJYSOGVUVHGEBBVSXVQNLFLARCTQDCDNWDPPVBSGXFCNIZIMGMXRH");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CJXGOZHAXRZYFGXATDLIWLHBPQCGCLSVFHVMTZDZMDRERBCATXETCYRYUUQURQQTWSPQFKTBLHKZQSHHFSDXBMOKFNZIAWWGORIMJAVFBLQPCGWPNYODDMXERNLVYKJMUIXEBVQCPJJIPPEGNHSENLAXURKNZMTVJYUASOQLPNJOUBDFITVWOHOKGUYPDAWDJWTNQSJTVPMRZBBKIIVFYKSHGEI");
    tmp_msg_0.attr_type = 84U;
    tmp_msg_0.min.assign("ZNLCMBBSYQAEOHJSVKRQZHQIEBZAJBWIYWDMYXYPNOHBXGGSXINEROHAXPCQXLUCBJONCVDCRFMQSRDINJULLTTUGYJPVLJFONBWTOIZMZXAUEGGSHPQCPFDKZDFXWWIFGQAFXIGNOFTQRTSAWNBPMPVKWMEIYSQGXAFKHDRLSKVLHEELCBCYZGVQCRTWHJNJTSLFOZPUMRVVWD");
    tmp_msg_0.max.assign("CTQAYULQPECRKHDOHLMJLTSJWWTYFAOFSPZBXYNNBYHDQGORWGGOALPSGPPKHGYVKNFZZCVOVWLCXFAQPJXXKUFACRCDSVEDTDGCZISPEGXYZGUVFICJKOARTQBWEBJQNIUXKIFIEWRNFLFZWNBNIQSKXNIMWYHQUIKFOA");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.5552544301753024);
    msg.setSource(51662U);
    msg.setSourceEntity(183U);
    msg.setDestination(18423U);
    msg.setDestinationEntity(141U);
    msg.reactor.assign("SHCOQEPMOFVJSYPTDAZJMXXHZKTDLAXTUCPPBLLUEWPZWITJZDFAIIIBGCUCQNKWRQSBLLMZMFGWFFQDEQCWXOXHJYMTRUWRQQDBAYTBVEVNPYOVIWHNGEUMSKINBTIBRAEBCYYMHVGOPHXUASVOLNNNWLVFADMFWROCNLIRCTZVMKMFKGYXZVOQGZZTLBSDEHYTHXRDSJUIXDSGQJCGAWRKAHPJIRSRNOQJXOPUKNJYAVGFCPUZLYEGDUEK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.2897151453203779);
    msg.setSource(1598U);
    msg.setSourceEntity(14U);
    msg.setDestination(49588U);
    msg.setDestinationEntity(11U);
    msg.reactor.assign("QYAWZYRYSIFEBLNF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.46556973114053624);
    msg.setSource(16772U);
    msg.setSourceEntity(199U);
    msg.setDestination(38825U);
    msg.setDestinationEntity(156U);
    msg.reactor.assign("ERBBFZXULAMPQMMVPMDADDXREVHGEGNOMYUDNNCXGNEZQKDJWUHFOCYSVPWVMBIKYRFCHDUQSFIYFWLJEATIO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UIKGPBAVLKLJSTAECCNTIGLDDACOEZQSYNPGVVRDQYNBGIDGCURLHDACMQZNHISBPVIGRTVTBHSZMFBUJNQNRGDMEFZCOXDPLRSUOGRCUESZGHOYIAPMRPSNWUXQHZFSOXRTWLVJMYKKZDFXGHVMXIIOQEZAJXAAWYWKNQIIMELHJVQKFFHWXLVJEEAAPBMQTOYKXFTMWBCFCPNBTWHUKHWXTKSOZTZPOJNBFLCRYJYJ");
    tmp_msg_0.predicate.assign("DTVCUMGHSTSYYTGSZJPOJXMUYBCPPJDHJBICTNHNIHVXVZPAIWWTBXKDJNNTXZQWFOOYHAZLUAQCSEPBELIBNWVMBKZYQRGANIXJKPRVBQLSRYKZKGAMUICQLBFUMFAJTHDCAOOWOVMVCDSHCKHQQGTOLSJCYDIZQPNQLHEASWUOFGOSGIROXWNEZJDVGX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OHFTETVWWDRUICZIXTZLIW");
    tmp_tmp_msg_0_0.attr_type = 140U;
    tmp_tmp_msg_0_0.min.assign("RGMAZXLYITYGSUEYHZHPEKAWNZFXGEXOJPYMYZDTITQGAKPLRGYSXFAHWDEDSNHVPCEYPIUZQRKSWUXARNOSZQGCQFBGLLSMQZLFGNVLWKMA");
    tmp_tmp_msg_0_0.max.assign("GMKKAXSPSMGUJWRMYPCIADVCBRBWKJPGPISCOHUJEVAYBXUYZGTEUTSBDAYKLDQILULNZBXOUJMHWOVKXJWRGIWAHUODFROQGZNBTLXHLNGPEITNFMEIQROBZAQCTNNWYAANCBHESPRTLRTUDYDJWYOBGMDQXLVHGDYTSHKKVDZEZFDZCJPOMFYEQVZSZPVHKNCNAFRONSIXWRWZICFJKWIBETFLUQTLVXMCKSPQMLC");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.4255301259676464);
    msg.setSource(57769U);
    msg.setSourceEntity(226U);
    msg.setDestination(65105U);
    msg.setDestinationEntity(116U);
    msg.topic.assign("ATXQUDRXHEHMGFOKBWMEUGRYWEWGSJZCMEZESWWFODMPDQTXOXNBNYNBQJJGOSZHRGFIONLZWSZXHDYONTCOGPQMPGKBKCPARUECQUCAEGHEVXSIKLTFRIJCVCUVFVAPBNNLBLPJLISUDWRKXCVABLTYAJZUPZJYLOMBIOMDBSCLPVKGNHDLDWFUQJIZATFWUNEAFIHOJRMHMHSTPBTWKIQYTMZPVZUVDSJLYTQ");
    msg.data.assign("QROXJPWOBMZHGCQPQUSTAUJYXNGASFCZVAEUWREQZTQQFTUXZHSYKIKULQJBAHUROVLCGHKAPWMVANBREXYFPTLBOWCRZNFGIOTDACEMALKPPRVNHLJMGDMHSIOWBXXDMERMEIOHPEEGGYLFPIRMVFUDPXDGMIIDJTJKZSKNYSSVDCOAUONWHFCXIUGLUXNJSFTCJSTNYJEBVWBZBNFFWTJRWDCTKCKKNLIYZVRDYLOQQHVHLSBYZPGADKYW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.6000772070291641);
    msg.setSource(56159U);
    msg.setSourceEntity(195U);
    msg.setDestination(65390U);
    msg.setDestinationEntity(158U);
    msg.topic.assign("FQQNPEAMTAAMZHCKEMEAIQTRFBWRBPSJSNSOOLHGFEZPNCZGKLMVVGMPZLKFDWWNCSOFIAJVEREZTPJPTTXJYUVUYQULSNNXDHL");
    msg.data.assign("CQHGJKQMMXLEPLBBRKLQVIDSAZKNFZTLAYGRCXMOUIPZRMLJVEXDIVFMAGQGBWPYZJNPODKWMFOZJWIZUJVMGTXYSDOTBVHPANBJOQKCWELHHDANNHXUWUYFRNNHRMUFJDGMEEYKSLIRBCSQBCGYNGEQPJFRKVUUZZWURECOWJGBHKXEDZVTIADTIYLSVADARGPMCBTIFEQYHVF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.738452499832254);
    msg.setSource(30765U);
    msg.setSourceEntity(139U);
    msg.setDestination(26238U);
    msg.setDestinationEntity(132U);
    msg.topic.assign("DSMQQHUQCWIAMEZRMKLGPVIUYGPQWWHKMBFBHDRNJUMIENJPDTADFPDKZDQOHQVUVHCORNDRKJXOIGANTYXLKZZRVGLJIYKUHCVSKVASLOAUQPGRZBNAYZCEFZSXYLWEWDFZFANRBXCXTNQBKSUVYIPBLLYTBQMZWEQHTHUKGNSEFPWTEGJXBWYSTTVJROOJAWUPTICOONMZWLCNRFYBFEDGVIXXIFYLMKJOMOAHISGECPSMDETHCLSBXA");
    msg.data.assign("LGIWDEVYQTFJYZJULTRBHGOZELXAHGIGIUNHYPEKMRSWRVQRUXDZCZAXF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.6245612856596235);
    msg.setSource(13617U);
    msg.setSourceEntity(67U);
    msg.setDestination(43791U);
    msg.setDestinationEntity(165U);
    msg.frameid = 78U;
    const signed char tmp_msg_0[] = {55, -8, 121, 71, 22, 69, -69, 49, 11, 116, -30, 67, -116, 88, -33, 97, -73, -18, -31, 77, 90, -49, 2, -103, 54, 1, 35, 4, -3, -82, 62, 116, -94, 115, -29, -83, 62, -10, -128, -34, 72, 76, 34, -111, -71, -120, 23, -76, 66, -74, -15, -69, 88, 76, -104, 85, -1, 100, -74, -24, 18, -31, -117, 122, -4, -16, -105, -13, 41, 108, 40, 101, 77, 22, -86, 117, 10, 122, 58, -9, 83, 0, -8, -92, -72, -72, -60, -115, -92, -122, 68, -85, 20, 35, -123, -100, 36, 89, -50, -104, -2, 17, 100, 78, 13, -6, -108, -36, 96, -115, -48, 97, 77, 100, -22, 65, 81, -44, -125, 83, 105, -87, 13, -56, 28, -94, 122, -76, 60, 93, -81, -122, -99};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.10430743096648709);
    msg.setSource(20375U);
    msg.setSourceEntity(114U);
    msg.setDestination(31197U);
    msg.setDestinationEntity(84U);
    msg.frameid = 217U;
    const signed char tmp_msg_0[] = {-75, 28, 33, 97, -111, -68, -29, 18, -11, 124, -39, 69, -8, 105, 88, 85, -50, 114, -47, -93, -106, -82, 49, 99, 119, 76, -15, -121, -74, 41, -110, 100, -32, -128, -17, 104, 41, -39, -109, -110, 110, -33, -60, 63, 58, -89, -19, 48, -1, -87, -40, -12, -79, -2, -9, 61, 57, -93, 85, -122, -72, 17, 85, -83, 99, -90, 24, 94, 113, -54, 92, -62, -84, -126, -82, -117, -59, 22, -113, 109, 35, 19, 13, 33, 98, -3, -109, -44, -87, 34, 77, -87, -66, -126, 57, 42, 41, -85, 80, 122, 25, 119, 38, 45, 54, -56, -84, -3, 123, -4, 35, -47, -25, -85, 11, 70, -88, -69, 16, -8, 110, 97, -13, -7, -29, -104, -100, 61, 70, -83, -64};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.08221136323623524);
    msg.setSource(45867U);
    msg.setSourceEntity(156U);
    msg.setDestination(58986U);
    msg.setDestinationEntity(66U);
    msg.frameid = 97U;
    const signed char tmp_msg_0[] = {-26, 41, -80, -87, -99, -108, -103, 26, 28, -109, 108, 61, 61, 119, 17, -58, 23, 71, -57, -25, 56, 65, 27, 86, -96, -72, 25, 44, -125, -74, 42, 28, -34, -83, -88, 123, 39, 109, 34, 14, -45, 85, -27, 82, 111, 112, 71, 68, 76, -27, -86, 112, -76, -55, -114, 111, 122, -116, 120, 27, -12, -38, 13, -42, -107, -17, 68, -62, -87, 92, -75, -57, 34, -62, 101, -96, -124, -49, -19, -89, -103, -10, 87, 83, -60, -32, 81, -76, 62, -113, -56, -41, -19, 26, 36, 56, -119, -52, -96, -128, -35, 106, 1, -110, -33, -63, -31, -107, -23, -58, 38, 35, -15, 84, -99, 88, 48, 96, -86, -13, -121, -88, -50, -122, -96, 17, -38, 7, 126, -19, 34, 26, 126, 90, -11, -90, 44, -50, -54, 38, -12, 9, 75, 91, -55, 28, -99, 55, 8, -18, 118, -74, 102, 84, -67, 118, -65, 23, 17, 91, 111, 41, 96, -57, -28, 22, 8, -39, -108, -108, -75, 124, -96, 42, 40, 104, 24, 80, 30, -119, 101, 39, -63, -112, 36, -73, 103, -55, -62, -101, -30, 84};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.1513961237346274);
    msg.setSource(8083U);
    msg.setSourceEntity(17U);
    msg.setDestination(31051U);
    msg.setDestinationEntity(184U);
    msg.fps = 242U;
    msg.quality = 130U;
    msg.reps = 76U;
    msg.tsize = 49U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.9984431602799606);
    msg.setSource(31726U);
    msg.setSourceEntity(45U);
    msg.setDestination(43919U);
    msg.setDestinationEntity(167U);
    msg.fps = 45U;
    msg.quality = 95U;
    msg.reps = 100U;
    msg.tsize = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.4204913863012917);
    msg.setSource(25158U);
    msg.setSourceEntity(129U);
    msg.setDestination(9562U);
    msg.setDestinationEntity(220U);
    msg.fps = 73U;
    msg.quality = 94U;
    msg.reps = 167U;
    msg.tsize = 61U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.3871947272936118);
    msg.setSource(14845U);
    msg.setSourceEntity(6U);
    msg.setDestination(54410U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.726196470183362;
    msg.lon = 0.5144708639521902;
    msg.depth = 142U;
    msg.speed = 0.19070517094316675;
    msg.psi = 0.46763823049309594;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.2696456471165628);
    msg.setSource(28841U);
    msg.setSourceEntity(91U);
    msg.setDestination(49931U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.6197106115685378;
    msg.lon = 0.15582590877844993;
    msg.depth = 216U;
    msg.speed = 0.6366318182182843;
    msg.psi = 0.14864795680938325;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.7114737920333715);
    msg.setSource(11195U);
    msg.setSourceEntity(95U);
    msg.setDestination(30679U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.747072296403375;
    msg.lon = 0.4823570686285663;
    msg.depth = 115U;
    msg.speed = 0.1553402719453686;
    msg.psi = 0.3019091548368401;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.6418614740227866);
    msg.setSource(31303U);
    msg.setSourceEntity(176U);
    msg.setDestination(55362U);
    msg.setDestinationEntity(174U);
    msg.label.assign("EKHNQIWJCXENIINXOUJMYZIWFZRFUSOLBDRXZTUVPOXHBLJFMBLAPRYGYFGFNMWQGXFDQDJXVHNKADSUCPETDPEASREHTZZGTEAUMVMJJQBNCWCRSUWQULHSLVFFTXCHEJY");
    msg.lat = 0.2566644839320289;
    msg.lon = 0.3722466605448004;
    msg.z = 0.9440527876720245;
    msg.z_units = 175U;
    msg.cog = 0.3120692624420839;
    msg.sog = 0.3527905350063475;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.4424911613672189);
    msg.setSource(58625U);
    msg.setSourceEntity(230U);
    msg.setDestination(23273U);
    msg.setDestinationEntity(253U);
    msg.label.assign("NFXSXHBIJKWBBJGXEQNJPHFWAGPOEEXNBUVTZSAHRGDCSKUGQEGAWRIOGZGKJOZZFQHKSYQPTSYROWNJLEARTIUSDGWMODNDRMPCMODUFFVKZDBPVUIEPACYHJEMBTLHYSNMYXYTRYZYFCPVNBQLXLWKWUXLKJAURJJPSQKXKAXNIVACFEPJIQWZO");
    msg.lat = 0.18126837214444502;
    msg.lon = 0.8480223179406109;
    msg.z = 0.484257840561774;
    msg.z_units = 69U;
    msg.cog = 0.5407633131992168;
    msg.sog = 0.44761360738701883;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.17764099734876626);
    msg.setSource(46080U);
    msg.setSourceEntity(12U);
    msg.setDestination(21972U);
    msg.setDestinationEntity(250U);
    msg.label.assign("AGLWULULKENHQTPRTASVUIOTFDLAJGUVDTIZFMBGTWDIHSGSCXSWYSJWBXJFGGCSFCAAVACWHCXMOVJNXLAEZG");
    msg.lat = 0.04243252161211031;
    msg.lon = 0.8164674765845635;
    msg.z = 0.061172188051667686;
    msg.z_units = 239U;
    msg.cog = 0.5767179445315532;
    msg.sog = 0.06589536828737508;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.9478556171653169);
    msg.setSource(38748U);
    msg.setSourceEntity(212U);
    msg.setDestination(17826U);
    msg.setDestinationEntity(96U);
    msg.name.assign("IQAWTQQFXGUQDUAKHIZRGLOSGEDSJKJBBQVHKKMSRQBRKBOCR");
    msg.value.assign("TNMJTCGKIVZHIBNPWOWNVUNDDKKWSLVKJQEYNCZDGAGPXBUGFAZTNPDCOUILMSBUSEBOFTNLQIRRGZFUWBAZLHYUHLZYCADEHIUIZQKXLTMJSLYHMFNPE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.8533012327771017);
    msg.setSource(30542U);
    msg.setSourceEntity(177U);
    msg.setDestination(9915U);
    msg.setDestinationEntity(227U);
    msg.name.assign("DSLZJTLWAZIMNLFYZYWXIUHHMUWYCDBHNEFYCMGBKQXSLLGSWPHBVOGDVUYJRCRVRPOUAQHSWOIRYOMGIWSVNUYMCMJLBQADWTLCQZAUPEVEMKRMTZYYQFOVOOJVDEZSBSKPGQENNIAYKJNZCDGDZQXGBTRZWLLZTNMDIIXBSKHPOJEDHWMWDAROTKJAHTIAFAHBQTGUQFNFENCUXFGRSKBPVPKXNIGXARRTFUTV");
    msg.value.assign("UDWPXRMXTJSCHXSUPTBFHBWROZLHKLPXKARYYFCTLBKYNGQJWOGVMPJJYZXBMYVAXSPSPQCNFBDCKRITMKBEFMUHVLXJGZRIWFDDQPAWSEEBRAYVDDIHIXJJUGLZOVMIGNJQMKILLGRATZVGHVTTSPIAQMLCBOEFPDRXDYKORHAVC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.8247425771893616);
    msg.setSource(16331U);
    msg.setSourceEntity(142U);
    msg.setDestination(41661U);
    msg.setDestinationEntity(198U);
    msg.name.assign("FJJSBAZVCWFXZNBDFHFQXNATRHMMOADBHVRGSAGTQOQPZJTWFPMJUESEPPHNZESQIYWEVELUSJTPHKCOZDPDAUCMVOWLEFTPQXVDDMVNKAWRWLLQBFZZILCCIVNOQSQIWKYKIKCZAYNRIBLUQMXOPGITKYKMRVGRGIGSUXESUJHWWAFQFFBLUDRKUPZD");
    msg.value.assign("WJNEWNAESDMOCQWPGNQZAIHZHEFCIITRPBMKUBCLOTERGCBOQFKXILNOLXZPFSJEARIVVPAKZYGCYXBWRXHYAQQXYMWTZDOIYDRRGDGVPIKWQTUMONUXBPVFEVABJJSXSJWYFWUVNYIEMSNHMGZBUVQQDKJGSAFHZHJHGRJGLDSDQTMAFPLBUFKPPLTRMAYUPZOHDTTAOFKNENKBIWXHTSMCSBFXCZURYJCWXOSC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.2981821020986072);
    msg.setSource(63674U);
    msg.setSourceEntity(94U);
    msg.setDestination(45263U);
    msg.setDestinationEntity(163U);
    msg.name.assign("IAHNIIIZEAEZPQZERRTUTWQUMUMEVRHZORKDVHAKEGWCZUWHMHVYKTVWVQNOVXDJOPDIYCLINTZYHUGLFGRLKVNPSONFBBAJEQXKMOCXFSXVPXSJSGABJFHDYJYPWQQCZLAPZMWJYLBUQTSGCOMEGXTPUYYBAFTXKIKETGKMIFASVRSJJBOXMLN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.2714162875942405);
    msg.setSource(14353U);
    msg.setSourceEntity(79U);
    msg.setDestination(51948U);
    msg.setDestinationEntity(87U);
    msg.name.assign("NBZDOTUKVXHASQVORIGUHOKQRU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.5915761860258842);
    msg.setSource(57236U);
    msg.setSourceEntity(48U);
    msg.setDestination(10993U);
    msg.setDestinationEntity(72U);
    msg.name.assign("HHSXTYCQTGMINKUIPAXJJDUFBQNKFYRUXJKAXSZEZZQHBYIFDCWIRPQUWBGWWLHQFOZTFIELPEGDFNCIRSJWYBECZOPJMTVLLKJXCJOJVUVNOPETGROERSAJKHYALMNMAPLKVDJDXSDRATGKKNEMCNSMYTOEWUOCQALFIPRGGSNMYXL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.41154538679009955);
    msg.setSource(28251U);
    msg.setSourceEntity(186U);
    msg.setDestination(9644U);
    msg.setDestinationEntity(203U);
    msg.name.assign("UXRWVXCJGETAVDETDTBESDOTYLEJZZTFBPCJRGAFFKHGCJQYWEILPSYDTFFLDNJMBSLNSVJGZGYH");
    msg.visibility.assign("RMWRZEYAUBPMWXOILSMHJAQHIZTWBIOXTHGWROREJJRELQOQDWLZBDOKAUNIDSQKVAGBNBZUMKWEKAQGJHFIOOCTUKGDSXVVNPPFTCKLLTCEYHUARKLXKZNQGXJPMCDLHSFYVPBDFTNGXGSJFUUQLMKUWWXPADBRGLQIJEHYVQPJXVSAOUVPRYCPPNYYLSHMMUEJVST");
    msg.scope.assign("HXXNZDVAZKOTEFASBMLVOQBPWWQQNKGNDTCEJLZOMDIHYAZDXCLROJQPZAFIPHHTMPWUYPJVFJGUEKRBKJYMOVIMBUNKIVQHCFPSYTZCUBPKOKHVPRFSGRSXSLSEEFHZTVHCZMIISCGNZRF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.027709308193066384);
    msg.setSource(50393U);
    msg.setSourceEntity(93U);
    msg.setDestination(37887U);
    msg.setDestinationEntity(20U);
    msg.name.assign("CPQGDDMNBGDLPSXZIHXQITRONZEUJKUQZCONEHRVWMKJQBKBLIYOLGYIESSCMVRFAKREDYESIMWDNXPJJZXAGLWGHNNBJPIMWRQBWFKKAYFSTMOPBDMWAXUBIOILSYINYEKVNNGCECALFPVUOUGQDCFGXHCZCRXGMLSTQYOGTOFVTQRUHDZAHVVDBYHWPPTLIETKFWTUJNZJLCTSZ");
    msg.visibility.assign("YZTTZKPDXUVCJQIMFVPTUFWHBLVFVOAYIEGFZCRNISOZVPXBIGDTHDNMGBNSNDPLFDGHRZEFXHCRFFCULVWSXPE");
    msg.scope.assign("OCHABNLJXPEYICXIMOJRAVQHSDVAOQQMRASSXGKKZLNSWIHLPNEODGIYY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.1739847942983055);
    msg.setSource(33135U);
    msg.setSourceEntity(214U);
    msg.setDestination(34772U);
    msg.setDestinationEntity(127U);
    msg.name.assign("BWCBGXQVVAOENHZRMGSYTWIDKBMMQBXDLUGKGGVMYHMUJIYDDWEGSHTZLULFPLAZYXFQJEEYRAJZORLWYXTNOMAUQADIODGGBNLXMBEHDXTONFGVPBSHCSSFHBCUJYSRFLDXCAKHFVIOPIVYIZFPCQFTWWFMXRQIUEZIWBDKNZAGSPVRCTFKUTMNYTVSJNUPAOEJWBULKLCTOHKZZETSNHDKCASXPKVUROOLCJHCAJQRXWQREEKR");
    msg.visibility.assign("GTHNQCFOBRHBVTMWVSEABVDCVDUIQAFRYZOBOCSGYPTQKPEBJWRFCLBMAQDKWSWUNMDIUMREDZEKVCGXKJDPHSGXITSGPPLYRYEWIFFPRRNMMXNIWBDKOVTZQ");
    msg.scope.assign("UGAIQCWYWZUXHYNRMUPKOKSQPXVLQNSINNVXCGJEHBCGLPJGDJFKWRZVGPJMDWTIELCXSCZXXVALDTYAEHEGRYNLLBKBROTJSNINFMIATDFZNTPDFKQGCRIBHRSOTTDXMVJFOYUAJHXBUDXAOBQHCVPBQHMLCAFYPTLFMWNJBLKZEZIGPOKPQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.6341691562720964);
    msg.setSource(589U);
    msg.setSourceEntity(172U);
    msg.setDestination(58043U);
    msg.setDestinationEntity(66U);
    msg.name.assign("OTOARZMPBNMJNLPJDALTNDTCEPCKHYBPGBBWIHJGIUIOOHVSPUMXKKSWCGVELXHACQDKEGDKUXWXYHSDAOZEHIUPFLXAFKJWBNMVRWZCZYASMAGNLUYSOEFDHEUYRQCQCBPBK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.29779145976836463);
    msg.setSource(8191U);
    msg.setSourceEntity(210U);
    msg.setDestination(15884U);
    msg.setDestinationEntity(108U);
    msg.name.assign("PYVNBLHPKYMXGHAEWXOYRKAWAOWIGDRQKRJDZLWOIJACACOKIXOCEGDALTMGYAQMOJOXMTKEQYSEDBVLMN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.9194461359236551);
    msg.setSource(53233U);
    msg.setSourceEntity(45U);
    msg.setDestination(15827U);
    msg.setDestinationEntity(60U);
    msg.name.assign("JEKSTUOBSFQEKIGALCQIEGBWNXPOURVBDZMFRUTOYLGVHBWLJZAVYCZMWFBKKLGDKEOGSYKHHAFIVBRJRMCXMQFOJSPTUHZKHRVEIMZSRXWQOWBJOPHUMVLXLCDQMZYCLNDNYFTJFWHBIYCETWXUNSJNCSOAMPIIKRXNJXVPLKHIADRDPGFETNLCTTOSYBDKJH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IWWQYBBTAGMJFLUHCHPLIIYBDBETMPYSQZVDAQNRJXXOWSLLGAREGGCTJZIGLQXPPEGCULFXHNBRQHPLDOQUVTEHPKUVGKZRRSERXMNCDEBVJBYSDKUPCMBOXZDFHKNINSOZPVDKOMTQFAVOQDFIIEGMKXFKYYNAPAJ");
    tmp_msg_0.value.assign("UDCJKHMBXFIMSERXCIMOAKCUFHDTPHBJRLNEDELMVAGMPXXRFTSODBNGBEBOYKUCUAOVOLRDFTUSSVNJKZM");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.4059456685956818);
    msg.setSource(4359U);
    msg.setSourceEntity(143U);
    msg.setDestination(1144U);
    msg.setDestinationEntity(242U);
    msg.name.assign("QPXWQMGHWGMRASVCZBZUTVHXOFLPCUVYUURGIXNCGOETFPSLCIJUEIBOOCOSKFYIPIKCSPDARBPEMMPVZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.8892474684039062);
    msg.setSource(59947U);
    msg.setSourceEntity(136U);
    msg.setDestination(15755U);
    msg.setDestinationEntity(109U);
    msg.name.assign("LJCVNACTFWKUVZLLIZSQKRRYDMWSMIPEYUQQTGMMOFMXSVCXWOLXRWJIGPJKQVWMJAWMXCGIGWUBQXGGBIZTSRSPVRXXTFDNBKBEHJSOURALIUXTCDNGSVVQUBFAMWUTJO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.4057202778907759);
    msg.setSource(64431U);
    msg.setSourceEntity(67U);
    msg.setDestination(25360U);
    msg.setDestinationEntity(79U);
    msg.name.assign("OWBRQKKASBHUEDWBMWHGMSTVLPRINLSRMYOYUCAFNAWIZXLOBAUXEAJPZKYMGLHCMDHIKVXONXRPQEQKIUYXNQZPNCPYFKFFZQTYDFULIFGUKSHFDOBDNKIDWQPIYQEHMJPDUBXSA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.7126511962106119);
    msg.setSource(11321U);
    msg.setSourceEntity(45U);
    msg.setDestination(2004U);
    msg.setDestinationEntity(148U);
    msg.timeout = 2875822329U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.18217981613071843);
    msg.setSource(36556U);
    msg.setSourceEntity(122U);
    msg.setDestination(44141U);
    msg.setDestinationEntity(1U);
    msg.timeout = 1924644276U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.9638116170360777);
    msg.setSource(35947U);
    msg.setSourceEntity(125U);
    msg.setDestination(64050U);
    msg.setDestinationEntity(172U);
    msg.timeout = 3619319672U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.7765571294658304);
    msg.setSource(59059U);
    msg.setSourceEntity(127U);
    msg.setDestination(18886U);
    msg.setDestinationEntity(23U);
    msg.sessid = 2521960454U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.32395181735259304);
    msg.setSource(4256U);
    msg.setSourceEntity(208U);
    msg.setDestination(40449U);
    msg.setDestinationEntity(83U);
    msg.sessid = 1956793817U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.6426370663848588);
    msg.setSource(5891U);
    msg.setSourceEntity(64U);
    msg.setDestination(17631U);
    msg.setDestinationEntity(193U);
    msg.sessid = 3035277671U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.4843468979337162);
    msg.setSource(1121U);
    msg.setSourceEntity(4U);
    msg.setDestination(28552U);
    msg.setDestinationEntity(249U);
    msg.sessid = 2033036945U;
    msg.messages.assign("UIAJZHKFTQRIYSVOCTTWPBYUCLSIZSHCXXVFKXNVIQPYCYXLAWYCUNKOVZLYABGLOMZPKFTIXHQEURTDAYVYLOVDKHYVRWEFZAUJFBQWBUSEROITEMJNPTHPIIADGCSULVBNWQKAXSBJTJGDRMTNDLQCJSUEFMZKVOIJHMPINQPBWEDMZLPSCKZHLNJGEZFJNWPBOTDFRWRGPMNQAUMOC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.9527312005238389);
    msg.setSource(29894U);
    msg.setSourceEntity(190U);
    msg.setDestination(8688U);
    msg.setDestinationEntity(235U);
    msg.sessid = 1837490959U;
    msg.messages.assign("AQHNQYRUEXTITEEHRHUVZTHMUARUKFANKMSOZODUPMMHSDYSGGOOBVPEHZGVY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.4733819120344237);
    msg.setSource(27981U);
    msg.setSourceEntity(239U);
    msg.setDestination(31051U);
    msg.setDestinationEntity(109U);
    msg.sessid = 1778194885U;
    msg.messages.assign("JXGXIYGLMTJLNVFIUPHDHTLUPEOZXNMIOQHJNBSOSHQREJLNFBAFTLGCIJNADNMNPPCFGKJDEFOMPWAHHTRXVDUKXHSWOTWPZKDZDEHBZCVINHMCOPBWVRQOFRXIJTQYJXIULCENNMSVMOKBPUQKAAYTRZOSFKYECZLVDTBKACVZSBRACMXLGLYRDEKSZQFIGIPISSPSQDQVAOMBCJKMUVBEKQWWWUGXGYYFRYBWE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.8570146713625342);
    msg.setSource(36647U);
    msg.setSourceEntity(243U);
    msg.setDestination(53167U);
    msg.setDestinationEntity(126U);
    msg.sessid = 1279742444U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.1428079008827874);
    msg.setSource(58687U);
    msg.setSourceEntity(141U);
    msg.setDestination(51442U);
    msg.setDestinationEntity(22U);
    msg.sessid = 3114037316U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.17705229923828658);
    msg.setSource(4591U);
    msg.setSourceEntity(70U);
    msg.setDestination(28526U);
    msg.setDestinationEntity(129U);
    msg.sessid = 3428523138U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.7909194420386254);
    msg.setSource(58831U);
    msg.setSourceEntity(92U);
    msg.setDestination(18073U);
    msg.setDestinationEntity(17U);
    msg.sessid = 2184295131U;
    msg.status = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.9273613637566449);
    msg.setSource(14603U);
    msg.setSourceEntity(227U);
    msg.setDestination(12315U);
    msg.setDestinationEntity(32U);
    msg.sessid = 2235170078U;
    msg.status = 67U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.6862825477004466);
    msg.setSource(38643U);
    msg.setSourceEntity(184U);
    msg.setDestination(3669U);
    msg.setDestinationEntity(197U);
    msg.sessid = 919909715U;
    msg.status = 238U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.04485298468127952);
    msg.setSource(7755U);
    msg.setSourceEntity(140U);
    msg.setDestination(34665U);
    msg.setDestinationEntity(192U);
    msg.name.assign("SPDYISKVYOQWYNHPHISSHRTJMQLQXGTZZADYZPGCLNPNISBVHRJVLGILIERNFFSZDAVAQHNXLBWTCZAAVJCXIWNEGXMFRUWWKUZD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.5512079751968694);
    msg.setSource(62955U);
    msg.setSourceEntity(161U);
    msg.setDestination(54003U);
    msg.setDestinationEntity(116U);
    msg.name.assign("HADZTPGDDYJKQROPNMLLUMHAITFHEEOWVYSWWHWHRNJIAXRIGNMSLKPWIHFVMRPSUCGYEDLFTYRPDHQIOZEGYLFUDFSKXKMRQPQKSKKFTDKIZGTNCSUGPCXAQAQBTFW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.22809411916038635);
    msg.setSource(36748U);
    msg.setSourceEntity(153U);
    msg.setDestination(19792U);
    msg.setDestinationEntity(245U);
    msg.name.assign("DVQNOEQAVGIPRBRFEYCDNLXRBMVYRKOHLFJOQJDDCZELKMXOUNUUMTNP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.8739899932014169);
    msg.setSource(17841U);
    msg.setSourceEntity(159U);
    msg.setDestination(59427U);
    msg.setDestinationEntity(41U);
    msg.name.assign("BPHDOYAZXWKIBGLEODKVIVBWCUUOZUNYJVRKADZTPDFLOOPDKM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.45749169230142916);
    msg.setSource(38564U);
    msg.setSourceEntity(200U);
    msg.setDestination(15295U);
    msg.setDestinationEntity(94U);
    msg.name.assign("ABETQRIIQGSFZVGVYXJTYRIUKGTEHVBYZJUMMAIEBYYEGVNJVQIMVKXHGSNKCXPWKOFFAMW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.12568571242328164);
    msg.setSource(16090U);
    msg.setSourceEntity(230U);
    msg.setDestination(28239U);
    msg.setDestinationEntity(149U);
    msg.name.assign("HPKLMUMVZFCQJPAMDRVBTHUQOSTIBW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.4691550265540356);
    msg.setSource(8459U);
    msg.setSourceEntity(10U);
    msg.setDestination(6697U);
    msg.setDestinationEntity(182U);
    msg.type = 98U;
    msg.error.assign("PWSLSRMKFJUFZDNPTDXKIJOBTIOUURBTSDLNZAUTCELLMFRZRVXFEAZIVKJBCFYOWIQMORNCVWPPKJMWEHNKHFHJTCHBYQGZOYWNSGCSCN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.7702416270693031);
    msg.setSource(13121U);
    msg.setSourceEntity(114U);
    msg.setDestination(42406U);
    msg.setDestinationEntity(245U);
    msg.type = 202U;
    msg.error.assign("WNURVZRMYSKZNOWVKALMQADEJSBUKWGZTIELZXAYDNVBZSTOUIISEHGIXPKACBRMATY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.21408050104072696);
    msg.setSource(25571U);
    msg.setSourceEntity(83U);
    msg.setDestination(49871U);
    msg.setDestinationEntity(115U);
    msg.type = 250U;
    msg.error.assign("DIJCGCREHPSNJTDSLEYQRFDWVVKALHRPSOSAXIQRUFTBFAYWMGCMLLNYLACZKJSOZWPNDDUJRKCEMEWNTQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.810880875574266);
    msg.setSource(52911U);
    msg.setSourceEntity(222U);
    msg.setDestination(2989U);
    msg.setDestinationEntity(9U);
    msg.seq = 30672U;
    msg.sys_dst.assign("DKEESPABKFIHBJYGNKBDHDDRAGCCQZMJEMWMHOBJNXMDMYQZNBLGYGZWSVTHQXOAANOYHSDZIGLWYCTCTOBKSTXLKIWFJPCSNOLZGMGOUFKO");
    msg.flags = 90U;
    const signed char tmp_msg_0[] = {-54, -96, -111, -71, 69, -41, -119, -95, 118, 59, -57, 21, -43, -37, -5, 109, -94, -15, 23, -96, 19, -13, 105, 3, -24, 21, -120, -1, 107, -114, -28, -31, 80, -78, 121, -3, 72, 43, -35, 17, -104, -9, -36, 30, 27, -24, 48, 121, -40, 4, -45, 19, 69, -87, 67, 4, 69, -56, 116, -70, -109, 43, 114, -119, -69, -100, -64, 115, -1, 17, 75, -86, 116, 2, 56, 115, 102, 68, -106, 108, 94, -69, -95, -39, 77, -35, -2, 118, -39, 115, -67, -39, 104, 41, -40, 37, 66, -89, -28, -95, -98};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.4000454059891151);
    msg.setSource(13562U);
    msg.setSourceEntity(26U);
    msg.setDestination(10488U);
    msg.setDestinationEntity(210U);
    msg.seq = 21191U;
    msg.sys_dst.assign("YFYVIWMPQPTGBZFKGHRZDITQWXUJPGPQGLIDNUZSOWNHBCSNSVQFHUVYKFNWDXDBYNZTEVKXJHBUODQCARWMXXHKTZVVEBGTLIKCAYJOLMXJABSYGLJREFDRCOPESTWITITMOIYPZRFULVCKSPTSQUSQMEJHGONJDGUDSDMAHWCXMUJJWEDVOHPJZRWLROLGBFRKCIZ");
    msg.flags = 114U;
    const signed char tmp_msg_0[] = {53, -25, -7, -65, 42, 124, 120, 25, -24, 28, 92, -125, 36, -34, 95, -26, -74, -31, -77, -10, 0, -68, -123, 44, 27, 96, 88, -76, 60, 89, -48, 9, 59, 77, -97, -16, -75, 22, 116, -78, -90, -75, -52, -13, -54, 59, 30, 103, -126, 123, 33, 62, -48, -74, -9, 120, 78, 92, 36, -106, 99, 31, 43, 93, -109, 42, -90, 86, -55, -66, 46, -37, -125, 20, -114, -16, -110, 101, -86, -111, -3, 12, 29, -14, 32, -117, -35, -5, -61, -2, 47, 26, -102, -119, 113, 5, 80, -99, 56, -119, -56, -99, 78, -64, -111, -47, 9, -71, -50, 47, 85, 84, 80, -123, -106, 48, -101, 51, -31, -10, -63, -51, -68, 99, -55, 84, -10, -94, -126, 121, 83, 122, 81, -20, -110, 9, 44, -119, 7, 123, 82, -57, 17, -71, 86, 118, -2, -6, 28, 42, -93, -15, 34, 4, -85, -47, 68, 117, 98, -125, 11, 3, 25, 115, -95, -97, 18, 18, -45, -47, -42, 15, 57, 44, -92, -64, -45, -11, -78, 125, -18, -54, 115, -61, -4, 119, -6, -37, -120, -42, -11, 107, 102, -38, 123, -103, -29, 66, -37, -124, 50};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.8925959592199685);
    msg.setSource(44536U);
    msg.setSourceEntity(178U);
    msg.setDestination(44458U);
    msg.setDestinationEntity(115U);
    msg.seq = 49316U;
    msg.sys_dst.assign("UTYGVFREMBOZLESICBOYFRSZOQMKHBHVDWJROFTUXQWDYRKFXHYECUQVGGPUDREDRARGTTYKSPJKUZSRNCOMDCNZPJLAXPZFVUAHXCQYISGTXCSFLWEHSKMJGGCSAFN");
    msg.flags = 93U;
    const signed char tmp_msg_0[] = {-93, 117, -51, -126, 38, -70, 38, -51, 2, -17, -53, -117, -127, -92, -91, -4, -114, -112, -94, -6, 70, -35, -125, -45, 66, -51, 53, -58, 22, -108, -72, 83, 14, 25, 70, -39, -125, -31, 101, -34, 68, -13, 72, -69, 98, 44, 78, -48, 71, -51, 62, -56, -58, -59, 95, -9, -73, -64, -69, -124, 85, 22, -71, 40, -87, -3, 61, 82, 65, -120, 44, -11, 37, -112, 68, 57, -55, 30, 124, -83, -62, -90, 117, -25, -56, 108, -99, 3, -63, -80, -44, 105, 53, -78, -11, 91, -65, -49, -40, 106, 13, -123, 117, -114, 76, 1, -81, -54, 25, 125, -105, 11, 59, 55, 94, 87, -99, 50, -49, 63, -36, -57, -48};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.9398486152396994);
    msg.setSource(6739U);
    msg.setSourceEntity(166U);
    msg.setDestination(37243U);
    msg.setDestinationEntity(136U);
    msg.sys_src.assign("BXGTGDCGZVMFRDHFVYLQXONFSWEIJACLVIFXRIUFPUQIOVVQPBQDAMLAZOKREUPJBHIODIMTZCSBVBQYBCGPLIIAJDLKHSKHIKUZVAJKQXWZY");
    msg.sys_dst.assign("JUDMOFSCINOKVJLIVPGGPDUXGGERELCXIQCURELLLRXAKULPAMSTVZZBNKKAJMOJYRLIXBDDXHPACQJFHRFGPNZVBLBKNQYH");
    msg.flags = 206U;
    const signed char tmp_msg_0[] = {-39, 14, -27, -73, -117, 59, 5, -108, 9, -63, 54, -71, 81, -30, -70, 122, -6, 2, -29, 48, -63, -40, -98, -45, -42, -63, 48, 125, 0, -69, -99, -121, 31, 65, 88, 120, 78, -30, 30, -24, 87, -48, -57, 10, -100, 62, 83, -72, 4, -65, -52, 118, 74, 88, -43, -80, 23, 61, 119, 117, 99, -52, 86, -39, 1, 105, 22, 96, -10, 51, 75, -53, -20, 114, 46, -122, -45, 45, -93, 5, 39, 63, -93, -88, 63, -70, 43, 79, -66, 114, 44, 112, 100, -41, -40, 106, 97, 105, -52, 93, 41, -73, -92, -111, -11, 71, -90, -8, -100, -6, 118, 86, -48, -34, 87, -103, -39, -45, 0, 94, -65, 86, -80, 50, -127, -89, -20, 87, -81, 57, 1, 90, 98, -124, 108, -115, 9, -37, 14, 111, 52, -108, 7, -109, 78, 82, 24, -89, -41, 48, -93, -6, 12, -79, 65, -16, -91, 85, 55, -62, -115, 78, 98, 77, 99, -51, -64, 39, 1, -71, 59, -58, 119, -123, 115, -121, -109, -10, 33, 1, -120, -14, -124, -100, 97, -40, 70, 97, 9, -123, -112, -68, -27, 56, 115, 117, 65, 61, 57, -96, -27, 89, -102, 102, 19, 59, 29, 74, -107, 0, -119, -49, 32, -95, -64, 97, 37, -119, -19, -20, -45};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.2086364273519432);
    msg.setSource(10055U);
    msg.setSourceEntity(86U);
    msg.setDestination(53897U);
    msg.setDestinationEntity(196U);
    msg.sys_src.assign("IDVYKSXIWTMCBVTYLWSWGDWJSKKUHNJMHRRFGYWZVGABROACUMGAKZEDKWYXUTLNMVCXDAFNEUJYAJCRBONQPLPUSWUHKPHMHZCTHJZVLQZQX");
    msg.sys_dst.assign("UTJRGWYMRIMAVSMVOCHEJXEYMRDFWUGOSIEFIAWDTZDTDYENIJAJVCXDSUAIRVEDSGLHXNEUMUCNQSTQQIKQQXLMMZGBSFGGYYGRMFCMGTOELTLFBPXHQBNJBJOURKSWNCHZORWVYBKDAHEZQOFNDAEYDXBTGEVWKHHWCZHCPFLLFZWLVYRQZSTLKKFIZBPPKYXTWNVLIGSCRCLVKAOXVCNFDBNOKSUZJAUHIZ");
    msg.flags = 157U;
    const signed char tmp_msg_0[] = {80, 109, -52, 110, 77, 11, -11, -37, 62, 16, 9, 71, 103, 112, -27, -14, -58, 80, 50, 100, 90, 62, -16, 103, 88, 33, 19, 28, -22, 107, -22, 118, -48, -123, 55, 59, 47, -73, 68, -17, -40, 33, -114, 97, -38, 12, 69, 65, -40, 43, 63, 77, 110, 23, 24, -7, 38, -40, -113, 67, -113, -4, -74, -9, -87, -40, -81, 99, 118, -119, 81, 94, -57, 69, 113, -43, -95, -125, 69, 87, -7, -17, 99, -114, -13, 61, -121, -122, -60, -58, 87, 36, -68, -68, -30, 42, 64, 101, -14, 119, -22, 104, 71, -52, 102, 43, -16, -113, 80, -59, 17, -53, 118, 3, -90, 4, 64, -55, 51, -87, 61, -72, 79, 31, 11, 57, 66, 4, -14, -50, 8, 21, 111, -106, -13, -2, 16, 3, -90, 70, 64, 12, -73, -127, 43, -62, -96, 103, -97, 117, 42, -15, -85, -65, -59, 51, 114, -33, 60, 85, -26, -121, 71, -101, 33, 102, 56, 107, -9, -111, -89, -70, 92, 117, 26, -53};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.5801932492619798);
    msg.setSource(14925U);
    msg.setSourceEntity(47U);
    msg.setDestination(18060U);
    msg.setDestinationEntity(119U);
    msg.sys_src.assign("GQYDUPRNFQRRBXELGDFTUMTIBJSKLNNQNINFJYGWMXLVDYWHISPFESHCZHFWYODLKLOOYWTUJIPLQAZGLPMJOCEBKXRSZAWPPXGOVERJLNWXEZQBAPRKBXEUZDMUKAJYGVXHBYSTRCCXZHTIVECKGTUFCBHIEFFYEASVZRPPOQSGOMVBTYLGQYQNJZPXICMJONC");
    msg.sys_dst.assign("MSIZFZAVTXYZNMQMSSEAVDSAJENVJVVMPGBPUHDLRODGXJIBKTJQJSPYHAEVOUMWTSFOGTFYCMINPFTWFCVMALBFZUNJEMKTSZBTFGHLRDAXQRGCNFMXPUEJQIEJFZOKDRLKNGXCYOLKMHDHJVNXORYBHWAWKSI");
    msg.flags = 174U;
    const signed char tmp_msg_0[] = {-22, 60, -1, 98, -101, 103, 55, -114, 28, -94, -74, -32, -85, -41, 89, 28, 90, 15, 120, 93, -86, 81, 75, -98, -81, 1, 66, -120, -4, 39, 66, 70, 24, -59, -38, -92, 22, -58, -10, 47, 104, 71, -1, -114, 72, -97, 55, 80, 12, 64, -99, -94, 42, -50, -2, -24, -38, 38, -33, 27, -85, -109, 44, -112, -22, -116, -103, 61, 70, 2, -11, -28, -82, -23, 95, 49, 97, 60, 86, -9, 52, 24, -74, 108, 123, -72, -116, 103, 6, -125, 23, -38, -78, -126, -81, -67, -28, 8, 105, -116, 46, 34, 60, -37, 4, 108, -85, -69, -120, 7, -21, -14, 39, 19, -95, 115, -103, 57, 108, 43, 24, 45, -73, -42, 103, -91, 20, -34, 9, -97, -115, 73, 49, -48, -73, -22, -79, 43, -86, 59, 24, 68, 72, -85, 52, 35, 102, -49, -47, -59, 106, -88, -15, 110, 25, 1, 122, 17, -124, 72, -26, 58, 117, 80, 111, -124, -75, 99, -16, -83, 7, -13, -122, -107, 43, 55, 99, -35, -39, -37, 111, 73, -23, 63, 17, 75, -49, -89, 81, 64, 7, -55, -83, -23, 52, -75, 114, -56, -103, -78, -26, -82, 13, -73, 97, -23, 118, -65, -107, 38, 122, -86, -116, 51, 48, 65, 118, 16, 93, 21, 25, 34, 27, -32, -34, -29, 53, 64, 47, 116, -61, 86, 78, 100, 37, -29, -87, -50, -31, 9, 39, 24};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.24261918749044897);
    msg.setSource(23181U);
    msg.setSourceEntity(101U);
    msg.setDestination(4844U);
    msg.setDestinationEntity(135U);
    msg.seq = 25518U;
    msg.value = 88U;
    msg.error.assign("DTSIZPOGLTVUFWWLNIDBVAZQMKEBFTAPSWSVFCZZEBAQHWOMVZLFRVBUMJXNHYTSQYGKVCLFAHZADKDAGFOXJBDINYTKWDVOYXLTWLVPPGYOQHCEWBKSSOKCLNZH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.1598534661714499);
    msg.setSource(20433U);
    msg.setSourceEntity(177U);
    msg.setDestination(52762U);
    msg.setDestinationEntity(118U);
    msg.seq = 24246U;
    msg.value = 86U;
    msg.error.assign("JORSPBCJVTIBEPAHWOEPSCKNZXWYMFKHYIJXELGJIUYJVIQUWUQFMFDKXMUASGZHKSVUODTZSXTVROGKYMBMYLQKEIVDGXDOUKHBVISZXTAMONLWERVLFIQURNHBLNJMLADZQBVCIYMHQZHNEZKSHTHWESTOVRGPUGNWRUTAARDCBVBAPTXFFWZEGKHCQRWXNPY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.9435612277524137);
    msg.setSource(38982U);
    msg.setSourceEntity(134U);
    msg.setDestination(11024U);
    msg.setDestinationEntity(25U);
    msg.seq = 36289U;
    msg.value = 205U;
    msg.error.assign("FFXUREZKBJTMLRMKZFOEBSS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.3680935430926564);
    msg.setSource(563U);
    msg.setSourceEntity(193U);
    msg.setDestination(33826U);
    msg.setDestinationEntity(140U);
    msg.seq = 41108U;
    msg.sys.assign("PDAHUVWNGVATIQNEJNAMDUACZSBF");
    msg.value = 0.6994201088903964;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.1184591362250037);
    msg.setSource(39903U);
    msg.setSourceEntity(212U);
    msg.setDestination(24451U);
    msg.setDestinationEntity(54U);
    msg.seq = 25845U;
    msg.sys.assign("XJNSWNPHPIEETGYEPUOXDVGMHXTWMNQJVDMAQHIFBTQFZYQBFELEBMZYTNGBYYFVAXNCBMILQWXNASPDJPIJCOWLVYZAXXWKZRGTKLZBKDVWODSKVLWUGYBUNUIEANPELHI");
    msg.value = 0.9513576058762288;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.9121143388987102);
    msg.setSource(31210U);
    msg.setSourceEntity(39U);
    msg.setDestination(52083U);
    msg.setDestinationEntity(117U);
    msg.seq = 51231U;
    msg.sys.assign("PEMMDUQZNRCKZASWXFHUGCLLDGTJEWUGKXNHHXXCXTEQXDISSVGYFWVGROTMMCOAOJJAZLVZMINYLRFHDORTQKGPBVUVIALIZOCRJJFLFKDJCIXUPBJBBQHOSNBSMPVWHZVOFUIKZXYPCAHQEQIOBTYDCOUZYWSDSUGEGJLIPRMQUXRNGPSHVHCNTYAMPPFBSJWFARZPLETMEOKCEIIEYNKGDYDYHFBKATNT");
    msg.value = 0.11756776924385348;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.05753730894301401);
    msg.setSource(239U);
    msg.setSourceEntity(113U);
    msg.setDestination(4929U);
    msg.setDestinationEntity(2U);
    msg.seq = 39553U;
    msg.sys_dst.assign("QWCSGHMIJSDPXFPLJJJVZNTTMZCEBYXBGCQZLRMWYGEEKVAYMIRECLGVQJZFZLCJBKXREAYIOZCZWGBTZROWURVIMHDBFWKPPDYPNQGVEFLALIYONYUWRMXTYPONDLSMRRSUPVWAUSHPNBQSXOTYSLAKPWGTFQQOXCSQJNDTFBFUWJICIHDOAXTYAXPNOBZUJCDVKFUOMGQ");
    msg.timeout = 0.2019862992595729;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.6809325078354534);
    msg.setSource(24726U);
    msg.setSourceEntity(159U);
    msg.setDestination(13175U);
    msg.setDestinationEntity(192U);
    msg.seq = 53688U;
    msg.sys_dst.assign("CONJHBYSWAPVULRWCGBVQJCSRAILIEHVFEUV");
    msg.timeout = 0.10792688815837193;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.5424383480769474);
    msg.setSource(56523U);
    msg.setSourceEntity(124U);
    msg.setDestination(36872U);
    msg.setDestinationEntity(137U);
    msg.seq = 48381U;
    msg.sys_dst.assign("DNYQKHPBQOCQAGPMEFVXDPKEPVIQGSXKRUSFRLQZOIIJZBZXNXEYSLVZCWHRXOCPDOEIFFKINNYGEOAIBTAMUGGSLMDKIW");
    msg.timeout = 0.7201906836805992;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.7915901251048912);
    msg.setSource(41201U);
    msg.setSourceEntity(109U);
    msg.setDestination(21500U);
    msg.setDestinationEntity(250U);
    msg.action = 200U;
    msg.longain = 0.339823281841515;
    msg.latgain = 0.9435624551109141;
    msg.bondthick = 1259539354U;
    msg.leadgain = 0.990340235519214;
    msg.deconflgain = 0.5726794952170242;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.9048935649263754);
    msg.setSource(45048U);
    msg.setSourceEntity(196U);
    msg.setDestination(2828U);
    msg.setDestinationEntity(204U);
    msg.action = 219U;
    msg.longain = 0.8074630726201565;
    msg.latgain = 0.300349492083794;
    msg.bondthick = 1992211231U;
    msg.leadgain = 0.4003911888506705;
    msg.deconflgain = 0.3056142548120405;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.5320992277081162);
    msg.setSource(43846U);
    msg.setSourceEntity(13U);
    msg.setDestination(39850U);
    msg.setDestinationEntity(84U);
    msg.action = 46U;
    msg.longain = 0.5446454554194888;
    msg.latgain = 0.5981074180048487;
    msg.bondthick = 2319058026U;
    msg.leadgain = 0.34829729050474123;
    msg.deconflgain = 0.06822857871570143;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.9667654827912638);
    msg.setSource(15368U);
    msg.setSourceEntity(142U);
    msg.setDestination(62045U);
    msg.setDestinationEntity(57U);
    msg.err_mean = 0.736505378139842;
    msg.dist_min_abs = 0.9516668521433087;
    msg.dist_min_mean = 0.5423264273255647;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.959176358072319);
    msg.setSource(11494U);
    msg.setSourceEntity(201U);
    msg.setDestination(26598U);
    msg.setDestinationEntity(74U);
    msg.err_mean = 0.9548979599495323;
    msg.dist_min_abs = 0.9589946537996578;
    msg.dist_min_mean = 0.977785518860696;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.5587622440500664);
    msg.setSource(4761U);
    msg.setSourceEntity(138U);
    msg.setDestination(38546U);
    msg.setDestinationEntity(254U);
    msg.err_mean = 0.32042471432695363;
    msg.dist_min_abs = 0.7559789633757944;
    msg.dist_min_mean = 0.39983997189494636;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.5449520292146883);
    msg.setSource(5548U);
    msg.setSourceEntity(125U);
    msg.setDestination(30603U);
    msg.setDestinationEntity(130U);
    msg.action = 176U;
    msg.lon_gain = 0.7367878524678866;
    msg.lat_gain = 0.69141456587164;
    msg.bond_thick = 0.16040404245016782;
    msg.lead_gain = 0.7962062609725824;
    msg.deconfl_gain = 0.6808482946179754;
    msg.accel_switch_gain = 0.400816197997375;
    msg.safe_dist = 0.8337385406108441;
    msg.deconflict_offset = 0.3515500428754673;
    msg.accel_safe_margin = 0.19489414281207362;
    msg.accel_lim_x = 0.19036342641270887;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.7102241353501594);
    msg.setSource(12156U);
    msg.setSourceEntity(88U);
    msg.setDestination(55451U);
    msg.setDestinationEntity(174U);
    msg.action = 187U;
    msg.lon_gain = 0.4774371183127518;
    msg.lat_gain = 0.8835607131643356;
    msg.bond_thick = 0.5449914577201956;
    msg.lead_gain = 0.6079491049345901;
    msg.deconfl_gain = 0.5395389782712336;
    msg.accel_switch_gain = 0.22477458043929555;
    msg.safe_dist = 0.5057555509806437;
    msg.deconflict_offset = 0.5734050474468152;
    msg.accel_safe_margin = 0.6926304440804938;
    msg.accel_lim_x = 0.7922509930510206;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.42038825313709904);
    msg.setSource(63891U);
    msg.setSourceEntity(92U);
    msg.setDestination(53479U);
    msg.setDestinationEntity(223U);
    msg.action = 238U;
    msg.lon_gain = 0.6957015855989971;
    msg.lat_gain = 0.5845795282755998;
    msg.bond_thick = 0.6646717304240729;
    msg.lead_gain = 0.18131873949898414;
    msg.deconfl_gain = 0.38747199702521196;
    msg.accel_switch_gain = 0.4279053352923263;
    msg.safe_dist = 0.37608914292592066;
    msg.deconflict_offset = 0.54432751663489;
    msg.accel_safe_margin = 0.39228616657461035;
    msg.accel_lim_x = 0.8642758000410208;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.3546716438634073);
    msg.setSource(1474U);
    msg.setSourceEntity(176U);
    msg.setDestination(56312U);
    msg.setDestinationEntity(173U);
    msg.type = 172U;
    msg.op = 244U;
    msg.err_mean = 0.0044667494558701115;
    msg.dist_min_abs = 0.7320240759307073;
    msg.dist_min_mean = 0.7914508327776276;
    msg.roll_rate_mean = 0.18015718025364602;
    msg.time = 0.2873161922996237;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 237U;
    tmp_msg_0.lon_gain = 0.539451754268355;
    tmp_msg_0.lat_gain = 0.22593274062446855;
    tmp_msg_0.bond_thick = 0.7141930044447322;
    tmp_msg_0.lead_gain = 0.8517313088908969;
    tmp_msg_0.deconfl_gain = 0.8822322651099487;
    tmp_msg_0.accel_switch_gain = 0.8816349414871877;
    tmp_msg_0.safe_dist = 0.21562051545459238;
    tmp_msg_0.deconflict_offset = 0.36621122617995816;
    tmp_msg_0.accel_safe_margin = 0.8185750831475723;
    tmp_msg_0.accel_lim_x = 0.10606968018094798;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.284732343582183);
    msg.setSource(12064U);
    msg.setSourceEntity(41U);
    msg.setDestination(4303U);
    msg.setDestinationEntity(128U);
    msg.type = 5U;
    msg.op = 2U;
    msg.err_mean = 0.03432215465973776;
    msg.dist_min_abs = 0.5039255911340436;
    msg.dist_min_mean = 0.9853532841418777;
    msg.roll_rate_mean = 0.5112810369917308;
    msg.time = 0.38924778520761205;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 83U;
    tmp_msg_0.lon_gain = 0.7924125295946314;
    tmp_msg_0.lat_gain = 0.7899660235852971;
    tmp_msg_0.bond_thick = 0.051525558788849124;
    tmp_msg_0.lead_gain = 0.18441818632689955;
    tmp_msg_0.deconfl_gain = 0.5037553114811013;
    tmp_msg_0.accel_switch_gain = 0.17428646056019903;
    tmp_msg_0.safe_dist = 0.5230037684726486;
    tmp_msg_0.deconflict_offset = 0.7589364460187044;
    tmp_msg_0.accel_safe_margin = 0.4583552683706401;
    tmp_msg_0.accel_lim_x = 0.07817541051584842;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.49837845082546517);
    msg.setSource(17056U);
    msg.setSourceEntity(64U);
    msg.setDestination(34983U);
    msg.setDestinationEntity(6U);
    msg.type = 25U;
    msg.op = 191U;
    msg.err_mean = 0.5718744753742341;
    msg.dist_min_abs = 0.044818801897872684;
    msg.dist_min_mean = 0.7051529175072394;
    msg.roll_rate_mean = 0.012212443916985172;
    msg.time = 0.9608804395997492;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 34U;
    tmp_msg_0.lon_gain = 0.29148104574954237;
    tmp_msg_0.lat_gain = 0.4180824812363978;
    tmp_msg_0.bond_thick = 0.535802432748037;
    tmp_msg_0.lead_gain = 0.7585034200574776;
    tmp_msg_0.deconfl_gain = 0.5369425142956242;
    tmp_msg_0.accel_switch_gain = 0.6223816101882966;
    tmp_msg_0.safe_dist = 0.877410447366942;
    tmp_msg_0.deconflict_offset = 0.15811286519443923;
    tmp_msg_0.accel_safe_margin = 0.6991994026431818;
    tmp_msg_0.accel_lim_x = 0.7953183565763042;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.38491030811133053);
    msg.setSource(39770U);
    msg.setSourceEntity(185U);
    msg.setDestination(50542U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.9345081624633902;
    msg.lon = 0.04269345199732244;
    msg.eta = 3706152351U;
    msg.duration = 53890U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.9609250588472797);
    msg.setSource(13432U);
    msg.setSourceEntity(182U);
    msg.setDestination(40941U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.4363118511180427;
    msg.lon = 0.4829908776285794;
    msg.eta = 2807589975U;
    msg.duration = 61233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.474976049965384);
    msg.setSource(57787U);
    msg.setSourceEntity(170U);
    msg.setDestination(63303U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.41303998391974817;
    msg.lon = 0.4743340886391326;
    msg.eta = 2400051193U;
    msg.duration = 25507U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.6559933997214602);
    msg.setSource(31080U);
    msg.setSourceEntity(40U);
    msg.setDestination(25563U);
    msg.setDestinationEntity(149U);
    msg.plan_id = 65418U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.7252668141448502;
    tmp_msg_0.lon = 0.4266165272557044;
    tmp_msg_0.eta = 4141941961U;
    tmp_msg_0.duration = 27026U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.7194041729354755);
    msg.setSource(45474U);
    msg.setSourceEntity(230U);
    msg.setDestination(44599U);
    msg.setDestinationEntity(205U);
    msg.plan_id = 6446U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.12556808842113587;
    tmp_msg_0.lon = 0.7614222743678963;
    tmp_msg_0.eta = 3506233665U;
    tmp_msg_0.duration = 42124U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.01746469920253768);
    msg.setSource(13423U);
    msg.setSourceEntity(193U);
    msg.setDestination(29460U);
    msg.setDestinationEntity(136U);
    msg.plan_id = 50899U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.2812112489498608;
    tmp_msg_0.lon = 0.6579504895433401;
    tmp_msg_0.eta = 90585593U;
    tmp_msg_0.duration = 47073U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.5147137461523376);
    msg.setSource(54329U);
    msg.setSourceEntity(146U);
    msg.setDestination(45515U);
    msg.setDestinationEntity(107U);
    msg.type = 88U;
    msg.command = 169U;
    msg.settings.assign("ENHDFQCEHXHETUMWQMPTXOTGWNANAWDUBNSVRZYYRTGLSKUBTBZEKJTYZISMHPJEOBXMFWZVBRLFNGWPCDASDEOAAMJQQJCCPCLARCKNFBMRFLRFJNGWKGJEODWTKVTZCUKDUILWURKIIOYQMDCEIOYAYXPJKCKIUHGGNDZLVTPYNQNELFDZSHLIQVJSZOPXSJMRVFFWSOZVPTZGXH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 30214U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6921004685585483;
    tmp_tmp_msg_0_0.lon = 0.47275411377605503;
    tmp_tmp_msg_0_0.eta = 183255512U;
    tmp_tmp_msg_0_0.duration = 63187U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JTUCIUSOLXJWRBTATPRZYBXOMUIJBTJAHINKENNMTXHGZMOPCHUVPSYEDVNUIDVAKQGGKVJCHNQRHUFJTYSCKEFMXAVGXOLX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.16149401271612596);
    msg.setSource(33273U);
    msg.setSourceEntity(137U);
    msg.setDestination(39309U);
    msg.setDestinationEntity(186U);
    msg.type = 98U;
    msg.command = 92U;
    msg.settings.assign("RZCPOYGIQELVJPPABUFJZKPGMMGQKYFGLSMHTMQAVBNZTLCCWRERETXRXLHMZCEOHFOFGVXYOBPHNVBNTCTEEJNUAYIDOHP");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 50686U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TUDZWDBUROYCPNDFGEXHOGRVTBBSBELQMEDOHLIUHTRRZUFCCTVREZNBBNKAXHYIYAOXEDHAPZTONIDWPAMNAVSLUGGATLRCPJYGSEZSQGJBTFMIYFFYHOKVIWZWKQAPVXAXQKWMDWCRLCJOHSQGCDXILRQOZAVMVXEXYMGQPRCINFLKAUMFTWHVNSHWILMTNXWJKYPHNEMSJJKSCUFISE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.3825789381546857);
    msg.setSource(45624U);
    msg.setSourceEntity(201U);
    msg.setDestination(56625U);
    msg.setDestinationEntity(21U);
    msg.type = 105U;
    msg.command = 85U;
    msg.settings.assign("WXWVTCFLEQIFGLJATQIETQWN");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 53984U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("SSZQAPVZWAZDCPOKBJFHXXIKQFVOWDGFBHYNGIOEWUIKNJGNPZHQCMHPNURESLVIQQTYUTLWDYAKFXBWVUUTIEVCBVCOLZSGMPFTLYXPCHSXEEWCAWAKTEUIJLMROTDRWFLXTNMJRKIQEELNRNGOAGJBEMZDYYZROAUZLICDSJXRKDSGLSOKUFFMOBVNCQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.05581098126765005);
    msg.setSource(44433U);
    msg.setSourceEntity(241U);
    msg.setDestination(29522U);
    msg.setDestinationEntity(34U);
    msg.state = 185U;
    msg.plan_id = 19434U;
    msg.wpt_id = 181U;
    msg.settings_chk = 47488U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.7633168580768971);
    msg.setSource(61879U);
    msg.setSourceEntity(123U);
    msg.setDestination(1000U);
    msg.setDestinationEntity(56U);
    msg.state = 132U;
    msg.plan_id = 55530U;
    msg.wpt_id = 104U;
    msg.settings_chk = 13801U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.08199329661084365);
    msg.setSource(22284U);
    msg.setSourceEntity(26U);
    msg.setDestination(340U);
    msg.setDestinationEntity(129U);
    msg.state = 226U;
    msg.plan_id = 3810U;
    msg.wpt_id = 187U;
    msg.settings_chk = 7748U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.22249223941176266);
    msg.setSource(28189U);
    msg.setSourceEntity(204U);
    msg.setDestination(57367U);
    msg.setDestinationEntity(171U);
    msg.uid = 105U;
    msg.frag_number = 93U;
    msg.num_frags = 60U;
    const signed char tmp_msg_0[] = {48, -8, 9, 109, -61, -2, -83, 39, -125, -113, -47, -105, -93, -92, 94};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.7015471665331127);
    msg.setSource(14419U);
    msg.setSourceEntity(213U);
    msg.setDestination(20265U);
    msg.setDestinationEntity(46U);
    msg.uid = 163U;
    msg.frag_number = 226U;
    msg.num_frags = 38U;
    const signed char tmp_msg_0[] = {-45, -4, 47, 59, 17, -84, -20, -38, 3, -10, 56, -44, -25, -80, 126, 4, 85, 11, -22, -73, 99, -13, -38, -51, 123, 96, 4, 91, -127, 109, -78, 73, -128, 1, -121, -22, -24, 19, 84, -27, 31, 48, 46, -29, -81, 71, -74, 66, 89, -121, 1, 39, -35, -54, 86, -79, 102, 12, 109, -113, -26, 44, -7, 112, -31, -24, 52, -102, 65, -60, 43, 43, 104, -84, 123, 112, -101, -125, -9, 22, -35, 40, -90, 107, 42, -118, -71, -56, -97, -14, -118, 72, -124, 122, 86, -30, -28, 22, 55, 94, -110, 115, 21, -91, -66, 27, 45, -17, -90, -109, 14, 23, 3, -77, -16, -74, -86, 8, -97, -31, -61, -52, 110, -73, 84, 41, -88, 104, -74, -34, 104, -101, -94, 45, -69, -21, 39, 61, -43, -124, -15, -28, 81, -113, 119, -97, 31, -25, 90, -78, 15, -34, -39, -31, 33, -74, 52, 87, -79, -24, -83, -95, -47, 92, -115, 0, -23, 27, -90, 32, 111, 85, -102, -98, -4, -87, -23, -115, -123, -13, -127, 50, 3, -6, -25, -47, -84, 64, -56, 104, 56, -1, 86, 28, -92, 77, -123, -123, 46, -87, 20, -112, -27, -90, -98, -99, 65, -9, 44, -124, 120, 9, -65, 110, -88, -47, -80, -97, 62, 113, 44, -86, -8, -58, 52, -109, 58, 124, 32, -23, 20, -34, 44, -118, 59, -51, 76};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.37960294086714685);
    msg.setSource(40735U);
    msg.setSourceEntity(55U);
    msg.setDestination(24524U);
    msg.setDestinationEntity(251U);
    msg.uid = 209U;
    msg.frag_number = 164U;
    msg.num_frags = 128U;
    const signed char tmp_msg_0[] = {6, 84, 66, -59, 104, 4, 88, 4, 68, 27, 15, -60, 87, -93, -25, 26, -83, -76, 21, -6, 81, -72, 29, 11, -76, -53, 2, -115, 116, -102, 71, -74, -58, 78, 38, -38, 5, -84, -31, -98, -104, -108, -46, 51, 71, -48, -40, -102, 64, -65, -31, 50, 123, 92, -4, 73, 117, -107, 123, 71, 16, -2, 69, -5, 102, 14, 120, -78, -72, 34, 77, 1, -10, 32, 9, -76, 111, 37, 30, -85, -51, -32, -53, 101, -49, 13, -56, 117, -86, -82, -16, 98, -82, -22, -123, -10, -116, -85, -70, -26, -4, -121, -2, 20, -3, 32, 64, 23, -45, 67, -15, 104, 43, -8, 75, -45, 100, 46, 41, -34, -106, 62, 15, 21, 74, 4, -74, 14, -19, 68, -72, -28, 28, -105, -19, -101, 60, 63, 21, -42, -15, 53, 97, 77, -27, 110, -115, -81, -31, -22, 106, -101, 109, -38, 91, 95, -36, 56, -4, 111, 79, 83, 70, -117, -91, 108, 78, 125, 13, -95, -62, 2, 38, 102, 72, 54, 53, 80, -104, -11, 42, -17, -25, -95, 8, 11, 59, -101, -79, -115, 84, -41, 30, -69, 59, 96, 109, -107, 97, 31, -24};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.02242934473135616);
    msg.setSource(52347U);
    msg.setSourceEntity(172U);
    msg.setDestination(5903U);
    msg.setDestinationEntity(199U);
    msg.content_type.assign("KFMUQHRXTYGRRNJKIGBPRSHUFQWVGXVSORWWVDERZNJPWLNCTQBMDDIMBXCRDTLVPLRQQZGSSSBMBNHFA");
    const signed char tmp_msg_0[] = {34, -84, -10, -116, 45, -76, -2, -66, 6, 109, 53, -84, -35, -38, -59, 31, 33, 111, 77, 19, -110, -26, -96, -62, 92, 102, -41, -38, 88, 22, -57, -73, 88, 124, 18, 2, -7, -120, 14, -54, 78, -78, -35, 101, -24, -87, 2, -101, 125, -30, -127, 63, 12, 20, 34, -107, -43, -21, 116, 83, 4, -74, 44, -71, -29, -8, -77, 106, -125, 62, -86, 125, -41, 80, -19, -3, -76, -81, 51, -106, 65, -11, -75, -52, 27, 124, 113, -47, 16, -15, -42, -64, -10, 30, 13, -98, -47, 55, -41, 96, -126, -28, -114, 98, -77, -118, -102, 120, -98, -40, -47, -73, 93, -4, 55, 74, 68, 90, -100, -75, -123, -31, 56, -73, -126, -47, 61, -21, -87, -93, -119, 19, 49, -61, 109, 122, -18, -73, 89, -11, 61, 69, -49, -15, -32, 10, 52, 8, 72, 26, -78, -83, 74, -126, -70, 72, 4, -77, 103, -77, 39, -8, 18, 90, -85, 12, -9, 14, 89, 31, -15, -69, 16, 114, 1, 32, 75, 67, 35, -4, 40, 81, -1, 35, 113, 97, 122, -123, 35, 96, -96, 30, 52, 104, -15, 86, -73, -32, -15, -12, 114, 99, 102, 66, 87, -30, -63, 14, 18, 61, -60, -49, 58, 11, -20, -100, 92, 53, -104, 27, 3, 66, -109, 79, 42, -47, 86, 7, -126, 4, -37, -105, -104, 29, -5, 65, -103, 107, -114, 41};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.3174123929204442);
    msg.setSource(50334U);
    msg.setSourceEntity(167U);
    msg.setDestination(40887U);
    msg.setDestinationEntity(112U);
    msg.content_type.assign("EEKWCRPIIEGEALFXDVPCPSXLCWLXMPVXBMRNMAJBZHPWSDHYTBPXJFMVMMOOWTCFDTYRZNUXJPGEDYZKLVGIBPXSLCQRDZLAHOBDKZZIJMFLJETDFHFUZRWOOAIZYTCHVHNNLIRBIKQUTKUCKULCSKQCPAUKBGERZMOADSKWDAIOYMZJGYGIHQWJSLRQFGAJYMNOTSNQDOUNRGVVFUNVXWQBJSGKYHSEHTFWGYBCFPERQV");
    const signed char tmp_msg_0[] = {20, 16, -94, 103, -7, -119, -84, 80, -81, 85, -52, 21, 55, 55, 81, 79, -16, 54, -114, -34, 47, -78, -119, -5};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.9913767741562864);
    msg.setSource(35928U);
    msg.setSourceEntity(24U);
    msg.setDestination(4176U);
    msg.setDestinationEntity(165U);
    msg.content_type.assign("QUOTFDITKPPZZSRNEYQDDCMGPXVJGCQZCVLPLJZLJWDTWTQFPOSUAZHIHEGNTUXUVJPNAGNJHKQOHHBLPFDCNACETAGMEMMBXODWJXBMPGNCYQCQZROOAKYWISYBVAAMXCKMRQWVFLIEBCIMLDXPTWUZSYTENSFRZNQMCEGBLRKVO");
    const signed char tmp_msg_0[] = {20, -127, 37, -83, -13, 80, -63, -44, 35, 90, -97, 87, -96, -48, -5, -87, -19, -60, 109, -40, 95, -5, 115, -12, -110, 118, 88, 113, 59, -40, -116, -100, -51, 60, 102, 59, 55, 36, 17, 80, -105, -104, 117, 5, -127, -121, 3, 29, 104, 53, -12, 19, 47, -30, 59, 124, 52, -30, -48, -99, -2, 120, 51, -128, 37, 5, -120, 119, 118, 22, -71, -63, -13, -114, -38, 94, -108, 104, -104, -87, -114, 86, 54, -29, -71, 122, 114, -87, 21, 91, 9};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.34664871484981374);
    msg.setSource(3576U);
    msg.setSourceEntity(50U);
    msg.setDestination(23477U);
    msg.setDestinationEntity(81U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.7277005930545428);
    msg.setSource(16199U);
    msg.setSourceEntity(196U);
    msg.setDestination(19012U);
    msg.setDestinationEntity(212U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.5826651570460912);
    msg.setSource(10447U);
    msg.setSourceEntity(20U);
    msg.setDestination(47337U);
    msg.setDestinationEntity(73U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.9744816335990978);
    msg.setSource(46089U);
    msg.setSourceEntity(116U);
    msg.setDestination(12644U);
    msg.setDestinationEntity(202U);
    msg.target = 21293U;
    msg.bearing = 0.1581145868561269;
    msg.elevation = 0.19489960926602312;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.28682618022914363);
    msg.setSource(36673U);
    msg.setSourceEntity(104U);
    msg.setDestination(7703U);
    msg.setDestinationEntity(246U);
    msg.target = 34444U;
    msg.bearing = 0.1858199831632441;
    msg.elevation = 0.12710850245928984;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.039334070560224865);
    msg.setSource(31614U);
    msg.setSourceEntity(11U);
    msg.setDestination(9519U);
    msg.setDestinationEntity(135U);
    msg.target = 8212U;
    msg.bearing = 0.5233694157163146;
    msg.elevation = 0.9416400636888765;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.08351811021437594);
    msg.setSource(39224U);
    msg.setSourceEntity(241U);
    msg.setDestination(9464U);
    msg.setDestinationEntity(32U);
    msg.target = 36606U;
    msg.x = 0.9592303600188864;
    msg.y = 0.8310264563845088;
    msg.z = 0.08616675665191065;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.8875251648711617);
    msg.setSource(4459U);
    msg.setSourceEntity(197U);
    msg.setDestination(24565U);
    msg.setDestinationEntity(67U);
    msg.target = 14988U;
    msg.x = 0.5264741752781879;
    msg.y = 0.5844822040220645;
    msg.z = 0.9945552943989002;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.9449543011778736);
    msg.setSource(25525U);
    msg.setSourceEntity(3U);
    msg.setDestination(1334U);
    msg.setDestinationEntity(88U);
    msg.target = 42852U;
    msg.x = 0.47969791623850655;
    msg.y = 0.8941389947201269;
    msg.z = 0.4335206385173861;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.5700891607539166);
    msg.setSource(44843U);
    msg.setSourceEntity(141U);
    msg.setDestination(35524U);
    msg.setDestinationEntity(140U);
    msg.target = 11980U;
    msg.lat = 0.8035112359921608;
    msg.lon = 0.24095978970513698;
    msg.z_units = 8U;
    msg.z = 0.6743958898415705;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.42333219562367375);
    msg.setSource(30438U);
    msg.setSourceEntity(197U);
    msg.setDestination(12821U);
    msg.setDestinationEntity(32U);
    msg.target = 44167U;
    msg.lat = 0.5151132148534284;
    msg.lon = 0.010555167600375337;
    msg.z_units = 73U;
    msg.z = 0.7983305826842598;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.529062688195752);
    msg.setSource(8529U);
    msg.setSourceEntity(226U);
    msg.setDestination(25811U);
    msg.setDestinationEntity(107U);
    msg.target = 15364U;
    msg.lat = 0.33894414847700916;
    msg.lon = 0.6958416975809592;
    msg.z_units = 39U;
    msg.z = 0.12004749510289126;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.1880537846190058);
    msg.setSource(57299U);
    msg.setSourceEntity(158U);
    msg.setDestination(40981U);
    msg.setDestinationEntity(135U);
    msg.locale.assign("ZEDOGRYAOQCCAYWBANJFLFKSXTGORTBDXPKHHPMJXLHQAXMVYEZFOOFPLHRSRYRDVBYDHZUEVPACSZYPSJSVXWGYYTDMCBNGNUQDLTMFIPHWMONHEKIEBOQMZLZVBQ");
    const signed char tmp_msg_0[] = {12, -7, -97, -111, -46, 65, -64, 80, -76, 41, 5, 64, 67, -52, 98, 97, -72, -98, -7, 8, 12, -66, -87, 39, 6, -54, 107, 85, -124, 97, -29, 6, -20, 106, 27, 2, -38, 94, -93, 15, -99, 11, 59, -123, 44, 43, -2, 92, 11, 32, 3, -14, 33, 66, 35, -103, 123, 48, 53, -21, 13, -38, 110, -22, -49, 53, 36, 67, -112, 1, -83, 49};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.810727072842826);
    msg.setSource(7248U);
    msg.setSourceEntity(10U);
    msg.setDestination(60879U);
    msg.setDestinationEntity(89U);
    msg.locale.assign("CZHGRXVWSBJXVGGMSIYBJVTFHNODKWUBVIDBKWLKPIJJAZVFEQXTWGEYAFUKRPLZSQPUHTODPPPJYVTJPIPRZNOVFWDLFYQTIIYXKLPUAJHBVEUFJCNYNCOZIQTTVJGRQOLOHEASGIYFNUMGRPUETUUOMQZSEBHHCYKYRYBANIWMRXHCMSEBEQKXBLMCGOMKWSAHAXZALLMNFNE");
    const signed char tmp_msg_0[] = {74, -82, 27, 72, -17, -96, 118, -17, -24, 126, -105, -31, -49, 42, 101, 100, -82, -18, 104, 78, -12, 39, 122, 39, -73, 71, -105, -17, -81, -17, 50, -40, 65, -74, 38, -27, -127, 86, 125, 7, -20, 46, 96, -124, -45, -108, 111, -27, -12, -95, -100, 57, -122, -64, 106, 67};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.4778537214636971);
    msg.setSource(25679U);
    msg.setSourceEntity(89U);
    msg.setDestination(60530U);
    msg.setDestinationEntity(75U);
    msg.locale.assign("HKBAJNLXIJKCCCTUFLEXLFXTQBWRRZPRQJPFVOLDBATFQHAZDKFCIQLZSYEZNDDMWOFUVGZMAXZEQSEASSFCUNTPAQGLYOJZXPYYVRVTDHGMTBWPGPBOKOHIWYVAGAZPKZNEOBQDYEHUMRXLETWSVJSUMHUD");
    const signed char tmp_msg_0[] = {63, -45, 40, -10, -86, 35, 3, 78, 20, -45, -2, -101, 86, -114, -78, -74, 29, -32, 52, 43, 126, 77, -85, 85, 88, 108, -89, 49, 102, -119, -44, 41, -65, 83, -43, 73, -90, -55, 58, 119, -24, -74, -9, 61, 60, 48, 36, -91, -29, 40, -29, 43, -34, 73, -41, -73, 15, 23, 21, 81, -61, 19, -39, 70, 99, 36, 35, 111, -75, 22, 99, -29, -22, 105, 23, -32, 26, 52, -71, -119, -123, 116, -85, -40, -117, -43, -74, 126, -65, -39, 82, -118, 99, -74, 7, -49, 0, 25, 44, 51, -33, 110, 115, 85, 69, -85, 117, 59, -64, -115, 49, -77, 36, 56, 104, 67, -100, 25, 0, -12, 109, -73, 45, 87, 42, -3, -27, -63, 73, 112, 69, -74, -52, 55, 37, 44, -80, -74, -54, 109, 72, 54, 37, 18, 7, -78, 84, 45, -102, -53, -72, -74, 112, -9, 85};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.28752605333374615);
    msg.setSource(37617U);
    msg.setSourceEntity(162U);
    msg.setDestination(11769U);
    msg.setDestinationEntity(17U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.488801485976444);
    msg.setSource(290U);
    msg.setSourceEntity(162U);
    msg.setDestination(40273U);
    msg.setDestinationEntity(19U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.7913336764120643);
    msg.setSource(23811U);
    msg.setSourceEntity(193U);
    msg.setDestination(53900U);
    msg.setDestinationEntity(66U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.4044304357628723);
    msg.setSource(56497U);
    msg.setSourceEntity(139U);
    msg.setDestination(19217U);
    msg.setDestinationEntity(74U);
    msg.camid = 185U;
    msg.x = 4718U;
    msg.y = 5984U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.06274566382851121);
    msg.setSource(42330U);
    msg.setSourceEntity(216U);
    msg.setDestination(63442U);
    msg.setDestinationEntity(144U);
    msg.camid = 186U;
    msg.x = 42033U;
    msg.y = 13588U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.08466193268506095);
    msg.setSource(41156U);
    msg.setSourceEntity(214U);
    msg.setDestination(1386U);
    msg.setDestinationEntity(135U);
    msg.camid = 188U;
    msg.x = 22484U;
    msg.y = 33910U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.7644725463073556);
    msg.setSource(46340U);
    msg.setSourceEntity(58U);
    msg.setDestination(6235U);
    msg.setDestinationEntity(145U);
    msg.camid = 25U;
    msg.x = 47083U;
    msg.y = 64920U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.6398836757565581);
    msg.setSource(2717U);
    msg.setSourceEntity(76U);
    msg.setDestination(389U);
    msg.setDestinationEntity(224U);
    msg.camid = 250U;
    msg.x = 12656U;
    msg.y = 56957U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.4250377919579691);
    msg.setSource(31020U);
    msg.setSourceEntity(66U);
    msg.setDestination(21926U);
    msg.setDestinationEntity(62U);
    msg.camid = 160U;
    msg.x = 47871U;
    msg.y = 52284U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.7718213236639894);
    msg.setSource(15483U);
    msg.setSourceEntity(14U);
    msg.setDestination(31890U);
    msg.setDestinationEntity(145U);
    msg.tracking = 115U;
    msg.lat = 0.7687034713054094;
    msg.lon = 0.27333209137715697;
    msg.x = 0.8317380111823961;
    msg.y = 0.8648481854719716;
    msg.z = 0.9164919007590656;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.6378923687158923);
    msg.setSource(41449U);
    msg.setSourceEntity(254U);
    msg.setDestination(7735U);
    msg.setDestinationEntity(32U);
    msg.tracking = 99U;
    msg.lat = 0.9935516260519717;
    msg.lon = 0.9921016315974843;
    msg.x = 0.4243165291372669;
    msg.y = 0.26956150234498577;
    msg.z = 0.11038935375410974;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.8272644144609803);
    msg.setSource(41492U);
    msg.setSourceEntity(176U);
    msg.setDestination(38662U);
    msg.setDestinationEntity(108U);
    msg.tracking = 222U;
    msg.lat = 0.10707020816029711;
    msg.lon = 0.21424966814006152;
    msg.x = 0.6863707012209093;
    msg.y = 0.3534919382924513;
    msg.z = 0.8160355644787858;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.563900078117487);
    msg.setSource(25320U);
    msg.setSourceEntity(158U);
    msg.setDestination(63205U);
    msg.setDestinationEntity(224U);
    msg.target.assign("MFOQTQVVIFTYSGXZYNRBKQKEPPNQQHUEILKHCKKOPCAHBZAGAHZUUTLKSWGKZXDFZJTIHMWRTWOXMNBKSPFIFLXYOCSTAONQELRIFKXCAPGGBOSBDNIMDSYBBKLJVRGNSROZLMHPJVILVJUFCNWHGD");
    msg.lbearing = 0.7330350735562309;
    msg.lelevation = 0.46111106646729627;
    msg.bearing = 0.6617299342401922;
    msg.elevation = 0.33455575152350525;
    msg.phi = 0.8666658586657114;
    msg.theta = 0.5384043708817439;
    msg.psi = 0.31754950680495275;
    msg.accuracy = 0.3567100094155843;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.576970461615939);
    msg.setSource(16259U);
    msg.setSourceEntity(77U);
    msg.setDestination(23211U);
    msg.setDestinationEntity(140U);
    msg.target.assign("HIXQTCIBYBUFGVPMMUTNEQZKD");
    msg.lbearing = 0.6685487288645291;
    msg.lelevation = 0.03225889709440033;
    msg.bearing = 0.631213557581078;
    msg.elevation = 0.9967619915804535;
    msg.phi = 0.3769490705647792;
    msg.theta = 0.9628082358235777;
    msg.psi = 0.7672340191608635;
    msg.accuracy = 0.6874207199271567;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.23764407932375065);
    msg.setSource(39473U);
    msg.setSourceEntity(164U);
    msg.setDestination(38179U);
    msg.setDestinationEntity(139U);
    msg.target.assign("GTYBMRZSXOJOVSTFIYHTZTZKHLBVHKXAUPPMUUSGTMVWJQOZVSQYVLZKVXCOWFDJJDUPMAFUEPGMBRAZNQNJNAHN");
    msg.lbearing = 0.37565312831822395;
    msg.lelevation = 0.8199518805193825;
    msg.bearing = 0.4683215187908579;
    msg.elevation = 0.5552905099122448;
    msg.phi = 0.09808686339751616;
    msg.theta = 0.7414482055614026;
    msg.psi = 0.28033132925323334;
    msg.accuracy = 0.7969999986380636;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.6160782567986915);
    msg.setSource(27500U);
    msg.setSourceEntity(24U);
    msg.setDestination(8270U);
    msg.setDestinationEntity(132U);
    msg.target.assign("IGNAABCKBAUYNENKSIVWSVJRPAKWPCBMDDLFDYFHNOESUUUKGHEJMQYEPOCTVHHINIVQRRNCZFTZXCUBZPOVLZQUBDYPJDNPLZMYBFKISBQHKWWRLHQXUMRMULOQWMYGTGSMOOWDIDRVJGMMVDYORDLTCLZSBXHWBWSXLICBPJUHAAUQPQMV");
    msg.x = 0.1918302439443056;
    msg.y = 0.4093311029701958;
    msg.z = 0.5418409863981973;
    msg.n = 0.5381036767131531;
    msg.e = 0.8793562879226398;
    msg.d = 0.9129739328777445;
    msg.phi = 0.8064496628814061;
    msg.theta = 0.667673418343642;
    msg.psi = 0.47547561423011575;
    msg.accuracy = 0.8992370152716113;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.35341679648996815);
    msg.setSource(1019U);
    msg.setSourceEntity(195U);
    msg.setDestination(49663U);
    msg.setDestinationEntity(49U);
    msg.target.assign("ESHEALBKNYSMFKCVRMAXY");
    msg.x = 0.24102518645166593;
    msg.y = 0.6578415220549293;
    msg.z = 0.4332887126201206;
    msg.n = 0.43702007767598205;
    msg.e = 0.024375067412301776;
    msg.d = 0.7844700000069625;
    msg.phi = 0.717852186415411;
    msg.theta = 0.13131299172649724;
    msg.psi = 0.7003122554775482;
    msg.accuracy = 0.33224086458250746;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.006503694608652522);
    msg.setSource(57844U);
    msg.setSourceEntity(248U);
    msg.setDestination(56013U);
    msg.setDestinationEntity(21U);
    msg.target.assign("WWHNMGVAAGLFLXCYGOLUZKKWCIUPUGTRIACWYTXIWDTTEGUSXNIZMEHOOOLQDBDQFTWOJIUP");
    msg.x = 0.5968129443793815;
    msg.y = 0.7725009025879948;
    msg.z = 0.32978752205033124;
    msg.n = 0.7888120441758596;
    msg.e = 0.05759540659086637;
    msg.d = 0.4645991236462206;
    msg.phi = 0.45474272404625415;
    msg.theta = 0.05032423793038765;
    msg.psi = 0.8532884191417526;
    msg.accuracy = 0.4363890531013762;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.007398957752706159);
    msg.setSource(57794U);
    msg.setSourceEntity(215U);
    msg.setDestination(20236U);
    msg.setDestinationEntity(31U);
    msg.target.assign("OISFXQAWKLBFJLFBKIYNU");
    msg.lat = 0.9546825995040905;
    msg.lon = 0.44867866922064326;
    msg.z_units = 209U;
    msg.z = 0.22228939528103564;
    msg.accuracy = 0.7898664493499731;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.7256972816673031);
    msg.setSource(4328U);
    msg.setSourceEntity(91U);
    msg.setDestination(25127U);
    msg.setDestinationEntity(211U);
    msg.target.assign("ONKJZHGOQSOWAUWMCBFFKEQJC");
    msg.lat = 0.11373538073442402;
    msg.lon = 0.7150159640152721;
    msg.z_units = 90U;
    msg.z = 0.9931606759969134;
    msg.accuracy = 0.7968695505292301;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.8444512021816014);
    msg.setSource(58835U);
    msg.setSourceEntity(29U);
    msg.setDestination(26548U);
    msg.setDestinationEntity(235U);
    msg.target.assign("XCGGZFUQFAWJTZOJGUNCBCFHXKQOKRBEQPKPBKCZNWOIDTCHUWXCLMHSIPMSNGEDOHPMQKFJDEUYRHZYUDERLUMOMNPUTNJOSOQCFQDXRRB");
    msg.lat = 0.3341462033866699;
    msg.lon = 0.21729202795273028;
    msg.z_units = 66U;
    msg.z = 0.9862951118695938;
    msg.accuracy = 0.03344323078314637;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.284802833065926);
    msg.setSource(37572U);
    msg.setSourceEntity(85U);
    msg.setDestination(15500U);
    msg.setDestinationEntity(19U);
    msg.name.assign("TBPRSFWTQCNROVCGYADGZZDCNTKXHMOPLDESDCPVXKHZDWHEMFDAZHRMASBHSKQVVQVWHKPNEVDGJCQPXYPNKCOUXDXLVMSYIBIBMNWRKLENHDIIZAQZUTWHWSASYTSEULEWIJVQRHRETGJPIRRMEAQYFGAULHUZYUUWTWQKGMUJFYOIXGJGBFOVXJAQNTRPLOCMBWCELBOCQOGFYKYNFIREVZOJUNZKUJCKYSDXFIMPLBXFABMJBPFTJA");
    msg.lat = 0.9761055013980746;
    msg.lon = 0.19375010445386276;
    msg.z = 0.4383788316422159;
    msg.z_units = 97U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.47190289512219086);
    msg.setSource(62963U);
    msg.setSourceEntity(104U);
    msg.setDestination(34580U);
    msg.setDestinationEntity(177U);
    msg.name.assign("KQLWXFPTYGDLFGMBOFXKRUERXLJBPANVBYSGXHBUVZRDODMRJPNMGSWLIAVZMOOPZVBIGQLYFRIAWEWPKNTKNWGQAMTPACILQSTCQDZTXAPYIJACFJSKCONZUVECXXEJCEHOYFDDWUSVNYABRAJIQNUHTIIBMZZMRVBXSHHKRCVFHK");
    msg.lat = 0.05317611182564941;
    msg.lon = 0.4044952344662508;
    msg.z = 0.6635550597000608;
    msg.z_units = 129U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.30466538874617277);
    msg.setSource(21893U);
    msg.setSourceEntity(246U);
    msg.setDestination(6373U);
    msg.setDestinationEntity(81U);
    msg.name.assign("ZKGHMBMNYNXOUZBLFJHSCEHQLECIQLJDDPODZQEYETJJCJYKKBUAGSQCNH");
    msg.lat = 0.7652749245806234;
    msg.lon = 0.5181927989016923;
    msg.z = 0.26062239284327016;
    msg.z_units = 55U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.10062711019773674);
    msg.setSource(64159U);
    msg.setSourceEntity(228U);
    msg.setDestination(47430U);
    msg.setDestinationEntity(127U);
    msg.op = 181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.8864289198186651);
    msg.setSource(34262U);
    msg.setSourceEntity(98U);
    msg.setDestination(42886U);
    msg.setDestinationEntity(83U);
    msg.op = 82U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("XGHGFOPILELJMKMBYCYAXDWUZRULMBVRQLHPFDIEJVBPUZNZDQBLFKOMGEJHSKIMYHSTZUPZXRPYUHKNLGAPIWKEOXSLBRSJHTWLJQAJLCXTNIMZAQVDWRUYQOJNIXIDPRXYWRZRNTZFMZQYQSF");
    tmp_msg_0.lat = 0.4478030614501327;
    tmp_msg_0.lon = 0.6075554525937558;
    tmp_msg_0.z = 0.9525752018006541;
    tmp_msg_0.z_units = 7U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.3328859572352104);
    msg.setSource(33063U);
    msg.setSourceEntity(183U);
    msg.setDestination(42780U);
    msg.setDestinationEntity(67U);
    msg.op = 207U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("QMNDCRZMLFNTGCMJCZWVCFZAMFQITOISHMSQKVFYAUGZIBAXB");
    tmp_msg_0.lat = 0.1772018740028819;
    tmp_msg_0.lon = 0.5421941479757655;
    tmp_msg_0.z = 0.4629940568500003;
    tmp_msg_0.z_units = 29U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.49757641474038616);
    msg.setSource(11687U);
    msg.setSourceEntity(175U);
    msg.setDestination(4210U);
    msg.setDestinationEntity(219U);
    msg.value = 0.6642639426287279;
    msg.type = 254U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.20421787560668014);
    msg.setSource(25927U);
    msg.setSourceEntity(55U);
    msg.setDestination(16591U);
    msg.setDestinationEntity(126U);
    msg.value = 0.029797619104453665;
    msg.type = 86U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.3891247502080287);
    msg.setSource(43854U);
    msg.setSourceEntity(57U);
    msg.setDestination(25992U);
    msg.setDestinationEntity(61U);
    msg.value = 0.11129864690906621;
    msg.type = 73U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.973160779041406);
    msg.setSource(57985U);
    msg.setSourceEntity(5U);
    msg.setDestination(3762U);
    msg.setDestinationEntity(126U);
    msg.value = 0.022608223146417084;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.5867262781609595);
    msg.setSource(29299U);
    msg.setSourceEntity(172U);
    msg.setDestination(44197U);
    msg.setDestinationEntity(114U);
    msg.value = 0.9745102406245324;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.586681810100513);
    msg.setSource(63601U);
    msg.setSourceEntity(33U);
    msg.setDestination(63411U);
    msg.setDestinationEntity(103U);
    msg.value = 0.2748572777917476;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.16442810925629214);
    msg.setSource(54147U);
    msg.setSourceEntity(247U);
    msg.setDestination(50404U);
    msg.setDestinationEntity(122U);
    msg.timestamp_last_service = 0.747107363996685;
    msg.time_next_service = 0.49049608916586274;
    msg.time_motor_next_service = 0.08425811702729813;
    msg.time_idle_ground = 0.49258063407302566;
    msg.time_idle_air = 0.3665220974143739;
    msg.time_idle_water = 0.9318824039285117;
    msg.time_idle_underwater = 0.5032993458042612;
    msg.time_idle_unknown = 0.9371823184243411;
    msg.time_motor_ground = 0.322219684849791;
    msg.time_motor_air = 0.9633608079753203;
    msg.time_motor_water = 0.9748768099518665;
    msg.time_motor_underwater = 0.9051801022493541;
    msg.time_motor_unknown = 0.11330284590142681;
    msg.rpm_min = 3937;
    msg.rpm_max = 19076;
    msg.depth_max = 0.6945892104206685;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.015159417640479567);
    msg.setSource(12423U);
    msg.setSourceEntity(29U);
    msg.setDestination(48670U);
    msg.setDestinationEntity(97U);
    msg.timestamp_last_service = 0.4367521630122059;
    msg.time_next_service = 0.24326738122481006;
    msg.time_motor_next_service = 0.5407609678042155;
    msg.time_idle_ground = 0.8588471732499927;
    msg.time_idle_air = 0.6415693256741631;
    msg.time_idle_water = 0.9045552745554295;
    msg.time_idle_underwater = 0.34135831500587066;
    msg.time_idle_unknown = 0.41703642730738066;
    msg.time_motor_ground = 0.06614100339398832;
    msg.time_motor_air = 0.6579590863872178;
    msg.time_motor_water = 0.8521150380135282;
    msg.time_motor_underwater = 0.7267149255280696;
    msg.time_motor_unknown = 0.14182222845540648;
    msg.rpm_min = 29692;
    msg.rpm_max = -2723;
    msg.depth_max = 0.45511674920685163;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.7755803816887946);
    msg.setSource(35733U);
    msg.setSourceEntity(234U);
    msg.setDestination(64245U);
    msg.setDestinationEntity(72U);
    msg.timestamp_last_service = 0.9446245780245307;
    msg.time_next_service = 0.9861757609901644;
    msg.time_motor_next_service = 0.8028650282206735;
    msg.time_idle_ground = 0.9644566188158586;
    msg.time_idle_air = 0.49378845380100345;
    msg.time_idle_water = 0.9734954713305257;
    msg.time_idle_underwater = 0.5260524229122946;
    msg.time_idle_unknown = 0.07626425315973095;
    msg.time_motor_ground = 0.31473974417231054;
    msg.time_motor_air = 0.8756711799100559;
    msg.time_motor_water = 0.8627944519702213;
    msg.time_motor_underwater = 0.9010802267848277;
    msg.time_motor_unknown = 0.3100200940595532;
    msg.rpm_min = 9927;
    msg.rpm_max = -5318;
    msg.depth_max = 0.1119596836507698;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.7348623909664098);
    msg.setSource(44495U);
    msg.setSourceEntity(140U);
    msg.setDestination(35736U);
    msg.setDestinationEntity(79U);
    msg.severity = 251U;
    msg.text.assign("UJXZSNSOEBITECICLDQOXAWKTSRDOIYKBAVZDXZUMQMYGGJYBAWXMMQUDDLYZISIPCTFMXAUFFTGSGRLNGETGWVIRXJERBNJKEJRGDRGPLXHMLTABLOCBSMVFSCEXDMURMZXQKONYAFDHFLUOFPWNEONIKJQHZAIP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.6961813655345042);
    msg.setSource(27438U);
    msg.setSourceEntity(0U);
    msg.setDestination(34961U);
    msg.setDestinationEntity(53U);
    msg.severity = 159U;
    msg.text.assign("TCRIOZQVTIVBEURKEFZWIESLZQDSFXXBEONHMAFBIUUYHCAHZFTBVLKZLKYEWDDMZCMZRRFJERJNNSIUUFVMYHQPJDLYRXNWCCCBGHOPLJGXLXA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.832324423434809);
    msg.setSource(11002U);
    msg.setSourceEntity(86U);
    msg.setDestination(18218U);
    msg.setDestinationEntity(221U);
    msg.severity = 83U;
    msg.text.assign("NCQBGDUHJTHRFFNPWSMWKKFPYEYEQDOHWFQYTISVOJSXPATCMVRLSZZBGOFMQKPMMXMIJBWGCXDYGVSFCWAPYQGNHCRNJDESVBZRNFQHXBABTILNJXKUBCDIHEGPOKHLUIDQWNAUPAEDTOCYHFCGUVJIXVANDLKKJSTFZTMDJRVWYROS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.8795542919412014);
    msg.setSource(41255U);
    msg.setSourceEntity(166U);
    msg.setDestination(12907U);
    msg.setDestinationEntity(125U);
    msg.channel = 82;
    msg.value = -839677605;
    msg.gain = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.7617758695695288);
    msg.setSource(51789U);
    msg.setSourceEntity(38U);
    msg.setDestination(24907U);
    msg.setDestinationEntity(196U);
    msg.channel = 83;
    msg.value = 1773309695;
    msg.gain = 6U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.11996198026923743);
    msg.setSource(39542U);
    msg.setSourceEntity(121U);
    msg.setDestination(35731U);
    msg.setDestinationEntity(62U);
    msg.channel = -82;
    msg.value = -619552521;
    msg.gain = 195U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.3456179948242595);
    msg.setSource(51322U);
    msg.setSourceEntity(117U);
    msg.setDestination(25767U);
    msg.setDestinationEntity(223U);
    msg.ch01 = 0.4664298107537507;
    msg.ch02 = 0.0955807285091893;
    msg.ch03 = 0.9491804505415181;
    msg.ch04 = 0.5915433780192111;
    msg.ch05 = 0.8675372124340102;
    msg.ch06 = 0.8034000828365606;
    msg.ch07 = 0.5282868849122866;
    msg.ch08 = 0.14167738847115185;
    msg.ch09 = 0.5558701259560183;
    msg.ch10 = 0.7790000781637465;
    msg.ch11 = 0.10580801922586869;
    msg.ch12 = 0.6373258129200048;
    msg.ch13 = 0.16348768320914475;
    msg.ch14 = 0.5939820391775774;
    msg.ch15 = 0.8542408823052092;
    msg.ch16 = 0.8985545974322673;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.04332719500832005);
    msg.setSource(39500U);
    msg.setSourceEntity(180U);
    msg.setDestination(56735U);
    msg.setDestinationEntity(139U);
    msg.ch01 = 0.32726937496163633;
    msg.ch02 = 0.4794095939783305;
    msg.ch03 = 0.08828673590622738;
    msg.ch04 = 0.4656594630718611;
    msg.ch05 = 0.6368175297385902;
    msg.ch06 = 0.15573052244300878;
    msg.ch07 = 0.8689034012535327;
    msg.ch08 = 0.7655145554650042;
    msg.ch09 = 0.43956786894453304;
    msg.ch10 = 0.8369222484587909;
    msg.ch11 = 0.2992250824268117;
    msg.ch12 = 0.5641576172339597;
    msg.ch13 = 0.6489737951839862;
    msg.ch14 = 0.5316577639893523;
    msg.ch15 = 0.1241237894527073;
    msg.ch16 = 0.09025935791836948;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.507838549846274);
    msg.setSource(39150U);
    msg.setSourceEntity(116U);
    msg.setDestination(60196U);
    msg.setDestinationEntity(114U);
    msg.ch01 = 0.24998111022866332;
    msg.ch02 = 0.5259033453307672;
    msg.ch03 = 0.9746760116029617;
    msg.ch04 = 0.3444778788865992;
    msg.ch05 = 0.06017538796060751;
    msg.ch06 = 0.4558797549496353;
    msg.ch07 = 0.9564866039989901;
    msg.ch08 = 0.13696228700085356;
    msg.ch09 = 0.8361460921104207;
    msg.ch10 = 0.9064266970886091;
    msg.ch11 = 0.5625386938710409;
    msg.ch12 = 0.6514066611624656;
    msg.ch13 = 0.35908202824615876;
    msg.ch14 = 0.6894569328703366;
    msg.ch15 = 0.07165849486173259;
    msg.ch16 = 0.8359002416906535;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.035642840698868916);
    msg.setSource(48410U);
    msg.setSourceEntity(171U);
    msg.setDestination(40875U);
    msg.setDestinationEntity(216U);
    msg.op = 246U;
    msg.lat = 0.011394739575396051;
    msg.lon = 0.8047606011398422;
    msg.height = 0.5298898828435901;
    msg.depth = 0.4709282805277252;
    msg.alt = 0.9806246524614549;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.1111291107770751);
    msg.setSource(47243U);
    msg.setSourceEntity(18U);
    msg.setDestination(32433U);
    msg.setDestinationEntity(144U);
    msg.op = 187U;
    msg.lat = 0.29996219451046147;
    msg.lon = 0.2808225399193994;
    msg.height = 0.5125705969588323;
    msg.depth = 0.8620998693404179;
    msg.alt = 0.9376504945881237;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.4050468848738902);
    msg.setSource(44443U);
    msg.setSourceEntity(104U);
    msg.setDestination(26312U);
    msg.setDestinationEntity(219U);
    msg.op = 155U;
    msg.lat = 0.6665238247815547;
    msg.lon = 0.4757657773194536;
    msg.height = 0.7719661463509541;
    msg.depth = 0.004355029747323713;
    msg.alt = 0.17432149260288754;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.2044082226043361);
    msg.setSource(1403U);
    msg.setSourceEntity(99U);
    msg.setDestination(16328U);
    msg.setDestinationEntity(26U);
    msg.name.assign("YQTUZMZKTLQOHMKLQGCIPOUQSBNBBHVWGJGXCOMVMWPCDLMDHWDQFJNPMNNMRAXEYPAKNHXUAPRUVCZGGEQWOFLRJPAZDEPKXTAYRIOQIWGWGCYLNYBUVFEZXYNDAKNAJUIXDZUJNPVYSVDVJWEQSISBXRKFQTRYFROUHFXFHRHDBIESYFSZJTBLUNJKTVFHCSLGPDVTMGMBZIEXOSHCYJLDJWLTTMHAOAZIUAWBW");
    msg.value = 247U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.46867563512637034);
    msg.setSource(14065U);
    msg.setSourceEntity(133U);
    msg.setDestination(48997U);
    msg.setDestinationEntity(97U);
    msg.name.assign("QDBZUVTFMVJPPVVVMBQDXUCHYBTIJAHGEJUFRTSNDNTVANELCAFFPUJCLJBRPEFOXPHOGHGWADAOCYOHCCNYVIONEUBJMZOGGAQKANDMKZJOTHRMIXQYUQRSTXDBLERCXPJSXKDWGXGKSQFKKRHEEJQLYUPDSZWRMZZJIKIXILWQLNGSYMCLWYALLXCTBFYFQPWZOAEVAHMEXTWDNUK");
    msg.value = 195U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.6728195069882644);
    msg.setSource(47541U);
    msg.setSourceEntity(98U);
    msg.setDestination(37926U);
    msg.setDestinationEntity(19U);
    msg.name.assign("ZOVLBWPMMPVAKLXYHDZCAITGEQCGEPXJJZQVOVOJPCYKRKQMJYZEONIGCTQEAITLKWWLWBDFSGUXINYICWBZPGFULRMVGKVXSEMHIK");
    msg.value = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.14082927048040306);
    msg.setSource(62668U);
    msg.setSourceEntity(129U);
    msg.setDestination(23714U);
    msg.setDestinationEntity(82U);
    msg.name.assign("VOFDEBQCNDTCDWFBXQIVWPGJXUMAMHKJARQAMEWUAMQCMFYNXTHGBIDFDNCFXRPDXZGESLOKHICAIJQZRSMKOALSGZHLQYVWRLYDCXJPULHKLANSVPTLNCLMYMFUBDKNOLSFXOWHGZOFKKWIRPUDWERONBPTVRTFZTKDITJYTVZOIUYCPBUGBQSAPYQATHVHPJNVIMOIKGCYZRHWSNIAZTMFKZUGOWEJEQXSBNZVSGC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.5698058805104785);
    msg.setSource(39658U);
    msg.setSourceEntity(89U);
    msg.setDestination(20789U);
    msg.setDestinationEntity(25U);
    msg.name.assign("WGFLXCWHMNQLIPBQMKZTTKIFBUBOENNKVRVDOVAMGOISCMYHBUSOSOAYNYASHZKGWHDIRRIASZLIOEVQIIUJABZRCJKEWRFRCLZEXZOSATLWSFDQXHBDJGUWNQDMDYUMHQIDQEVZSXBWXNKCZJVJHGNLXGNYTXRVXGEKTRLUQCCTPWEMFJBPL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.42237529694682163);
    msg.setSource(40140U);
    msg.setSourceEntity(144U);
    msg.setDestination(30887U);
    msg.setDestinationEntity(220U);
    msg.name.assign("BUUEISHFJTDSETAWPQLXBURKGABXFNEVMLRSNDPCTYMTCLWFKFUNZCSPHZUWIXDKCKGZDBTIJRTHLTGC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.9926986403594884);
    msg.setSource(60368U);
    msg.setSourceEntity(108U);
    msg.setDestination(13339U);
    msg.setDestinationEntity(158U);
    msg.name.assign("WTJAUSIVTJZLONGQUCFPKCTDKEMLYDCHPFXUBCPXACSURPHTVHLRIDBSGZAERYVGIQBFOSZAIENYEOVYXHMTQLBMIAYCVSFGQMNRJJVIFOFBPZSPGHZEKVXGMZWYKDHDKBQ");
    msg.value = 35U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.4353018531344639);
    msg.setSource(8441U);
    msg.setSourceEntity(234U);
    msg.setDestination(32081U);
    msg.setDestinationEntity(202U);
    msg.name.assign("OFOBRFGKJYZRTKXUHWPZXAKMC");
    msg.value = 203U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.25262913568540735);
    msg.setSource(59825U);
    msg.setSourceEntity(250U);
    msg.setDestination(21298U);
    msg.setDestinationEntity(14U);
    msg.name.assign("COKRCFYRXQTYPDIAPAKBFKJBDEBTNHZSSKCQZXAEDUWHWFOVVKPBTLDFTGUUPXVBJLRVKDSBTHUIAASDWDABJVNICB");
    msg.value = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.4181912790000606);
    msg.setSource(57117U);
    msg.setSourceEntity(90U);
    msg.setDestination(57913U);
    msg.setDestinationEntity(19U);
    msg.value = 0.5088770588741971;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.3806038837262774);
    msg.setSource(32041U);
    msg.setSourceEntity(134U);
    msg.setDestination(27094U);
    msg.setDestinationEntity(6U);
    msg.value = 0.968675058114883;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.3045519275071876);
    msg.setSource(4911U);
    msg.setSourceEntity(36U);
    msg.setDestination(23705U);
    msg.setDestinationEntity(45U);
    msg.value = 0.06200489382282948;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.09183576238954638);
    msg.setSource(31968U);
    msg.setSourceEntity(4U);
    msg.setDestination(24755U);
    msg.setDestinationEntity(145U);
    msg.value = 0.04080639152830967;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.18149773648197065);
    msg.setSource(10249U);
    msg.setSourceEntity(105U);
    msg.setDestination(52941U);
    msg.setDestinationEntity(78U);
    msg.value = 0.9888029159534838;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.09782763801441874);
    msg.setSource(21798U);
    msg.setSourceEntity(246U);
    msg.setDestination(9612U);
    msg.setDestinationEntity(191U);
    msg.value = 0.05263244672081102;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveProfile msg;
    msg.setTimeStamp(0.40338089354369455);
    msg.setSource(33766U);
    msg.setSourceEntity(63U);
    msg.setDestination(20718U);
    msg.setDestinationEntity(140U);
    msg.ampl = 0.2646805097440409;
    msg.dir = 0.28528725915208086;
    msg.freq = 0.051308369655164054;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveProfile msg;
    msg.setTimeStamp(0.8970283496001649);
    msg.setSource(41887U);
    msg.setSourceEntity(124U);
    msg.setDestination(60020U);
    msg.setDestinationEntity(40U);
    msg.ampl = 0.9280970125132469;
    msg.dir = 0.9249819203544096;
    msg.freq = 0.9970070245719291;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveProfile msg;
    msg.setTimeStamp(0.3065968544226261);
    msg.setSource(42941U);
    msg.setSourceEntity(23U);
    msg.setDestination(14626U);
    msg.setDestinationEntity(82U);
    msg.ampl = 0.1332333606645374;
    msg.dir = 0.7182007022887421;
    msg.freq = 0.5538747465291857;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.5775127011425853);
    msg.setSource(6904U);
    msg.setSourceEntity(17U);
    msg.setDestination(11267U);
    msg.setDestinationEntity(138U);
    msg.value = 0.07478636319199072;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.8371019695549374);
    msg.setSource(8780U);
    msg.setSourceEntity(41U);
    msg.setDestination(5704U);
    msg.setDestinationEntity(218U);
    msg.value = 0.12282459035169668;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.2537271288585181);
    msg.setSource(27941U);
    msg.setSourceEntity(1U);
    msg.setDestination(57759U);
    msg.setDestinationEntity(141U);
    msg.value = 0.477368569649105;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Power msg;
    msg.setTimeStamp(0.46233482531532766);
    msg.setSource(51531U);
    msg.setSourceEntity(57U);
    msg.setDestination(16220U);
    msg.setDestinationEntity(58U);
    msg.value = 0.4662974636938658;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Power #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Power msg;
    msg.setTimeStamp(0.3421809827405379);
    msg.setSource(65139U);
    msg.setSourceEntity(102U);
    msg.setDestination(15217U);
    msg.setDestinationEntity(76U);
    msg.value = 0.598931278701857;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Power #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Power msg;
    msg.setTimeStamp(0.05720203579526861);
    msg.setSource(56657U);
    msg.setSourceEntity(197U);
    msg.setDestination(50335U);
    msg.setDestinationEntity(41U);
    msg.value = 0.5989569060384445;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Power #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedFreq msg;
    msg.setTimeStamp(0.31980151273478563);
    msg.setSource(55586U);
    msg.setSourceEntity(134U);
    msg.setDestination(53951U);
    msg.setDestinationEntity(185U);
    msg.value = 0.3900515073614723;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedFreq #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedFreq msg;
    msg.setTimeStamp(0.23316034160019194);
    msg.setSource(56136U);
    msg.setSourceEntity(118U);
    msg.setDestination(64256U);
    msg.setDestinationEntity(48U);
    msg.value = 0.0038972607133319626;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedFreq #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedFreq msg;
    msg.setTimeStamp(0.9080070882533852);
    msg.setSource(21483U);
    msg.setSourceEntity(191U);
    msg.setDestination(42038U);
    msg.setDestinationEntity(185U);
    msg.value = 0.6476817512906689;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedFreq #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelayState msg;
    msg.setTimeStamp(0.20914703208050067);
    msg.setSource(54965U);
    msg.setSourceEntity(10U);
    msg.setDestination(27335U);
    msg.setDestinationEntity(179U);
    msg.id = -76;
    msg.state = -16;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelayState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelayState msg;
    msg.setTimeStamp(0.6794080082438876);
    msg.setSource(44234U);
    msg.setSourceEntity(143U);
    msg.setDestination(12271U);
    msg.setDestinationEntity(20U);
    msg.id = 78;
    msg.state = -123;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelayState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelayState msg;
    msg.setTimeStamp(0.5096418735861481);
    msg.setSource(4955U);
    msg.setSourceEntity(221U);
    msg.setDestination(61808U);
    msg.setDestinationEntity(103U);
    msg.id = 126;
    msg.state = 93;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelayState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeWind msg;
    msg.setTimeStamp(0.9952231098495908);
    msg.setSource(33882U);
    msg.setSourceEntity(103U);
    msg.setDestination(42500U);
    msg.setDestinationEntity(143U);
    msg.angle = 0.8780271006256443;
    msg.speed = 0.11785781309581245;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeWind #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeWind msg;
    msg.setTimeStamp(0.052781442743850215);
    msg.setSource(27131U);
    msg.setSourceEntity(213U);
    msg.setDestination(59084U);
    msg.setDestinationEntity(145U);
    msg.angle = 0.7429682077575792;
    msg.speed = 0.7917423426128885;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeWind #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeWind msg;
    msg.setTimeStamp(0.03820421320460965);
    msg.setSource(10220U);
    msg.setSourceEntity(79U);
    msg.setDestination(9620U);
    msg.setDestinationEntity(194U);
    msg.angle = 0.045080255613435094;
    msg.speed = 0.6275833790924752;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeWind #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.10110446473979506);
    msg.setSource(56985U);
    msg.setSourceEntity(166U);
    msg.setDestination(4022U);
    msg.setDestinationEntity(88U);
    msg.dir = 0.09769193704049806;
    msg.speed = 0.06558874534113668;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.9268916759470006);
    msg.setSource(21355U);
    msg.setSourceEntity(78U);
    msg.setDestination(14339U);
    msg.setDestinationEntity(203U);
    msg.dir = 0.20565327611642092;
    msg.speed = 0.42676979559758943;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.8776242656803639);
    msg.setSource(64607U);
    msg.setSourceEntity(209U);
    msg.setDestination(25942U);
    msg.setDestinationEntity(152U);
    msg.dir = 0.6842248048861613;
    msg.speed = 0.08866476510771681;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentVelocity msg;
    msg.setTimeStamp(0.4731450585103266);
    msg.setSource(46217U);
    msg.setSourceEntity(187U);
    msg.setDestination(63169U);
    msg.setDestinationEntity(8U);
    msg.x = 0.9375369511227327;
    msg.y = 0.9120532426368176;
    msg.z1 = 0.8806928595572955;
    msg.z2 = 0.8259004777714255;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentVelocity msg;
    msg.setTimeStamp(0.06634924399517839);
    msg.setSource(34869U);
    msg.setSourceEntity(214U);
    msg.setDestination(12030U);
    msg.setDestinationEntity(149U);
    msg.x = 0.652250933747586;
    msg.y = 0.9440805364537113;
    msg.z1 = 0.48280500197627607;
    msg.z2 = 0.7443563766990983;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentVelocity msg;
    msg.setTimeStamp(0.7186660542058501);
    msg.setSource(4354U);
    msg.setSourceEntity(63U);
    msg.setDestination(39487U);
    msg.setDestinationEntity(175U);
    msg.x = 0.1184086825597852;
    msg.y = 0.9784620488753888;
    msg.z1 = 0.08233666027428754;
    msg.z2 = 0.10205502216091811;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CollisionAvoidance msg;
    msg.setTimeStamp(0.5910846960429523);
    msg.setSource(5857U);
    msg.setSourceEntity(204U);
    msg.setDestination(23038U);
    msg.setDestinationEntity(73U);
    msg.mmsi.assign("TRYNGZNLKEWLJKMEDRKAWIFXXQHZMUKMDEFEYZIUTONRMEJHXUDCSMCMKNWBVHGSBPTJBCDOOAXPEYSGWRAFPJGOAXUPMTYUCKXIPDQTWFASNQHWPBIZARURLZCQPHFIPWVSVZVEIGONVKCWWAXDZGWUGVUCOZQXBKJVDOIQNYZDSOLTBNJTDVYAITGHTNUISCNLLFHQOYOIPMQXECRP");
    msg.lat = 0.7197725601243525;
    msg.lon = 0.9590472964941484;
    msg.x = 0.36518267318831354;
    msg.y = 0.6416277821880464;
    msg.speed = 0.6904700368231873;
    msg.course = 0.3827429796983457;
    msg.dist = 0.824247780305179;
    msg.length = 0.21799424312097537;
    msg.width = 0.0591611218249648;
    msg.o_vect = 0.5154331877103606;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CollisionAvoidance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CollisionAvoidance msg;
    msg.setTimeStamp(0.8423851729166062);
    msg.setSource(50390U);
    msg.setSourceEntity(122U);
    msg.setDestination(62278U);
    msg.setDestinationEntity(199U);
    msg.mmsi.assign("LAFHTKDVNDIATOGYQIFMZHIFTJQJOAGMYDVIPURVAPWWSZNMCZT");
    msg.lat = 0.43335503013395793;
    msg.lon = 0.05251468645205093;
    msg.x = 0.18125308207248347;
    msg.y = 0.26737671943375274;
    msg.speed = 0.17755898288003347;
    msg.course = 0.987678307144682;
    msg.dist = 0.6137005179856767;
    msg.length = 0.45666838475394844;
    msg.width = 0.8573712483786089;
    msg.o_vect = 0.6550241347484689;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CollisionAvoidance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CollisionAvoidance msg;
    msg.setTimeStamp(0.45891127190933867);
    msg.setSource(30328U);
    msg.setSourceEntity(22U);
    msg.setDestination(17627U);
    msg.setDestinationEntity(146U);
    msg.mmsi.assign("BUHTEFZVPEZRZCKEFQZVNXNAWTEPODIHCWMVVUHTJZJWVZDAMFUCDKQIRESGBJMXZYDQXQGAQSBHWRMUGPDFIWLFYLSYUMJASOCUNOTQGLYOOAYLBDPXMSBTTINETNXPLTKEOZQSIAIOKPDBPAHKRDFHCCRGYEBLWLJQGJXAWVGMJYEKC");
    msg.lat = 0.10599153613994883;
    msg.lon = 0.3705661842875956;
    msg.x = 0.5028183791172041;
    msg.y = 0.9431614546322125;
    msg.speed = 0.2391800937263131;
    msg.course = 0.08563251310887643;
    msg.dist = 0.45817196785336867;
    msg.length = 0.09499692381875469;
    msg.width = 0.43115475072353926;
    msg.o_vect = 0.30227024762118193;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CollisionAvoidance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.9308298947745409);
    msg.setSource(63737U);
    msg.setSourceEntity(128U);
    msg.setDestination(18382U);
    msg.setDestinationEntity(8U);
    msg.depth_at_loc.assign("TREMJUMUZOKDSTNATCMVPQSLOYQENMOCIPHIRXEZIWKKUCWLPMRNJLHPASAHYTMQWILNWYSLVQVQRZHJKUPVKTFOIBLOGFDGSDEBHMDPJCAHNDUVMYDGHITALCCDRPPQOUKBVXXQLTYTLXSAXZWACHZZMUICCROPABJVDITVRBSAGOHERTEMBXSLFVSZSGZWNEFRGNYFOJ");
    msg.danger.assign("ZTVFXFHWZMCSXLYAQPANCHCODTEAFKLLVKGJWZORUEXUQHRKBGXIRTUCES");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.3211721692649253);
    msg.setSource(50421U);
    msg.setSourceEntity(81U);
    msg.setDestination(39279U);
    msg.setDestinationEntity(187U);
    msg.depth_at_loc.assign("YIZIMRPHQFMQRLRJETQPDAGOINHKCVZTJPHBYVBVYNCGYOOBPCBOSSJYTIEWBXWTXNXDHDWYVLEZULX");
    msg.danger.assign("BVSTMZYFGABKIBDHJXUIKQYBZYRTUOAJFQDSGAWVTRAOHXHBWSNGHXOLNXUKXEFCFZL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.5153726262046183);
    msg.setSource(33693U);
    msg.setSourceEntity(55U);
    msg.setDestination(9471U);
    msg.setDestinationEntity(141U);
    msg.depth_at_loc.assign("ETCPCONFVHSICEX");
    msg.danger.assign("ZPFUAXMOQZWTMXUKGRLOFSESNRAMBVSIXTGQMXWNDKBNKDZSPBDJPVREHQGGKVERPHYPJUTAGGLWJRZPUDCSZQJWTUZAXIDOWGQEGRLOLZKYOROAPHDILWNVHHMRDMNXQTLFUBLMK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heave msg;
    msg.setTimeStamp(0.24276238121928473);
    msg.setSource(17803U);
    msg.setSourceEntity(197U);
    msg.setDestination(4208U);
    msg.setDestinationEntity(65U);
    msg.value = 0.2575029660135256;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heave #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heave msg;
    msg.setTimeStamp(0.5920045032681592);
    msg.setSource(46063U);
    msg.setSourceEntity(173U);
    msg.setDestination(30463U);
    msg.setDestinationEntity(75U);
    msg.value = 0.6587062070566475;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heave #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heave msg;
    msg.setTimeStamp(0.1257242794511657);
    msg.setSource(45858U);
    msg.setSourceEntity(40U);
    msg.setDestination(27033U);
    msg.setDestinationEntity(213U);
    msg.value = 0.6444671584267913;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heave #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticBackscatter msg;
    msg.setTimeStamp(0.5979754842340324);
    msg.setSource(30954U);
    msg.setSourceEntity(236U);
    msg.setDestination(51656U);
    msg.setDestinationEntity(195U);
    msg.beam1 = 0.17820918467769975;
    msg.beam2 = 0.3940179197508654;
    msg.beam3 = 0.31008072803334163;
    msg.beam4 = 0.15525516193013533;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticBackscatter msg;
    msg.setTimeStamp(0.4601861466324043);
    msg.setSource(3287U);
    msg.setSourceEntity(31U);
    msg.setDestination(11605U);
    msg.setDestinationEntity(197U);
    msg.beam1 = 0.22766713033270347;
    msg.beam2 = 0.3350653887638151;
    msg.beam3 = 0.7517060538186758;
    msg.beam4 = 0.6998795422223486;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticBackscatter msg;
    msg.setTimeStamp(0.31389863780135485);
    msg.setSource(20677U);
    msg.setSourceEntity(30U);
    msg.setDestination(44675U);
    msg.setDestinationEntity(97U);
    msg.beam1 = 0.30255147869926924;
    msg.beam2 = 0.17775787258759712;
    msg.beam3 = 0.7399613443398196;
    msg.beam4 = 0.4558702927089048;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Correlation msg;
    msg.setTimeStamp(0.04738863377259661);
    msg.setSource(18713U);
    msg.setSourceEntity(16U);
    msg.setDestination(55601U);
    msg.setDestinationEntity(6U);
    msg.beam1 = 228U;
    msg.beam2 = 157U;
    msg.beam3 = 114U;
    msg.beam4 = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Correlation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Correlation msg;
    msg.setTimeStamp(0.27870352206845483);
    msg.setSource(16269U);
    msg.setSourceEntity(230U);
    msg.setDestination(57114U);
    msg.setDestinationEntity(73U);
    msg.beam1 = 55U;
    msg.beam2 = 176U;
    msg.beam3 = 135U;
    msg.beam4 = 94U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Correlation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Correlation msg;
    msg.setTimeStamp(0.19166216873534925);
    msg.setSource(48591U);
    msg.setSourceEntity(13U);
    msg.setDestination(5580U);
    msg.setDestinationEntity(169U);
    msg.beam1 = 233U;
    msg.beam2 = 95U;
    msg.beam3 = 118U;
    msg.beam4 = 8U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Correlation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.31457969889037485);
    msg.setSource(29365U);
    msg.setSourceEntity(136U);
    msg.setDestination(9231U);
    msg.setDestinationEntity(12U);
    msg.pos = 0.06673516799379264;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.7108036789193364);
    msg.setSource(32994U);
    msg.setSourceEntity(162U);
    msg.setDestination(12489U);
    msg.setDestinationEntity(19U);
    msg.pos = 0.10468876614613931;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.48482819005931777);
    msg.setSource(24953U);
    msg.setSourceEntity(40U);
    msg.setDestination(63745U);
    msg.setDestinationEntity(201U);
    msg.pos = 0.16732462232383505;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.5295875318862979;
    tmp_msg_0.amp = 0.6613130052674284;
    tmp_msg_0.cor = 115U;
    msg.beams.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.5827805063528516);
    msg.setSource(1094U);
    msg.setSourceEntity(207U);
    msg.setDestination(7815U);
    msg.setDestinationEntity(33U);
    msg.beams = 128U;
    msg.cells = 23U;
    msg.coord_sys = 86U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.pos = 0.09033332115047599;
    msg.prof.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.4845486208090478);
    msg.setSource(20650U);
    msg.setSourceEntity(233U);
    msg.setDestination(15604U);
    msg.setDestinationEntity(185U);
    msg.beams = 12U;
    msg.cells = 10U;
    msg.coord_sys = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.814655273854849);
    msg.setSource(8347U);
    msg.setSourceEntity(76U);
    msg.setDestination(39680U);
    msg.setDestinationEntity(16U);
    msg.beams = 3U;
    msg.cells = 126U;
    msg.coord_sys = 82U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.554860493731714);
    msg.setSource(58281U);
    msg.setSourceEntity(32U);
    msg.setDestination(41277U);
    msg.setDestinationEntity(80U);
    msg.vel = 0.3985081275080533;
    msg.amp = 0.4091672720848797;
    msg.cor = 221U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.2674753677808255);
    msg.setSource(52670U);
    msg.setSourceEntity(29U);
    msg.setDestination(2531U);
    msg.setDestinationEntity(170U);
    msg.vel = 0.3750808790816541;
    msg.amp = 0.4083603722476714;
    msg.cor = 55U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.2579776452562438);
    msg.setSource(56058U);
    msg.setSourceEntity(51U);
    msg.setDestination(42246U);
    msg.setDestinationEntity(29U);
    msg.vel = 0.3500745604834441;
    msg.amp = 0.9800356353043492;
    msg.cor = 121U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRFishTag msg;
    msg.setTimeStamp(0.8053612159389807);
    msg.setSource(14220U);
    msg.setSourceEntity(15U);
    msg.setDestination(54886U);
    msg.setDestinationEntity(203U);
    msg.serial_no = 1365010620U;
    msg.unix_timestamp = 3026925979U;
    msg.millis = 14137U;
    msg.trans_protocol = 10U;
    msg.trans_id = 3194709296U;
    msg.trans_data = 35039U;
    msg.snr = 54U;
    msg.trans_freq = 153U;
    msg.recv_mem_addr = 27815U;
    msg.lat = 0.2361246821058035;
    msg.lon = 0.5444400030991393;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRFishTag #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRFishTag msg;
    msg.setTimeStamp(0.45787707177889836);
    msg.setSource(55292U);
    msg.setSourceEntity(61U);
    msg.setDestination(23210U);
    msg.setDestinationEntity(46U);
    msg.serial_no = 2367270741U;
    msg.unix_timestamp = 881832654U;
    msg.millis = 52711U;
    msg.trans_protocol = 229U;
    msg.trans_id = 648916512U;
    msg.trans_data = 16303U;
    msg.snr = 84U;
    msg.trans_freq = 251U;
    msg.recv_mem_addr = 65291U;
    msg.lat = 0.37778787948668135;
    msg.lon = 0.3663559338047603;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRFishTag #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRFishTag msg;
    msg.setTimeStamp(0.7123467873978317);
    msg.setSource(44593U);
    msg.setSourceEntity(214U);
    msg.setDestination(38495U);
    msg.setDestinationEntity(217U);
    msg.serial_no = 1615467914U;
    msg.unix_timestamp = 768550888U;
    msg.millis = 26310U;
    msg.trans_protocol = 223U;
    msg.trans_id = 1170824572U;
    msg.trans_data = 8819U;
    msg.snr = 118U;
    msg.trans_freq = 50U;
    msg.recv_mem_addr = 65532U;
    msg.lat = 0.2643648716601291;
    msg.lon = 0.46905792874465135;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRFishTag #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRSensor msg;
    msg.setTimeStamp(0.030769807436742402);
    msg.setSource(48964U);
    msg.setSourceEntity(42U);
    msg.setDestination(23794U);
    msg.setDestinationEntity(7U);
    msg.serial_no = 3660843331U;
    msg.unix_timestamp = 2650936056U;
    msg.temperature = 0.4855680612707316;
    msg.avg_noise_level = 45U;
    msg.peak_noise_level = 187U;
    msg.recv_listen_freq = 137U;
    msg.recv_mem_addr = 13322U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRSensor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRSensor msg;
    msg.setTimeStamp(0.47420714119105223);
    msg.setSource(33709U);
    msg.setSourceEntity(117U);
    msg.setDestination(35281U);
    msg.setDestinationEntity(79U);
    msg.serial_no = 2645382864U;
    msg.unix_timestamp = 670733605U;
    msg.temperature = 0.33731113499903653;
    msg.avg_noise_level = 57U;
    msg.peak_noise_level = 17U;
    msg.recv_listen_freq = 65U;
    msg.recv_mem_addr = 61511U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRSensor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRSensor msg;
    msg.setTimeStamp(0.5082670566266208);
    msg.setSource(8584U);
    msg.setSourceEntity(185U);
    msg.setDestination(45919U);
    msg.setDestinationEntity(155U);
    msg.serial_no = 1708737417U;
    msg.unix_timestamp = 1169341401U;
    msg.temperature = 0.0013287072161874969;
    msg.avg_noise_level = 236U;
    msg.peak_noise_level = 73U;
    msg.recv_listen_freq = 203U;
    msg.recv_mem_addr = 47497U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRSensor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumReport msg;
    msg.setTimeStamp(0.9602229275150274);
    msg.setSource(46433U);
    msg.setSourceEntity(51U);
    msg.setDestination(39824U);
    msg.setDestinationEntity(243U);
    msg.frequency = 435535104U;
    msg.info.assign("DIVZNFOSJOBNFAUBDMPQYLYTGTKQMBMVCIGDCJZGWWGQFRJTJCQYBHSKOPFLKRISJVMHDEFAPPSOYECSTUKEOEYPZQWLL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumReport msg;
    msg.setTimeStamp(0.7000305448192427);
    msg.setSource(32887U);
    msg.setSourceEntity(104U);
    msg.setDestination(3236U);
    msg.setDestinationEntity(82U);
    msg.frequency = 2381394010U;
    msg.info.assign("RLTQOZSMLCFXSXAHCHVYNUYVZJRSGARNUFDYESJBJHHYIKGJEPMPUSMOFFDNWTLCRDIJBMTFFUZTOQZILVCNBDLGXJNEIPPKBHZDTIOPKGLLWJMBKMOXIQWHGVXSQVNNQLWDHAFMAOUYEPDEKQVYNAUERCETCDRPYQRFGJBX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumReport msg;
    msg.setTimeStamp(0.3406401166342329);
    msg.setSource(4285U);
    msg.setSourceEntity(62U);
    msg.setDestination(25811U);
    msg.setDestinationEntity(44U);
    msg.frequency = 1792441516U;
    msg.info.assign("ECCIOAPOOLCJHMVPUWAUXDJOUSHKNGRNDNYRKXEGPVUBNNDWHALQCKQPWTJECVYQXRUOSUASHIEIYFMLMDTEFQTWLTPMLYQMWGXAFXYRRGKSILGFPZJZBXMDKBJSSJJZNOYXEBBHWZVHCUIBZVJATNTATNEXTROFIBQSWZRQB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.8900209748998936);
    msg.setSource(40577U);
    msg.setSourceEntity(30U);
    msg.setDestination(44049U);
    msg.setDestinationEntity(27U);
    msg.restriction = 146U;
    msg.reason.assign("YWPITTBFBDXLZNTXNINQEFDEDYTSJQOGZLUAQCJXSPKOMDZAMFJHSQDZEGYVTHJHPKOVESCICATSRBGHBRWPMUAIMFRLMZWYFPHOXOIEISFKDQZUCXWKKRGXPUJBUQVXVHJLYSESMJJGMROZTWRIRIBFKLLNBPVEPYREATWQSMRBUJGACUCSHEAZCYDFHPNXKLC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.8886757417599994);
    msg.setSource(15406U);
    msg.setSourceEntity(176U);
    msg.setDestination(48450U);
    msg.setDestinationEntity(49U);
    msg.restriction = 33U;
    msg.reason.assign("TZXVPVGQEOQVKBQJEFHHZMBIEVOPLVCGPXYFSAIVURHGHGFOICIIOJWSWNIEHOGNYJCTDUDYRZTFAAUNDLHVMDEVRHXRLQRBJLBZJWAWTCIUQMZYGWGCQWBRNKYBXLYEMAPATMWST");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.5580553097810295);
    msg.setSource(22959U);
    msg.setSourceEntity(109U);
    msg.setDestination(9323U);
    msg.setDestinationEntity(24U);
    msg.restriction = 192U;
    msg.reason.assign("BAWYPIESPWLYUTKBEBUDDKWNCRTUAXAZZFTWRJNKFKOSTFXNSHTSFADRISUYGSFJMURWPYVECVIJRCXJLMMNPBHSHNOXGQOYLELHJUCZOKODJHBYQQRSDYYDZVFXQEJEWIRGGAAMNHVLRVSDPXUKCITDEPDIXOOTFCEAOQPWYDCBHEGUTMLPNMLVNJZZMHWKITVKZHVRIVKTUV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScienceSensors msg;
    msg.setTimeStamp(0.0381424522396685);
    msg.setSource(45528U);
    msg.setSourceEntity(18U);
    msg.setDestination(62997U);
    msg.setDestinationEntity(185U);
    msg.adcp = 20;
    msg.adcp_dur = 1019502381U;
    msg.adcp_fr = 141961696U;
    msg.ctd = -98;
    msg.ctd_dur = 2896664916U;
    msg.ctd_fr = 1785674611U;
    msg.opt = -108;
    msg.opt_dur = 2785860070U;
    msg.opt_fr = 3591961114U;
    msg.tbl = -36;
    msg.tbl_dur = 1596061885U;
    msg.tbl_fr = 3395115206U;
    msg.eco = -55;
    msg.eco_dur = 2364442655U;
    msg.eco_fr = 3956361504U;
    msg.par = 81;
    msg.par_dur = 1993183446U;
    msg.par_fr = 3455003675U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScienceSensors #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScienceSensors msg;
    msg.setTimeStamp(0.595861148057739);
    msg.setSource(10580U);
    msg.setSourceEntity(103U);
    msg.setDestination(26918U);
    msg.setDestinationEntity(52U);
    msg.adcp = 73;
    msg.adcp_dur = 3667668624U;
    msg.adcp_fr = 1888104413U;
    msg.ctd = -88;
    msg.ctd_dur = 1564758467U;
    msg.ctd_fr = 2746981373U;
    msg.opt = 125;
    msg.opt_dur = 1499008225U;
    msg.opt_fr = 1618655320U;
    msg.tbl = 76;
    msg.tbl_dur = 3079787526U;
    msg.tbl_fr = 1312760829U;
    msg.eco = -62;
    msg.eco_dur = 2735734966U;
    msg.eco_fr = 3029049253U;
    msg.par = 100;
    msg.par_dur = 388190463U;
    msg.par_fr = 2224732253U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScienceSensors #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScienceSensors msg;
    msg.setTimeStamp(0.7707372427999734);
    msg.setSource(61088U);
    msg.setSourceEntity(111U);
    msg.setDestination(59910U);
    msg.setDestinationEntity(140U);
    msg.adcp = 115;
    msg.adcp_dur = 1535744393U;
    msg.adcp_fr = 4175754888U;
    msg.ctd = 68;
    msg.ctd_dur = 3034703525U;
    msg.ctd_fr = 2125475844U;
    msg.opt = -46;
    msg.opt_dur = 2646442155U;
    msg.opt_fr = 2434983971U;
    msg.tbl = -55;
    msg.tbl_dur = 597524560U;
    msg.tbl_fr = 1601890040U;
    msg.eco = -14;
    msg.eco_dur = 1280111338U;
    msg.eco_fr = 2327563982U;
    msg.par = -122;
    msg.par_dur = 1394625486U;
    msg.par_fr = 2171407464U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScienceSensors #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScienceSensorsReply msg;
    msg.setTimeStamp(0.5462222571650295);
    msg.setSource(36807U);
    msg.setSourceEntity(88U);
    msg.setDestination(47094U);
    msg.setDestinationEntity(81U);
    msg.adcp = 125;
    msg.adcp_dur = 1060367873U;
    msg.adcp_fr = 3249967632U;
    msg.ctd = 57;
    msg.ctd_dur = 1545175172U;
    msg.ctd_fr = 256119523U;
    msg.opt = -79;
    msg.opt_dur = 558507842U;
    msg.opt_fr = 2764144076U;
    msg.tbl = -91;
    msg.tbl_dur = 1083315580U;
    msg.tbl_fr = 3284584132U;
    msg.eco = 91;
    msg.eco_dur = 1742894038U;
    msg.eco_fr = 7510122U;
    msg.par = 69;
    msg.par_dur = 534113886U;
    msg.par_fr = 1179039480U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScienceSensorsReply #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScienceSensorsReply msg;
    msg.setTimeStamp(0.30339798230533965);
    msg.setSource(15329U);
    msg.setSourceEntity(6U);
    msg.setDestination(12057U);
    msg.setDestinationEntity(166U);
    msg.adcp = 90;
    msg.adcp_dur = 1857058125U;
    msg.adcp_fr = 2662076630U;
    msg.ctd = 17;
    msg.ctd_dur = 1380936260U;
    msg.ctd_fr = 2444900236U;
    msg.opt = 95;
    msg.opt_dur = 1202538179U;
    msg.opt_fr = 3598863863U;
    msg.tbl = -52;
    msg.tbl_dur = 3581876348U;
    msg.tbl_fr = 3264520613U;
    msg.eco = 77;
    msg.eco_dur = 75368363U;
    msg.eco_fr = 4058728772U;
    msg.par = -53;
    msg.par_dur = 17998739U;
    msg.par_fr = 651266714U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScienceSensorsReply #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScienceSensorsReply msg;
    msg.setTimeStamp(0.6971948902797512);
    msg.setSource(50203U);
    msg.setSourceEntity(53U);
    msg.setDestination(25196U);
    msg.setDestinationEntity(0U);
    msg.adcp = 19;
    msg.adcp_dur = 2695024640U;
    msg.adcp_fr = 231196198U;
    msg.ctd = 6;
    msg.ctd_dur = 660679433U;
    msg.ctd_fr = 2662368522U;
    msg.opt = 4;
    msg.opt_dur = 2292347759U;
    msg.opt_fr = 1058773599U;
    msg.tbl = -115;
    msg.tbl_dur = 304514094U;
    msg.tbl_fr = 3224048103U;
    msg.eco = 93;
    msg.eco_dur = 1630995118U;
    msg.eco_fr = 721034811U;
    msg.par = -73;
    msg.par_dur = 2426692372U;
    msg.par_fr = 1832876201U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScienceSensorsReply #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PAR msg;
    msg.setTimeStamp(0.7835462930447369);
    msg.setSource(18659U);
    msg.setSourceEntity(60U);
    msg.setDestination(41703U);
    msg.setDestinationEntity(178U);
    msg.value = 0.7712885591562139;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PAR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PAR msg;
    msg.setTimeStamp(0.06646521869473254);
    msg.setSource(4480U);
    msg.setSourceEntity(48U);
    msg.setDestination(2073U);
    msg.setDestinationEntity(38U);
    msg.value = 0.1649957402597917;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PAR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PAR msg;
    msg.setTimeStamp(0.31210068397994073);
    msg.setSource(51292U);
    msg.setSourceEntity(51U);
    msg.setDestination(25329U);
    msg.setDestinationEntity(59U);
    msg.value = 0.829534226066037;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PAR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SingleCurrentCell msg;
    msg.setTimeStamp(0.3153401937294632);
    msg.setSource(1597U);
    msg.setSourceEntity(77U);
    msg.setDestination(27990U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.2205762326432853;
    msg.lon = 0.16382692778147712;
    msg.depth.assign("ZEYLQVJVVYOUBHDSGXNSAYYOIDSWCFPTYXMIBPOZYBEIWBBHRPPJZDQLMQLIXIKJXICVLRMFTSAKBZUZQUAFLFUWGHLMMOIMHXPJKTHNV");
    msg.vel.assign("FNNPTWZOUBPQREAHWYEQSVESBDATVPZWWMRFHIKJLXTCZPNEBYBNUGSKLQGVGMKOCYMZRUBGHVHLPDTZYZRUDZFVILEEMBACPRDBTTLEDVJZJAX");
    msg.dir.assign("HPFESPWMEEWZIOQXYRLSQGIYXNVRZAPNVMBSCJWUAUBHEDJXRITKIXFDGUPPDNYCKRSEJHFRVUOVEYVXWAENWOVSYBOCYDLDUPQNFAJQOZJFIXZXYOAXMSDQAYBYJTWVKHKZRUHPNAFNQWKOEWZMFGLKYGQQGW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SingleCurrentCell #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SingleCurrentCell msg;
    msg.setTimeStamp(0.5211955699951801);
    msg.setSource(4917U);
    msg.setSourceEntity(88U);
    msg.setDestination(40312U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.2679316182528996;
    msg.lon = 0.14060863815232882;
    msg.depth.assign("JPVDXQSDOMYINEIEMLVCKHBUGQELGMGYHKKYIWZYAQ");
    msg.vel.assign("HONKPCEBOSUNSNLDGJFFICCMQJPJDKEIAPYYTWYNVVRRHRYYIISXGQVHEJBUXTFXKBVMSJEOMQTIGTOTTUVLZDJZVXLLFGOCPQYRMNYZSEWRVKPXVDG");
    msg.dir.assign("DHENRLMZNJGBQOJGIXOTCWTRPBIYGSYUJKNNBPUMTHNRATSVOCTJPFHZOBEXJIRMWEZGAJWNDBTXELMKCHSMCRXTPYPGAKGNQVIKEMNQWBLGHPHFJOTQFRPVHFAWIGPDMELOYHGLSVCDWKSSJNESBBCXIIIFTADSHRVKQZFKPKLIXUYBBDJWYWVUWCDPSQAAKMGZOZLUCFOCEFZAQECTUQDZOVMRXODLEMIULRHZXSQAYJRUVYYNUFAWKZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SingleCurrentCell #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SingleCurrentCell msg;
    msg.setTimeStamp(0.5536521362396392);
    msg.setSource(11445U);
    msg.setSourceEntity(250U);
    msg.setDestination(36826U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.4799438670091357;
    msg.lon = 0.6344995775887288;
    msg.depth.assign("HSQDYJAVTJFXOMUYUOMHHQXORFFVBTWGMEHSFHVJXWJEBVNAYBGTLSBKNURWFXPALMOPWGELDDLZNCRLAKPHTPCANRYWNDVSFJYYXLPHUISGFQCLMUJMRQUVCLOYKDKWFTRNHQZPPEIKPVWMQVUZSRTITNKIQUIOSGMIARGOCBKEQVAZNONTMYQSSKTKUPLIDXFZAGMHCHRCQJOGWNXXGGIDDEALZBJZCF");
    msg.vel.assign("BUCQHYAFYKWPPYQWCFAQBLLNSMSXSZTCZMDGSUDFVSDEQDRJJMFRJVHHVACOYZUTAEOEUOMIRXADYPRGHRHWUIWWBKGUVGDCGHXRRGNMZSRXKEGKIPPQTEOVFNLFSNZUVKWVPXCWYQCCZMXIVTDDXEHJJLBTGJILIXNHKJBOIXOR");
    msg.dir.assign("ZKYHSXPIQMDDPWUAYONZYTBNDAJDQSHLMNUWNWPHJGBSTWSOGGKPXXCFKFMHEILVXZTCKZJRPKZGXAWDOGZGMNTBVEMOBJZVUJCQCNGARAJLVSYRYOD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SingleCurrentCell #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Gamma msg;
    msg.setTimeStamp(0.6567101959059033);
    msg.setSource(35625U);
    msg.setSourceEntity(28U);
    msg.setDestination(39490U);
    msg.setDestinationEntity(175U);
    msg.source.assign("UOPYPKHDKQEBNCUQGGOEDNYOQIJHUUEUIRORVTDOMYRSATMYPCCUMXTJWEEANSSHKBZTZBHMNLBXQYRXDFVLJTNNSFPLHRYAJKABSYGTRWAUXEWCKJJXVXMMSLASPIZMRFDZWFNGVESAQVZIZXGTJCBKOFCMDNBJXELVQGUIENKQSZEHJIWVIBCFFALFDOPHWPC");
    msg.lat = 0.688255249685743;
    msg.lon = 0.1592390852092923;
    msg.sog = 0.041286336836795945;
    msg.uc = 0.07344695368653642;
    msg.depth = 0.2597970614150271;
    msg.value = 0.9619220386408832;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Gamma #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Gamma msg;
    msg.setTimeStamp(0.671164591119703);
    msg.setSource(28193U);
    msg.setSourceEntity(178U);
    msg.setDestination(14781U);
    msg.setDestinationEntity(15U);
    msg.source.assign("ERUPQBMRKQOXYSZMOPRBUWKVDKAGIRTJWUCCRQMLRENQOAUJSFFCSRESOSWXRUDAYXZKQWDPVMLTZSLNPZLNBIEDCAZGFPXUHHWIUVMWGLJBKGFLLCXLPCGWTVKXCEMENLWNJVTVNQIBQEDAZEDVXZUQHZKXQTGABYXFPNWHCDHJOFJTNBJTNCMRWPHGSOJHATMVY");
    msg.lat = 0.5103765136802424;
    msg.lon = 0.7443866826932982;
    msg.sog = 0.5470717243815861;
    msg.uc = 0.685757031838707;
    msg.depth = 0.5469461992635958;
    msg.value = 0.1764153369588889;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Gamma #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Gamma msg;
    msg.setTimeStamp(0.5804083301349291);
    msg.setSource(61952U);
    msg.setSourceEntity(19U);
    msg.setDestination(40348U);
    msg.setDestinationEntity(108U);
    msg.source.assign("RBAPXTHQXXNNOUZGEDSAMXGREZCERZDCDBGRRHNSEOINSJABVXLJAWMECWLZGJBCQGOXBSFUMIMEOTCSKNOKSOFBJEQRQGSN");
    msg.lat = 0.7628374374073585;
    msg.lon = 0.7859841005502078;
    msg.sog = 0.5645737903546258;
    msg.uc = 0.10975755573889534;
    msg.depth = 0.3473195212211825;
    msg.value = 0.6424027679614005;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Gamma #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Imu msg;
    msg.setTimeStamp(0.7898286228273508);
    msg.setSource(57333U);
    msg.setSourceEntity(80U);
    msg.setDestination(31231U);
    msg.setDestinationEntity(106U);
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.055644705866522925;
    tmp_msg_0.x = 0.7066499511918515;
    tmp_msg_0.y = 0.38464897468621184;
    tmp_msg_0.z = 0.5779057337668699;
    msg.acceleration.set(tmp_msg_0);
    IMC::AngularVelocity tmp_msg_1;
    tmp_msg_1.time = 0.6084774676003257;
    tmp_msg_1.x = 0.283385945990984;
    tmp_msg_1.y = 0.756800171387971;
    tmp_msg_1.z = 0.26555267829350215;
    msg.angular_velocity.set(tmp_msg_1);
    IMC::Temperature tmp_msg_2;
    tmp_msg_2.time = 0.03223583385176254;
    tmp_msg_2.value = 0.47205479626543045;
    msg.temperature.set(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Imu #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Imu msg;
    msg.setTimeStamp(0.7224280966275833);
    msg.setSource(48939U);
    msg.setSourceEntity(64U);
    msg.setDestination(60898U);
    msg.setDestinationEntity(90U);
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.9362131794345955;
    tmp_msg_0.x = 0.19403111813750873;
    tmp_msg_0.y = 0.41118915798681;
    tmp_msg_0.z = 0.6312967417181949;
    msg.acceleration.set(tmp_msg_0);
    IMC::AngularVelocity tmp_msg_1;
    tmp_msg_1.time = 0.9147360343158099;
    tmp_msg_1.x = 0.8964592400377515;
    tmp_msg_1.y = 0.3397457316400989;
    tmp_msg_1.z = 0.4803581366817048;
    msg.angular_velocity.set(tmp_msg_1);
    IMC::Temperature tmp_msg_2;
    tmp_msg_2.time = 0.3948341219141712;
    tmp_msg_2.value = 0.9052802707511196;
    msg.temperature.set(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Imu #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Imu msg;
    msg.setTimeStamp(0.4885543223133537);
    msg.setSource(21440U);
    msg.setSourceEntity(11U);
    msg.setDestination(18588U);
    msg.setDestinationEntity(246U);
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.20414652149076495;
    tmp_msg_0.x = 0.043320549384675555;
    tmp_msg_0.y = 0.036098883695320216;
    tmp_msg_0.z = 0.22749129687905034;
    msg.acceleration.set(tmp_msg_0);
    IMC::AngularVelocity tmp_msg_1;
    tmp_msg_1.time = 0.5733994822187269;
    tmp_msg_1.x = 0.310307858904855;
    tmp_msg_1.y = 0.6616034850341079;
    tmp_msg_1.z = 0.14549836316275466;
    msg.angular_velocity.set(tmp_msg_1);
    IMC::Temperature tmp_msg_2;
    tmp_msg_2.time = 0.9816432484180516;
    tmp_msg_2.value = 0.2662109182242347;
    msg.temperature.set(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Imu #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UbxDOP msg;
    msg.setTimeStamp(0.6651161195357822);
    msg.setSource(39877U);
    msg.setSourceEntity(26U);
    msg.setDestination(50330U);
    msg.setDestinationEntity(100U);
    msg.gdop = 0.8529375358031344;
    msg.pdop = 0.8497102581664365;
    msg.tdop = 0.762868496461217;
    msg.vdop = 0.6418740219449984;
    msg.hdop = 0.7432286378710563;
    msg.ndop = 0.7815050673731343;
    msg.edop = 0.6943209637127504;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UbxDOP #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UbxDOP msg;
    msg.setTimeStamp(0.6179803412180522);
    msg.setSource(46309U);
    msg.setSourceEntity(37U);
    msg.setDestination(21864U);
    msg.setDestinationEntity(2U);
    msg.gdop = 0.4199446444818449;
    msg.pdop = 0.41660723329135685;
    msg.tdop = 0.5029478964404133;
    msg.vdop = 0.7447004332594789;
    msg.hdop = 0.8114929366336253;
    msg.ndop = 0.8996651617176102;
    msg.edop = 0.4872025303062437;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UbxDOP #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UbxDOP msg;
    msg.setTimeStamp(0.4490831104090319);
    msg.setSource(58499U);
    msg.setSourceEntity(51U);
    msg.setDestination(48303U);
    msg.setDestinationEntity(180U);
    msg.gdop = 0.9154249367033388;
    msg.pdop = 0.4127111459508883;
    msg.tdop = 0.6201722301977598;
    msg.vdop = 0.5064102020630746;
    msg.hdop = 0.401589345758427;
    msg.ndop = 0.8276327643876001;
    msg.edop = 0.5582043747075442;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UbxDOP #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UbxSvIn msg;
    msg.setTimeStamp(0.539127816547479);
    msg.setSource(20511U);
    msg.setSourceEntity(210U);
    msg.setDestination(18063U);
    msg.setDestinationEntity(167U);
    msg.meanx = 0.43579783107205994;
    msg.meany = 0.7575007520397724;
    msg.meanz = 0.2415419373336467;
    msg.dur = 3336330822U;
    msg.meanacc = 0.23371480230813968;
    msg.obs = 1836880909U;
    msg.valid = 243U;
    msg.active = 112U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UbxSvIn #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UbxSvIn msg;
    msg.setTimeStamp(0.3324681315095751);
    msg.setSource(52351U);
    msg.setSourceEntity(41U);
    msg.setDestination(33183U);
    msg.setDestinationEntity(50U);
    msg.meanx = 0.378119253177704;
    msg.meany = 0.7078615402379098;
    msg.meanz = 0.818063639515616;
    msg.dur = 3864224395U;
    msg.meanacc = 0.7672798746838412;
    msg.obs = 1907588711U;
    msg.valid = 41U;
    msg.active = 1U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UbxSvIn #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UbxSvIn msg;
    msg.setTimeStamp(0.031941590962518696);
    msg.setSource(33933U);
    msg.setSourceEntity(50U);
    msg.setDestination(24772U);
    msg.setDestinationEntity(59U);
    msg.meanx = 0.44886935453058685;
    msg.meany = 0.3093154862420425;
    msg.meanz = 0.46269858358019766;
    msg.dur = 550193369U;
    msg.meanacc = 0.7822863978732918;
    msg.obs = 3477553528U;
    msg.valid = 164U;
    msg.active = 110U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UbxSvIn #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UbxStatus msg;
    msg.setTimeStamp(0.02598240949622399);
    msg.setSource(27082U);
    msg.setSourceEntity(212U);
    msg.setDestination(732U);
    msg.setDestinationEntity(177U);
    msg.gpsfixtype = 19U;
    msg.flags = 248U;
    msg.diffcorr = 76U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UbxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UbxStatus msg;
    msg.setTimeStamp(0.6356834035011357);
    msg.setSource(23203U);
    msg.setSourceEntity(132U);
    msg.setDestination(4542U);
    msg.setDestinationEntity(223U);
    msg.gpsfixtype = 195U;
    msg.flags = 141U;
    msg.diffcorr = 223U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UbxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UbxStatus msg;
    msg.setTimeStamp(0.34206312361357794);
    msg.setSource(30348U);
    msg.setSourceEntity(144U);
    msg.setDestination(22668U);
    msg.setDestinationEntity(224U);
    msg.gpsfixtype = 187U;
    msg.flags = 61U;
    msg.diffcorr = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UbxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::gnssSignal msg;
    msg.setTimeStamp(0.09522036921009391);
    msg.setSource(36043U);
    msg.setSourceEntity(190U);
    msg.setDestination(26361U);
    msg.setDestinationEntity(160U);
    msg.gnssid = 136U;
    msg.svid = 48U;
    msg.sigid = 81U;
    msg.freqid = 133U;
    msg.prres = 0.3701939074139199;
    msg.cno = 156U;
    msg.qualityind = 141U;
    msg.corrsource = 243U;
    msg.ionomodel = 47U;
    msg.health = 123U;
    msg.sigflags = 91U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("gnssSignal #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::gnssSignal msg;
    msg.setTimeStamp(0.49862056755194184);
    msg.setSource(52777U);
    msg.setSourceEntity(154U);
    msg.setDestination(1839U);
    msg.setDestinationEntity(142U);
    msg.gnssid = 24U;
    msg.svid = 136U;
    msg.sigid = 106U;
    msg.freqid = 105U;
    msg.prres = 0.9701816379971023;
    msg.cno = 45U;
    msg.qualityind = 253U;
    msg.corrsource = 137U;
    msg.ionomodel = 121U;
    msg.health = 13U;
    msg.sigflags = 103U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("gnssSignal #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::gnssSignal msg;
    msg.setTimeStamp(0.7963811208562211);
    msg.setSource(20444U);
    msg.setSourceEntity(32U);
    msg.setDestination(21129U);
    msg.setDestinationEntity(127U);
    msg.gnssid = 63U;
    msg.svid = 58U;
    msg.sigid = 221U;
    msg.freqid = 179U;
    msg.prres = 0.2707075515124463;
    msg.cno = 195U;
    msg.qualityind = 213U;
    msg.corrsource = 18U;
    msg.ionomodel = 251U;
    msg.health = 6U;
    msg.sigflags = 94U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("gnssSignal #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UbxSig msg;
    msg.setTimeStamp(0.7760230950998283);
    msg.setSource(22050U);
    msg.setSourceEntity(96U);
    msg.setDestination(5155U);
    msg.setDestinationEntity(217U);
    msg.numsigs = 110U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UbxSig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UbxSig msg;
    msg.setTimeStamp(0.2513532527570508);
    msg.setSource(12573U);
    msg.setSourceEntity(161U);
    msg.setDestination(48852U);
    msg.setDestinationEntity(58U);
    msg.numsigs = 189U;
    IMC::gnssSignal tmp_msg_0;
    tmp_msg_0.gnssid = 63U;
    tmp_msg_0.svid = 175U;
    tmp_msg_0.sigid = 69U;
    tmp_msg_0.freqid = 215U;
    tmp_msg_0.prres = 0.7160369667855251;
    tmp_msg_0.cno = 56U;
    tmp_msg_0.qualityind = 173U;
    tmp_msg_0.corrsource = 154U;
    tmp_msg_0.ionomodel = 43U;
    tmp_msg_0.health = 188U;
    tmp_msg_0.sigflags = 91U;
    msg.sigs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UbxSig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UbxSig msg;
    msg.setTimeStamp(0.8437574119705112);
    msg.setSource(58298U);
    msg.setSourceEntity(56U);
    msg.setDestination(44660U);
    msg.setDestinationEntity(241U);
    msg.numsigs = 247U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UbxSig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::gnssSatellite msg;
    msg.setTimeStamp(0.14100749261661627);
    msg.setSource(40326U);
    msg.setSourceEntity(214U);
    msg.setDestination(2743U);
    msg.setDestinationEntity(125U);
    msg.gnssid = 181U;
    msg.svid = 184U;
    msg.elev = 0.23085020370908216;
    msg.azim = 0.10434107276610638;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("gnssSatellite #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::gnssSatellite msg;
    msg.setTimeStamp(0.26127404013579425);
    msg.setSource(55656U);
    msg.setSourceEntity(206U);
    msg.setDestination(47904U);
    msg.setDestinationEntity(118U);
    msg.gnssid = 125U;
    msg.svid = 36U;
    msg.elev = 0.9550343978098474;
    msg.azim = 0.04949492134808209;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("gnssSatellite #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::gnssSatellite msg;
    msg.setTimeStamp(0.23522909362821454);
    msg.setSource(47582U);
    msg.setSourceEntity(151U);
    msg.setDestination(41116U);
    msg.setDestinationEntity(229U);
    msg.gnssid = 88U;
    msg.svid = 126U;
    msg.elev = 0.3162835220899941;
    msg.azim = 0.6872148597569283;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("gnssSatellite #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UbxSat msg;
    msg.setTimeStamp(0.28495871862334743);
    msg.setSource(31701U);
    msg.setSourceEntity(70U);
    msg.setDestination(30838U);
    msg.setDestinationEntity(54U);
    msg.numsvs = 187U;
    IMC::gnssSatellite tmp_msg_0;
    tmp_msg_0.gnssid = 137U;
    tmp_msg_0.svid = 247U;
    tmp_msg_0.elev = 0.46090606701126213;
    tmp_msg_0.azim = 0.487865568701345;
    msg.svs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UbxSat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UbxSat msg;
    msg.setTimeStamp(0.06967545884239223);
    msg.setSource(62069U);
    msg.setSourceEntity(231U);
    msg.setDestination(33002U);
    msg.setDestinationEntity(168U);
    msg.numsvs = 169U;
    IMC::gnssSatellite tmp_msg_0;
    tmp_msg_0.gnssid = 97U;
    tmp_msg_0.svid = 68U;
    tmp_msg_0.elev = 0.7309505933991837;
    tmp_msg_0.azim = 0.6544431999344242;
    msg.svs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UbxSat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UbxSat msg;
    msg.setTimeStamp(0.10756440185141058);
    msg.setSource(64408U);
    msg.setSourceEntity(209U);
    msg.setDestination(4174U);
    msg.setDestinationEntity(102U);
    msg.numsvs = 164U;
    IMC::gnssSatellite tmp_msg_0;
    tmp_msg_0.gnssid = 23U;
    tmp_msg_0.svid = 249U;
    tmp_msg_0.elev = 0.9665196915589318;
    tmp_msg_0.azim = 0.9523092080763293;
    msg.svs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UbxSat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UbxRelPosNED msg;
    msg.setTimeStamp(0.39373256443767);
    msg.setSource(32260U);
    msg.setSourceEntity(87U);
    msg.setDestination(13736U);
    msg.setDestinationEntity(143U);
    msg.refstationid = 2560U;
    msg.itow = 2257518364U;
    msg.relposn = 0.14854152465903192;
    msg.relpose = 0.6637570860113695;
    msg.relposd = 0.6229915095759863;
    msg.relposlength = 0.9100207095320055;
    msg.relposheading = 0.5566487991671955;
    msg.accn = 0.3206609544290865;
    msg.acce = 0.16393111730901988;
    msg.accd = 0.08941002016621369;
    msg.acclength = 0.2844641668436225;
    msg.accheading = 0.25012604491241364;
    msg.gnssfixok = 7U;
    msg.diffsoln = 49U;
    msg.relposvalid = 35U;
    msg.ismoving = 205U;
    msg.refposmiss = 234U;
    msg.refobsmiss = 13U;
    msg.relposheadingvalid = 237U;
    msg.carrsoln = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UbxRelPosNED #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UbxRelPosNED msg;
    msg.setTimeStamp(0.0751710987688402);
    msg.setSource(43537U);
    msg.setSourceEntity(240U);
    msg.setDestination(49771U);
    msg.setDestinationEntity(184U);
    msg.refstationid = 37901U;
    msg.itow = 2937020207U;
    msg.relposn = 0.6770565994472278;
    msg.relpose = 0.02580139312484908;
    msg.relposd = 0.7855257363270975;
    msg.relposlength = 0.4436990911875791;
    msg.relposheading = 0.5934909918874147;
    msg.accn = 0.7747607798635148;
    msg.acce = 0.9784836355805155;
    msg.accd = 0.1449233489021483;
    msg.acclength = 0.4126328176694305;
    msg.accheading = 0.1911359456525562;
    msg.gnssfixok = 5U;
    msg.diffsoln = 193U;
    msg.relposvalid = 248U;
    msg.ismoving = 77U;
    msg.refposmiss = 147U;
    msg.refobsmiss = 32U;
    msg.relposheadingvalid = 129U;
    msg.carrsoln = 250U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UbxRelPosNED #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UbxRelPosNED msg;
    msg.setTimeStamp(0.8653910095401343);
    msg.setSource(3243U);
    msg.setSourceEntity(122U);
    msg.setDestination(2685U);
    msg.setDestinationEntity(48U);
    msg.refstationid = 20096U;
    msg.itow = 2713919241U;
    msg.relposn = 0.617077780958936;
    msg.relpose = 0.8442738270210159;
    msg.relposd = 0.41949173094230785;
    msg.relposlength = 0.4357147455235094;
    msg.relposheading = 0.7004996430631639;
    msg.accn = 0.259006361847549;
    msg.acce = 0.9483649266760468;
    msg.accd = 0.8287105159745812;
    msg.acclength = 0.781501140655214;
    msg.accheading = 0.4252808995793328;
    msg.gnssfixok = 161U;
    msg.diffsoln = 81U;
    msg.relposvalid = 74U;
    msg.ismoving = 187U;
    msg.refposmiss = 119U;
    msg.refobsmiss = 62U;
    msg.relposheadingvalid = 66U;
    msg.carrsoln = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UbxRelPosNED #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynObsVec msg;
    msg.setTimeStamp(0.5080994789826321);
    msg.setSource(13327U);
    msg.setSourceEntity(175U);
    msg.setDestination(60511U);
    msg.setDestinationEntity(199U);
    IMC::CollisionAvoidance tmp_msg_0;
    tmp_msg_0.mmsi.assign("FXRAKTYKODYLMEHVTDIZHUWMYGJPXMVZJEQ");
    tmp_msg_0.lat = 0.4236252444533244;
    tmp_msg_0.lon = 0.17541688021669266;
    tmp_msg_0.x = 0.2650082637513702;
    tmp_msg_0.y = 0.9374416900294236;
    tmp_msg_0.speed = 0.47836375373797513;
    tmp_msg_0.course = 0.62075590509634;
    tmp_msg_0.dist = 0.0636945110905972;
    tmp_msg_0.length = 0.12996042240260286;
    tmp_msg_0.width = 0.7889104290112655;
    tmp_msg_0.o_vect = 0.6005658643907885;
    msg.obstacles.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynObsVec #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynObsVec msg;
    msg.setTimeStamp(0.6499498911769267);
    msg.setSource(9910U);
    msg.setSourceEntity(64U);
    msg.setDestination(64846U);
    msg.setDestinationEntity(18U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynObsVec #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynObsVec msg;
    msg.setTimeStamp(0.9482335726468845);
    msg.setSource(14537U);
    msg.setSourceEntity(68U);
    msg.setDestination(21893U);
    msg.setDestinationEntity(152U);
    IMC::CollisionAvoidance tmp_msg_0;
    tmp_msg_0.mmsi.assign("KCINSLFTIIDENNTHGWLKQCVSTREYFJSGIWWARXFVMNLXMYGDZHMMCKAWBAAYIQVNZTPOZMLGUSRREXUJJJZVCWBKSBBWXJHTQMTONGKWUFMSVSFZECDUTFBACCGNSGSVKLLZJUBEGTVFMXEAJRZDKPLOJLUINEOIBXQYUYHVKKPWIXCUHQHAFOJHEOYFCDIHEWPSBDQRBAYMLUPBNXPODXQRMFVQZHRNOPPORJQTUZIGAKQC");
    tmp_msg_0.lat = 0.6901891628487004;
    tmp_msg_0.lon = 0.14497138254647923;
    tmp_msg_0.x = 0.3999561864652358;
    tmp_msg_0.y = 0.8654765101556963;
    tmp_msg_0.speed = 0.30867870319802315;
    tmp_msg_0.course = 0.7250507149357527;
    tmp_msg_0.dist = 0.315410421350229;
    tmp_msg_0.length = 0.11741938649182404;
    tmp_msg_0.width = 0.4042390428572027;
    tmp_msg_0.o_vect = 0.5554101216973875;
    msg.obstacles.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynObsVec #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NegotiationData msg;
    msg.setTimeStamp(0.417785215065675);
    msg.setSource(40128U);
    msg.setSourceEntity(157U);
    msg.setDestination(9194U);
    msg.setDestinationEntity(18U);
    msg.mmsi.assign("UJZIJITVBYLISMIYVZHSIKMEMNHJFCGUPEDQXFSKJTIVCMATQGKUDPYTZLKQNOORFWFWHGQEPKQBYZHGOYWOQRCTANIDULHYNZOWCZEAWGBMALKGLMFAXAJYOCUPPIVXHQLTCXFKXUUBVVTUNLMWPNOVKHRZHGFQP");
    msg.cog_int = 0.8550167228352445;
    msg.sog_int = 0.38109134310509907;
    msg.state = 143U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NegotiationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NegotiationData msg;
    msg.setTimeStamp(0.42202756192972213);
    msg.setSource(44154U);
    msg.setSourceEntity(148U);
    msg.setDestination(60090U);
    msg.setDestinationEntity(164U);
    msg.mmsi.assign("MWPISKZQDMWQZVDAZEKJXLRTGAENGFGBBOXYALASOIYFVDPKRKDPMJLHXXOVECSOUVIQMGMVSKJUBUERXTWEQNFVXXWKRQWSUBTFPHUEMCYGZHBITOHHFFRASZPPCDPFQDMQJNZTVEIPAASTQGLJMUKEQOYCFTNJUWNHTBOETJYLYKIROSCGZSJHELBHQZPUVWKGLTGBVDPWAHFWNDXDVCNNRJOCFDXHILWLR");
    msg.cog_int = 0.9641449998686303;
    msg.sog_int = 0.30904604305174566;
    msg.state = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NegotiationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NegotiationData msg;
    msg.setTimeStamp(0.8160633960744393);
    msg.setSource(44656U);
    msg.setSourceEntity(77U);
    msg.setDestination(38046U);
    msg.setDestinationEntity(198U);
    msg.mmsi.assign("NUUVLAVYRDQUXBLEYSQJGZOAROOGCPCSTXTPONZQEVXUWBTUQXDDTYLJJQHCWHRFDVOBKNASLGBPPLPVRJTMCYNIWSZWWFXZGKCVDSMFHYMZNIMZYIPWFMMCLUPDAYXFIXJXQMWJGHNTJVQVBBUPXIHAJAQKFHAXJMSIOHEROWEDYEEZKSUL");
    msg.cog_int = 0.06815042809528993;
    msg.sog_int = 0.09335282366258324;
    msg.state = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NegotiationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
